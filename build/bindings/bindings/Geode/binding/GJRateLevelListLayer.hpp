#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJRateLevelListLayer : public SetupTriggerPopup, public UploadPopupDelegate, public UploadActionDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJRateLevelListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRateLevelListLayer, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static GJRateLevelListLayer* create(GJLevelList* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x465684
     * @note[short] MacOS (Intel): 0x509cb0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x464770
     * @note[short] MacOS (Intel): 0x508c20
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x464174
     * @note[short] MacOS (Intel): 0x508640
     * @note[short] Android
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x464160
     * @note[short] MacOS (Intel): 0x508620
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x464418
     * @note[short] MacOS (Intel): 0x508910
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x464568
     * @note[short] MacOS (Intel): 0x508a10
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4646d0
     * @note[short] MacOS (Intel): 0x508b80
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x46433c
     * @note[short] MacOS (Intel): 0x508810
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn createStatPillar(int p0, int p1, int p2, cocos2d::ccColor3B p3, cocos2d::ccColor3B p4, cocos2d::CCPoint p5, std::string p6);

    /**
     * @note[short] Android
     */
    TodoReturn impliedStarsForLevel(GJGameLevel* p0);

    /**
     * @note[short] Android
     */
    bool init(GJLevelList* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn starSumForBottom(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateStarSumLabel(int p0);
};
