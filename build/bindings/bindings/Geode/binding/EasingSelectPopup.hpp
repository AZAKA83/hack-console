#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class EasingSelectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EasingSelectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EasingSelectPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x175cd0
     * @note[short] iOS: 0x4c4600
     * @note[short] Android: Rebinded
     */
    virtual  ~EasingSelectPopup();

    /**
     * @note[short] Android
     */
    static EasingSelectPopup* create(SetupTriggerPopup* p0, int p1, int p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x7ca214
     * @note[short] MacOS (Intel): 0x8dd900
     * @note[short] Windows: 0x176a60
     * @note[short] iOS: 0x4c5164
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x7ca6b8
     * @note[short] MacOS (Intel): 0x8dde20
     * @note[short] Windows: 0x176e50
     * @note[short] iOS: 0x4c5460
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7ca158
     * @note[short] MacOS (Intel): 0x8dd840
     * @note[short] Windows: 0x1769a0
     * @note[short] iOS: 0x4c50ac
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Android
     */
    bool init(SetupTriggerPopup* p0, int p1, int p2, int p3);

    /**
     * @note[short] Windows: 0x176790
     * @note[short] Android
     */
    void onCell(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRestart(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshCellHighlight();

    /**
     * @note[short] Android
     */
    TodoReturn refreshRateVisual();
};
