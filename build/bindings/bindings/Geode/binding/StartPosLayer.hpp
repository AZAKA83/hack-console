#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class StartPosLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "StartPosLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StartPosLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x20445c
     * @note[short] MacOS (Intel): 0x25c150
     * @note[short] Windows: 0x457a00
     * @note[short] iOS: 0x20f7b8
     * @note[short] Android: Rebinded
     */
    virtual  ~StartPosLayer();

    /**
     * @note[short] MacOS (ARM): 0x204464
     * @note[short] MacOS (Intel): 0x25c430
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static StartPosLayer* create(StartPosObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x205820
     * @note[short] MacOS (Intel): 0x25d900
     * @note[short] Windows: 0x45ec30
     * @note[short] iOS: 0x21077c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x205a48
     * @note[short] MacOS (Intel): 0x25db00
     * @note[short] Windows: 0x45f000
     * @note[short] iOS: 0x210938
     * @note[short] Android
     */
    virtual void updateInputNode(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x205d2c
     * @note[short] MacOS (Intel): 0x25dea0
     * @note[short] Windows: 0x45f420
     * @note[short] iOS: 0x210be8
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x205bfc
     * @note[short] MacOS (Intel): 0x25dca0
     * @note[short] Windows: 0x45f210
     * @note[short] iOS: 0x210ac4
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2051d8
     * @note[short] MacOS (Intel): 0x25d3f0
     * @note[short] Windows: 0x45f710
     * @note[short] Android
     */
    void addModeButtons();

    /**
     * @note[short] MacOS (ARM): 0x205544
     * @note[short] MacOS (Intel): 0x25d660
     * @note[short] Windows: 0x45f9f0
     * @note[short] Android
     */
    void addSpeedButtons();

    /**
     * @note[short] MacOS (ARM): 0x204544
     * @note[short] MacOS (Intel): 0x25c540
     * @note[short] Windows: 0x45de00
     * @note[short] Android
     */
    bool init(StartPosObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x205f74
     * @note[short] Windows: 0x45f990
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x206074
     * @note[short] Windows: 0x45fc90
     * @note[short] Android
     */
    void onSelectSpeed(cocos2d::CCObject* sender);
    StartPosObject* m_startPosObject;
};
