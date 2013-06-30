/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#ifndef __CCInAppBilling_H__
#define __CCInAppBilling_H__

#include "cocos2d.h"

NS_CC_BEGIN

class CC_DLL CCPurchaseDelegate
{
public:

    CCPurchaseDelegate() {}
    virtual ~CCPurchaseDelegate() {CCLog("CCPurchaseDelegate::~CCPurchaseDelegate");}
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
    virtual void addProduct(const char *name);
    virtual void refreshPurchases();
    virtual void inAppPurchase(const char *name, const char *receipt);
    virtual void addPurchaseDelegate(CCPurchaseDelegate *pDelegate);
    virtual void removePurchaseDelegate(CCPurchaseDelegate *pDelegate);
    //
    //Callbacks.
    //
    virtual void onSetupComplete();
    virtual void onPurchaseFailed();
    virtual void onPurchaseSucceeded();

    CC_SYNTHESIZE_READONLY(bool, m_bIsSetup, IsSetup);
  private:
    std::vector<CCPurchaseDelegate*>m_pPurchaseHandlers;

};

NS_CC_END

#endif //__CCInAppBilling_H__

