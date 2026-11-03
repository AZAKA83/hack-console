#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupInteractObjectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInteractObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInteractObjectPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5b8e10
     * @note[short] iOS: 0x493704
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupInteractObjectPopup();

    /**
     * @note[short] Windows: 0x5b8ee0
     * @note[short] Android
     */
    static SetupInteractObjectPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x46b4cc
     * @note[short] MacOS (Intel): 0x50fdb0
     * @note[short] Windows: 0x5b9920
     * @note[short] iOS: 0x493eb8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46b438
     * @note[short] MacOS (Intel): 0x50fd20
     * @note[short] Windows: 0x5b98f0
     * @note[short] iOS: 0x493e94
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x46b3c4
     * @note[short] Windows: 0x5b9870
     * @note[short] Android
     */
    void updateItems();
};
