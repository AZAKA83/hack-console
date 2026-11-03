#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class ArtTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ArtTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ArtTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ArtTriggerGameObject();

    /**
     * @note[short] Windows: 0x637e10
     * @note[short] Android: Rebinded
     */
    virtual  ~ArtTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x1841a4
     * @note[short] MacOS (Intel): 0x1ce2c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ArtTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x184790
     * @note[short] MacOS (Intel): 0x1ce960
     * @note[short] Windows: 0x663020
     * @note[short] iOS: 0x43e1c0
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x184718
     * @note[short] MacOS (Intel): 0x1ce900
     * @note[short] Windows: 0x662fa0
     * @note[short] iOS: 0x43e158
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1842b0
     * @note[short] MacOS (Intel): 0x1ce3d0
     * @note[short] Windows: 0x662e50
     * @note[short] iOS: 0x43dfc8
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    int m_artIndex;
};
