#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class EndLevelLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "EndLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndLevelLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): 0x420c4c
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     EndLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x41d24c
     * @note[short] MacOS (Intel): 0x4b8c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x391ff0
     * @note[short] Android: Rebinded
     */
     ~EndLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x41d130
     * @note[short] MacOS (Intel): 0x4b8b30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EndLevelLayer* create(PlayLayer* playLayer);

    /**
     * @note[short] MacOS (ARM): 0x42042c
     * @note[short] MacOS (Intel): 0x4bc1f0
     * @note[short] Windows: 0x206a30
     * @note[short] iOS: 0x394d5c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x420bc8
     * @note[short] MacOS (Intel): 0x4bc990
     * @note[short] Windows: 0x2080c0
     * @note[short] iOS: 0x3954a4
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x41d404
     * @note[short] MacOS (Intel): 0x4b8f10
     * @note[short] Windows: 0x203d90
     * @note[short] iOS: 0x392028
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x41f698
     * @note[short] MacOS (Intel): 0x4bb3c0
     * @note[short] Windows: 0x205fe0
     * @note[short] iOS: 0x394038
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x420380
     * @note[short] MacOS (Intel): 0x4bc110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x394cdc
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x420c44
     * @note[short] MacOS (Intel): 0x4bca20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3954e8
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x4207bc
     * @note[short] MacOS (Intel): 0x4bc5a0
     * @note[short] Windows: 0x2071c0
     * @note[short] Android
     */
    void coinEnterFinished(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0xe994
     * @note[short] MacOS (Intel): 0x103e0
     * @note[short] Windows: 0x207180
     * @note[short] Android
     */
    void coinEnterFinishedO(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4209dc
     * @note[short] Windows: 0x207830
     * @note[short] Android
     */
    void currencyEnterFinished();

    /**
     * @note[short] MacOS (ARM): 0x420ad0
     * @note[short] Windows: 0x207ce0
     * @note[short] Android
     */
    void diamondEnterFinished();

    /**
     * @note[short] MacOS (ARM): 0x41edc0
     * @note[short] MacOS (Intel): 0x4bab60
     * @note[short] Windows: 0x205c80
     * @note[short] Android
     */
    std::string getCoinString();

    /**
     * @note[short] MacOS (ARM): 0x41f008
     * @note[short] MacOS (Intel): 0x4bad90
     * @note[short] Windows: 0x208110
     * @note[short] Android
     */
    const char* getEndText();

    /**
     * @note[short] MacOS (ARM): 0x420388
     * @note[short] MacOS (Intel): 0x4bc130
     * @note[short] Windows: 0x206640
     * @note[short] Android
     */
    void goEdit();

    /**
     * @note[short] MacOS (ARM): 0x41d1c4
     * @note[short] MacOS (Intel): 0x4b8bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(PlayLayer* playLayer);

    /**
     * @note[short] Windows: 0x205c40
     * @note[short] Android
     */
    void onDeathTracker(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41f304
     * @note[short] MacOS (Intel): 0x4949f0
     * @note[short] Windows: 0x206540
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x420384
     * @note[short] MacOS (Intel): 0x4bc120
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41f5ac
     * @note[short] MacOS (Intel): 0x4bb2d0
     * @note[short] Windows: 0x206710
     * @note[short] Android
     */
    void onHideLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41f50c
     * @note[short] MacOS (Intel): 0x4bb220
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41f200
     * @note[short] MacOS (Intel): 0x4baf40
     * @note[short] Windows: 0x2063c0
     * @note[short] Android
     */
    void onMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41f0ec
     * @note[short] MacOS (Intel): 0x4bae40
     * @note[short] Windows: 0x2061b0
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41f398
     * @note[short] MacOS (Intel): 0x4bb0c0
     * @note[short] Windows: 0x206800
     * @note[short] Android
     */
    void onRestartCheckpoint(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41fb80
     * @note[short] MacOS (Intel): 0x4bb8b0
     * @note[short] Windows: 0x206f30
     * @note[short] Android
     */
    void playCoinEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x41fd10
     * @note[short] Windows: 0x2074a0
     * @note[short] Android
     */
    void playCurrencyEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x420048
     * @note[short] Windows: 0x207950
     * @note[short] Android
     */
    void playDiamondEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x420554
     * @note[short] MacOS (Intel): 0x4bc350
     * @note[short] Windows: 0x207e00
     * @note[short] Android
     */
    void playEndEffect();

    /**
     * @note[short] MacOS (ARM): 0x41f828
     * @note[short] MacOS (Intel): 0x4bb550
     * @note[short] Windows: 0x206a40
     * @note[short] Android
     */
    void playStarEffect(float duration);

    /**
     * @note[short] MacOS (ARM): 0x420438
     * @note[short] MacOS (Intel): 0x4bc220
     * @note[short] Windows: 0x206de0
     * @note[short] Android
     */
    void starEnterFinished();

    /**
     * @note[short] MacOS (ARM): 0x41f668
     * @note[short] MacOS (Intel): 0x4bb390
     * @note[short] Android
     */
    void tryShowBanner(float dt);
    PlayLayer* m_playLayer;
    bool m_notLocal;
    bool m_coinsVerified;
    bool m_unknown3;
    bool m_exiting;
    bool m_animateCoins;
    bool m_endEffectPlayed;
    cocos2d::CCMenu* m_sideMenu;
    cocos2d::CCArray* m_coinsToAnimate;
    cocos2d::CCPoint m_starsPosition;
    cocos2d::CCPoint m_orbsPosition;
    cocos2d::CCPoint m_diamondsPosition;
    int m_orbs;
    int m_stars;
    int m_moons;
    int m_diamonds;
    bool m_secretKey;
    bool m_hidden;
};
