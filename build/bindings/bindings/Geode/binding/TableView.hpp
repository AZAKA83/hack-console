#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCIndexPath.hpp>
#include <Geode/binding/CCScrollLayerExt.hpp>
#include <Geode/binding/CCScrollLayerExtDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class TableView : public CCScrollLayerExt, public CCScrollLayerExtDelegate {
public:
    static constexpr auto CLASS_NAME = "TableView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TableView, CCScrollLayerExt)

    /**
     * @note[short] MacOS (ARM): 0x60f9f0
     * @note[short] MacOS (Intel): 0x6fdfa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39b190
     * @note[short] Android: Rebinded
     */
     TableView(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x60fbe8
     * @note[short] MacOS (Intel): 0x6fe240
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39b388
     * @note[short] Android: Rebinded
     */
     ~TableView();

    /**
     * @note[short] MacOS (ARM): 0x60f938
     * @note[short] MacOS (Intel): 0x41c570
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39b0dc
     * @note[short] Android
     */
    static TableView* create(TableViewDelegate* tvd, TableViewDataSource* tvds, TableViewCellDelegate* tvcd, cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x610b28
     * @note[short] MacOS (Intel): 0x6ff2a0
     * @note[short] Windows: 0x5bcf0
     * @note[short] iOS: 0x39be60
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x610b2c
     * @note[short] MacOS (Intel): 0x6ff2b0
     * @note[short] Windows: 0x88210
     * @note[short] iOS: 0x39be64
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x610ca8
     * @note[short] MacOS (Intel): 0x6ff450
     * @note[short] Windows: 0x88220
     * @note[short] iOS: 0x39bfa0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x6116fc
     * @note[short] MacOS (Intel): 0x6fff80
     * @note[short] Windows: 0x884d0
     * @note[short] iOS: 0x39c75c
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x6114c0
     * @note[short] MacOS (Intel): 0x6ffd50
     * @note[short] Windows: 0x883f0
     * @note[short] iOS: 0x39c5e0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x611634
     * @note[short] MacOS (Intel): 0x6ffed0
     * @note[short] Windows: 0x88450
     * @note[short] iOS: 0x39c6f8
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x610b30
     * @note[short] MacOS (Intel): 0x6ff2c0
     * @note[short] Windows: 0x41f30
     * @note[short] iOS: 0x39be68
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x6117ec
     * @note[short] MacOS (Intel): 0x700070
     * @note[short] Windows: 0x88aa0
     * @note[short] iOS: 0x39c820
     * @note[short] Android
     */
    virtual bool scrollWheel(float y, float x);

    /**
     * @note[short] MacOS (ARM): 0x612390
     * @note[short] MacOS (Intel): 0x700cc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39d170
     * @note[short] Android
     */
    virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt* layer);

    /**
     * @note[short] MacOS (ARM): 0x612398
     * @note[short] MacOS (Intel): 0x700ce0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39d178
     * @note[short] Android
     */
    virtual void scrollViewDidEndDecelerating(CCScrollLayerExt* layer);

    /**
     * @note[short] MacOS (ARM): 0x6123a0
     * @note[short] MacOS (Intel): 0x700d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39d180
     * @note[short] Android
     */
    virtual void scrollViewTouchMoving(CCScrollLayerExt* layer);

    /**
     * @note[short] MacOS (ARM): 0x6123a8
     * @note[short] MacOS (Intel): 0x700d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39d188
     * @note[short] Android
     */
    virtual void scrollViewDidEndMoving(CCScrollLayerExt* layer);

    /**
     * @note[short] MacOS (ARM): 0x610bcc
     * @note[short] MacOS (Intel): 0x6ff370
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void cancelAndStoleTouch(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x610538
     * @note[short] MacOS (Intel): 0x6fec60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    TableViewCell* cellForRowAtIndexPath(CCIndexPath& path);

    /**
     * @note[short] MacOS (ARM): 0x610124
     * @note[short] MacOS (Intel): 0x6fe7e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    TableViewCell* cellForTouch(cocos2d::CCTouch* touch);

    /**
     * @note[short] MacOS (ARM): 0x611858
     * @note[short] MacOS (Intel): 0x41c220
     * @note[short] Windows: 0x88b50
     * @note[short] Android
     */
    int checkBoundaryOfCell(TableViewCell* cell);

    /**
     * @note[short] MacOS (ARM): 0x611990
     * @note[short] MacOS (Intel): 0x700240
     * @note[short] Windows: 0x88c70
     * @note[short] Android
     */
    int checkBoundaryOfCell(cocos2d::CCPoint& position, float height);

    /**
     * @note[short] MacOS (Intel): 0x6ff510
     * @note[short] Windows: 0x88d70
     * @note[short] Android
     */
    void checkBoundaryOfContent(float dt);

    /**
     * @note[short] MacOS (ARM): 0x61200c
     * @note[short] MacOS (Intel): 0x700910
     * @note[short] Windows: 0x89330
     * @note[short] Android
     */
    void checkFirstCell(TableViewCell* cell);

    /**
     * @note[short] MacOS (ARM): 0x611aa0
     * @note[short] MacOS (Intel): 0x700360
     * @note[short] Windows: 0x895e0
     * @note[short] Android
     */
    void checkLastCell(TableViewCell* cell);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void claimTouch(cocos2d::CCTouch* touch);

    /**
     * @note[short] MacOS (ARM): 0x6102cc
     * @note[short] MacOS (Intel): 0x6fe9c0
     * @note[short] Windows: 0x87a30
     * @note[short] Android
     */
    void deleteTableViewCell(TableViewCell* cell);

    /**
     * @note[short] MacOS (ARM): 0x610530
     * @note[short] MacOS (Intel): 0x6fec50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool dequeueReusableCellWithIdentifier(char const* identifier);

    /**
     * @note[short] MacOS (Intel): 0x6fe4d0
     * @note[short] Android
     */
    void initTableViewCells();

    /**
     * @note[short] MacOS (ARM): 0x60fce0
     * @note[short] MacOS (Intel): 0x6fe3a0
     * @note[short] Windows: 0x87990
     * @note[short] Android
     */
    bool isDuplicateIndexPath(CCIndexPath& path);

    /**
     * @note[short] MacOS (ARM): 0x60fc40
     * @note[short] MacOS (Intel): 0x6fe310
     * @note[short] Windows: 0x87900
     * @note[short] Android
     */
    bool isDuplicateInVisibleCellArray(CCIndexPath* path);

    /**
     * @note[short] MacOS (ARM): 0x6105d0
     * @note[short] MacOS (Intel): 0x6fecf0
     * @note[short] Windows: 0x87ce0
     * @note[short] iOS: 0x39b9c4
     * @note[short] Android
     */
    void reloadData();

    /**
     * @note[short] MacOS (ARM): 0x60fd84
     * @note[short] MacOS (Intel): 0x6fe430
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool removeIndexPathFromPathAddedArray(CCIndexPath& path);

    /**
     * @note[short] MacOS (ARM): 0x6105cc
     * @note[short] MacOS (Intel): 0x6fece0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void scrollToIndexPath(CCIndexPath& path);

    /**
     * @note[short] MacOS (ARM): 0x611514
     * @note[short] MacOS (Intel): 0x6ffda0
     * @note[short] Windows: 0x88790
     * @note[short] Android
     */
    void touchFinish(cocos2d::CCTouch* touch);
    bool m_scheduled;
    cocos2d::CCTouch* m_beginTouch;
    cocos2d::CCPoint m_beginLocation;
    cocos2d::CCPoint m_lastCellPos;
    cocos2d::CCPoint m_checkLocation;
    TableViewCell* m_touchedCell;
    bool m_touchMoved;
    bool m_isTouch;
    cocos2d::CCArray* m_cellArray;
    cocos2d::CCArray* m_cellRemovedArray;
    cocos2d::CCArray* m_indexPathArray;
    TableViewDelegate* m_tableDelegate;
    TableViewDataSource* m_dataSource;
    TableViewCellDelegate* m_cellDelegate;
    bool m_unused2;
    void* m_unused3;
    int m_unused4;
    float m_touchLastY;
    bool m_cancellingTouches;
    bool m_idk2;
};
