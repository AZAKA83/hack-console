#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupObjectOptions2Popup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectOptions2Popup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectOptions2Popup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupObjectOptions2Popup();

    /**
     * @note[short] Windows: 0x58e540
     * @note[short] iOS: 0x454ac
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupObjectOptions2Popup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupObjectOptions2Popup* create(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x299e0c
     * @note[short] MacOS (Intel): 0x3067e0
     * @note[short] Windows: 0x597d30
     * @note[short] iOS: 0x45838
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x597810
     * @note[short] Android
     */
    bool init(GameObject* object, cocos2d::CCArray* objects);
};
