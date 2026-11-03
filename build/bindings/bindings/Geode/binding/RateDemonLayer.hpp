#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>

class RateDemonLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateDemonLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateDemonLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RateDemonLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a88ec
     * @note[short] Android: Rebinded
     */
     ~RateDemonLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static RateDemonLayer* create(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x217f64
     * @note[short] MacOS (Intel): 0x2712f0
     * @note[short] Windows: 0x55db10
     * @note[short] iOS: 0x4a9224
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x217ba0
     * @note[short] MacOS (Intel): 0x270fb0
     * @note[short] Windows: 0x55d900
     * @note[short] iOS: 0x4a9074
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x217cf0
     * @note[short] MacOS (Intel): 0x2710a0
     * @note[short] Windows: 0x55d980
     * @note[short] iOS: 0x4a9108
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x217e70
     * @note[short] MacOS (Intel): 0x271210
     * @note[short] Windows: 0x55da50
     * @note[short] iOS: 0x4a91a4
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x217304
     * @note[short] MacOS (Intel): 0x270730
     * @note[short] Windows: 0x55cfe0
     * @note[short] Android
     */
    bool init(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x217a18
     * @note[short] MacOS (Intel): 0x270e30
     * @note[short] Windows: 0x55dad0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x217a74
     * @note[short] MacOS (Intel): 0x270e80
     * @note[short] Windows: 0x55d760
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21790c
     * @note[short] MacOS (Intel): 0x270d40
     * @note[short] Windows: 0x55d5e0
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
    bool m_uploadFinished;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_demons;
    void* m_unkPtr;
    int m_levelID;
    int m_demonRate;
    bool m_moderator;
    UploadActionPopup* m_popup;
    RateLevelDelegate* m_delegate;
};
