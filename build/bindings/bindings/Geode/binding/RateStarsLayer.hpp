#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>

class RateStarsLayer : public FLAlertLayer, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "RateStarsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateStarsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x55e3a0
     * @note[short] iOS: 0x888b4
     * @note[short] Android: Rebinded
     */
    virtual  ~RateStarsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static RateStarsLayer* create(int levelID, bool platformer, bool moderator);

    /**
     * @note[short] MacOS (ARM): 0x21dfb0
     * @note[short] MacOS (Intel): 0x277f60
     * @note[short] Windows: 0x55f300
     * @note[short] iOS: 0x89474
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x21dc1c
     * @note[short] MacOS (Intel): 0x277c20
     * @note[short] Windows: 0x55f100
     * @note[short] iOS: 0x892d4
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x21dd5c
     * @note[short] MacOS (Intel): 0x277d10
     * @note[short] Windows: 0x55f180
     * @note[short] iOS: 0x89360
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x21debc
     * @note[short] MacOS (Intel): 0x277e80
     * @note[short] Windows: 0x55f240
     * @note[short] iOS: 0x893f4
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int stars, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale);

    /**
     * @note[short] MacOS (ARM): 0x21ce04
     * @note[short] MacOS (Intel): 0x276dc0
     * @note[short] Windows: 0x55e4e0
     * @note[short] Android
     */
    bool init(int levelID, bool platformer, bool moderator);

    /**
     * @note[short] MacOS (ARM): 0x21da8c
     * @note[short] MacOS (Intel): 0x277a90
     * @note[short] Windows: 0x55f2c0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21da30
     * @note[short] MacOS (Intel): 0x277a40
     * @note[short] Windows: 0x55ecc0
     * @note[short] Android
     */
    void onFeature(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45ffc8
     * @note[short] MacOS (Intel): 0x277bd0
     * @note[short] Windows: 0x55eef0
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21da18
     * @note[short] MacOS (Intel): 0x277a10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onToggleCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x55ecf0
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
    bool m_uploadFinished;
    bool m_moderator;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_buttons;
    int m_levelID;
    int m_starsRate;
    bool m_coinsToggled;
    cocos2d::CCSprite* m_coinSprite;
    UploadActionPopup* m_popup;
    GJDifficultySprite* m_difficultySprite;
    int m_featureState;
    RateLevelDelegate* m_delegate;
};
