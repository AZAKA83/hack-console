#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetTargetIDLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetTargetIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetTargetIDLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x598b70
     * @note[short] iOS: 0x2af870
     * @note[short] Android: Rebinded
     */
    virtual  ~SetTargetIDLayer();

    /**
     * @note[short] MacOS (ARM): 0x249e04
     * @note[short] MacOS (Intel): 0x2a7c90
     * @note[short] Windows: 0x598c40
     * @note[short] Android
     */
    static SetTargetIDLayer* create(EffectGameObject* object, cocos2d::CCArray* objects, std::string title, std::string label, int minimum, int maximum, int objectID);

    /**
     * @note[short] MacOS (ARM): 0x24a390
     * @note[short] MacOS (Intel): 0x2a82b0
     * @note[short] Windows: 0x39a380
     * @note[short] iOS: 0x2afd74
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x24a394
     * @note[short] MacOS (Intel): 0x2a82c0
     * @note[short] Windows: 0x5992e0
     * @note[short] iOS: 0x2afd78
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] Windows: 0x598dd0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, std::string title, std::string label, int minimum, int maximum, int objectID);
    int m_objectID;
    int m_minimumID;
    int m_maximumID;
};
