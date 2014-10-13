#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)

#include "platform/CCLocalNotification.h"
#include "platform/android/jni/JniHelper.h"
#include <jni.h>

using namespace std;
// Java class
// NativeActivity
#define  CLASS_NAME "org/cocos2dx/lib/Cocos2dxActivity"

static bool getJNIStaticMethodInfo(cocos2d::JniMethodInfo &methodinfo,
                                        const char *methodName,
                                        const char *paramCode) {
  return cocos2d::JniHelper::getStaticMethodInfo(methodinfo,
                                                 CLASS_NAME,
                                                 methodName,
                                                 paramCode);
}

void LocalNotification::show(std::string message, int interval, int tag, int badge)
{
  CC_UNUSED_PARAM(badge);
  cocos2d::JniMethodInfo methodInfo;
  
  if (! getJNIStaticMethodInfo(methodInfo, "showLocalNotification", "(Ljava/lang/String;II)V")) {
    return;
  }
  
  jstring stringArg = methodInfo.env->NewStringUTF(message.c_str());
  methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, stringArg, interval, tag);
  methodInfo.env->DeleteLocalRef(stringArg);
  methodInfo.env->DeleteLocalRef(methodInfo.classID);
}

void LocalNotification::cancel(int tag)
{
  cocos2d::JniMethodInfo methodInfo;
  
  if (! getJNIStaticMethodInfo(methodInfo, "cancelLocalNotification", "(I)V")) {
    return;
  }

  methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, tag);
  methodInfo.env->DeleteLocalRef(methodInfo.classID);
}

#endif // CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
