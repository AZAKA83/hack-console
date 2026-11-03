#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetItemIDLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetItemIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetItemIDLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetItemIDLayer();

    /**
     * @note[short] Windows: 0x597ee0
     * @note[short] iOS: 0x49ba04
     * @note[short] Android: Rebinded
     */
    virtual  ~SetItemIDLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetItemIDLayer* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5ce44
     * @note[short] MacOS (Intel): 0x63df0
     * @note[short] Windows: 0x598ac0
     * @note[short] iOS: 0x49c370
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5cd10
     * @note[short] MacOS (Intel): 0x63ca0
     * @note[short] Windows: 0x598910
     * @note[short] iOS: 0x49c23c
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x5cc08
     * @note[short] MacOS (Intel): 0x63b80
     * @note[short] Windows: 0x598770
     * @note[short] iOS: 0x49c134
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x597fb0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5cdf4
     * @note[short] MacOS (Intel): 0x63da0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateEditorLabel();
};
