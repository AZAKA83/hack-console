#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EditorWindowPopup.hpp>

class GridSettingsLayer : public EditorWindowPopup {
public:
    static constexpr auto CLASS_NAME = "GridSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GridSettingsLayer, EditorWindowPopup)

    /**
     * @note[short] Windows: 0x2c8c70
     * @note[short] iOS: 0x4dedb0
     * @note[short] Android: Rebinded
     */
    virtual  ~GridSettingsLayer();

    /**
     * @note[short] Android
     */
    static GridSettingsLayer* create(EditorUI* p0);

    /**
     * @note[short] MacOS (ARM): 0x7ef8f4
     * @note[short] MacOS (Intel): 0x908d10
     * @note[short] Windows: 0x2c94e0
     * @note[short] iOS: 0x4df644
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x7ef894
     * @note[short] MacOS (Intel): 0x908c90
     * @note[short] Windows: 0x2c9470
     * @note[short] iOS: 0x4df5e4
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] MacOS (ARM): 0x7eef4c
     * @note[short] MacOS (Intel): 0x9083a0
     * @note[short] Windows: 0x2c8d40
     * @note[short] iOS: 0x4def20
     * @note[short] Android
     */
    virtual void onBuildWindowContent();

    /**
     * @note[short] Android
     */
    bool init(EditorUI* p0);

    /**
     * @note[short] Windows: 0x2c9600
     * @note[short] Android
     */
    void onCycleDown(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2c9590
     * @note[short] Android
     */
    void onCycleUp(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2c9540
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshValues();
};
