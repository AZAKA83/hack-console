#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class ProgressGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ProgressGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ProgressGameObject, EffectGameObject)

    /**
     * @note[short] Windows: 0x637e10
     * @note[short] Android: Rebinded
     */
    virtual  ~ProgressGameObject();

    /**
     * @note[short] Android
     */
    static ProgressGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x185d80
     * @note[short] MacOS (Intel): 0x1d0360
     * @note[short] Windows: 0x663b70
     * @note[short] iOS: 0x43ebb0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x186878
     * @note[short] MacOS (Intel): 0x1d1120
     * @note[short] Windows: 0x663eb0
     * @note[short] iOS: 0x43ef08
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1);

    /**
     * @note[short] MacOS (ARM): 0x185dd0
     * @note[short] MacOS (Intel): 0x1d03b0
     * @note[short] Windows: 0x663be0
     * @note[short] iOS: 0x43ec00
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* p0);
};
