#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/OnlineListDelegate.hpp>

class TopArtistsLayer : public FLAlertLayer, public OnlineListDelegate {
public:
    static constexpr auto CLASS_NAME = "TopArtistsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TopArtistsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TopArtistsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2395b0
     * @note[short] Android: Rebinded
     */
     ~TopArtistsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static TopArtistsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x28f9a0
     * @note[short] MacOS (Intel): 0x2fb2d0
     * @note[short] Windows: 0x66dfc0
     * @note[short] iOS: 0x2396b0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2902c8
     * @note[short] MacOS (Intel): 0x2fbc70
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x239ef8
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x29024c
     * @note[short] MacOS (Intel): 0x2fbc00
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x239e7c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x290e34
     * @note[short] MacOS (Intel): 0x2fc7b0
     * @note[short] Windows: 0x9eec0
     * @note[short] iOS: 0x23a53c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x290308
     * @note[short] MacOS (Intel): 0x2fbcc0
     * @note[short] Windows: 0x66e790
     * @note[short] iOS: 0x239f30
     * @note[short] Android
     */
    virtual void loadListFinished(cocos2d::CCArray* objects, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2903cc
     * @note[short] MacOS (Intel): 0x2fbd80
     * @note[short] Windows: 0x66e810
     * @note[short] iOS: 0x239f94
     * @note[short] Android
     */
    virtual void loadListFailed(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2903f4
     * @note[short] MacOS (Intel): 0x2fbdc0
     * @note[short] Windows: 0x66e970
     * @note[short] iOS: 0x239fbc
     * @note[short] Android
     */
    virtual void setupPageInfo(std::string info, char const* key);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool ownsTouchPrio();

    /**
     * @note[short] MacOS (ARM): 0x290300
     * @note[short] MacOS (Intel): 0x2fbcb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x290a68
     * @note[short] MacOS (Intel): 0x2fc3c0
     * @note[short] Windows: 0x66eb70
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x2900cc
     * @note[short] MacOS (Intel): 0x2fba50
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x290114
     * @note[short] MacOS (Intel): 0x2fbaa0
     * @note[short] Windows: 0x66f000
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x290108
     * @note[short] MacOS (Intel): 0x2fba80
     * @note[short] Windows: 0x66f010
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x290120
     * @note[short] MacOS (Intel): 0x2fbac0
     * @note[short] Windows: 0x66e820
     * @note[short] Android
     */
    void setupLeaderboard(cocos2d::CCArray* artists);

    /**
     * @note[short] MacOS (ARM): 0x2909e0
     * @note[short] MacOS (Intel): 0x2fc320
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateLevelsLabel();
    cocos2d::CCArray* m_topArtists;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_prevButton;
    void* m_unkPtr;
    cocos2d::CCLabelBMFont* m_pageInfoLabel;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_unkSize4;
    int m_page;
};
