#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>

class RateStarsModLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateStarsModLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateStarsModLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x55f360
     * @note[short] iOS: 0x51e828
     * @note[short] Android: Rebinded
     */
    virtual  ~RateStarsModLayer();

    /**
     * @note[short] Android
     */
    static RateStarsModLayer* create(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x8416b4
     * @note[short] MacOS (Intel): 0x964210
     * @note[short] Windows: 0x560840
     * @note[short] iOS: 0x51f8fc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x841320
     * @note[short] MacOS (Intel): 0x963ed0
     * @note[short] Windows: 0x560640
     * @note[short] iOS: 0x51f75c
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x841460
     * @note[short] MacOS (Intel): 0x963fc0
     * @note[short] Windows: 0x5606c0
     * @note[short] iOS: 0x51f7e8
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x8415c0
     * @note[short] MacOS (Intel): 0x964130
     * @note[short] Windows: 0x560780
     * @note[short] iOS: 0x51f87c
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getStarsButton(int p0, cocos2d::SEL_MenuHandler p1, cocos2d::CCMenu* p2, float p3);

    /**
     * @note[short] Windows: 0x55f4b0
     * @note[short] Android
     */
    bool init(int p0, bool p1);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFeature(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn selectDemon(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0x560040
     * @note[short] Android
     */
    TodoReturn selectRating(cocos2d::CCObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateDemonRow();

    /**
     * @note[short] Android
     */
    TodoReturn updateDSprite();
};
