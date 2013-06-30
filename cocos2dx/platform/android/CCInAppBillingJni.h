/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#ifndef __CCInAppBillingJni_H__
#define __CCInAppBillingJni_H__

#include <jni.h>

extern "C"
{
    extern void setupJNI();
    extern void refreshPurchasesJNI();
    extern void inAppPurchaseJNI(const char *name, const char *receipt);
}
#endif //__CCInAppBillingJni_H__
