#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class FriendRequestPopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "FriendRequestPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendRequestPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x399480
     * @note[short] iOS: 0x3779dc
     * @note[short] Android: Rebinded
     */
    virtual  ~FriendRequestPopup();

    /**
     * @note[short] Windows: 0x3a1590
     * @note[short] Android
     */
    static FriendRequestPopup* create(GJFriendRequest* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x236870
     * @note[short] MacOS (Intel): 0x2928b0
     * @note[short] Windows: 0x3a2f00
     * @note[short] iOS: 0x378db8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x236960
     * @note[short] MacOS (Intel): 0x2929c0
     * @note[short] Windows: 0x3a2f10
     * @note[short] iOS: 0x378dc4
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x236b54
     * @note[short] MacOS (Intel): 0x292b90
     * @note[short] Windows: 0x3a30e0
     * @note[short] iOS: 0x378ef4
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x236cd4
     * @note[short] MacOS (Intel): 0x292d00
     * @note[short] Windows: 0x3a31b0
     * @note[short] iOS: 0x378fa4
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x236e68
     * @note[short] MacOS (Intel): 0x292e70
     * @note[short] Windows: 0x3a3210
     * @note[short] iOS: 0x379020
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (Intel): 0x294960
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void blockUser();

    /**
     * @note[short] MacOS (ARM): 0x235270
     * @note[short] MacOS (Intel): 0x291260
     * @note[short] Windows: 0x3a16e0
     * @note[short] Android
     */
    bool init(GJFriendRequest* p0, bool p1);

    /**
     * @note[short] Windows: 0x3a1ed0
     * @note[short] Android
     */
    void loadFromGJFriendRequest(GJFriendRequest* request);

    /**
     * @note[short] MacOS (ARM): 0x2363a4
     * @note[short] MacOS (Intel): 0x2923f0
     * @note[short] Windows: 0x3a2a30
     * @note[short] Android
     */
    void onAccept(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x236554
     * @note[short] MacOS (Intel): 0x2925c0
     * @note[short] Windows: 0x3a2c60
     * @note[short] Android
     */
    void onBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3a28a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3a2720
     * @note[short] Android
     */
    void onIgnore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x2923f0
     * @note[short] Windows: 0x3a2b30
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3a2ed0
     * @note[short] Android
     */
    void onReport(cocos2d::CCObject* sender);
    void* m_unk;
    GJFriendRequest* m_request;
    LoadingCircle* m_circle;
    CCMenuItemSpriteExtra* m_closeBtn;
    UploadActionPopup* m_popup;
};
