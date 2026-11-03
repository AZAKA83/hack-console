#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupSequenceTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSequenceTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSequenceTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5d8370
     * @note[short] iOS: 0x26a460
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupSequenceTriggerPopup();

    /**
     * @note[short] Windows: 0x5d8460
     * @note[short] Android
     */
    static SetupSequenceTriggerPopup* create(SequenceTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x43a6fc
     * @note[short] MacOS (Intel): 0x4d9c60
     * @note[short] Windows: 0x5d98e0
     * @note[short] iOS: 0x26b5b4
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5d8590
     * @note[short] Android
     */
    bool init(SequenceTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x43a1f0
     * @note[short] MacOS (Intel): 0x4d9780
     * @note[short] Android
     */
    void onAddChance(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x43a30c
     * @note[short] MacOS (Intel): 0x4d9870
     * @note[short] Windows: 0x5da010
     * @note[short] Android
     */
    void onChangeOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x43a2c0
     * @note[short] MacOS (Intel): 0x4d9820
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x43a7dc
     * @note[short] MacOS (Intel): 0x4d9d60
     * @note[short] Windows: 0x5d9e90
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x9c3a0
     * @note[short] MacOS (Intel): 0x4d9910
     * @note[short] Windows: 0x5d99d0
     * @note[short] Android
     */
    void updateGroupIDButtons();
    CCMenuItemSpriteExtra* m_selectedButton;
    bool m_unk3b0;
    bool m_unk3b1;
    cocos2d::CCArray* m_groupButtons;
    int m_unk3c0;
    bool m_unk3c4;
};
