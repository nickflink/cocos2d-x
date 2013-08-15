/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#include "platform/CCInAppBilling.h"
#include "CCInAppBillingJni.h"

NS_CC_BEGIN
// singleton stuff
static InAppBilling *s_SharedInAppBilling = NULL;
InAppBilling* InAppBilling::getInstance(void) {
    if (!s_SharedInAppBilling) {
        s_SharedInAppBilling = new InAppBilling();
        s_SharedInAppBilling->init();
    }
    return s_SharedInAppBilling;
}

InAppBilling::InAppBilling(void) : m_bIsSetup(false) {
}

InAppBilling::~InAppBilling(void) {
}

bool InAppBilling::init(void) {
    bool success = true;
    return success;
}

void InAppBilling::setup() {
    CCLog("InAppBilling::setup");
    return setupJNI();
}

void InAppBilling::addProduct(const char *name) {
    CCLog("InAppBilling::addProduct NOT used for android");
}

void InAppBilling::refreshPurchases() {
    refreshPurchasesJNI();
}

void InAppBilling::inAppPurchase(const char *name, const char *receipt) {
    CCLog("> InAppBilling::inAppPurchase(name=%s)", name);
    inAppPurchaseJNI(name, receipt);
    CCLog("< InAppBilling::inAppPurchase");
}

void InAppBilling::addPurchaseDelegate(PurchaseDelegate *pDelegate) {
    m_pPurchaseHandlers.push_back(pDelegate);
}

void InAppBilling::removePurchaseDelegate(PurchaseDelegate *pDelegate) {
    int indexToErase = -1;
    int index = 0;
    for(std::vector<PurchaseDelegate*>::iterator it = m_pPurchaseHandlers.begin(); it != m_pPurchaseHandlers.end(); ++it) {
        if(reinterpret_cast<size_t>(*it) == reinterpret_cast<size_t>(pDelegate)) {
            indexToErase = index;
            break;
        }
        index++;
    }
    if(indexToErase >= 0) {
        m_pPurchaseHandlers.erase(m_pPurchaseHandlers.begin() + indexToErase);
    }
}

void InAppBilling::onSetupComplete() {
    m_bIsSetup = true;
}

void InAppBilling::onPurchaseFailed() {
    CCLog("InAppBilling::onPurchaseFailed");
    for(std::vector<PurchaseDelegate*>::iterator it = m_pPurchaseHandlers.begin(); it != m_pPurchaseHandlers.end(); ++it) {
        (*it)->ccOnPurchaseFailed();
    }
}

void InAppBilling::onPurchaseSucceeded() {
    CCLog("InAppBilling::onPurchaseSucceeded");
    for(std::vector<PurchaseDelegate*>::iterator it = m_pPurchaseHandlers.begin(); it != m_pPurchaseHandlers.end(); ++it) {
        (*it)->ccOnPurchaseSucceeded();
    }
}

NS_CC_END
