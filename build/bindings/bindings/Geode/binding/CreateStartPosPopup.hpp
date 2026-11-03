#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class CreateStartPosPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "CreateStartPosPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateStartPosPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x348f40
     * @note[short] MacOS (Intel): 0x3c45b0
     * @note[short] Windows: 0x4d6750
     * @note[short] iOS: 0x1c1cfc
     * @note[short] Android: Rebinded
     */
    virtual  ~CreateStartPosPopup();

    /**
     * @note[short] MacOS (ARM): 0x346c08
     * @note[short] MacOS (Intel): 0x3c1ea0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CreateStartPosPopup* create();

    /**
     * @note[short] MacOS (ARM): 0x348f6c
     * @note[short] MacOS (Intel): 0x3c4630
     * @note[short] Windows: 0x4dc3c0
     * @note[short] iOS: 0x1c1d34
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x349780
     * @note[short] MacOS (Intel): 0x3c4e80
     * @note[short] Windows: 0x4dd000
     * @note[short] iOS: 0x1c2374
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x349770
     * @note[short] MacOS (Intel): 0x3c4e60
     * @note[short] Windows: 0x4dc940
     * @note[short] iOS: 0x1c2364
     * @note[short] Android
     */
    virtual void updateInputNode(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x349568
     * @note[short] MacOS (Intel): 0x3c4c00
     * @note[short] Windows: 0x4dc950
     * @note[short] Android
     */
    void onCreate(cocos2d::CCObject* sender);
};
