#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/DownloadMessageDelegate.hpp>

class GJMessagePopup : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol, public DownloadMessageDelegate {
public:
    static constexpr auto CLASS_NAME = "GJMessagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMessagePopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x2370f8
     * @note[short] Windows: 0x3995d0
     * @note[short] iOS: 0x379168
     * @note[short] Android: Rebinded
     */
    virtual  ~GJMessagePopup();

    /**
     * @note[short] Android
     */
    static GJMessagePopup* create(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x2388b8
     * @note[short] MacOS (Intel): 0x2949d0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x37a598
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x238934
     * @note[short] MacOS (Intel): 0x294a40
     * @note[short] Windows: 0x3a4b50
     * @note[short] iOS: 0x37a614
     * @note[short] Android
     */
    virtual void downloadMessageFinished(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x2389fc
     * @note[short] MacOS (Intel): 0x294b00
     * @note[short] Windows: 0x3a4ba0
     * @note[short] iOS: 0x37a688
     * @note[short] Android
     */
    virtual void downloadMessageFailed(int id);

    /**
     * @note[short] MacOS (ARM): 0x238aac
     * @note[short] MacOS (Intel): 0x294ba0
     * @note[short] Windows: 0x3a4be0
     * @note[short] iOS: 0x37a730
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x238c94
     * @note[short] MacOS (Intel): 0x294d70
     * @note[short] Windows: 0x3a4d90
     * @note[short] iOS: 0x37a854
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x238e04
     * @note[short] MacOS (Intel): 0x294ec0
     * @note[short] Windows: 0x3a4e50
     * @note[short] iOS: 0x37a8f4
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x238f30
     * @note[short] MacOS (Intel): 0x294fc0
     * @note[short] Windows: 0x3a4ed0
     * @note[short] iOS: 0x37a990
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x23883c
     * @note[short] MacOS (Intel): 0x294960
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void blockUser();

    /**
     * @note[short] MacOS (ARM): 0x237290
     * @note[short] MacOS (Intel): 0x2933c0
     * @note[short] Windows: 0x3a3490
     * @note[short] Android
     */
    bool init(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x237d54
     * @note[short] MacOS (Intel): 0x95a610
     * @note[short] Windows: 0x3a3ec0
     * @note[short] Android
     */
    void loadFromGJMessage(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x238580
     * @note[short] MacOS (Intel): 0x2946c0
     * @note[short] Windows: 0x3a4660
     * @note[short] Android
     */
    void onBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2382b0
     * @note[short] Windows: 0x3a48d0
     * @note[short] Android
     */
    void onNewThread(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x238488
     * @note[short] MacOS (Intel): 0x2945c0
     * @note[short] Windows: 0x3a44d0
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3a48a0
     * @note[short] Android
     */
    void onReport(cocos2d::CCObject* sender);
    bool m_actionSuccess;
    cocos2d::CCLabelBMFont* m_errorLabel;
    GJUserMessage* m_message;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_closeButton;
    UploadActionPopup* m_uploadPopup;
};
