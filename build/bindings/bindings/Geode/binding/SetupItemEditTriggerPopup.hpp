#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupItemEditTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupItemEditTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupItemEditTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupItemEditTriggerPopup();

    /**
     * @note[short] Windows: 0x600e90
     * @note[short] Android
     */
    static SetupItemEditTriggerPopup* create(ItemTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4fb22c
     * @note[short] MacOS (Intel): 0x5ad230
     * @note[short] Windows: 0x603840
     * @note[short] iOS: 0x48dfbc
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x4fb014
     * @note[short] MacOS (Intel): 0x5acfe0
     * @note[short] Windows: 0x603540
     * @note[short] iOS: 0x48ddbc
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4f8d58
     * @note[short] Windows: 0x600fc0
     * @note[short] Android
     */
    bool init(ItemTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4f9d14
     * @note[short] MacOS (Intel): 0x5abe00
     * @note[short] Windows: 0x602250
     * @note[short] Android
     */
    void onOpButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4f9fe0
     * @note[short] MacOS (Intel): 0x5ac0d0
     * @note[short] Windows: 0x602920
     * @note[short] Android
     */
    void updateFormulaLabel();

    /**
     * @note[short] MacOS (ARM): 0x4f9dd4
     * @note[short] MacOS (Intel): 0x5abed0
     * @note[short] Windows: 0x6026a0
     * @note[short] Android
     */
    void updateOpButton(CCMenuItemSpriteExtra* button, int key, int objectID);
    cocos2d::CCLabelBMFont* m_formulaLabel;
};
