/****************************************************************************
 Copyright (c) 2013 cocos2d-x.org
 
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

#include "CCEventListener.h"
#include "platform/CCCommon.h"

NS_CC_BEGIN

EventListener* EventListener::create(const std::string& eventType, std::function<void(Event*)> callback)
{
    EventListener* ret = new EventListener();
    if (ret && ret->init(eventType, callback))
    {
        ret->autorelease();
    }
    else
    {
        CC_SAFE_DELETE(ret);
    }
    return ret;
}

EventListener::EventListener()
{}
    
EventListener::~EventListener() 
{
	CCLOGINFO("In the destructor of EventListener. %p", this);
}

bool EventListener::init(const std::string& t, std::function<void(Event*)>callback)
{
    onEvent = callback;
    type = t;
    _isRegistered = false;
    
    return true;
}

bool EventListener::checkAvaiable()
{ 
	return (onEvent != nullptr);
}

EventListener* EventListener::clone()
{
    EventListener* ret = new EventListener();
    if (ret && ret->init(type, onEvent))
    {
        ret->autorelease();
    }
    else
    {
        CC_SAFE_DELETE(ret);
    }
    return ret;
}

NS_CC_END
