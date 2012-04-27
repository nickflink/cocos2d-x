#include "NdTextureWatcher.h"
#include "CCTextureCache.h"
#include "CCLayer.h"
#include "CCSprite.h"
#include "NdCxList.h"
namespace   NdCxControl {
#define NUM_PER_PAGE	4
NdTextureWatcher::NdTextureWatcher()
{
	m_bHide = false;
	m_nCurrnetPage = 1;
	m_nTotalPage = 0;
	m_bFresh = true;
	m_pTextures = NULL;
	m_pszString = NULL;
	m_pLayer = CCLayerColor::layerWithColor(ccc4(128, 128, 128, 128));
	m_pLayer->retain();

	// layer
	CCSize size = CCDirector::sharedDirector()->getWinSize();
	size.height *= 0.6;
	m_pLayer->setContentSize(size);

	// ���ε���¼���menu
	//*
	CCLabelTTF *label = CCLabelTTF::labelWithString(" ", size, CCTextAlignmentLeft, "Arial", 12);
	CCMenuItemLabel *menuItem = CCMenuItemLabel::itemWithLabel(label);
	menuItem->setAnchorPoint(ccp(0, 0));
	menuItem->setPosition(ccp(0, 0));
		
	CCMenu *menu = CCMenu::menuWithItem(menuItem);
	menu->setAnchorPoint(ccp(0, 0));
	menu->setPosition(ccp(0, 0));
	m_pLayer->addChild(menu);
	//*/

	// list
	NdCxList *list = NdCxList::node(size.width, ccc4(0, 0, 0, 0), size);
	list->setHorizontal(true);
	list->setRecodeNumPerPage(1);
	list->setPageTurnEffect(true);
	list->registerLoaderListern((CNdListLoaderListener*)this);
	m_pLayer->addChild(list, 0, 0);
	m_pList = list;

	// ���ذ�ť
	CCLabelTTF *labelHide = CCLabelTTF::labelWithString("Hide  ", "Arial", 24);
	labelHide->setColor(ccc3(255, 0, 0));
	CCMenuItemLabel *menuItem2 = CCMenuItemLabel::itemWithLabel(labelHide, this, menu_selector(NdTextureWatcher::actionHide));
	menuItem2->setAnchorPoint(ccp(0, 0));
	menuItem2->setPosition(ccp(0, 0));

	CCMenu *menu2 = CCMenu::menuWithItem(menuItem2);
	menu2->setAnchorPoint(ccp(0, 0));
	menu2->setPosition(ccp(size.width - menuItem2->getContentSize().width, 0));

	m_labelHide = labelHide;
	m_menuHide = menu2;
	m_menuHide->retain();

	// ���°�ť
	CCLabelTTF *labelFresh = CCLabelTTF::labelWithString("Fresh", "Arial", 24);
	labelFresh->setColor(ccc3(255, 0, 0));
	CCMenuItemLabel *menuItem1 = CCMenuItemLabel::itemWithLabel(labelFresh, this, menu_selector(NdTextureWatcher::actionFresh));
	menuItem1->setAnchorPoint(ccp(0, 0));
	menuItem1->setPosition(ccp(0, 0));

	CCMenu *menu1 = CCMenu::menuWithItem(menuItem1);
	menu1->setAnchorPoint(ccp(0, 0));
	menu1->setPosition(ccp(size.width - menuItem1->getContentSize().width - menuItem2->getContentSize().width * 1.5, 0));
	m_pLayer->addChild(menu1);
	
	// label page
	m_labelPage = CCLabelTTF::labelWithString(" ", CCSizeMake(size.width * 0.1, labelFresh->getContentSize().height), CCTextAlignmentCenter, "Arial", 16);
	m_labelPage->setAnchorPoint(ccp(0.5, 0));
	m_labelPage->setPosition(ccp(size.width/2.0, 0));
	m_pLayer->addChild(m_labelPage, 0);
}
NdTextureWatcher::~NdTextureWatcher()
{
	if (m_menuHide) m_menuHide->release();
	if (m_pTextures) m_pTextures->release();
	if (m_pszString) delete []m_pszString;
}
void NdTextureWatcher::actionFresh(CCObject* object)
{
	NdTextureWatcher::sharedTextureWatcher()->fresh();
}
void NdTextureWatcher::actionHide(CCObject *object)
{
	NdTextureWatcher::sharedTextureWatcher()->hide();
}
void NdTextureWatcher::fresh()
{
	m_nCurrnetPage = 1;
	m_bFresh = true;
}
void NdTextureWatcher::hide()
{
	m_bHide = !m_bHide;
	if (m_bHide)
	{
		m_labelHide->setString("Show");
		m_pLayer->setPosition(ccp(0, -m_pLayer->getContentSize().height));
	}
	else
	{
		m_labelHide->setString("Hide");
		m_pLayer->setPosition(ccp(0, 0));
	}

}
void NdTextureWatcher::showTexture()
{
	m_pList->clear();
	if (m_nTotalPage == 0) return;
	CCTexture2D* textrue;
	std::vector<std::string> keys = m_pTextures->allKeys();
	std::vector<std::string>::iterator it;

	CCSize listItemSize = CCSize(m_pList->getContentSize().width / NUM_PER_PAGE, m_pList->getContentSize().height);

	CCSize size = CCSize(listItemSize.width * 0.9, listItemSize.height * 0.6);

	LayoutParam layout = CxLayout();
	layout.val_x.t = ABS_WITH_PIXEL;
	layout.val_y.t = ABS_WITH_PIXEL;
	layout.wrap = false;

	int num, index;
	if (m_nTotalPage <= 1)
	{
		num = 1;
		index = 1;
	}
	else
	{
		if (m_nCurrnetPage == 1)
		{
			num = 2;
			index = 1;
		}
		else if (m_nCurrnetPage == m_nTotalPage)
		{
			num = 2;
			index = 2;
		}
		else
		{
			num = 3;
			index = 2;
		}
	}

	sprintf(m_pszString, "%d/%d", m_nCurrnetPage, m_nTotalPage);
	m_labelPage->setString(m_pszString);
	
	CCLayer *layer;
	for (int i = 1; i <= num; i++)
	{
		NdCxListItem *listItem = NdCxListItem::itemWithColor(ccc3(124, 124, 124));
		listItem->setOpacity(0);
		listItem->setDrawTopLine(false);
		listItem->setDrawBottomLine(false);

		CCLayer *layer1 = CCLayer::node();
		layer1->setContentSize(m_pList->getContentSize());
		layout.val_x.val.pixel_val = 0;
		layout.val_y.val.pixel_val = 0;
		listItem->addChildItem(layer1, layout);

		if (i == index)
		{
			layer = layer1;
			m_pList->addListItem(listItem, true);
		}
		else
		{
			m_pList->addListItem(listItem, false);
		}
	}

	m_pList->disableAllCtrlEvent();
	m_pList->turnToPage(index - 1);


	float offX = 0, offY = 0, offsetX = 0, offsetY = 0;
	CC_UNUSED_PARAM(offsetY);
	int nCount = 0;
	int nStart = (m_nCurrnetPage - 1) * NUM_PER_PAGE;
	int nEnd = nStart + NUM_PER_PAGE;

	for (it = keys.begin(); it != keys.end(); ++it)
	{
		if (nCount >= nStart && nCount < nEnd)
		{
			string key = *it;
			textrue = CCTextureCache::sharedTextureCache()->textureForKey(key.c_str());
			//textrue = m_pTextures->objectForKey(*it);
			if (textrue)
			{
				// ������
				sprintf(m_pszString, "[%d]", textrue->retainCount() - 2);
				CCLabelTTF *labelCount = CCLabelTTF::labelWithString(m_pszString, "Arial", 16);
				if (textrue->retainCount() - 2 > 0)
				{
					labelCount->setColor(ccc3(0, 255, 0));
				}
				else
				{
					labelCount->setColor(ccc3(255, 0, 0));
				}
				offX = offsetX + listItemSize.width * 0.5 - labelCount->getContentSize().width * 0.5;
				offY = (listItemSize.height - size.height) * 0.5 - labelCount->getContentSize().height;
				labelCount->setPosition(ccp(offX, offY));
				labelCount->setAnchorPoint(ccp(0, 0));
				layer->addChild(labelCount);

				// ��С
				sprintf(m_pszString, "%.0f*%.0f", textrue->getContentSize().width, textrue->getContentSize().height);
				CCLabelTTF *labelSize = CCLabelTTF::labelWithString(m_pszString, "Arial", 16);
				offX = offsetX + listItemSize.width * 0.5;
				offY = (listItemSize.height - size.height) * 0.5 + size.height;
				labelSize->setPosition(ccp(offX, offY));
				labelSize->setAnchorPoint(ccp(0.5, 0));
				layer->addChild(labelSize);

				// ����
				int len = key.length();
				int pos = 0;
#if defined(ND_MAC) || defined(ND_IPHONE)
				pos = key.rfind('/') + 1;
#else
				pos = key.rfind('\\') + 1;
				int pos2 = key.rfind('/') + 1;
				pos = pos > pos2 ? pos : pos2;
#endif
				string name = key.substr(pos, len - pos);
				sprintf(m_pszString, "%s", name.c_str());
				CCSize dimensions = CCSizeMake(listItemSize.width * 0.9, labelSize->getContentSize().height);
				CCLabelTTF *labelName = CCLabelTTF::labelWithString(m_pszString, dimensions, CCTextAlignmentCenter, "Arial", 16);
				offX = offsetX + listItemSize.width * 0.5;
				offY = offY + labelName->getContentSize().height;
				labelName->setPosition(ccp(offX, offY));
				labelName->setAnchorPoint(ccp(0.5, 0));
				layer->addChild(labelName);

				CCSprite *sprite = CCSprite::spriteWithTexture(textrue);
				sprite->setAnchorPoint(ccp(0, 0));

				CCSize spriteSize = sprite->getContentSize();
				float scale;
				if (spriteSize.width < size.width && spriteSize.height < size.height)
				{
					scale = 1;
				}
				else if (spriteSize.width * size.height >= spriteSize.height * size.width)
				{
					scale = size.width / spriteSize.width;
				}
				else
				{
					scale = size.height / spriteSize.height;
				}
				sprite->setScale(scale);
				spriteSize.width *= scale;
				spriteSize.height *= scale;
				offX = offsetX + (listItemSize.width - spriteSize.width) * 0.5;
				offY = (listItemSize.height - spriteSize.height) * 0.5;
				sprite->setPosition(ccp(offX, offY));
				layer->addChild(sprite);
				offsetX += listItemSize.width;
			}
		}
		++nCount;
	}
}
void NdTextureWatcher::dovisit()
{
	if (m_bFresh)
	{
		if (m_pTextures)
		{
			m_pTextures->removeAllObjects();
			m_pTextures->release();
		}
		if (m_pList) 
		{
			m_pList->clear();
		}
		CCTextureCache::sharedTextureCache()->removeUnusedTextures();
		m_pTextures = CCTextureCache::sharedTextureCache()->snapshotTextures();
		m_nTotalPage = (m_pTextures->count() + NUM_PER_PAGE - 1) / NUM_PER_PAGE;
		if (m_pTextures->count() > 0)
		{
			m_bFresh = false;
			showTexture();
		}
	}
	CCNode *pParent = m_pLayer->getParent();
	if (pParent)
	{
		if (pParent != CCDirector::sharedDirector()->getRunningScene())
		{
			pParent->removeChild(m_pLayer, true);
			CCDirector::sharedDirector()->getRunningScene()->addChild(m_pLayer, 9998);
			m_bFresh = true;
		}
	}
	else
	{
		CCDirector::sharedDirector()->getRunningScene()->addChild(m_pLayer, 9998);
	}

	pParent = m_menuHide->getParent();
	if (pParent)
	{
		if (pParent != CCDirector::sharedDirector()->getRunningScene())
		{
			pParent->removeChild(m_menuHide, true);
			CCDirector::sharedDirector()->getRunningScene()->addChild(m_menuHide, 9999);
		}
	}
	else
	{
		CCDirector::sharedDirector()->getRunningScene()->addChild(m_menuHide, 9999);
	}
}
void NdTextureWatcher::visit(void* pSender)
{
	NdTextureWatcher *wartcher = (NdTextureWatcher*)pSender;
	wartcher->dovisit();
}

static NdTextureWatcher *g_sharedTextureWatcher;
NdTextureWatcher * NdTextureWatcher::sharedTextureWatcher()
{
	if (!g_sharedTextureWatcher)
		g_sharedTextureWatcher = new NdTextureWatcher();

	return g_sharedTextureWatcher;
}

void NdTextureWatcher::setDisplayWatcher(bool bDisplayWatcher)
{
	m_bDisplayWatcher = bDisplayWatcher;
	if (m_bDisplayWatcher)
	{
		if (m_pszString == NULL)
		{
			m_pszString = new char[64];
		}
		CCDirector::sharedDirector()->setWatcherCallbackFun(this, &NdTextureWatcher::visit);
	}
	else 
	{
		CCDirector::sharedDirector()->setWatcherCallbackFun(NULL, NULL);
	}
}

void NdTextureWatcher::OnLoadItem(int nCurPage)
{
	//CCLog("page:%d", nCurPage);
	int nextPage, prePage;
	if (m_nCurrnetPage == 1)
	{
		nextPage = 1;
		prePage = -1;
	}
	else if (m_nCurrnetPage == m_nTotalPage)
	{
		nextPage = -1;
		prePage = 0;
	}
	else
	{
		nextPage = 2;
		prePage = 0;
	}
	if (nCurPage == prePage)
	{
		m_nCurrnetPage--;
		showTexture();
	}
	else if (nCurPage == nextPage)
	{
		m_nCurrnetPage++;
		showTexture();
	}
	
}
void NdTextureWatcher::OnUnLoadItem(int nCurPage)
{

}
}// namespace