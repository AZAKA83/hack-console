#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class MoreSearchLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "MoreSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreSearchLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MoreSearchLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5dc84
     * @note[short] Android: Rebinded
     */
     ~MoreSearchLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static MoreSearchLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x61ac9c
     * @note[short] MacOS (Intel): 0x709d90
     * @note[short] Windows: 0x43b9b0
     * @note[short] iOS: 0x5dcbc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x61cb20
     * @note[short] MacOS (Intel): 0x70bda0
     * @note[short] Windows: 0x440ba0
     * @note[short] iOS: 0x5f8d8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x61c6cc
     * @note[short] MacOS (Intel): 0x70b950
     * @note[short] Windows: 0x43f970
     * @note[short] Android
     */
    void audioNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61c658
     * @note[short] MacOS (Intel): 0x70b8e0
     * @note[short] Windows: 0x43fab0
     * @note[short] Android
     */
    void audioPrevious(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4404e0
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string label, cocos2d::SEL_MenuHandler callback, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x61be5c
     * @note[short] MacOS (Intel): 0x70b130
     * @note[short] Windows: 0x440750
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61c278
     * @note[short] MacOS (Intel): 0x70b4f0
     * @note[short] Windows: 0x43ed00
     * @note[short] Android
     */
    void onCoins(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onCompleted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61c448
     * @note[short] MacOS (Intel): 0x70b6d0
     * @note[short] Windows: 0x43df70
     * @note[short] Android
     */
    void onEpic(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFeatured(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61c810
     * @note[short] MacOS (Intel): 0x70ba70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61c850
     * @note[short] MacOS (Intel): 0x70bab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61c734
     * @note[short] MacOS (Intel): 0x70b9c0
     * @note[short] Windows: 0x4403a0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61c488
     * @note[short] MacOS (Intel): 0x70b710
     * @note[short] Windows: 0x43e1b0
     * @note[short] Android
     */
    void onLegendary(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61c4c8
     * @note[short] MacOS (Intel): 0x70b750
     * @note[short] Windows: 0x43e3f0
     * @note[short] Android
     */
    void onMythic(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNoStar(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61c238
     * @note[short] MacOS (Intel): 0x70b4b0
     * @note[short] Windows: 0x43e880
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61c2f8
     * @note[short] MacOS (Intel): 0x70b570
     * @note[short] Windows: 0x43ef40
     * @note[short] Android
     */
    void onSongFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61c508
     * @note[short] MacOS (Intel): 0x70b790
     * @note[short] Windows: 0x43fd50
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61c2b8
     * @note[short] MacOS (Intel): 0x70b530
     * @note[short] Windows: 0x43eac0
     * @note[short] Android
     */
    void onTwoPlayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUncompleted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61c988
     * @note[short] MacOS (Intel): 0x70bc30
     * @note[short] Windows: 0x43fbf0
     * @note[short] Android
     */
    void selectSong(int songID);

    /**
     * @note[short] MacOS (ARM): 0x61c890
     * @note[short] MacOS (Intel): 0x70baf0
     * @note[short] Windows: 0x440250
     * @note[short] Android
     */
    void toggleSongNodes(bool custom, bool disable);

    /**
     * @note[short] MacOS (ARM): 0x61c9d0
     * @note[short] MacOS (Intel): 0x70bc80
     * @note[short] Windows: 0x43f680
     * @note[short] Android
     */
    void updateAudioLabel();
    cocos2d::CCLabelBMFont* m_audioTrackName;
    CCMenuItemSpriteExtra* m_songLeftBtn;
    CCMenuItemSpriteExtra* m_songRightBtn;
    CCMenuItemSpriteExtra* m_normalBtn;
    CCMenuItemSpriteExtra* m_customBtn;
    CCTextInputNode* m_enterSongID;
    cocos2d::CCArray* m_commonSongNodes;
    cocos2d::CCArray* m_normalSongNodes;
    cocos2d::CCArray* m_customSongNodes;
};
