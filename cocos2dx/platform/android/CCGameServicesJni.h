/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#ifndef __CCGameServicesJni_H__
#define __CCGameServicesJni_H__

#include <jni.h>

extern "C"
{
    extern bool isSignedInJNI();
    extern void beginUserInitiatedSignInJNI();
    extern void showLeaderboardJNI();
    extern void submitScoreJNI(const char *category, long long score);
}
#endif //__CCGameServicesJni_H__
