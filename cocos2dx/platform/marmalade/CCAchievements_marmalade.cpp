/****************************************************************************
 Copyright (c) 2011      cocos2d-x.org   http://cocos2d-x.org
 Copyright (c) 2011      Максим Аксенов
 Copyright (c) 2011      Giovanni Zito, Francis Styck
 
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

#include "CCAchievements_marmalade.h"
#include "ccMacros.h"

namespace cocos2d
{

CCAchievements* CCAchievements::m_spCCAchievements = NULL;

CCAchievements::CCAchievements() : m_pAccelDelegate(NULL)
{
}

CCAchievements::~CCAchievements() 
{
	if( m_spCCAchievements ) {
		delete m_spCCAchievements ;
		m_spCCAchievements = NULL;
	}
}

CCAchievements* CCAchievements::sharedAchievements() 
{

	if (m_spCCAchievements == NULL)
	{
		m_spCCAchievements = new CCAchievements();
	}

	return m_spCCAchievements;
}

void CCAchievements::setDelegate(CCAchievementsDelegate* pDelegate) 
{
	m_pAccelDelegate = pDelegate;

	if (pDelegate)
	{		
		if (s3eAchievementsStart() != S3E_RESULT_SUCCESS)
		{
			CCLog("s3eAchievementsStart() - ERROR\n");
		}
	}
	else
	{
		s3eAchievementsStop();
	}
}

void CCAchievements::update(float x, float y, float z, uint64 sensorTimeStamp) 
{
	if (m_pAccelDelegate)
	{
		m_obAccelerationValue.x = ((double)x)/S3E_ACCELEROMETER_1G ;
		m_obAccelerationValue.y = ((double)y)/S3E_ACCELEROMETER_1G ;
		m_obAccelerationValue.z = ((double)z)/S3E_ACCELEROMETER_1G ;
		m_obAccelerationValue.timestamp = (double)(sensorTimeStamp / 1000.0);

		m_pAccelDelegate->didAccelerate(&m_obAccelerationValue);
	}	
}

} // end of namespace cococs2d

