/****************************************************************************
Copyright (c) 2012-2013 cocos2d-x.org

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
package org.cocos2dx.plugin;

import java.util.Hashtable;

public class InterfaceIAP {
	public static final int PAYRESULT_SUCCESS = 0;
	public static final int PAYRESULT_FAIL    = 1;
	public static final int PAYRESULT_CANCEL  = 2;
	public static final int PAYRESULT_TIMEOUT = 3;

	public interface IAPAdapter {
		public void initDeveloperInfo(Hashtable<String, String> cpInfo);
		public void payForProduct(Hashtable<String, String> cpInfo);
		public void setDebugMode(boolean debug);
		public String getSDKVersion();
	}

	public static void payResult(IAPAdapter obj, int ret, String msg) {
		final int curRet = ret;
		final String curMsg = msg;
		final IAPAdapter curObj = obj;
		PluginWrapper.runOnGLThread(new Runnable() {
			@Override
			public void run() {
				nativePayResult(curObj, curRet, curMsg);
			}
		});
	}
	private static native void nativePayResult(Object obj, int ret, String msg);
}
