#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class ObjectControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ObjectControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ObjectControlGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ObjectControlGameObject();

    /**
     * @note[short] Windows: 0x6379e0
     * @note[short] Android: Rebinded
     */
    virtual  ~ObjectControlGameObject();

    /**
     * @note[short] MacOS (ARM): 0x1856d4
     * @note[short] MacOS (Intel): 0x1cfbe0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ObjectControlGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x185794
     * @note[short] MacOS (Intel): 0x1cfc90
     * @note[short] Windows: 0x663920
     * @note[short] iOS: 0x43e8a4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x185c48
     * @note[short] MacOS (Intel): 0x1d0210
     * @note[short] Windows: 0x663ae0
     * @note[short] iOS: 0x43ea84
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1857e4
     * @note[short] MacOS (Intel): 0x1cfce0
     * @note[short] Windows: 0x663990
     * @note[short] iOS: 0x43e8f4
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
};
