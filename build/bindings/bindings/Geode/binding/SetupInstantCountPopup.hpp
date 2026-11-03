#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupInstantCountPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInstantCountPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInstantCountPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5b7690
     * @note[short] iOS: 0x251a08
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupInstantCountPopup();

    /**
     * @note[short] MacOS (ARM): 0x5d4f0c
     * @note[short] MacOS (Intel): 0x6bbf00
     * @note[short] Windows: 0x5b7760
     * @note[short] Android
     */
    static SetupInstantCountPopup* create(CountTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5d5f44
     * @note[short] MacOS (Intel): 0x6bd0b0
     * @note[short] Windows: 0x5b85a0
     * @note[short] iOS: 0x2527e0
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x5d6434
     * @note[short] MacOS (Intel): 0x6bd6a0
     * @note[short] Windows: 0x5b8d70
     * @note[short] iOS: 0x252bbc
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d60e8
     * @note[short] MacOS (Intel): 0x6bd290
     * @note[short] Windows: 0x5b87e0
     * @note[short] iOS: 0x25297c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x5d5008
     * @note[short] MacOS (Intel): 0x6bc030
     * @note[short] Windows: 0x5b78a0
     * @note[short] Android
     */
    bool init(CountTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5d5e88
     * @note[short] MacOS (Intel): 0x6bcfd0
     * @note[short] Windows: 0x5b8ca0
     * @note[short] Android
     */
    void onCountType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d5e10
     * @note[short] MacOS (Intel): 0x6bcf40
     * @note[short] Windows: 0x5b8710
     * @note[short] Android
     */
    void onEnableGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d5a74
     * @note[short] MacOS (Intel): 0x6bcb60
     * @note[short] Windows: 0x5b87a0
     * @note[short] Android
     */
    void onTargetCountArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d5d0c
     * @note[short] MacOS (Intel): 0x6bce30
     * @note[short] Windows: 0x5b8b90
     * @note[short] Android
     */
    void updateCountTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x5d6328
     * @note[short] MacOS (Intel): 0x6bd540
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] MacOS (ARM): 0x5d5b04
     * @note[short] MacOS (Intel): 0x6bcc10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateItemIDInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x5d607c
     * @note[short] MacOS (Intel): 0x6bd210
     * @note[short] Windows: 0x5b8c10
     * @note[short] Android
     */
    void updateTargetCount();

    /**
     * @note[short] MacOS (ARM): 0x5d63a8
     * @note[short] MacOS (Intel): 0x6bd5e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x5d5c08
     * @note[short] MacOS (Intel): 0x6bcd20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateTargetIDInputLabel();
    CCTextInputNode* m_itemIDInput;
    CCTextInputNode* m_targetIDInput;
    CCTextInputNode* m_targetCountInput;
    int m_itemID;
    int m_targetID;
    int m_targetCount;
    bool m_activateGroup;
    int m_mode;
    CCMenuItemToggler* m_equalsToggler;
    CCMenuItemToggler* m_largerToggler;
    CCMenuItemToggler* m_smallerToggler;
};
