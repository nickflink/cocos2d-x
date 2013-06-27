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

void CCInAppBilling::inAppPurchase(const char *name) {
    CCLog("> CCInAppBilling::inAppPurchase(name=%s)", name);
    inAppPurchaseJNI(name);
    CCLog("< CCInAppBilling::inAppPurchase");
}

void CCInAppBilling::addInAppBillingDelegate(CCInAppBillingDelegate *pDelegate) {
    m_pInAppBillingHandlers.push_back(pDelegate);
}

void CCInAppBilling::removeInAppBillingDelegate(CCInAppBillingDelegate *pDelegate) {
    int indexToErase = -1;
    int index = 0;
    for(std::vector<CCInAppBillingDelegate*>::iterator it = m_pInAppBillingHandlers.begin(); it != m_pInAppBillingHandlers.end(); ++it) {
        if(reinterpret_cast<size_t>(*it) == reinterpret_cast<size_t>(pDelegate)) {
            indexToErase = index;
            break;
        }
        index++;
    }
    if(indexToErase >= 0) {
        m_pInAppBillingHandlers.erase(m_pInAppBillingHandlers.begin() + indexToErase);
    }
}

void CCInAppBilling::onSetupComplete() {
    m_bIsSetup = true;
}

void CCInAppBilling::onPurchaseFailed() {
    CCLog("CCInAppBilling::onPurchaseFailed");
    for(std::vector<CCInAppBillingDelegate*>::iterator it = m_pInAppBillingHandlers.begin(); it != m_pInAppBillingHandlers.end(); ++it) {
        (*it)->ccOnPurchaseFailed();
    }
}

void CCInAppBilling::onPurchaseSucceeded() {
    CCLog("CCInAppBilling::onPurchaseSucceeded");
    for(std::vector<CCInAppBillingDelegate*>::iterator it = m_pInAppBillingHandlers.begin(); it != m_pInAppBillingHandlers.end(); ++it) {
        (*it)->ccOnPurchaseSucceeded();
    }
}

NS_CC_END
