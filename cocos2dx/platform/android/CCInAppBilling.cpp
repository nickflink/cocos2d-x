/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#include "platform/CCInAppBilling.h"
#include "CCInAppBillingJni.h"

NS_CC_BEGIN
// singleton stuff
static CCInAppBilling *s_SharedInAppBilling = NULL;
CCInAppBilling* CCInAppBilling::sharedInAppBilling(void) {
    if (!s_SharedInAppBilling) {
        s_SharedInAppBilling = new CCInAppBilling();
        s_SharedInAppBilling->init();
    }
    return s_SharedInAppBilling;
}

CCInAppBilling::CCInAppBilling(void) : m_bIsSetup(false) {
}

CCInAppBilling::~CCInAppBilling(void) {
}

bool CCInAppBilling::init(void) {
    bool success = true;
    return success;
}

void CCInAppBilling::setup() {
    CCLog("CCInAppBilling::setup");
    return setupJNI();
}

void CCInAppBilling::refreshPurchases() {
    
}

void CCInAppBilling::inAppPurchase(const char *name) {
    CCLog("> CCInAppBilling::inAppPurchase(name=%s)", name);
    inAppPurchaseJNI(name);
    CCLog("< CCInAppBilling::inAppPurchase");
}

void CCInAppBilling::addPurchaseDelegate(CCPurchaseDelegate *pDelegate) {
    m_pPurchaseHandlers.push_back(pDelegate);
}

void CCInAppBilling::removePurchaseDelegate(CCPurchaseDelegate *pDelegate) {
    int indexToErase = -1;
    int index = 0;
    for(std::vector<CCPurchaseDelegate*>::iterator it = m_pPurchaseHandlers.begin(); it != m_pPurchaseHandlers.end(); ++it) {
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

void CCInAppBilling::onSetupComplete() {
    m_bIsSetup = true;
}

void CCInAppBilling::onPurchaseFailed() {
    CCLog("CCInAppBilling::onPurchaseFailed");
    for(std::vector<CCPurchaseDelegate*>::iterator it = m_pPurchaseHandlers.begin(); it != m_pPurchaseHandlers.end(); ++it) {
        (*it)->ccOnPurchaseFailed();
    }
}

void CCInAppBilling::onPurchaseSucceeded() {
    CCLog("CCInAppBilling::onPurchaseSucceeded");
    for(std::vector<CCPurchaseDelegate*>::iterator it = m_pPurchaseHandlers.begin(); it != m_pPurchaseHandlers.end(); ++it) {
        (*it)->ccOnPurchaseSucceeded();
    }
}

NS_CC_END
