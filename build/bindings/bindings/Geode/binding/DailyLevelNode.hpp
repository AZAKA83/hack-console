#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCPoint.hpp>

class DailyLevelNode : public cocos2d::CCNode, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "DailyLevelNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DailyLevelNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DailyLevelNode();

    /**
     * @note[short] MacOS (ARM): 0x1c6400
     * @note[short] MacOS (Intel): 0x216cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x250a84
     * @note[short] Android: Rebinded
     */
     ~DailyLevelNode();

    /**
     * @note[short] MacOS (ARM): 0x1c5d28
     * @note[short] MacOS (Intel): 0x216620
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static DailyLevelNode* create(GJGameLevel* level, DailyLevelPage* page, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x1c7400
     * @note[short] MacOS (Intel): 0x217c70
     * @note[short] Windows: 0x173c60
     * @note[short] iOS: 0x251878
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1c6518
     * @note[short] MacOS (Intel): 0x216e40
     * @note[short] Windows: 0x172b80
     * @note[short] Android
     */
    bool init(GJGameLevel* level, DailyLevelPage* page, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x1c7114
     * @note[short] MacOS (Intel): 0x2179b0
     * @note[short] Windows: 0x1738f0
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c7218
     * @note[short] MacOS (Intel): 0x217ab0
     * @note[short] Windows: 0x173a20
     * @note[short] Android
     */
    void onSkipLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c58b8
     * @note[short] MacOS (Intel): 0x216190
     * @note[short] Windows: 0x173890
     * @note[short] Android
     */
    void showSkipButton();

    /**
     * @note[short] MacOS (ARM): 0x1c575c
     * @note[short] MacOS (Intel): 0x216020
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateTimeLabel(std::string text);
    GJGameLevel* m_level;
    DailyLevelPage* m_page;
    cocos2d::CCLabelBMFont* m_timeLabel;
    cocos2d::CCPoint m_unkPoint;
    CCMenuItemSpriteExtra* m_skipButton;
    bool m_unkBool;
    bool m_needsDownloading;
};
