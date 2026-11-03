#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class ThreadRequestPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ThreadRequestPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ThreadRequestPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0xd3ef0
     * @note[short] iOS: 0x514310
     * @note[short] Android: Rebinded
     */
    virtual  ~ThreadRequestPopup();

    /**
     * @note[short] Android
     */
    static ThreadRequestPopup* create(GJMessageThread* p0, InvitesPopup* p1);

    /**
     * @note[short] MacOS (ARM): 0x83452c
     * @note[short] MacOS (Intel): 0x9555c0
     * @note[short] Windows: 0xffee0
     * @note[short] iOS: 0x5153d4
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    /**
     * @note[short] MacOS (ARM): 0x8344b0
     * @note[short] MacOS (Intel): 0x955550
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x515358
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0xfe990
     * @note[short] Android
     */
    bool init(GJMessageThread* p0, InvitesPopup* p1);

    /**
     * @note[short] Windows: 0xffce0
     * @note[short] Android
     */
    void onAccept(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xffd40
     * @note[short] Android
     */
    void onIgnore(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xffda0
     * @note[short] Android
     */
    void onReport(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xffea0
     * @note[short] Android
     */
    void onViewMembers(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xffe60
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
};
