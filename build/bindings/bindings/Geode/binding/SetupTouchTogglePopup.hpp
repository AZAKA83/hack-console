#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupTouchTogglePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTouchTogglePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTouchTogglePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5f9cc0
     * @note[short] iOS: 0x2e84e4
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupTouchTogglePopup();

    /**
     * @note[short] Windows: 0x5f9d90
     * @note[short] Android
     */
    static SetupTouchTogglePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x249a54
     * @note[short] MacOS (Intel): 0x2a7810
     * @note[short] Windows: 0x5fa8a0
     * @note[short] iOS: 0x2e8f98
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x249d10
     * @note[short] MacOS (Intel): 0x2a7b50
     * @note[short] Windows: 0x5fae70
     * @note[short] iOS: 0x2e91d8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x249b98
     * @note[short] MacOS (Intel): 0x2a7990
     * @note[short] Windows: 0x5facb0
     * @note[short] iOS: 0x2e90b8
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2204cc
     * @note[short] Windows: 0x5f9ee0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2499a8
     * @note[short] MacOS (Intel): 0x2a7740
     * @note[short] Windows: 0x5fabf0
     * @note[short] Android
     */
    void onControlMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x2a76b0
     * @note[short] Windows: 0x5faa90
     * @note[short] Android
     */
    void onDualTouchMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x2a7550
     * @note[short] Windows: 0x5faa00
     * @note[short] Android
     */
    void onHoldMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x249878
     * @note[short] MacOS (Intel): 0x2a75e0
     * @note[short] Windows: 0x5fab20
     * @note[short] Android
     */
    void onTouchMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_groupIDInput;
    int m_groupID;
    bool m_holdMode;
    int m_toggleMode;
    int m_playerMode;
    CCMenuItemToggler* m_toggleOnToggler;
    CCMenuItemToggler* m_toggleOffToggler;
    bool m_dualMode;
    CCMenuItemToggler* m_p1OnlyToggler;
    CCMenuItemToggler* m_p2OnlyToggler;
};
