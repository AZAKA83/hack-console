#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/LevelRateInfoDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJRateLevelLayer : public SetupTriggerPopup, public UploadPopupDelegate, public UploadActionDelegate, public LevelRateInfoDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJRateLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRateLevelLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJRateLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x22b500
     * @note[short] MacOS (Intel): 0x42bd50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x245d44
     * @note[short] Android: Rebinded
     */
     ~GJRateLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x24247c
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJRateLevelLayer* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x462afc
     * @note[short] MacOS (Intel): 0x506d40
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x247c34
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x462af8
     * @note[short] MacOS (Intel): 0x506d30
     * @note[short] Windows: 0x39a390
     * @note[short] iOS: 0x247c30
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4611a0
     * @note[short] MacOS (Intel): 0x5054d0
     * @note[short] Windows: 0x419fd0
     * @note[short] iOS: 0x246814
     * @note[short] Android
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x462788
     * @note[short] MacOS (Intel): 0x506a90
     * @note[short] Windows: 0x41b840
     * @note[short] iOS: 0x247a58
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x4628e0
     * @note[short] MacOS (Intel): 0x506ba0
     * @note[short] Windows: 0x41b8d0
     * @note[short] iOS: 0x247af0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x462a58
     * @note[short] MacOS (Intel): 0x506c90
     * @note[short] Windows: 0x41b9a0
     * @note[short] iOS: 0x247b90
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x46265c
     * @note[short] MacOS (Intel): 0x506950
     * @note[short] Windows: 0x41b780
     * @note[short] iOS: 0x24793c
     * @note[short] Android
     */
    virtual void rateInfoFinished(int id, std::string info);

    /**
     * @note[short] MacOS (ARM): 0x462728
     * @note[short] MacOS (Intel): 0x506a20
     * @note[short] Windows: 0x41b810
     * @note[short] iOS: 0x2479f8
     * @note[short] Android
     */
    virtual void rateInfoFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x46136c
     * @note[short] MacOS (Intel): 0x5056b0
     * @note[short] Windows: 0x41a260
     * @note[short] iOS: 0x2469b4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] Windows: 0x41b060
     * @note[short] Android
     */
    void createStatPillar(int width, int height, int count, cocos2d::ccColor3B innerColor, cocos2d::ccColor3B outerColor, cocos2d::CCPoint position, std::string text);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int stars, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale);

    /**
     * @note[short] MacOS (Intel): 0x508f20
     * @note[short] Windows: 0x4196d0
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x46106c
     * @note[short] MacOS (Intel): 0x505370
     * @note[short] Windows: 0x41a430
     * @note[short] Android
     */
    void onFeature(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4610bc
     * @note[short] MacOS (Intel): 0x5053d0
     * @note[short] Windows: 0x5604b0
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x41a3c0
     * @note[short] Android
     */
    void onToggleCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x560040
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x461454
     * @note[short] MacOS (Intel): 0x5057c0
     * @note[short] Windows: 0x41a490
     * @note[short] Android
     */
    void setupRateInfo(std::string info);
    GJGameLevel* m_level;
    bool m_uploadFinished;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_starButtons;
    int m_stars;
    bool m_coinsToggled;
    cocos2d::CCSprite* m_coinSprite;
    UploadActionPopup* m_uploadPopup;
    GJDifficultySprite* m_difficultySprite;
    GJFeatureState m_featureState;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCPoint m_center;
};
