#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GJSongBrowser : public GJDropDownLayer, public FLAlertLayerProtocol, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "GJSongBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSongBrowser, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x3bd650
     * @note[short] iOS: 0x302d34
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSongBrowser();

    /**
     * @note[short] MacOS (ARM): 0x5ec3ac
     * @note[short] MacOS (Intel): 0x6d5740
     * @note[short] Windows: 0x3bd730
     * @note[short] Android
     */
    static GJSongBrowser* create();

    /**
     * @note[short] MacOS (ARM): 0x5ec698
     * @note[short] MacOS (Intel): 0x6d5b50
     * @note[short] Windows: 0x3bd880
     * @note[short] iOS: 0x302d6c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x5ec8d0
     * @note[short] MacOS (Intel): 0x6d5da0
     * @note[short] Windows: 0x3bd980
     * @note[short] iOS: 0x302ee0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x5ec89c
     * @note[short] MacOS (Intel): 0x6d5d70
     * @note[short] Windows: 0x3bd8c0
     * @note[short] iOS: 0x302eac
     * @note[short] Android
     */
    virtual void exitLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ecdf8
     * @note[short] MacOS (Intel): 0x6d6320
     * @note[short] Windows: 0x3be0a0
     * @note[short] iOS: 0x303414
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x5eceb4
     * @note[short] MacOS (Intel): 0x6d6400
     * @note[short] Windows: 0x3be240
     * @note[short] iOS: 0x3034d0
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x5ecf14
     * @note[short] MacOS (Intel): 0x6d6470
     * @note[short] Windows: 0x3be270
     * @note[short] iOS: 0x303530
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x5ecbf8
     * @note[short] MacOS (Intel): 0x6d6130
     * @note[short] Windows: 0x3bdf80
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ecbec
     * @note[short] MacOS (Intel): 0x6d6110
     * @note[short] Windows: 0x3bdf60
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ecbe0
     * @note[short] MacOS (Intel): 0x6d60f0
     * @note[short] Windows: 0x3bdf70
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ecd5c
     * @note[short] MacOS (Intel): 0x6d6290
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupPageInfo(int itemCount, int pageStartIdx, int pageEndIdx);

    /**
     * @note[short] MacOS (ARM): 0x5eccd4
     * @note[short] MacOS (Intel): 0x6d6200
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupSongBrowser(cocos2d::CCArray* songs);
    int m_page;
    int m_songID;
    bool m_selected;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    cocos2d::CCLabelBMFont* m_countText;
    cocos2d::CCPoint m_unk298;
    cocos2d::CCArray* m_downloadedSongs;
    CustomListView* m_listView;
};
