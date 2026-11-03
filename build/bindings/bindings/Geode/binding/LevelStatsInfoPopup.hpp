#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class LevelStatsInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "LevelStatsInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelStatsInfoPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5a3f0
     * @note[short] iOS: 0x1c65ac
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelStatsInfoPopup();

    /**
     * @note[short] MacOS (ARM): 0x808820
     * @note[short] MacOS (Intel): 0x925de0
     * @note[short] Windows: 0x4267b0
     * @note[short] Android
     */
    static LevelStatsInfoPopup* create(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x80a364
     * @note[short] MacOS (Intel): 0x927c80
     * @note[short] Windows: 0x4281a0
     * @note[short] iOS: 0x4f3b50
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x427250
     * @note[short] Android
     */
    std::string buildInfoText();

    /**
     * @note[short] Windows: 0x426da0
     * @note[short] Android
     */
    TodoReturn buildStatsText();

    /**
     * @note[short] Android
     */
    TodoReturn decodeProgress(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x8089a8
     * @note[short] MacOS (Intel): 0x926000
     * @note[short] Windows: 0x426920
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x428190
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x428170
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x428180
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x427e30
     * @note[short] Android
     */
    TodoReturn updatePage();
};
