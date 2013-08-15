/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#ifndef __CCInAppBilling_H__
#define __CCInAppBilling_H__

#include "cocos2d.h"

NS_CC_BEGIN

class CC_DLL PurchaseDelegate
{
public:

    PurchaseDelegate() {}
    virtual ~PurchaseDelegate() {log("PurchaseDelegate::~PurchaseDelegate");}
    virtual void ccOnPurchaseSucceeded() = 0;
    virtual void ccOnPurchaseFailed() = 0;
};


///
///\brief Class for InAppBilling
//
///You can use this widget to display platform specific InAppBillings
///
///

class InAppBilling
{
private:
    ///
    ///Constructor.
    ///
    InAppBilling(void);
    virtual bool init();
public:
    ///
    ///Destructor.
    ///
    static InAppBilling* getInstance(void);
    virtual ~InAppBilling(void);
    virtual void setup();
    virtual void addProduct(const char *name);
    virtual void refreshPurchases();
    virtual void inAppPurchase(const char *name, const char *receipt);
    virtual void addPurchaseDelegate(PurchaseDelegate *pDelegate);
    virtual void removePurchaseDelegate(PurchaseDelegate *pDelegate);
    //
    //Callbacks.
    //
    virtual void onSetupComplete();
    virtual void onPurchaseFailed();
    virtual void onPurchaseSucceeded();

    CC_SYNTHESIZE_READONLY(bool, m_bIsSetup, IsSetup);
  private:
    std::vector<PurchaseDelegate*>m_pPurchaseHandlers;

};

NS_CC_END

#endif //__CCInAppBilling_H__

