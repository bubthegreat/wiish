import os
import osproc
import parsetoml
import sequtils
import strutils
import strformat
import tables
import logging
import ./build_macos
import ./build_ios
import ./build_windows
import ./build_linux
import ./build_android
import ./config
import ./buildutil

export doiOSRun
export doAndroidRun

type
  BuildTarget* = enum
    AutoDetect = "",
    MacApp = "mac",
    MacDmg = "mac-dmg",
    Ios = "ios",
    Android = "android",
    WinExe = "win",
    WinInstaller = "win-installer",
    LinuxBin = "linux",

proc doBuild*(directory:string = ".", target:BuildTarget = AutoDetect, parsed_config: TomlValueRef) =
  var target = target
  if target == AutoDetect:
    when defined(macosx):
      target = MacApp
    elif defined(windows):
      target = WinExe
    elif defined(linux):
      target = LinuxBin
  
  case target
  of MacApp:
    info "Building macOS desktop..."
    let config = getMacosConfig(parsed_config)
    doMacBuild(directory, config)
  of Ios:
    info "Building iOS app ..."
    let config = getiOSConfig(parsed_config)
    let outputfile = doiOSBuild(directory, config)
    info "Built: " & outputfile
  of Android:
    info "Building Android app ..."
    let config = getAndroidConfig(parsed_config)
    let outputfile = doAndroidBuild(directory, config)
    info "Built: " & outputfile
  of WinExe:
    info "Building Windows desktop..."
    let config = getWindowsConfig(parsed_config)
    doWindowsBuild(directory, config)
  of LinuxBin:
    info "Building Linux desktop..."
    let config = getLinuxConfig(parsed_config)
    doLinuxBuild(directory, config)
  else:
    raise newException(CatchableError, "Building type not yet supported")

proc doBuild*(directory:string = ".", target:BuildTarget = AutoDetect) =
  doBuild(directory, target, parseConfig(directory/"wiish.toml"))

proc doDesktopRun*(directory:string = ".", parsed_config: TomlValueRef) =
  ## Run the desktop application
  var
    args: seq[string]
    src_file: string
    config: Config
  when defined(macosx):
    args.add("nim")
    config = getMacosConfig(parsed_config)
  elif defined(windows):
    args.add("nim.exe")
    config = getWindowsConfig(parsed_config)
  elif defined(linux):
    args.add("nim")
    config = getLinuxConfig(parsed_config)
  else:
    raise newException(CatchableError, "Unknown OS")
  src_file = directory/config.src
  args.add("c")
  args.add(config.nimflags)
  # args.add("-d:glfwStaticLib")
  # if defined(linux):
  #   args.add("--dynlibOverride:SDL2")
  args.add("-d:wiishDev")
  args.add("-d:ssl")
  args.add("--threads:on")
  args.add("-r")
  args.add(src_file)
  echo "args: ", args
  run(args)
  quit(0)

proc doInit*(directory:string, example:string) =
  let
    examples_dir = getWiishPackageRoot() / "examples"
    src = examples_dir / example
  if not src.dirExists:
    let possibles = toSeq(examples_dir.walkDir()).filterIt(it.kind == pcDir).mapIt(it.path.extractFilename).join(", ")
    raise newException(CatchableError, &"""Unknown project template: {example}.  Acceptable values: {possibles}""")
  directory.createDir()
  
  echo &"Copying from {src} to {directory}"
  copyDir(src, directory)
  echo &"""Initialized a new wiish app in {directory}

Run:    wiish run {directory}
Build:  wiish build {directory}
"""
