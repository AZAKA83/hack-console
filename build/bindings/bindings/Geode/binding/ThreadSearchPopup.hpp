#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class ThreadSearchPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "ThreadSearchPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ThreadSearchPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xd3260
     * @note[short] iOS: 0x511964
     * @note[short] Android: Rebinded
     */
    virtual  ~ThreadSearchPopup();

    /**
     * @note[short] Android
     */
    static ThreadSearchPopup* create(ThreadViewPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x8314cc
     * @note[short] MacOS (Intel): 0x9520b0
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x512ad8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x831408
     * @note[short] MacOS (Intel): 0x951fe0
     * @note[short] Windows: 0xfc840
     * @note[short] iOS: 0x512a20
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8311c0
     * @note[short] MacOS (Intel): 0x951dc0
     * @note[short] Windows: 0xfbcf0
     * @note[short] iOS: 0x51287c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn clampDayField();

    /**
     * @note[short] Android
     */
    TodoReturn fieldValue(CCTextInputNode* p0, int p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x82fdf0
     * @note[short] MacOS (Intel): 0x9508e0
     * @note[short] Windows: 0xfaff0
     * @note[short] Android
     */
    bool init(ThreadViewPopup* p0);

    /**
     * @note[short] Windows: 0xfc5e0
     * @note[short] Android
     */
    void onGoToDate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xfbf90
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);
};
