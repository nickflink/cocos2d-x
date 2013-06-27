#include "platform/CCInAppBilling.h"
#include "JniHelper.h"
#include <jni.h>

using namespace cocos2d;

extern "C" {
    JNIEXPORT void JNICALL Java_org_cocos2dx_lib_Cocos2dxGameServiceHelper_onSignInFailed(JNIEnv*  env, jobject thiz) {
        CCInAppBilling* pInAppBilling = CCInAppBilling::sharedInAppBilling();
        pInAppBilling->onPurchaseFailed();
    }
    JNIEXPORT void JNICALL Java_org_cocos2dx_lib_Cocos2dxGameServiceHelper_onSignInSucceeded(JNIEnv*  env, jobject thiz) {
        CCInAppBilling* pInAppBilling = CCInAppBilling::sharedInAppBilling();
        pInAppBilling->onPurchaseSucceeded();
    }
}
