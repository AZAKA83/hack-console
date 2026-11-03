#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class CommentOptionsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "CommentOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommentOptionsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xbe650
     * @note[short] iOS: 0x522220
     * @note[short] Android: Rebinded
     */
    virtual  ~CommentOptionsPopup();

    /**
     * @note[short] Android
     */
    static CommentOptionsPopup* create(GJComment* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x8456a8
     * @note[short] MacOS (Intel): 0x9687a0
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x522ce8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x84566c
     * @note[short] MacOS (Intel): 0x968770
     * @note[short] Windows: 0x99f60
     * @note[short] iOS: 0x522cac
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc1fc0
     * @note[short] Android
     */
    bool init(GJComment* p0, bool p1);

    /**
     * @note[short] Windows: 0xc28d0
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc2890
     * @note[short] Android
     */
    void onReport(cocos2d::CCObject* sender);
};
