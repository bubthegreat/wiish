/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_wiish_exampleapp_WiishActivity */

#ifndef _Included_org_wiish_exampleapp_WiishActivity
#define _Included_org_wiish_exampleapp_WiishActivity
#ifdef __cplusplus
extern "C" {
#endif
#undef org_wiish_exampleapp_WiishActivity_BIND_ABOVE_CLIENT
#define org_wiish_exampleapp_WiishActivity_BIND_ABOVE_CLIENT 8L
#undef org_wiish_exampleapp_WiishActivity_BIND_ADJUST_WITH_ACTIVITY
#define org_wiish_exampleapp_WiishActivity_BIND_ADJUST_WITH_ACTIVITY 128L
#undef org_wiish_exampleapp_WiishActivity_BIND_ALLOW_OOM_MANAGEMENT
#define org_wiish_exampleapp_WiishActivity_BIND_ALLOW_OOM_MANAGEMENT 16L
#undef org_wiish_exampleapp_WiishActivity_BIND_AUTO_CREATE
#define org_wiish_exampleapp_WiishActivity_BIND_AUTO_CREATE 1L
#undef org_wiish_exampleapp_WiishActivity_BIND_DEBUG_UNBIND
#define org_wiish_exampleapp_WiishActivity_BIND_DEBUG_UNBIND 2L
#undef org_wiish_exampleapp_WiishActivity_BIND_EXTERNAL_SERVICE
#define org_wiish_exampleapp_WiishActivity_BIND_EXTERNAL_SERVICE -2147483648L
#undef org_wiish_exampleapp_WiishActivity_BIND_IMPORTANT
#define org_wiish_exampleapp_WiishActivity_BIND_IMPORTANT 64L
#undef org_wiish_exampleapp_WiishActivity_BIND_INCLUDE_CAPABILITIES
#define org_wiish_exampleapp_WiishActivity_BIND_INCLUDE_CAPABILITIES 4096L
#undef org_wiish_exampleapp_WiishActivity_BIND_NOT_FOREGROUND
#define org_wiish_exampleapp_WiishActivity_BIND_NOT_FOREGROUND 4L
#undef org_wiish_exampleapp_WiishActivity_BIND_WAIVE_PRIORITY
#define org_wiish_exampleapp_WiishActivity_BIND_WAIVE_PRIORITY 32L
#undef org_wiish_exampleapp_WiishActivity_CONTEXT_IGNORE_SECURITY
#define org_wiish_exampleapp_WiishActivity_CONTEXT_IGNORE_SECURITY 2L
#undef org_wiish_exampleapp_WiishActivity_CONTEXT_INCLUDE_CODE
#define org_wiish_exampleapp_WiishActivity_CONTEXT_INCLUDE_CODE 1L
#undef org_wiish_exampleapp_WiishActivity_CONTEXT_RESTRICTED
#define org_wiish_exampleapp_WiishActivity_CONTEXT_RESTRICTED 4L
#undef org_wiish_exampleapp_WiishActivity_MODE_APPEND
#define org_wiish_exampleapp_WiishActivity_MODE_APPEND 32768L
#undef org_wiish_exampleapp_WiishActivity_MODE_ENABLE_WRITE_AHEAD_LOGGING
#define org_wiish_exampleapp_WiishActivity_MODE_ENABLE_WRITE_AHEAD_LOGGING 8L
#undef org_wiish_exampleapp_WiishActivity_MODE_MULTI_PROCESS
#define org_wiish_exampleapp_WiishActivity_MODE_MULTI_PROCESS 4L
#undef org_wiish_exampleapp_WiishActivity_MODE_NO_LOCALIZED_COLLATORS
#define org_wiish_exampleapp_WiishActivity_MODE_NO_LOCALIZED_COLLATORS 16L
#undef org_wiish_exampleapp_WiishActivity_MODE_PRIVATE
#define org_wiish_exampleapp_WiishActivity_MODE_PRIVATE 0L
#undef org_wiish_exampleapp_WiishActivity_MODE_WORLD_READABLE
#define org_wiish_exampleapp_WiishActivity_MODE_WORLD_READABLE 1L
#undef org_wiish_exampleapp_WiishActivity_MODE_WORLD_WRITEABLE
#define org_wiish_exampleapp_WiishActivity_MODE_WORLD_WRITEABLE 2L
#undef org_wiish_exampleapp_WiishActivity_RECEIVER_VISIBLE_TO_INSTANT_APPS
#define org_wiish_exampleapp_WiishActivity_RECEIVER_VISIBLE_TO_INSTANT_APPS 1L
#undef org_wiish_exampleapp_WiishActivity_DEFAULT_KEYS_DIALER
#define org_wiish_exampleapp_WiishActivity_DEFAULT_KEYS_DIALER 1L
#undef org_wiish_exampleapp_WiishActivity_DEFAULT_KEYS_DISABLE
#define org_wiish_exampleapp_WiishActivity_DEFAULT_KEYS_DISABLE 0L
#undef org_wiish_exampleapp_WiishActivity_DEFAULT_KEYS_SEARCH_GLOBAL
#define org_wiish_exampleapp_WiishActivity_DEFAULT_KEYS_SEARCH_GLOBAL 4L
#undef org_wiish_exampleapp_WiishActivity_DEFAULT_KEYS_SEARCH_LOCAL
#define org_wiish_exampleapp_WiishActivity_DEFAULT_KEYS_SEARCH_LOCAL 3L
#undef org_wiish_exampleapp_WiishActivity_DEFAULT_KEYS_SHORTCUT
#define org_wiish_exampleapp_WiishActivity_DEFAULT_KEYS_SHORTCUT 2L
#undef org_wiish_exampleapp_WiishActivity_RESULT_CANCELED
#define org_wiish_exampleapp_WiishActivity_RESULT_CANCELED 0L
#undef org_wiish_exampleapp_WiishActivity_RESULT_FIRST_USER
#define org_wiish_exampleapp_WiishActivity_RESULT_FIRST_USER 1L
#undef org_wiish_exampleapp_WiishActivity_RESULT_OK
#define org_wiish_exampleapp_WiishActivity_RESULT_OK -1L
/*
 * Class:     org_wiish_exampleapp_WiishActivity
 * Method:    wiish_init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_wiish_exampleapp_WiishActivity_wiish_1init
  (JNIEnv *, jobject);

/*
 * Class:     org_wiish_exampleapp_WiishActivity
 * Method:    wiish_getInitURL
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_wiish_exampleapp_WiishActivity_wiish_1getInitURL
  (JNIEnv *, jobject);

/*
 * Class:     org_wiish_exampleapp_WiishActivity
 * Method:    wiish_sendMessageToNim
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_wiish_exampleapp_WiishActivity_wiish_1sendMessageToNim
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_wiish_exampleapp_WiishActivity
 * Method:    wiish_signalJSIsReady
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_wiish_exampleapp_WiishActivity_wiish_1signalJSIsReady
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
