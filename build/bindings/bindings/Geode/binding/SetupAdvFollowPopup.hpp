#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/SelectPremadeDelegate.hpp>

class SetupAdvFollowPopup : public SetupTriggerPopup, public SelectPremadeDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAdvFollowPopup();

    /**
     * @note[short] Windows: 0x5993e0
     * @note[short] Android
     */
    static SetupAdvFollowPopup* create(AdvancedFollowTriggerObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x289b1c
     * @note[short] MacOS (Intel): 0x2f4a50
     * @note[short] Windows: 0x39a390
     * @note[short] iOS: 0x6bf70
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x289124
     * @note[short] MacOS (Intel): 0x2f3ff0
     * @note[short] Windows: 0x59cb00
     * @note[short] iOS: 0x6b7d4
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x2892c4
     * @note[short] MacOS (Intel): 0x2f4130
     * @note[short] Windows: 0x59cbf0
     * @note[short] iOS: 0x6b934
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x289548
     * @note[short] MacOS (Intel): 0x2f43a0
     * @note[short] Windows: 0x59cf30
     * @note[short] iOS: 0x6bb14
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x289878
     * @note[short] MacOS (Intel): 0x2f4770
     * @note[short] Windows: 0x59d1f0
     * @note[short] iOS: 0x6bcdc
     * @note[short] Android
     */
    virtual void selectPremadeClosed(SelectPremadeLayer* layer, int type);

    /**
     * @note[short] Windows: 0x599500
     * @note[short] Android
     */
    bool init(AdvancedFollowTriggerObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x59cfe0
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x2f3fc0
     * @note[short] Windows: 0x59d0b0
     * @note[short] Android
     */
    void onPremade(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x59d010
     * @note[short] Android
     */
    void updateMode(int mode);
};
