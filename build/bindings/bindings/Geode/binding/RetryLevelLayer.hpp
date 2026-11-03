#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/binding/RewardedVideoDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class RetryLevelLayer : public GJDropDownLayer, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "RetryLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RetryLevelLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RetryLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x4543f8
     * @note[short] MacOS (Intel): 0x4f7300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x247ee8
     * @note[short] Android: Rebinded
     */
     ~RetryLevelLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static RetryLevelLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x455604
     * @note[short] MacOS (Intel): 0x4f8640
     * @note[short] Windows: 0x5617d0
     * @note[short] iOS: 0x248a24
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x455568
     * @note[short] MacOS (Intel): 0x4f8570
     * @note[short] Windows: 0x561660
     * @note[short] iOS: 0x2489d8
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x454660
     * @note[short] MacOS (Intel): 0x4f7610
     * @note[short] Windows: 0x5609b0
     * @note[short] iOS: 0x247f20
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x45505c
     * @note[short] MacOS (Intel): 0x4f8030
     * @note[short] Windows: 0x561410
     * @note[short] iOS: 0x248884
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x45516c
     * @note[short] MacOS (Intel): 0x4f8130
     * @note[short] Windows: 0x561530
     * @note[short] iOS: 0x24898c
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x455558
     * @note[short] MacOS (Intel): 0x4f8550
     * @note[short] Windows: 0x561580
     * @note[short] iOS: 0x2489c8
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool shouldOffsetRewardCurrency();

    /**
     * @note[short] MacOS (ARM): 0x4555fc
     * @note[short] MacOS (Intel): 0x4f8620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x248a1c
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x455000
     * @note[short] MacOS (Intel): 0x4f7fe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getEndText();

    /**
     * @note[short] MacOS (ARM): 0x4551a8
     * @note[short] MacOS (Intel): 0x4f8160
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4551ac
     * @note[short] MacOS (Intel): 0x4f8170
     * @note[short] Android
     */
    void onFullVersion(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x454f44
     * @note[short] MacOS (Intel): 0x4f7f40
     * @note[short] Windows: 0x5616b0
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x454ef0
     * @note[short] MacOS (Intel): 0x4f7ef0
     * @note[short] Windows: 0x561590
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4551d0
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x561150
     * @note[short] Android
     */
    void setupLastProgress();
    cocos2d::CCMenu* m_mainMenu;
    bool m_exitingMenu;
    bool m_unk1e9;
};
