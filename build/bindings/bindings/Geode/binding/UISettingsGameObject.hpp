#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class UISettingsGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "UISettingsGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UISettingsGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UISettingsGameObject();

    /**
     * @note[short] Windows: 0x637aa0
     * @note[short] Android: Rebinded
     */
    virtual  ~UISettingsGameObject();

    /**
     * @note[short] MacOS (Intel): 0x1bdb60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static UISettingsGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x1772c0
     * @note[short] MacOS (Intel): 0x1bdc30
     * @note[short] Windows: 0x65e160
     * @note[short] iOS: 0x438f60
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x177f44
     * @note[short] MacOS (Intel): 0x1bebd0
     * @note[short] Windows: 0x65e500
     * @note[short] iOS: 0x439314
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x177310
     * @note[short] MacOS (Intel): 0x1bdc80
     * @note[short] Windows: 0x65e1d0
     * @note[short] iOS: 0x438fb0
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    int m_xRef;
    int m_yRef;
    bool m_xRelative;
    bool m_yRelative;
};
