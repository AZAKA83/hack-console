#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ShareLevelLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShareLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareLevelLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShareLevelLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x312cb8
     * @note[short] Android: Rebinded
     */
     ~ShareLevelLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ShareLevelLayer* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x215528
     * @note[short] MacOS (Intel): 0x26e470
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x314370
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x214e4c
     * @note[short] MacOS (Intel): 0x26dc30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getStarsButton(int btnID, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale);

    /**
     * @note[short] MacOS (Intel): 0x26c960
     * @note[short] Windows: 0x630540
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x214b18
     * @note[short] MacOS (Intel): 0x26d950
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x631230
     * @note[short] Android
     */
    void onGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x631990
     * @note[short] Android
     */
    void onNotifyFollowers(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x631970
     * @note[short] Android
     */
    void onNotifyFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x631b60
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x214b54
     * @note[short] MacOS (Intel): 0x26d980
     * @note[short] Windows: 0x631ce0
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x214f14
     * @note[short] MacOS (Intel): 0x26dd00
     * @note[short] Windows: 0x6319b0
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn setupNotifyToggles(cocos2d::CCPoint p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x2143cc
     * @note[short] MacOS (Intel): 0x26d580
     * @note[short] Windows: 0x631390
     * @note[short] Android
     */
    void setupStars();

    /**
     * @note[short] Android
     */
    TodoReturn updateNotifyToggles();
    GJGameLevel* m_level;
    int m_starsRequested;
    cocos2d::CCArray* m_starButtons;
    cocos2d::CCSprite* m_difficultySprite;
    cocos2d::CCLabelBMFont* m_notifyLabel;
    cocos2d::CCSprite* m_notifySprite;
    CCMenuItemToggler* m_friendsToggler;
    CCMenuItemToggler* m_followersToggler;
    cocos2d::CCSprite* m_friendsSprite;
    cocos2d::CCSprite* m_followersSprite;
    cocos2d::CCLabelBMFont* m_friendsLabel;
    cocos2d::CCLabelBMFont* m_followersLabel;
};
