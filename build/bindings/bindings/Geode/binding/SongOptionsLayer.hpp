#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SongOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SongOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SongOptionsLayer();

    /**
     * @note[short] Windows: 0x163b00
     * @note[short] iOS: 0x1c38b4
     * @note[short] Android: Rebinded
     */
    virtual  ~SongOptionsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SongOptionsLayer* create(CustomSongDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x1ac344
     * @note[short] MacOS (Intel): 0x1fabc0
     * @note[short] Windows: 0x166740
     * @note[short] iOS: 0x1c45c4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1ab504
     * @note[short] MacOS (Intel): 0x1f9ce0
     * @note[short] Windows: 0x1656a0
     * @note[short] Android
     */
    bool init(CustomSongDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x1abf9c
     * @note[short] MacOS (Intel): 0x1fa850
     * @note[short] Windows: 0x1665b0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1abeb8
     * @note[short] MacOS (Intel): 0x1fa790
     * @note[short] Windows: 0x1660d0
     * @note[short] Android
     */
    void onFadeIn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1abf04
     * @note[short] MacOS (Intel): 0x1fa7d0
     * @note[short] Windows: 0x166110
     * @note[short] Android
     */
    void onFadeOut(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ac0ac
     * @note[short] MacOS (Intel): 0x1fa950
     * @note[short] Windows: 0x166460
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ac18c
     * @note[short] MacOS (Intel): 0x1faa00
     * @note[short] Windows: 0x166190
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1abf50
     * @note[short] MacOS (Intel): 0x1fa810
     * @note[short] Windows: 0x166150
     * @note[short] Android
     */
    void onSongPersistent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ac2d8
     * @note[short] MacOS (Intel): 0x1fab50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updatePlaybackBtn();
    CustomSongDelegate* m_delegate;
    CCTextInputNode* m_offsetInput;
    CCMenuItemSpriteExtra* m_playbackButton;
};
