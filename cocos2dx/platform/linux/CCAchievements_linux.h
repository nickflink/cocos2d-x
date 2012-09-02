/*
 * CCAchievements_linux.h
 *
 *  Created on: Aug 9, 2011
 *      Author: laschweinski
 */

#ifndef CCACCELEROMETER_LINUX_H_
#define CCACCELEROMETER_LINUX_H_

#include "CCCommon.h"

namespace   cocos2d {

class CCAchievements
{
public:
    CCAchievements();
    ~CCAchievements();

    static CCAchievements* sharedAchievements() { return NULL; };

    void removeDelegate(CCAchievementsDelegate* pDelegate) {CC_UNUSED_PARAM(pDelegate);};
    void addDelegate(CCAchievementsDelegate* pDelegate) {CC_UNUSED_PARAM(pDelegate);};
    void setDelegate(CCAchievementsDelegate* pDelegate) {CC_UNUSED_PARAM(pDelegate);}
};

}//namespace   cocos2d

#endif /* CCACCELEROMETER_LINUX_H_ */
