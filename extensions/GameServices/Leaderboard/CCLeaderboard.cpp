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

#include "CCLeaderboard.h"
#include "CCLeaderboardImpl.h"

NS_CC_EXT_BEGIN
// singleton stuff
static CCLeaderboard *s_SharedLeaderboard = NULL;

CCLeaderboard* CCLeaderboard::sharedLeaderboard(void)
{
    if (!s_SharedLeaderboard)
    {
        s_SharedLeaderboard = new CCLeaderboard();
        s_SharedLeaderboard->init();
    }

    return s_SharedLeaderboard;
}

CCLeaderboard::CCLeaderboard(void)
: m_pLeaderboardImpl(NULL)
, m_pDelegate(NULL)
{
}

CCLeaderboard::~CCLeaderboard(void)
{
    CC_SAFE_DELETE(m_pLeaderboardImpl);
}

bool CCLeaderboard::init(void)
{
    bool success = false;
    if (CCControl::init())
    {
        m_pLeaderboardImpl = __createSystemLeaderboard(this);
        success = true;
    }
    return success;
}

void CCLeaderboard::setDelegate(CCLeaderboardDelegate* pDelegate)
{            
    m_pDelegate = pDelegate;
    if (m_pLeaderboardImpl != NULL)
    {
        m_pLeaderboardImpl->setDelegate(pDelegate);
    }
}

void CCLeaderboard::showLeaderboard()
{
    if (m_pLeaderboardImpl != NULL)
    {
        m_pLeaderboardImpl->showLeaderboard();
    }
}




NS_CC_EXT_END
