import ospaths
import osproc

const
  DATADIR* = currentSourcePath.parentDir.joinPath("data")

proc run*(args:varargs[string, `$`]) =
  ## Run a process, failing the program if it fails
  var p = startProcess(command = args[0],
    args = args[1..^1],
    options = {poUsePath, poParentStreams})
  if p.waitForExit() != 0:
    raise newException(CatchableError, "Error running process")

proc runoutput*(args:varargs[string, `$`]):string =
  ## Run a process and return the output as a string
  result = execProcess(command = args[0],
    args = args[1..^1],
    options = {poUsePath})

template basename*(path:string):string =
  ## Return a file's basename
  let split = path.splitFile
  split.name & split.ext