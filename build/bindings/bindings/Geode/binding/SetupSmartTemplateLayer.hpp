#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class SetupSmartTemplateLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "SetupSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSmartTemplateLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5ebf40
     * @note[short] iOS: 0x78c90
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupSmartTemplateLayer();

    /**
     * @note[short] Windows: 0x5ee410
     * @note[short] Android
     */
    static SetupSmartTemplateLayer* create(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] MacOS (ARM): 0x44252c
     * @note[short] MacOS (Intel): 0x4e3530
     * @note[short] Windows: 0x5ef740
     * @note[short] iOS: 0x79b18
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4421d0
     * @note[short] MacOS (Intel): 0x4e3230
     * @note[short] Windows: 0x5ef160
     * @note[short] iOS: 0x79838
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x442420
     * @note[short] MacOS (Intel): 0x4e3450
     * @note[short] Windows: 0x5ef4c0
     * @note[short] iOS: 0x799bc
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4422b4
     * @note[short] MacOS (Intel): 0x4e3310
     * @note[short] Windows: 0x5ef240
     * @note[short] iOS: 0x7989c
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x44250c
     * @note[short] MacOS (Intel): 0x4e3510
     * @note[short] Windows: 0x164f00
     * @note[short] iOS: 0x79af8
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x441558
     * @note[short] MacOS (Intel): 0x4e2520
     * @note[short] Windows: 0x5ee530
     * @note[short] Android
     */
    bool init(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] MacOS (ARM): 0x441e30
     * @note[short] MacOS (Intel): 0x4e2e00
     * @note[short] Windows: 0x5ef640
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x441e58
     * @note[short] MacOS (Intel): 0x4e2e30
     * @note[short] Windows: 0x5eef90
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x442100
     * @note[short] MacOS (Intel): 0x4e3160
     * @note[short] Windows: 0x5ef670
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    GJSmartTemplate* m_smartTemplate;
    CCTextInputNode* m_nameInput;
    cocos2d::CCNode* m_unk298;
};
