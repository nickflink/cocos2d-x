/****************************************************************************
Copyright (c) 2013 gogododo
Copyright (c) 2013 Nicholas Flink
****************************************************************************/

#include "CCInAppBilling.h"
#include "CCStoreKitHelper.h"

NS_CC_BEGIN

// singleton stuff
static InAppBilling *s_getInstance = NULL;
InAppBilling* InAppBilling::getInstance(void) {
    if (!s_getInstance) {
        s_getInstance = new InAppBilling();
        s_getInstance->init();
    }
    return s_getInstance;
}

InAppBilling::InAppBilling(void) {
}

InAppBilling::~InAppBilling(void) {
}

bool InAppBilling::init(void) {
    bool success = true;
    return success;
}

void InAppBilling::setup() {
    log("InAppBilling::setup");
    [[CCStoreKitHelper sharedHelper] requestProducts];

}

void InAppBilling::addProduct(const char *name) {
    [[CCStoreKitHelper sharedHelper] addProductIdentifiers:[NSSet setWithObject:[NSString stringWithFormat:@"%s", name]]];
}

void InAppBilling::refreshPurchases() {
    log("InAppBilling::refreshPurchases");
    [[CCStoreKitHelper sharedHelper] restoreCompletedTransactions];
}

void InAppBilling::inAppPurchase(const char *name, const char *receipt) {
    CC_UNUSED_PARAM(receipt);
    log("InAppBilling::inAppPurchase");
    [[CCStoreKitHelper sharedHelper] inAppPurchase:[NSString stringWithFormat:@"%s", name]];
}

void InAppBilling::addPurchaseDelegate(PurchaseDelegate *pDelegate) {
    m_pPurchaseHandlers.push_back(pDelegate);
}

void InAppBilling::removePurchaseDelegate(PurchaseDelegate *pDelegate) {
    //m_pPurchaseHandlers.erase(std::remove(m_pPurchaseHandlers.begin(), m_pPurchaseHandlers.end(), pDelegate), m_pPurchaseHandlers.end());
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
    CCAssert(false, "Implement InAppBilling::onSetupComplete");
}

void InAppBilling::onPurchaseFailed() {
    log("InAppBilling::onPurchaseFailed");
    for(std::vector<PurchaseDelegate*>::iterator it = m_pPurchaseHandlers.begin(); it != m_pPurchaseHandlers.end(); ++it) {
        (*it)->ccOnPurchaseFailed();
    }
}

void InAppBilling::onPurchaseSucceeded() {
    log("InAppBilling::onPurchaseSucceeded");
    for(std::vector<PurchaseDelegate*>::iterator it = m_pPurchaseHandlers.begin(); it != m_pPurchaseHandlers.end(); ++it) {
        (*it)->ccOnPurchaseSucceeded();
    }
}

NS_CC_END
