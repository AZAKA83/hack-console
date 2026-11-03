#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class AchievementsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "AchievementsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AchievementsLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     AchievementsLayer();

    /**
     * @note[short] Windows: 0x97620
     * @note[short] iOS: 0x4a4294
     * @note[short] Android: Rebinded
     */
    virtual  ~AchievementsLayer();

    /**
     * @note[short] MacOS (ARM): 0x2eb688
     * @note[short] MacOS (Intel): 0x35c580
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AchievementsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x2ebba0
     * @note[short] MacOS (Intel): 0x35cb30
     * @note[short] Windows: 0x97980
     * @note[short] iOS: 0x4a48d0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x2eb744
     * @note[short] MacOS (Intel): 0x35c670
     * @note[short] Windows: 0x976c0
     * @note[short] iOS: 0x4a42cc
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x2eb9d0
     * @note[short] MacOS (Intel): 0x35c950
     * @note[short] Windows: 0x97a20
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x2eb9c4
     * @note[short] MacOS (Intel): 0x35c930
     * @note[short] Windows: 0x97c10
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2eb9b8
     * @note[short] MacOS (Intel): 0x35c910
     * @note[short] Windows: 0x97c20
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ebd04
     * @note[short] MacOS (Intel): 0x35cc60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* arr);

    /**
     * @note[short] MacOS (ARM): 0x2ebd8c
     * @note[short] MacOS (Intel): 0x35cce0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupPageInfo(int itemCount, int pageStartIdx, int pageEndIdx);
    int m_currentPage;
    CCMenuItemSpriteExtra* m_nextPageButton;
    CCMenuItemSpriteExtra* m_prevPageButton;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCPoint m_unkPoint;
};
