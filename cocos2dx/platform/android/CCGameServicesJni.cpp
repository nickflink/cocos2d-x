/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/
#include "CCGameServicesJni.h"
#include "platform/android/jni/JniHelper.h"

#include <android/log.h>

#define  LOG_TAG    "libCCGameServices"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)

typedef struct JniMethodInfo_
{
    JNIEnv *    env;
    jclass      classID;
    jmethodID   methodID;
} JniMethodInfo;


extern "C"
{
    // get env and cache it
    static JNIEnv* getJNIEnv(void)
    {
        
        JavaVM* jvm = cocos2d::JniHelper::getJavaVM();
        if (NULL == jvm) {
            LOGD("Failed to get JNIEnv. JniHelper::getJavaVM() is NULL");
            return NULL;
        }
        
        JNIEnv *env = NULL;
        // get jni environment
        jint ret = jvm->GetEnv((void**)&env, JNI_VERSION_1_4);
        
        switch (ret) {
            case JNI_OK :
                // Success!
                return env;
                
            case JNI_EDETACHED :
                // Thread not attached
                
                // TODO : If calling AttachCurrentThread() on a native thread
                // must call DetachCurrentThread() in future.
                // see: http://developer.android.com/guide/practices/design/jni.html
                
                if (jvm->AttachCurrentThread(&env, NULL) < 0)
                {
                    LOGD("Failed to get the environment using AttachCurrentThread()");
                    return NULL;
                } else {
                    // Success : Attached and obtained JNIEnv!
                    return env;
                }
                
            case JNI_EVERSION :
                // Cannot recover from this error
                LOGD("JNI interface version 1.4 not supported");
            default :
                LOGD("Failed to get the environment using GetEnv()");
                return NULL;
        }
    }
    
    // get class and make it a global reference, release it at endJni().
    static jclass getClassID(JNIEnv *pEnv)
    {
        jclass ret = pEnv->FindClass("org/cocos2dx/lib/Cocos2dxGameServiceHelper");
        if (! ret)
        {
            LOGD("Failed to find class of %s", "org/cocos2dx/lib/Cocos2dxGameServiceHelper");
        }
        
        return ret;
    }
    
    static bool getStaticMethodInfo(JniMethodInfo &methodinfo, const char *methodName, const char *paramCode)
    {
        jmethodID methodID = 0;
        JNIEnv *pEnv = 0;
        bool bRet = false;
        
        do 
        {
            pEnv = getJNIEnv();
            if (! pEnv)
            {
                break;
            }
            
            jclass classID = getClassID(pEnv);
            
            methodID = pEnv->GetStaticMethodID(classID, methodName, paramCode);
            if (! methodID)
            {
                LOGD("Failed to find static method id of %s", methodName);
                break;
            }
            
            methodinfo.classID = classID;
            methodinfo.env = pEnv;
            methodinfo.methodID = methodID;
            
            bRet = true;
        } while (0);
        
        return bRet;
    }

    void setLocalizedMessagesJNI(const char *signingIn, const char *signingOut, const char *unknownError) {
        LOGD("setLocalizedMessagesJNI");
        JniMethodInfo methodInfo;
        if (! getStaticMethodInfo(methodInfo, "setLocalizedMessages", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")) {
            return;
        }
        jstring stringSigningIn = methodInfo.env->NewStringUTF(signingIn);
        jstring stringSigningOut = methodInfo.env->NewStringUTF(signingOut);
        jstring stringUnknownError = methodInfo.env->NewStringUTF(unknownError);
        methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, stringSigningIn, stringSigningOut, stringUnknownError);
        methodInfo.env->DeleteLocalRef(stringSigningIn);
        methodInfo.env->DeleteLocalRef(stringSigningOut);
        methodInfo.env->DeleteLocalRef(stringUnknownError);
        methodInfo.env->DeleteLocalRef(methodInfo.classID);
    }
    
    bool isSignedInJNI() {
        JniMethodInfo methodInfo;
        jboolean ret = false;
        if (! getStaticMethodInfo(methodInfo, "isSignedInJni", "()Z")) {
            return ret;
        }
        ret = methodInfo.env->CallStaticBooleanMethod(methodInfo.classID, methodInfo.methodID);
        methodInfo.env->DeleteLocalRef(methodInfo.classID);
        return ret;
    }
    void beginUserInitiatedSignInJNI() {
        JniMethodInfo methodInfo;
        if (! getStaticMethodInfo(methodInfo, "beginUserInitiatedSignInJni", "()V")) {
            return;
        }
        methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID);
        methodInfo.env->DeleteLocalRef(methodInfo.classID);
    }
    void showLeaderboardJNI() {
        JniMethodInfo methodInfo;
        if (! getStaticMethodInfo(methodInfo, "showLeaderboardJni", "()V")) {
            return;
        }
        methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID);
        methodInfo.env->DeleteLocalRef(methodInfo.classID);
    }
    void showAchievementJNI() {
        JniMethodInfo methodInfo;
        if (! getStaticMethodInfo(methodInfo, "showAchievementJni", "()V")) {
            return;
        }
        methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID);
        methodInfo.env->DeleteLocalRef(methodInfo.classID);
    }
    void reportAchievementJNI(const char *category, int portion) {
        JniMethodInfo methodInfo;
        //We can not pass a long long over jni so we convert it to a string
        if (!getStaticMethodInfo(methodInfo, "reportAchievementJni", "(Ljava/lang/String;I)V"))
        {
            return ;
        }
        jstring stringCategory = methodInfo.env->NewStringUTF(category);
        methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, stringCategory, portion);
        methodInfo.env->DeleteLocalRef(stringCategory);
        methodInfo.env->DeleteLocalRef(methodInfo.classID);
    }
    void submitScoreJNI(const char *category, long long score) {
        char scoreBuf[32];
        snprintf(scoreBuf, 32, "%lld", score);
//char buf[1024];
//snprintf(buf, 1024, "submitScoreJNI:%s toCategory:%s", scoreBuf, category);
//__android_log_print(ANDROID_LOG_DEBUG, "cocos2d-x debug info",  buf);
        JniMethodInfo methodInfo;
        //We can not pass a long long over jni so we convert it to a string
        if (!getStaticMethodInfo(methodInfo, "submitScoreJni", "(Ljava/lang/String;Ljava/lang/String;)V"))
        {
            return ;
        }
        jstring stringCategory = methodInfo.env->NewStringUTF(category);
        jstring stringScore = methodInfo.env->NewStringUTF(scoreBuf);
        methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, stringCategory, stringScore);
        methodInfo.env->DeleteLocalRef(stringCategory);
        methodInfo.env->DeleteLocalRef(stringScore);
        methodInfo.env->DeleteLocalRef(methodInfo.classID);
    }
}
