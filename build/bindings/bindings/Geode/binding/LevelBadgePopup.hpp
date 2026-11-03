#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/LevelManagerDelegate.hpp>

class LevelBadgePopup : public FLAlertLayer, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelBadgePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelBadgePopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0xd3380
     * @note[short] iOS: 0x502500
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelBadgePopup();

    /**
     * @note[short] Windows: 0xe5d70
     * @note[short] Android
     */
    static LevelBadgePopup* create(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x81d24c
     * @note[short] MacOS (Intel): 0x93c200
     * @note[short] Windows: 0xe6890
     * @note[short] iOS: 0x502ce4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x81d414
     * @note[short] MacOS (Intel): 0x93c380
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x502e00
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x81d390
     * @note[short] MacOS (Intel): 0x93c300
     * @note[short] Windows: 0xe6930
     * @note[short] iOS: 0x502d84
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x81cb88
     * @note[short] MacOS (Intel): 0x93bb70
     * @note[short] Windows: 0xe6120
     * @note[short] iOS: 0x5026f4
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x81d058
     * @note[short] MacOS (Intel): 0x93c020
     * @note[short] Windows: 0xe6350
     * @note[short] iOS: 0x502b38
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* p0, int p1);

    /**
     * @note[short] Windows: 0xe6510
     * @note[short] Android
     */
    TodoReturn buildCell(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xe5ed0
     * @note[short] Android
     */
    bool init(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
};
