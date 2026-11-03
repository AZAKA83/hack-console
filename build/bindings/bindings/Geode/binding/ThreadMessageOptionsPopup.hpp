#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class ThreadMessageOptionsPopup : public SetupTriggerPopup, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "ThreadMessageOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ThreadMessageOptionsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xd34d0
     * @note[short] iOS: 0x501af0
     * @note[short] Android: Rebinded
     */
    virtual  ~ThreadMessageOptionsPopup();

    /**
     * @note[short] Android
     */
    static ThreadMessageOptionsPopup* create(GJThreadMessage* p0, std::string const& p1, ThreadViewPopup* p2);

    /**
     * @note[short] MacOS (ARM): 0x81c82c
     * @note[short] MacOS (Intel): 0x93b760
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x502428
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x81c7f0
     * @note[short] MacOS (Intel): 0x93b730
     * @note[short] Windows: 0x99f60
     * @note[short] iOS: 0x5023ec
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x81c728
     * @note[short] MacOS (Intel): 0x93b680
     * @note[short] Windows: 0xe5c10
     * @note[short] iOS: 0x502380
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0xe53e0
     * @note[short] Android
     */
    bool init(GJThreadMessage* p0, std::string const& p1, ThreadViewPopup* p2);

    /**
     * @note[short] Windows: 0xe5a50
     * @note[short] Android
     */
    void onAction(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe5c70
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);
};
