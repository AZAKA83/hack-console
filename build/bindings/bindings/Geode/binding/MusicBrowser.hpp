#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/SliderDelegate.hpp>
#include <Geode/binding/SelectSFXSortDelegate.hpp>

class MusicBrowser : public FLAlertLayer, public MusicDownloadDelegate, public TableViewCellDelegate, public FLAlertLayerProtocol, public SliderDelegate, public SelectSFXSortDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MusicBrowser, FLAlertLayer)

    /**
     * @note[short] Windows: 0x479ee0
     * @note[short] iOS: 0x467b20
     * @note[short] Android: Rebinded
     */
    virtual  ~MusicBrowser();

    /**
     * @note[short] Windows: 0x47a140
     * @note[short] Android
     */
    static MusicBrowser* create(int songID, GJSongType songType);

    /**
     * @note[short] MacOS (ARM): 0x5fcdcc
     * @note[short] MacOS (Intel): 0x6e91e0
     * @note[short] Windows: 0x47baf0
     * @note[short] iOS: 0x469760
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x5fe7f4
     * @note[short] MacOS (Intel): 0x6eafe0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x46acf8
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x5fe7e8
     * @note[short] MacOS (Intel): 0x6eafb0
     * @note[short] Windows: 0x47e350
     * @note[short] iOS: 0x46acec
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5fdd28
     * @note[short] MacOS (Intel): 0x6ea280
     * @note[short] Windows: 0x47c860
     * @note[short] iOS: 0x46a444
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x5fddf0
     * @note[short] MacOS (Intel): 0x6ea380
     * @note[short] Windows: 0x47c900
     * @note[short] iOS: 0x46a46c
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x5fd200
     * @note[short] MacOS (Intel): 0x6e9640
     * @note[short] Windows: 0x47c160
     * @note[short] iOS: 0x469b90
     * @note[short] Android
     */
    virtual void sliderEnded(Slider* slider);

    /**
     * @note[short] MacOS (ARM): 0x5fe170
     * @note[short] MacOS (Intel): 0x6ea720
     * @note[short] Windows: 0x47d2d0
     * @note[short] iOS: 0x46a7a4
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x5fe210
     * @note[short] MacOS (Intel): 0x6ea7c0
     * @note[short] Windows: 0x47d470
     * @note[short] iOS: 0x46a7fc
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (ARM): 0x5fe720
     * @note[short] MacOS (Intel): 0x6eada0
     * @note[short] Windows: 0x47df90
     * @note[short] iOS: 0x46ac08
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x5fe220
     * @note[short] MacOS (Intel): 0x6ea7e0
     * @note[short] Windows: 0x47d780
     * @note[short] iOS: 0x46a80c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x5fe674
     * @note[short] MacOS (Intel): 0x6ead00
     * @note[short] Windows: 0x47df40
     * @note[short] iOS: 0x46aba8
     * @note[short] Android
     */
    virtual void sortSelectClosed(SelectSFXSortLayer* p0);

    /**
     * @note[short] MacOS (Intel): 0x42bfb0
     * @note[short] Windows: 0x47a340
     * @note[short] Android
     */
    bool init(int songID, GJSongType songType);

    /**
     * @note[short] Windows: 0x47db80
     * @note[short] Android
     */
    void onArtistFilters(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x47dc60
     * @note[short] Android
     */
    void onChangelog(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x47d740
     * @note[short] Android
     */
    void onClearSearchText(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x47dff0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5fc518
     * @note[short] MacOS (Intel): 0x6e8930
     * @note[short] Windows: 0x47d480
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5fcf14
     * @note[short] MacOS (Intel): 0x6e9330
     * @note[short] Windows: 0x47c100
     * @note[short] Android
     */
    void onPlaybackControl(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x47dee0
     * @note[short] Android
     */
    void onSorting(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x23e220
     * @note[short] Windows: 0x47d940
     * @note[short] Android
     */
    void onTagFilters(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x47d530
     * @note[short] Android
     */
    void onToggleSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x47d190
     * @note[short] Android
     */
    void onToggleView(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x47c280
     * @note[short] Android
     */
    void onUpdateLibrary(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshLevelIDList();

    /**
     * @note[short] MacOS (ARM): 0x5fd720
     * @note[short] MacOS (Intel): 0x6e9bc0
     * @note[short] Windows: 0x47ca30
     * @note[short] Android
     */
    void setupList(MusicSearchResult* result);

    /**
     * @note[short] MacOS (ARM): 0x504ba0
     * @note[short] Windows: 0x47c380
     * @note[short] Android
     */
    void setupMusicBrowser();

    /**
     * @note[short] Windows: 0x47be00
     * @note[short] Android
     */
    void setupSongControls();

    /**
     * @note[short] MacOS (ARM): 0x5fcf0c
     * @note[short] MacOS (Intel): 0x6e9320
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a6b60
     * @note[short] MacOS (Intel): 0x42fc50
     * @note[short] Windows: 0x47c300
     * @note[short] Android
     */
    void trySetupMusicBrowser();

    /**
     * @note[short] MacOS (ARM): 0x5fdfbc
     * @note[short] MacOS (Intel): 0x6ea580
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updatePageLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateSongControlLayout();

    /**
     * @note[short] Android
     */
    TodoReturn updateViewItems();
    GJSongType m_songType;
    MusicSearchResult* m_searchResult;
    GJCommentListLayer* m_listLayer;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCLabelBMFont* m_pageLabel;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    CCMenuItemSpriteExtra* m_searchButton;
    CCTextInputNode* m_searchInput;
    cocos2d::extension::CCScale9Sprite* m_searchBackground;
    CCMenuItemSpriteExtra* m_clearSearchButton;
    bool m_searching;
    cocos2d::CCSprite* m_ncsSprite;
    CCMenuItemSpriteExtra* m_tagFilterButton;
    CCMenuItemSpriteExtra* m_artistFilterButton;
    CCMenuItemSpriteExtra* m_favoriteFilterButton;
    CCMenuItemSpriteExtra* m_recentFilterButton;
    CCMenuItemSpriteExtra* m_createdFilterButton;
    LoadingCircleSprite* m_circleSprite;
    int m_songID;
    int m_libraryVersion;
    bool m_gettingURL;
    bool m_selectedCell;
    MusicBrowserDelegate* m_delegate;
    Slider* m_playSlider;
    cocos2d::CCLabelBMFont* m_playLabel;
    CCMenuItemSpriteExtra* m_playButton;
    bool m_autoUpdating;
};
