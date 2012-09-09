#ifndef __TABLEVIEWTESTSCENE_H__
#define __TABLEVIEWTESTSCENE_H__

#include "cocos2d.h"
#include "cocos-ext.h"

void runTableViewTest();

class TableViewTestLayer : public cocos2d::CCLayer, public cocos2d::extension::CCTableViewDataSource, public cocos2d::extension::CCTableViewDelegate
{
public:
    virtual bool init();  
   
	void toExtensionsMainLayer(cocos2d::CCObject *sender);

    CREATE_FUNC(TableViewTestLayer);
    
    virtual void scrollViewDidScroll(cocos2d::extension::CCScrollView* view) {};
    virtual void scrollViewDidZoom(cocos2d::extension::CCScrollView* view) {}
    virtual void table_cellTouched(cocos2d::extension::CCTableView* table, cocos2d::extension::CCTableViewCell* cell);
    virtual cocos2d::CCSize cellSizeForTable(cocos2d::extension::CCTableView *table);
    virtual cocos2d::extension::CCTableViewCell* tableCellAtIndex(cocos2d::extension::CCTableView *table, unsigned int idx);
    virtual unsigned int numberOfCellsInTableView(cocos2d::extension::CCTableView *table);
};

#endif // __TABLEVIEWTESTSCENE_H__
