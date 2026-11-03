#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class StartPosObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "StartPosObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StartPosObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     StartPosObject();

    /**
     * @note[short] MacOS (ARM): 0x15cf10
     * @note[short] MacOS (Intel): 0x19dea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42da3c
     * @note[short] Android: Rebinded
     */
     ~StartPosObject();

    /**
     * @note[short] MacOS (ARM): 0x15cff8
     * @note[short] MacOS (Intel): 0x19df60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static StartPosObject* create();

    /**
     * @note[short] MacOS (ARM): 0x15d104
     * @note[short] MacOS (Intel): 0x19e070
     * @note[short] Windows: 0x653340
     * @note[short] iOS: 0x42dae0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x15d248
     * @note[short] MacOS (Intel): 0x19e1c0
     * @note[short] Windows: 0x6534f0
     * @note[short] iOS: 0x42dbdc
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x15d24c
     * @note[short] MacOS (Intel): 0x19e1d0
     * @note[short] Windows: 0x653500
     * @note[short] iOS: 0x42dbe0
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] Android
     */
    TodoReturn getDisplayName();

    /**
     * @note[short] MacOS (ARM): 0x15d1e8
     * @note[short] MacOS (Intel): 0x19e160
     * @note[short] Windows: 0x653450
     * @note[short] Android
     */
    void loadSettingsFromString(std::string objectString);

    /**
     * @note[short] MacOS (ARM): 0x15d1a0
     * @note[short] MacOS (Intel): 0x19e110
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setSettings(LevelSettingsObject* settings);
    LevelSettingsObject* m_startSettings;
};
