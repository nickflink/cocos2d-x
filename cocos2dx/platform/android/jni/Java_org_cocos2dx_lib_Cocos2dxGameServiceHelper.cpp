#include "platform/CCGameServices.h"
#include "JniHelper.h"
#include <jni.h>

using namespace cocos2d;

extern "C" {
    JNIEXPORT void JNICALL Java_org_cocos2dx_lib_Cocos2dxGameServiceHelper_onSignInFailed(JNIEnv*  env, jobject thiz) {
        GameServices* pGameServices = GameServices::getInstance();
        pGameServices->onSignInFailed();
    }
    JNIEXPORT void JNICALL Java_org_cocos2dx_lib_Cocos2dxGameServiceHelper_onSignInSucceeded(JNIEnv*  env, jobject thiz) {
        GameServices* pGameServices = GameServices::getInstance();
        pGameServices->onSignInSucceeded();
    }
}
