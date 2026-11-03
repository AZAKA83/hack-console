#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/binding/SelectSFXSortDelegate.hpp>
#include <Geode/binding/SetTextPopupDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/SFXFolderPickerDelegate.hpp>
#include <Geode/mapping/set.hpp>

class SFXBrowser : public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public SelectSFXSortDelegate, public SetTextPopupDelegate, public FLAlertLayerProtocol, public SFXFolderPickerDelegate {
public:
    static constexpr auto CLASS_NAME = "SFXBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXBrowser, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SFXBrowser();

    /**
     * @note[short] MacOS (Intel): 0x8b3120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f15c0
     * @note[short] Android: Rebinded
     */
     ~SFXBrowser();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SFXBrowser* create(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x3ab728
     * @note[short] MacOS (Intel): 0x435300
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x1f8464
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3ab71c
     * @note[short] MacOS (Intel): 0x4352d0
     * @note[short] Windows: 0x620a50
     * @note[short] iOS: 0x1f8458
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3a7eb8
     * @note[short] MacOS (Intel): 0x431230
     * @note[short] Windows: 0x619720
     * @note[short] iOS: 0x1f5888
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x3a7f80
     * @note[short] MacOS (Intel): 0x431330
     * @note[short] Windows: 0x6197c0
     * @note[short] iOS: 0x1f58b0
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x3aab54
     * @note[short] MacOS (Intel): 0x4344c0
     * @note[short] Windows: 0x61f260
     * @note[short] iOS: 0x1f7ab0
     * @note[short] Android
     */
    virtual void sortSelectClosed(SelectSFXSortLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x3aa2c0
     * @note[short] MacOS (Intel): 0x433ac0
     * @note[short] Windows: 0x61e530
     * @note[short] iOS: 0x1f7428
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* popup, std::string text);

    /**
     * @note[short] MacOS (ARM): 0x3aaf70
     * @note[short] MacOS (Intel): 0x4349b0
     * @note[short] Windows: 0x61f960
     * @note[short] iOS: 0x1f7da0
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x3ab6fc
     * @note[short] MacOS (Intel): 0x435290
     * @note[short] Windows: 0x6202c0
     * @note[short] iOS: 0x1f8438
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (ARM): 0x3ab70c
     * @note[short] MacOS (Intel): 0x4352b0
     * @note[short] Windows: 0x6202d0
     * @note[short] iOS: 0x1f8448
     * @note[short] Android
     */
    virtual bool shouldSnapToSelected();

    /**
     * @note[short] MacOS (ARM): 0x3aacf4
     * @note[short] MacOS (Intel): 0x4346e0
     * @note[short] Windows: 0x61f6b0
     * @note[short] iOS: 0x1f7c1c
     * @note[short] Android
     */
    virtual void rebuildContent();

    /**
     * @note[short] MacOS (ARM): 0x3a968c
     * @note[short] MacOS (Intel): 0x432cb0
     * @note[short] Windows: 0x61c260
     * @note[short] iOS: 0x1f69a4
     * @note[short] Android
     */
    virtual void sfxFolderPicked(SFXFolderPickerPopup* p0, int p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): 0x3a9d40
     * @note[short] MacOS (Intel): 0x433460
     * @note[short] Windows: 0x61d820
     * @note[short] iOS: 0x1f6f78
     * @note[short] Android
     */
    virtual void sfxFoldersPicked(SFXFolderPickerPopup* p0, std::set<int> const& p1);

    /**
     * @note[short] MacOS (ARM): 0x3aa73c
     * @note[short] MacOS (Intel): 0x433fd0
     * @note[short] Windows: 0x61eb30
     * @note[short] iOS: 0x1f77c0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x3aae48
     * @note[short] MacOS (Intel): 0x434860
     * @note[short] Windows: 0x61f7a0
     * @note[short] iOS: 0x1f7c88
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x3ab65c
     * @note[short] MacOS (Intel): 0x4351c0
     * @note[short] Windows: 0x620270
     * @note[short] iOS: 0x1f8398
     * @note[short] Android
     */
    virtual int getSelectedCellCustomIdx();

    /**
     * @note[short] MacOS (ARM): 0x3ab66c
     * @note[short] MacOS (Intel): 0x4351e0
     * @note[short] Windows: 0x3ff70
     * @note[short] iOS: 0x1f83a8
     * @note[short] Android
     */
    virtual bool allowsCustomSFXActions();

    /**
     * @note[short] MacOS (ARM): 0x3a9cd0
     * @note[short] MacOS (Intel): 0x4333e0
     * @note[short] Windows: 0x61cf00
     * @note[short] iOS: 0x1f6f10
     * @note[short] Android
     */
    virtual bool isCustomIDSelected(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3ab67c
     * @note[short] MacOS (Intel): 0x435200
     * @note[short] Windows: 0x620280
     * @note[short] iOS: 0x1f83b8
     * @note[short] Android
     */
    virtual bool inCustomSFXTree();

    /**
     * @note[short] MacOS (ARM): 0x3ab6bc
     * @note[short] MacOS (Intel): 0x435240
     * @note[short] Windows: 0x6202a0
     * @note[short] iOS: 0x1f83f8
     * @note[short] Android
     */
    virtual bool showsSFXInfoButton();

    /**
     * @note[short] Android
     */
    TodoReturn currentListScrollY();

    /**
     * @note[short] Android
     */
    TodoReturn executeBatchDelete();

    /**
     * @note[short] Android
     */
    TodoReturn fitFolderPath();

    /**
     * @note[short] Windows: 0x616760
     * @note[short] Android
     */
    bool init(int p0, int p1);

    /**
     * @note[short] Windows: 0x61c940
     * @note[short] Android
     */
    void onBatchDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x61eeb0
     * @note[short] Android
     */
    void onChangelog(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x61f760
     * @note[short] Android
     */
    void onClearSearchText(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x620830
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x620590
     * @note[short] Android
     */
    void onExitFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x61df90
     * @note[short] Android
     */
    void onExportFile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a64cc
     * @note[short] Windows: 0x61e1a0
     * @note[short] Android
     */
    void onImportFile(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x61cf40
     * @note[short] Android
     */
    void onImportSetup(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x61c120
     * @note[short] Android
     */
    void onMoveToFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x61bd50
     * @note[short] Android
     */
    void onNewFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a5174
     * @note[short] MacOS (Intel): 0x42e1f0
     * @note[short] Windows: 0x6202e0
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x61d400
     * @note[short] Android
     */
    void onReplaceSetup(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x61bee0
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x61f560
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x61d5c0
     * @note[short] Android
     */
    void onShareSetup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a5298
     * @note[short] MacOS (Intel): 0x42e300
     * @note[short] Windows: 0x61f210
     * @note[short] Android
     */
    void onSorting(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a52dc
     * @note[short] MacOS (Intel): 0x42e350
     * @note[short] Windows: 0x61f2a0
     * @note[short] Android
     */
    void onToggleCompactMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x61f340
     * @note[short] Android
     */
    void onToggleSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x61b360
     * @note[short] Android
     */
    void onToggleView(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a5238
     * @note[short] MacOS (Intel): 0x42e290
     * @note[short] Windows: 0x618920
     * @note[short] Android
     */
    void onUpdateLibrary(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshCustomList();

    /**
     * @note[short] Android
     */
    TodoReturn refreshLevelIDList(SFXSearchResult* p0);

    /**
     * @note[short] Android
     */
    TodoReturn restoreListScroll(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn searchSettingsChanged();

    /**
     * @note[short] Windows: 0x619900
     * @note[short] Android
     */
    void setupList(SFXSearchResult* result);

    /**
     * @note[short] Windows: 0x618a20
     * @note[short] Android
     */
    void setupSFXBrowser();

    /**
     * @note[short] Android
     */
    TodoReturn switchToView(AudioViewType p0);

    /**
     * @note[short] Windows: 0x6189a0
     * @note[short] Android
     */
    void trySetupSFXBrowser();

    /**
     * @note[short] MacOS (ARM): 0x3a8e98
     * @note[short] MacOS (Intel): 0x432480
     * @note[short] Windows: 0x6203b0
     * @note[short] Android
     */
    void updatePageLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateSelectionUI();

    /**
     * @note[short] Android
     */
    TodoReturn updateShareItem();

    /**
     * @note[short] Android
     */
    TodoReturn updateViewItems();
    SFXSearchResult* m_searchResult;
    cocos2d::CCArray* m_sfxObjects;
    GJCommentListLayer* m_listLayer;
    cocos2d::CCLabelBMFont* m_nameLabel;
    cocos2d::CCLabelBMFont* m_pathLabel;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_searchLabel;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_backButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    CCMenuItemSpriteExtra* m_clearSearchButton;
    LoadingCircleSprite* m_circleSprite;
    int m_sfxID;
    int m_libraryVersion;
    int m_cellAmount;
    bool m_gettingURL;
    bool m_selectedCell;
    bool m_snapToSelected;
    bool m_compactMode;
    AudioSortType m_sortType;
    SFXBrowserDelegate* m_delegate;
    bool m_autoUpdating;
};
