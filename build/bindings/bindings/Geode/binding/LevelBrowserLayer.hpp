#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/binding/LevelManagerDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/SetIDPopupDelegate.hpp>
#include <Geode/binding/SetTextPopupDelegate.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/binding/ShareCommentDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class LevelBrowserLayer : public cocos2d::CCLayerColor, public LevelManagerDelegate, public FLAlertLayerProtocol, public SetIDPopupDelegate, public SetTextPopupDelegate, public TableViewCellDelegate, public ShareCommentDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelBrowserLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelBrowserLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x3e1b10
     * @note[short] iOS: 0x2e70b0
     * @note[short] Android: Out of line
     */
     LevelBrowserLayer();

    /**
     * @note[short] MacOS (Intel): 0x480220
     * @note[short] Windows: 0x3e1d20
     * @note[short] iOS: 0x494eec
     * @note[short] Android: Rebinded
     */
     ~LevelBrowserLayer();

    /**
     * @note[short] MacOS (ARM): 0x3ea424
     * @note[short] MacOS (Intel): 0x4804a0
     * @note[short] Windows: 0x3e1f90
     * @note[short] iOS: 0x494f70
     * @note[short] Android
     */
    static LevelBrowserLayer* create(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3ea3d8
     * @note[short] MacOS (Intel): 0x480460
     * @note[short] Windows: 0x3e1f40
     * @note[short] iOS: 0x494f24
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3f1e3c
     * @note[short] MacOS (Intel): 0x4885d0
     * @note[short] Windows: 0x3eaa60
     * @note[short] iOS: 0x49b344
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x3f248c
     * @note[short] MacOS (Intel): 0x488bb0
     * @note[short] Windows: 0x3533a0
     * @note[short] iOS: 0x49b838
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] MacOS (ARM): 0x3f255c
     * @note[short] MacOS (Intel): 0x488c90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49b90c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3f257c
     * @note[short] MacOS (Intel): 0x488cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49b92c
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3f256c
     * @note[short] MacOS (Intel): 0x488cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49b91c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3f2574
     * @note[short] MacOS (Intel): 0x488cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49b924
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3f2490
     * @note[short] MacOS (Intel): 0x488bc0
     * @note[short] Windows: 0x3eb5d0
     * @note[short] iOS: 0x49b83c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3f0b9c
     * @note[short] MacOS (Intel): 0x487290
     * @note[short] Windows: 0x3e6ce0
     * @note[short] iOS: 0x49a430
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3f0bc0
     * @note[short] MacOS (Intel): 0x4872d0
     * @note[short] Windows: 0x3e6d00
     * @note[short] iOS: 0x49a454
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3f0068
     * @note[short] MacOS (Intel): 0x486700
     * @note[short] Windows: 0x3e6010
     * @note[short] iOS: 0x499d48
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x3f01f0
     * @note[short] MacOS (Intel): 0x4868e0
     * @note[short] Windows: 0x3e6160
     * @note[short] iOS: 0x499e70
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x3f02dc
     * @note[short] MacOS (Intel): 0x4869c0
     * @note[short] Windows: 0x3e61b0
     * @note[short] iOS: 0x499eec
     * @note[short] Android
     */
    virtual void setupPageInfo(std::string info, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x3f0ae8
     * @note[short] MacOS (Intel): 0x4871e0
     * @note[short] Windows: 0x3e6c50
     * @note[short] iOS: 0x49a3b8
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f0f00
     * @note[short] MacOS (Intel): 0x4875e0
     * @note[short] Windows: 0x3e8300
     * @note[short] iOS: 0x49a72c
     * @note[short] Android
     */
    virtual void shareCommentClosed(std::string text, ShareCommentLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x3f0fcc
     * @note[short] MacOS (Intel): 0x4876c0
     * @note[short] Windows: 0x3e9100
     * @note[short] iOS: 0x49a798
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* popup, std::string text);

    /**
     * @note[short] MacOS (ARM): 0x3f17cc
     * @note[short] MacOS (Intel): 0x487e90
     * @note[short] Windows: 0x3ea2a0
     * @note[short] iOS: 0x49adc4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3f09c8
     * @note[short] MacOS (Intel): 0x487080
     * @note[short] Windows: 0x3e66b0
     * @note[short] iOS: 0x49a2a4
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] MacOS (ARM): 0x3f2584
     * @note[short] MacOS (Intel): 0x488d10
     * @note[short] Windows: 0x3e1cd0
     * @note[short] iOS: 0x49b934
     * @note[short] Android
     */
    virtual cocos2d::CCArray* updateResultArray(cocos2d::CCArray* results);

    /**
     * @note[short] MacOS (ARM): 0x3f1eec
     * @note[short] MacOS (Intel): 0x488650
     * @note[short] Windows: 0x3eab00
     * @note[short] iOS: 0x49b3d4
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] Windows: 0x3eb250
     * @note[short] Android
     */
    TodoReturn claimRecallChest(LevelCell* p0);

    /**
     * @note[short] MacOS (ARM): 0x3f0e88
     * @note[short] MacOS (Intel): 0x487570
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createNewLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f0d14
     * @note[short] MacOS (Intel): 0x487450
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createNewList(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f0cac
     * @note[short] MacOS (Intel): 0x4873f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createNewSmartTemplate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ec948
     * @note[short] MacOS (Intel): 0x482bc0
     * @note[short] Windows: 0x3e9e30
     * @note[short] Android
     */
    void deleteSelected();

    /**
     * @note[short] MacOS (ARM): 0x3f0b58
     * @note[short] MacOS (Intel): 0x487250
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void exitLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ef444
     * @note[short] MacOS (Intel): 0x485900
     * @note[short] Android
     */
    cocos2d::CCArray* getItemsMatchingSearch(cocos2d::CCArray* items, std::string query, GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3efaa0
     * @note[short] MacOS (Intel): 0x485fb0
     * @note[short] Windows: 0x3e5750
     * @note[short] Android
     */
    std::string getSearchTitle();

    /**
     * @note[short] MacOS (ARM): 0x3ea564
     * @note[short] MacOS (Intel): 0x480690
     * @note[short] Windows: 0x3e2000
     * @note[short] iOS: 0x494fe4
     * @note[short] Android
     */
    bool init(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3ef28c
     * @note[short] MacOS (Intel): 0x485730
     * @note[short] Windows: 0x3e4090
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] Android
     */
    bool isSafeType();

    /**
     * @note[short] Android
     */
    bool isVaultType();

    /**
     * @note[short] MacOS (ARM): 0x3ee2a8
     * @note[short] Windows: 0x3e4290
     * @note[short] Android
     */
    void loadPage(GJSearchObject* object);

    /**
     * @note[short] Android
     */
    void onBackups(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ee22c
     * @note[short] MacOS (Intel): 0x484430
     * @note[short] Windows: 0x3e8db0
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ed2cc
     * @note[short] MacOS (Intel): 0x483540
     * @note[short] Windows: 0x3e87b0
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onExportSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e85f0
     * @note[short] Android
     */
    void onFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ede5c
     * @note[short] MacOS (Intel): 0x484050
     * @note[short] Windows: 0x3e65f0
     * @note[short] Android
     */
    void onGoToFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e6450
     * @note[short] Android
     */
    void onGoToLastPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ec6ec
     * @note[short] MacOS (Intel): 0x482970
     * @note[short] Windows: 0x3e64d0
     * @note[short] Android
     */
    void onGoToPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f0ca8
     * @note[short] MacOS (Intel): 0x4873e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e9ae0
     * @note[short] Android
     */
    void onImportLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ed800
     * @note[short] MacOS (Intel): 0x483a40
     * @note[short] Windows: 0x3e6da0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ed08c
     * @note[short] Android
     */
    void onLevelsImported(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ed094
     * @note[short] MacOS (Intel): 0x483330
     * @note[short] Windows: 0x3e8220
     * @note[short] Android
     */
    void onLocalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ecd78
     * @note[short] MacOS (Intel): 0x240e20
     * @note[short] Windows: 0x3e8420
     * @note[short] Android
     */
    void onMyOnlineLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ecc7c
     * @note[short] MacOS (Intel): 0x482f20
     * @note[short] Windows: 0x3e7d60
     * @note[short] Android
     */
    void onNew(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e6bd0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e9560
     * @note[short] Android
     */
    void onProcessSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ed6cc
     * @note[short] MacOS (Intel): 0x483920
     * @note[short] Windows: 0x3e8c50
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ed16c
     * @note[short] MacOS (Intel): 0x483400
     * @note[short] Windows: 0x3e8950
     * @note[short] Android
     */
    void onRemoveAllFavorites(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSafeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3e86d0
     * @note[short] Android
     */
    void onSaved(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ed3c4
     * @note[short] MacOS (Intel): 0x483610
     * @note[short] Windows: 0x3e8140
     * @note[short] Android
     */
    void onSavedMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3edf64
     * @note[short] Windows: 0x3e8e50
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectionChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn recallCell(int p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void reloadAllObjects();

    /**
     * @note[short] Android
     */
    TodoReturn reloadPageRows();

    /**
     * @note[short] Android
     */
    TodoReturn safeSearchObject(GJTimedLevelType p0);

    /**
     * @note[short] Android
     */
    int selectedCount();

    /**
     * @note[short] MacOS (ARM): 0xa0e9c
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setSearchObject(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3ef800
     * @note[short] MacOS (Intel): 0x485cc0
     * @note[short] Windows: 0x3e5440
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* items);

    /**
     * @note[short] MacOS (ARM): 0x3f24d8
     * @note[short] MacOS (Intel): 0x488c10
     * @note[short] Windows: 0x3eb640
     * @note[short] Android
     */
    void show();

    /**
     * @note[short] Windows: 0x3e97c0
     * @note[short] Android
     */
    TodoReturn showExportResult(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3f12e0
     * @note[short] Windows: 0x3e9b20
     * @note[short] Android
     */
    void showImportResult(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateBackgroundColor();

    /**
     * @note[short] MacOS (ARM): 0x3f0930
     * @note[short] MacOS (Intel): 0x486fe0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] MacOS (ARM): 0x3ec5e0
     * @note[short] MacOS (Intel): 0x482850
     * @note[short] Windows: 0x3e6a20
     * @note[short] Android
     */
    void updatePageLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateSelectUI();
    bool m_unk;
    bool m_allSelected;
    TextArea* m_noInternet;
    GJListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_lastBtn;
    CCMenuItemSpriteExtra* m_cancelSearchBtn;
    CCMenuItemSpriteExtra* m_refreshBtn;
    cocos2d::CCArray* m_levels;
    GJSearchObject* m_searchObject;
    cocos2d::CCLabelBMFont* m_countText;
    cocos2d::CCLabelBMFont* m_pageText;
    CCMenuItemSpriteExtra* m_pageBtn;
    cocos2d::CCLabelBMFont* m_folderText;
    CCMenuItemSpriteExtra* m_folderBtn;
    CCMenuItemToggler* m_allObjectsToggler;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    LoadingCircle* m_circle;
    int m_lastPage;
    bool m_isOverlay;
    cocos2d::CCScene* m_scene;
    int m_zOffset;
    bool m_unk2;
    int m_listHeight;
    float m_unkFloat;
    float m_initialListViewY;
    TableViewCellDelegate* m_delegate;
    bool m_cached;
    cocos2d::CCSprite* m_background;
    cocos2d::CCNode* m_safeModeNode;
    void* m_unk330;
    void* m_unk338;
    GJGameLevel* m_recalledLevel;
};
