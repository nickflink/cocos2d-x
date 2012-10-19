/****************************************************************************
 Copyright (c) 2010-2012 cocos2d-x.org
 Copyright (c) 2012 Nick Flink
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef __CCLEADERBOARDIMPL_H__
#define __CCLEADERBOARDIMPL_H__

#include "cocos2d.h"
#include "ExtensionMacros.h"
#include "CCLeaderboard.h"

NS_CC_EXT_BEGIN


class CCLeaderboardImpl
{
public:
    CCLeaderboardImpl(CCLeaderboard* pLeaderboard) : m_pLeaderboard(pLeaderboard), m_pDelegate(NULL) {}
    virtual ~CCLeaderboardImpl() {}
    virtual void setDelegate(CCLeaderboardDelegate* pDelegate){ m_pDelegate = pDelegate; };
    virtual void submitScore(int64_t score, const char *category) = 0;
    virtual void showLeaderboard() = 0;
    
protected:
    CCLeaderboardDelegate* m_pDelegate;
    CCLeaderboard* m_pLeaderboard;
};

// This method must be implemented at each subclass of CCLeaderboardImpl.
extern CCLeaderboardImpl* __createSystemLeaderboard(CCLeaderboard* pLeaderboard);


NS_CC_EXT_END

#endif //__CCLEADERBOARDIMPL_H__
