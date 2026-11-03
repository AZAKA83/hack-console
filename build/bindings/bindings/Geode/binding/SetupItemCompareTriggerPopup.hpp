#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupItemCompareTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupItemCompareTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupItemCompareTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupItemCompareTriggerPopup();

    /**
     * @note[short] Windows: 0x603870
     * @note[short] Android
     */
    static SetupItemCompareTriggerPopup* create(ItemTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4fd2b4
     * @note[short] MacOS (Intel): 0x5af450
     * @note[short] Windows: 0x605dc0
     * @note[short] iOS: 0x48fa68
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x4fd128
     * @note[short] MacOS (Intel): 0x5af2a0
     * @note[short] Windows: 0x605160
     * @note[short] iOS: 0x48f8e8
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4fb350
     * @note[short] Windows: 0x6039a0
     * @note[short] Android
     */
    bool init(ItemTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4fc3cc
     * @note[short] MacOS (Intel): 0x5ae630
     * @note[short] Windows: 0x604d50
     * @note[short] Android
     */
    void onOpButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4fc710
     * @note[short] MacOS (Intel): 0x5ae950
     * @note[short] Windows: 0x6053a0
     * @note[short] Android
     */
    void updateFormulaLabel();

    /**
     * @note[short] MacOS (ARM): 0x4fc488
     * @note[short] MacOS (Intel): 0x5ae6f0
     * @note[short] Windows: 0x604e30
     * @note[short] Android
     */
    void updateOpButton(CCMenuItemSpriteExtra* button, int key, int objectID);
    cocos2d::CCLabelBMFont* m_formulaLabel;
};
