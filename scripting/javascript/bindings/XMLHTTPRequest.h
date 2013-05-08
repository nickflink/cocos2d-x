//
//  XMLHTTPRequest.h
//  XMLHttpRequest
//
//  Created by Zynga on May, 6th.
//
//  Heaviliy based on: https://github.com/funkaster/FakeWebGL/blob/master/FakeWebGL/WebGL/XMLHTTPRequest.h
//  Copyright (c) 2012 Rolando Abarca. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.


#ifndef __FAKE_XMLHTTPREQUEST_H__
#define __FAKE_XMLHTTPREQUEST_H__

#include "network/HttpClient.h"
#include "js_bindings_config.h"
#include "ScriptingCore.h"
#include "jstypes.h"
#include "jsapi.h"
#include "jsfriendapi.h"
#include "XMLHTTPHelper.h"
#include "curl/curl.h"

enum MinXmlHttpRequestResponseType {
    kRequestResponseTypeString,
    kRequestResponseTypeArrayBuffer,
    kRequestResponseTypeBlob,
    kRequestResponseTypeDocument,
    kRequestResponseTypeJSON
};

// Ready States (http://www.w3.org/TR/XMLHttpRequest/#interface-xmlhttprequest)
const unsigned short UNSENT = 0;
const unsigned short OPENED = 1;
const unsigned short HEADERS_RECEIVED = 2;
const unsigned short LOADING = 3;
const unsigned short DONE = 4;

class MinXmlHttpRequest : public JSBindedObject
{
    std::string url;
    std::string meth;
	std::string type;
	std::stringstream data;
	size_t dataSize;
	js::RootedObject onreadystateCallback;
	int readyState;
	int status;
    std::string statusText;
	int responseType;
    unsigned timeout;
	bool isAsync;
    CURL* curlHandle;
	bool isNetwork;
    bool withCredentialsValue = false;
    map<string, string> http_header;
    map<string, string> request_header;
    struct curl_slist *headers = NULL;
    
	void _gotHeader(std::string header);
	void _gotData(char* ptr, size_t len);
    void _setRequestHeader(const char* field, const char* value);
    void _setCurlRequestHeader();
    void _sendCurlRequest(JSContext *cx);
    
public:
    MinXmlHttpRequest();
    ~MinXmlHttpRequest();
    JS_BINDED_CLASS_GLUE(MinXmlHttpRequest);  
    JS_BINDED_CONSTRUCTOR(MinXmlHttpRequest);
    JS_BINDED_PROP_ACCESSOR(MinXmlHttpRequest, onreadystatechange);
    JS_BINDED_PROP_ACCESSOR(MinXmlHttpRequest, responseType);
    JS_BINDED_PROP_ACCESSOR(MinXmlHttpRequest, withCredentials);
    JS_BINDED_PROP_ACCESSOR(MinXmlHttpRequest, upload);
    JS_BINDED_PROP_ACCESSOR(MinXmlHttpRequest, timeout);
    JS_BINDED_PROP_GET(MinXmlHttpRequest, readyState);
    JS_BINDED_PROP_GET(MinXmlHttpRequest, status);
    JS_BINDED_PROP_GET(MinXmlHttpRequest, statusText);
    JS_BINDED_PROP_GET(MinXmlHttpRequest, responseText);
    JS_BINDED_PROP_GET(MinXmlHttpRequest, response);
    JS_BINDED_PROP_GET(MinXmlHttpRequest, responseXML);
    JS_BINDED_FUNC(MinXmlHttpRequest, open);
    JS_BINDED_FUNC(MinXmlHttpRequest, send);
    JS_BINDED_FUNC(MinXmlHttpRequest, getAllResponseHeaders);
    JS_BINDED_FUNC(MinXmlHttpRequest, getResponseHeader);
    JS_BINDED_FUNC(MinXmlHttpRequest, setRequestHeader);
    JS_BINDED_FUNC(MinXmlHttpRequest, overrideMimeType);
    
    static size_t gotHeader(void *ptr, size_t size, size_t nmemb, void *userdata);
    static size_t gotData(char *ptr, size_t size, size_t nmemb, void *userdata);
};
/*void my_finalize(JSFreeOp *fop, JSObject *obj);
JSBool JS_foo(JSContext *cx, uint32_t argc, jsval *vpn);
JSBool min_xml_http_request_ctor(JSContext *cx, uint32_t argc, jsval *vp);
void jsb_register_xmlhttprequest(JSContext *_cx, JSObject *object);
*/
#endif