#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class ThreadOptionsPopup : public SetupTriggerPopup, public ThreadMessageDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "ThreadOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ThreadOptionsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xd3c00
     * @note[short] iOS: 0x50c844
     * @note[short] Android: Rebinded
     */
    virtual  ~ThreadOptionsPopup();

    /**
     * @note[short] Windows: 0xf41d0
     * @note[short] Android
     */
    static ThreadOptionsPopup* create(GJMessageThread* p0, ThreadViewPopup* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x82badc
     * @note[short] MacOS (Intel): 0x94ba80
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x50e530
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x82ba70
     * @note[short] MacOS (Intel): 0x94ba10
     * @note[short] Windows: 0xf6b30
     * @note[short] iOS: 0x50e4ec
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x82abb8
     * @note[short] MacOS (Intel): 0x94ab00
     * @note[short] Windows: 0xf5a80
     * @note[short] iOS: 0x50da18
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x82aebc
     * @note[short] MacOS (Intel): 0x94ae00
     * @note[short] Windows: 0xf6120
     * @note[short] iOS: 0x50dd08
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x82b420
     * @note[short] MacOS (Intel): 0x94b3c0
     * @note[short] Windows: 0xf6500
     * @note[short] iOS: 0x50e100
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x82b698
     * @note[short] MacOS (Intel): 0x94b630
     * @note[short] Windows: 0xf6670
     * @note[short] iOS: 0x50e2c4
     * @note[short] Android
     */
    virtual void threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x82b73c
     * @note[short] MacOS (Intel): 0x94b6e0
     * @note[short] Windows: 0xf6720
     * @note[short] iOS: 0x50e320
     * @note[short] Android
     */
    virtual void threadMessagesFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x82b7e0
     * @note[short] MacOS (Intel): 0x94b780
     * @note[short] Windows: 0xf67d0
     * @note[short] iOS: 0x50e37c
     * @note[short] Android
     */
    virtual void threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x82b884
     * @note[short] MacOS (Intel): 0x94b830
     * @note[short] Windows: 0xf6880
     * @note[short] iOS: 0x50e3d8
     * @note[short] Android
     */
    virtual void threadSearchFailed(int p0);

    /**
     * @note[short] Windows: 0xf6930
     * @note[short] iOS: 0x50e434
     * @note[short] Android
     */
    virtual void threadSendFinished(int p0, long long p1);

    /**
     * @note[short] MacOS (ARM): 0x82b9cc
     * @note[short] MacOS (Intel): 0x94b970
     * @note[short] Windows: 0xf69e0
     * @note[short] iOS: 0x50e490
     * @note[short] Android
     */
    virtual void threadSendFailed();

    /**
     * @note[short] Android
     */
    TodoReturn handBackSlot();

    /**
     * @note[short] MacOS (ARM): 0x829734
     * @note[short] MacOS (Intel): 0x949430
     * @note[short] Windows: 0xf4340
     * @note[short] Android
     */
    bool init(GJMessageThread* p0, ThreadViewPopup* p1, bool p2);

    /**
     * @note[short] Windows: 0xf57a0
     * @note[short] Android
     */
    void onCancelRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf51e0
     * @note[short] Android
     */
    void onDismissRemoved(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf5620
     * @note[short] Android
     */
    void onHide(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf5000
     * @note[short] Android
     */
    void onLeave(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf4fc0
     * @note[short] Android
     */
    void onMembers(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf5510
     * @note[short] Android
     */
    void onModLock(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf4c80
     * @note[short] Android
     */
    void onMuteRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf4e20
     * @note[short] Android
     */
    void onPinRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf5380
     * @note[short] Android
     */
    void onRename(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf5950
     * @note[short] Android
     */
    void onReport(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf5a30
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);
};
