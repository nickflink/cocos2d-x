#include "platform/CCInAppBilling.h"
#include "JniHelper.h"
#include <jni.h>

using namespace cocos2d;

extern "C" {
    JNIEXPORT void JNICALL Java_org_cocos2dx_lib_Cocos2dxInAppBilling_onPurchaseFailed(JNIEnv*  env, jobject thiz) {
        CCInAppBilling* pInAppBilling = CCInAppBilling::sharedInAppBilling();
        pInAppBilling->onPurchaseFailed();
    }
    JNIEXPORT void JNICALL Java_org_cocos2dx_lib_Cocos2dxInAppBilling_onPurchaseSucceeded(JNIEnv*  env, jobject thiz) {
        CCInAppBilling* pInAppBilling = CCInAppBilling::sharedInAppBilling();
        pInAppBilling->onPurchaseSucceeded();
    }
}
