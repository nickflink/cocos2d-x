/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#include "CCInAppBilling.h"
#include "CCStoreKitHelper.h"

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

CCInAppBilling::CCInAppBilling(void) {
}

CCInAppBilling::~CCInAppBilling(void) {
}

bool CCInAppBilling::init(void) {
    bool success = true;
    return success;
}

void CCInAppBilling::setup() {
    CCLog("CCInAppBilling::setup");
    [[CCStoreKitHelper sharedHelper] requestProducts];

}

void CCInAppBilling::addProduct(const char *name) {
    [[CCStoreKitHelper sharedHelper] addProductIdentifiers:[NSSet setWithObject:[NSString stringWithFormat:@"%s", name]]];
}

void CCInAppBilling::refreshPurchases() {
    CCLog("CCInAppBilling::refreshPurchases");
    [[CCStoreKitHelper sharedHelper] restoreCompletedTransactions];
}

void CCInAppBilling::inAppPurchase(const char *name) {
    CCLog("CCInAppBilling::inAppPurchase");
    [[CCStoreKitHelper sharedHelper] inAppPurchase:[NSString stringWithFormat:@"%s", name]];
}

void CCInAppBilling::addPurchaseDelegate(CCPurchaseDelegate *pDelegate) {
    m_pPurchaseHandlers.push_back(pDelegate);
}

void CCInAppBilling::removePurchaseDelegate(CCPurchaseDelegate *pDelegate) {
    //m_pPurchaseHandlers.erase(std::remove(m_pPurchaseHandlers.begin(), m_pPurchaseHandlers.end(), pDelegate), m_pPurchaseHandlers.end());
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
    CCAssert(false, "Implement CCInAppBilling::onSetupComplete");
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
