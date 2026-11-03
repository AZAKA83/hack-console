#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SupportLayer : public GJDropDownLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SupportLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SupportLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SupportLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2247c8
     * @note[short] Android: Rebinded
     */
     ~SupportLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SupportLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x30d630
     * @note[short] MacOS (Intel): 0x382330
     * @note[short] Windows: 0x669ca0
     * @note[short] iOS: 0x224800
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x30f48c
     * @note[short] MacOS (Intel): 0x384290
     * @note[short] Windows: 0x66b290
     * @note[short] iOS: 0x226100
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x30f680
     * @note[short] MacOS (Intel): 0x384470
     * @note[short] Windows: 0x66b440
     * @note[short] iOS: 0x226258
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x30f43c
     * @note[short] MacOS (Intel): 0x384240
     * @note[short] Windows: 0x66b250
     * @note[short] iOS: 0x2260b0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x30f9cc
     * @note[short] MacOS (Intel): 0x384790
     * @note[short] Windows: 0x66c0e0
     * @note[short] iOS: 0x22646c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x30eef0
     * @note[short] Windows: 0x66a8a0
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCArray* nodes);

    /**
     * @note[short] MacOS (ARM): 0x30f434
     * @note[short] MacOS (Intel): 0x384230
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x30f410
     * @note[short] MacOS (Intel): 0x384210
     * @note[short] Windows: 0x66afe0
     * @note[short] Android
     */
    void onCocos2d(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30e87c
     * @note[short] MacOS (Intel): 0x3836d0
     * @note[short] Windows: 0x66b710
     * @note[short] Android
     */
    void onEmail(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30f334
     * @note[short] MacOS (Intel): 0x384150
     * @note[short] Windows: 0x66b100
     * @note[short] Android
     */
    void onGetReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30df28
     * @note[short] MacOS (Intel): 0x382c20
     * @note[short] Windows: 0x66b810
     * @note[short] Android
     */
    void onLinks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30f188
     * @note[short] MacOS (Intel): 0x383f90
     * @note[short] Windows: 0x66b4c0
     * @note[short] Android
     */
    void onLowDetail(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30e94c
     * @note[short] MacOS (Intel): 0x3837b0
     * @note[short] Windows: 0x3a9900
     * @note[short] Android
     */
    void onPrivacy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30f288
     * @note[short] MacOS (Intel): 0x3840a0
     * @note[short] Windows: 0x66b010
     * @note[short] Android
     */
    void onRequestAccess(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30f3ec
     * @note[short] MacOS (Intel): 0x3841f0
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30e994
     * @note[short] MacOS (Intel): 0x3837f0
     * @note[short] Windows: 0x66ab10
     * @note[short] Android
     */
    void onSFX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30e970
     * @note[short] MacOS (Intel): 0x3837d0
     * @note[short] Windows: 0x3a9930
     * @note[short] Android
     */
    void onTOS(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30f7a8
     * @note[short] MacOS (Intel): 0x384570
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void sendSupportMail();
    UploadActionPopup* m_uploadPopup;
};
