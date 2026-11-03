#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CustomSongLayer.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/CustomSongLayerDelegate.hpp>
#include <Geode/binding/CustomSongDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SongSelectNode : public cocos2d::CCNode, public FLAlertLayerProtocol, public CustomSongLayerDelegate, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "SongSelectNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongSelectNode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x163bf0
     * @note[short] iOS: 0x1c56c8
     * @note[short] Android: Rebinded
     */
    virtual  ~SongSelectNode();

    /**
     * @note[short] MacOS (ARM): 0x1ad608
     * @note[short] MacOS (Intel): 0x1fbf10
     * @note[short] Windows: 0x167c40
     * @note[short] Android
     */
    static SongSelectNode* create(int id, bool customSong, LevelSettingsObject* settings, SongSelectType selectType, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCMenu* menu, bool noLabel);

    /**
     * @note[short] MacOS (ARM): 0x1ae3e0
     * @note[short] MacOS (Intel): 0x1fcd40
     * @note[short] Windows: 0x168d60
     * @note[short] iOS: 0x1c63dc
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1ae4c8
     * @note[short] MacOS (Intel): 0x1fce20
     * @note[short] Windows: 0x168df0
     * @note[short] iOS: 0x1c6458
     * @note[short] Android
     */
    virtual void customSongLayerClosed();

    /**
     * @note[short] MacOS (ARM): 0x1ae530
     * @note[short] MacOS (Intel): 0x1fce80
     * @note[short] Windows: 0x168e20
     * @note[short] iOS: 0x1c64c0
     * @note[short] Android
     */
    virtual void songIDChanged(int id);

    /**
     * @note[short] MacOS (ARM): 0x1ae550
     * @note[short] MacOS (Intel): 0x1fceb0
     * @note[short] Windows: 0x168e30
     * @note[short] iOS: 0x1c64e0
     * @note[short] Android
     */
    virtual int getActiveSongID();

    /**
     * @note[short] MacOS (ARM): 0x1ae560
     * @note[short] MacOS (Intel): 0x1fced0
     * @note[short] Windows: 0x168e40
     * @note[short] iOS: 0x1c64f0
     * @note[short] Android
     */
    virtual std::string getSongFileName();

    /**
     * @note[short] MacOS (ARM): 0x1ae69c
     * @note[short] MacOS (Intel): 0x1fd020
     * @note[short] Windows: 0x168f30
     * @note[short] iOS: 0x1c659c
     * @note[short] Android
     */
    virtual LevelSettingsObject* getLevelSettings();

    /**
     * @note[short] MacOS (ARM): 0x1ae084
     * @note[short] MacOS (Intel): 0x1fc980
     * @note[short] Windows: 0x1687e0
     * @note[short] Android
     */
    void audioNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ae050
     * @note[short] MacOS (Intel): 0x1fc940
     * @note[short] Windows: 0x168820
     * @note[short] Android
     */
    void audioPrevious(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x59d388
     * @note[short] MacOS (Intel): 0x1fc030
     * @note[short] Windows: 0x167d80
     * @note[short] Android
     */
    bool init(int id, bool customSong, LevelSettingsObject* settings, SongSelectType selectType, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCMenu* menu, bool noLabel);

    /**
     * @note[short] MacOS (ARM): 0x1ae0f0
     * @note[short] MacOS (Intel): 0x1fc9f0
     * @note[short] Windows: 0x168b30
     * @note[short] Android
     */
    void onOpenCustomSong(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ae0bc
     * @note[short] MacOS (Intel): 0x1fc9c0
     * @note[short] Windows: 0x168850
     * @note[short] Android
     */
    void onSongMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ae16c
     * @note[short] MacOS (Intel): 0x1fca90
     * @note[short] Windows: 0x168880
     * @note[short] Android
     */
    void onSongMode(int songMode);

    /**
     * @note[short] MacOS (ARM): 0x1ae14c
     * @note[short] MacOS (Intel): 0x1fca60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void selectSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x1ae3ac
     * @note[short] MacOS (Intel): 0x1fcd00
     * @note[short] Windows: 0x168c00
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showCustomSongSelect();

    /**
     * @note[short] MacOS (ARM): 0x1adf38
     * @note[short] MacOS (Intel): 0x1fc850
     * @note[short] Windows: 0x1686f0
     * @note[short] Android
     */
    void updateAudioLabel();

    /**
     * @note[short] MacOS (ARM): 0x1ae32c
     * @note[short] MacOS (Intel): 0x1fcc80
     * @note[short] Windows: 0x168aa0
     * @note[short] Android
     */
    void updateWidgetVisibility();
    int m_selectedSongID;
    bool m_isCustomSong;
    bool m_songChanged;
    cocos2d::CCLabelBMFont* m_audioLabel;
    cocos2d::CCArray* m_selectSongObjects;
    cocos2d::CCArray* m_normalSongObjects;
    cocos2d::CCArray* m_changeSongObjects;
    CCMenuItemSpriteExtra* m_normalButton;
    CCMenuItemSpriteExtra* m_customButton;
    CCMenuItemSpriteExtra* m_selectButton;
    CCMenuItemSpriteExtra* m_changeButton;
    CustomSongWidget* m_songWidget;
    LevelSettingsObject* m_settingsObject;
};
