#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class DemonInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DemonInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DemonInfoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x1ae6b0
     * @note[short] MacOS (Intel): 0x1fd040
     * @note[short] Windows: 0x5a3f0
     * @note[short] Android: Rebinded
     */
     ~DemonInfoPopup();

    /**
     * @note[short] MacOS (ARM): 0x79a724
     * @note[short] Windows: 0x55ae80
     * @note[short] Android
     */
    static DemonInfoPopup* create(int easyClassic, int mediumClassic, int hardClassic, int insaneClassic, int extremeClassic, int easyPlatformer, int mediumPlatformer, int hardPlatformer, int insanePlatformer, int extremePlatformer, int weekly, int gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x79778c
     * @note[short] MacOS (Intel): 0x8a4cf0
     * @note[short] Windows: 0x55aa80
     * @note[short] Android
     */
    static DemonInfoPopup* createFromString(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x79b268
     * @note[short] MacOS (Intel): 0x8a87f0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x231ee8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x79a8f4
     * @note[short] MacOS (Intel): 0x8a7e60
     * @note[short] Windows: 0x55aff0
     * @note[short] Android
     */
    bool init(int easyClassic, int mediumClassic, int hardClassic, int insaneClassic, int extremeClassic, int easyPlatformer, int mediumPlatformer, int hardPlatformer, int insanePlatformer, int extremePlatformer, int weekly, int gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x79b22c
     * @note[short] MacOS (Intel): 0x8a87c0
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
};
