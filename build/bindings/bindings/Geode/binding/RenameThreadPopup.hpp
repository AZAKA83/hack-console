#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>

class RenameThreadPopup : public SetupTriggerPopup, public ThreadMessageDelegate {
public:
    static constexpr auto CLASS_NAME = "RenameThreadPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RenameThreadPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xd3fd0
     * @note[short] iOS: 0x510c84
     * @note[short] Android: Rebinded
     */
    virtual  ~RenameThreadPopup();

    /**
     * @note[short] Android
     */
    static RenameThreadPopup* create(GJMessageThread* p0, ThreadViewPopup* p1);

    /**
     * @note[short] MacOS (ARM): 0x8314f0
     * @note[short] MacOS (Intel): 0x9520f0
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x512afc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x82fa98
     * @note[short] MacOS (Intel): 0x950320
     * @note[short] Windows: 0xfaf00
     * @note[short] iOS: 0x51187c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x82f2f8
     * @note[short] MacOS (Intel): 0x94fba0
     * @note[short] Windows: 0xfa740
     * @note[short] iOS: 0x511334
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x82f4b8
     * @note[short] MacOS (Intel): 0x94fd70
     * @note[short] Windows: 0xfa910
     * @note[short] iOS: 0x5114c8
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x82f690
     * @note[short] MacOS (Intel): 0x94ff40
     * @note[short] Windows: 0xfaa40
     * @note[short] iOS: 0x51163c
     * @note[short] Android
     */
    virtual void threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x82f73c
     * @note[short] MacOS (Intel): 0x94fff0
     * @note[short] Windows: 0xfaaf0
     * @note[short] iOS: 0x51169c
     * @note[short] Android
     */
    virtual void threadMessagesFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x82f7e8
     * @note[short] MacOS (Intel): 0x950090
     * @note[short] Windows: 0xfaba0
     * @note[short] iOS: 0x5116fc
     * @note[short] Android
     */
    virtual void threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x82f894
     * @note[short] MacOS (Intel): 0x950140
     * @note[short] Windows: 0xfac50
     * @note[short] iOS: 0x51175c
     * @note[short] Android
     */
    virtual void threadSearchFailed(int p0);

    /**
     * @note[short] Windows: 0xfad00
     * @note[short] iOS: 0x5117bc
     * @note[short] Android
     */
    virtual void threadSendFinished(int p0, long long p1);

    /**
     * @note[short] MacOS (ARM): 0x82f9ec
     * @note[short] MacOS (Intel): 0x950280
     * @note[short] Windows: 0xfadb0
     * @note[short] iOS: 0x51181c
     * @note[short] Android
     */
    virtual void threadSendFailed();

    /**
     * @note[short] Android
     */
    TodoReturn handBackSlot();

    /**
     * @note[short] Windows: 0xf9db0
     * @note[short] Android
     */
    bool init(GJMessageThread* p0, ThreadViewPopup* p1);

    /**
     * @note[short] Windows: 0xfa370
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);
};
