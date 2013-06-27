/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#ifndef __CCInAppBilling_H__
#define __CCInAppBilling_H__

#include "cocos2d.h"

NS_CC_BEGIN

class CC_DLL CCInAppBillingDelegate
{
public:

    CCInAppBillingDelegate() {}
    virtual ~CCInAppBillingDelegate() {CCLog("CCInAppBillingDelegate::~CCInAppBillingDelegate");}
    virtual void ccOnPurchaseSucceeded() = 0;
    virtual void ccOnPurchaseFailed() = 0;
};


///
///\brief Class for CCInAppBilling
//
///You can use this widget to display platform specific CCInAppBillings
///
///

class CCInAppBilling
{
private:
    ///
    ///Constructor.
    ///
    CCInAppBilling(void);
    virtual bool init();
public:
    ///
    ///Destructor.
    ///
    static CCInAppBilling* sharedInAppBilling(void);
    virtual ~CCInAppBilling(void);
    virtual void setup();
    virtual void inAppPurchase(const char *name);
    virtual void addInAppBillingDelegate(CCInAppBillingDelegate *pDelegate);
    virtual void removeInAppBillingDelegate(CCInAppBillingDelegate *pDelegate);
    //
    //Callbacks.
    //
    virtual void onSetupComplete();
    virtual void onPurchaseFailed();
    virtual void onPurchaseSucceeded();

    CC_SYNTHESIZE_READONLY(bool, m_bIsSetup, IsSetup);
  private:
    std::vector<CCInAppBillingDelegate*>m_pInAppBillingHandlers;

};

NS_CC_END

#endif //__CCInAppBilling_H__

