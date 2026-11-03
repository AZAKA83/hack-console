#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJOptionsLayer.hpp>

class LevelOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x457900
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelOptionsLayer();

    /**
     * @note[short] Windows: 0x45d100
     * @note[short] iOS: 0x20ece8
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelOptionsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelOptionsLayer* create(LevelSettingsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x203cec
     * @note[short] MacOS (Intel): 0x25bb10
     * @note[short] Windows: 0x45d8c0
     * @note[short] iOS: 0x20f258
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x203d04
     * @note[short] MacOS (Intel): 0x25bb30
     * @note[short] Windows: 0x45d8e0
     * @note[short] iOS: 0x20f270
     * @note[short] Android
     */
    virtual float getValue(int tag);

    /**
     * @note[short] MacOS (ARM): 0x203748
     * @note[short] MacOS (Intel): 0x25b4d0
     * @note[short] Windows: 0x45d210
     * @note[short] iOS: 0x20ed80
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x203d20
     * @note[short] MacOS (Intel): 0x25bb50
     * @note[short] Windows: 0x45d900
     * @note[short] iOS: 0x20f28c
     * @note[short] Android
     */
    virtual void didToggle(int tag);

    /**
     * @note[short] Windows: 0x45d1a0
     * @note[short] Android
     */
    bool init(LevelSettingsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x203b98
     * @note[short] MacOS (Intel): 0x25b980
     * @note[short] Windows: 0x45d6e0
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);
    LevelSettingsObject* m_settingsObject;
};
