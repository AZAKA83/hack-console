#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TabbedPopupLayer.hpp>
#include <Geode/binding/GJDropDownLayerDelegate.hpp>

class GameSettingsLayer : public TabbedPopupLayer, public GJDropDownLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "GameSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameSettingsLayer, TabbedPopupLayer)

    /**
     * @note[short] MacOS (ARM): 0x5439c0
     * @note[short] MacOS (Intel): 0x5fdf30
     * @note[short] Windows: 0x2c2530
     * @note[short] iOS: 0x1642cc
     * @note[short] Android: Rebinded
     */
    virtual  ~GameSettingsLayer();

    /**
     * @note[short] MacOS (ARM): 0x543b18
     * @note[short] MacOS (Intel): 0x5fe320
     * @note[short] Windows: 0x2c2640
     * @note[short] Android
     */
    static GameSettingsLayer* create(GJBaseGameLayer* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x548a08
     * @note[short] MacOS (Intel): 0x6034c0
     * @note[short] Windows: 0x2c7e80
     * @note[short] iOS: 0x1671b8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5487d4
     * @note[short] MacOS (Intel): 0x6032a0
     * @note[short] Windows: 0x2c7ad0
     * @note[short] iOS: 0x16700c
     * @note[short] Android
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x547e88
     * @note[short] MacOS (Intel): 0x6028f0
     * @note[short] Windows: 0x2c70b0
     * @note[short] iOS: 0x166858
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x547cf8
     * @note[short] MacOS (Intel): 0x602710
     * @note[short] Windows: 0x2c6d70
     * @note[short] iOS: 0x166794
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] MacOS (ARM): 0x548b14
     * @note[short] MacOS (Intel): 0x6035d0
     * @note[short] Windows: 0x2c8420
     * @note[short] iOS: 0x1672b8
     * @note[short] Android
     */
    virtual void showTab(int tab);

    /**
     * @note[short] MacOS (ARM): 0x5489a0
     * @note[short] MacOS (Intel): 0x603440
     * @note[short] Windows: 0x2c7e10
     * @note[short] iOS: 0x167180
     * @note[short] Android
     */
    virtual void dropDownLayerWillClose(GJDropDownLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x54726c
     * @note[short] MacOS (Intel): 0x601840
     * @note[short] Android
     */
    void addGVToggle(char const* name, char const* gameVar, char const* desc);

    /**
     * @note[short] MacOS (ARM): 0x546110
     * @note[short] MacOS (Intel): 0x6005e0
     * @note[short] Windows: 0x2c5200
     * @note[short] Android
     */
    void addSpecialContent();

    /**
     * @note[short] MacOS (ARM): 0x5472f0
     * @note[short] MacOS (Intel): 0x6018b0
     * @note[short] Windows: 0x2c6720
     * @note[short] Android
     */
    void addToggle(char const* name, int id, char const* desc, bool disabled);

    /**
     * @note[short] MacOS (ARM): 0x544098
     * @note[short] MacOS (Intel): 0x5fe890
     * @note[short] Windows: 0x2c2df0
     * @note[short] Android
     */
    void buildTabContent();

    /**
     * @note[short] Windows: 0x2c74a0
     * @note[short] Android
     */
    TodoReturn didChangeGV(char const* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x543c5c
     * @note[short] MacOS (Intel): 0x5fe4c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn nextPosition(int p0);

    /**
     * @note[short] Android
     */
    void onButtonRows(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onButtonsPerRow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x543d74
     * @note[short] MacOS (Intel): 0x5fe5c0
     * @note[short] Windows: 0x2c2920
     * @note[short] Android
     */
    void setupTabs();

    /**
     * @note[short] Android
     */
    TodoReturn showPracticeMusicSyncUnlockInfo();

    /**
     * @note[short] Android
     */
    TodoReturn toggleVisibility(bool p0);
};
