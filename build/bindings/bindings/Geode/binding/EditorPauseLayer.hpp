#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCBlockLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/VolumeChangeDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class EditorPauseLayer : public CCBlockLayer, public FLAlertLayerProtocol, public VolumeChangeDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorPauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorPauseLayer, CCBlockLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditorPauseLayer();

    /**
     * @note[short] MacOS (ARM): 0x221eb4
     * @note[short] MacOS (Intel): 0x27c570
     * @note[short] Windows: 0x180ca0
     * @note[short] iOS: 0x4430fc
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorPauseLayer();

    /**
     * @note[short] MacOS (ARM): 0x2221dc
     * @note[short] MacOS (Intel): 0x27c970
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EditorPauseLayer* create(LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x224d40
     * @note[short] MacOS (Intel): 0x27f580
     * @note[short] Windows: 0x1833f0
     * @note[short] iOS: 0x444d6c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x224e34
     * @note[short] MacOS (Intel): 0x27f690
     * @note[short] Windows: 0x183400
     * @note[short] iOS: 0x444d78
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x222db0
     * @note[short] MacOS (Intel): 0x27d2e0
     * @note[short] Windows: 0x181550
     * @note[short] iOS: 0x44379c
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x224c40
     * @note[short] MacOS (Intel): 0x27f460
     * @note[short] Windows: 0x182df0
     * @note[short] iOS: 0x444b68
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x222134
     * @note[short] MacOS (Intel): 0x27c8c0
     * @note[short] Windows: 0x180dc0
     * @note[short] iOS: 0x443134
     * @note[short] Android
     */
    virtual void volumeChanged();

    /**
     * @note[short] MacOS (ARM): 0x224314
     * @note[short] MacOS (Intel): 0x27eae0
     * @note[short] Windows: 0x182440
     * @note[short] Android
     */
    void editorSFXSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2222c0
     * @note[short] MacOS (Intel): 0x27ca90
     * @note[short] Windows: 0x180e80
     * @note[short] Android
     */
    bool init(LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x224294
     * @note[short] MacOS (Intel): 0x27ea60
     * @note[short] Windows: 0x1822f0
     * @note[short] Android
     */
    void musicSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224050
     * @note[short] MacOS (Intel): 0x27e820
     * @note[short] Windows: 0x1831b0
     * @note[short] Android
     */
    void onAutoSaveSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22426c
     * @note[short] MacOS (Intel): 0x27ea30
     * @note[short] Windows: 0x1824b0
     * @note[short] Android
     */
    void onControls(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22406c
     * @note[short] MacOS (Intel): 0x27e840
     * @note[short] Windows: 0x183050
     * @note[short] Android
     */
    void onDeathStats(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224098
     * @note[short] MacOS (Intel): 0x27e870
     * @note[short] Windows: 0x183210
     * @note[short] Android
     */
    void onDownloadAudio(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224020
     * @note[short] MacOS (Intel): 0x27e7f0
     * @note[short] Windows: 0x1831d0
     * @note[short] Android
     */
    void onEditorSounds(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224bf4
     * @note[short] MacOS (Intel): 0x27f400
     * @note[short] Windows: 0x182b90
     * @note[short] Android
     */
    void onExitEditor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x223d1c
     * @note[short] MacOS (Intel): 0x27e4d0
     * @note[short] Windows: 0x182c80
     * @note[short] Android
     */
    void onExitNoSave(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x223e7c
     * @note[short] MacOS (Intel): 0x27e670
     * @note[short] Windows: 0x182930
     * @note[short] Android
     */
    void onExport(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22418c
     * @note[short] MacOS (Intel): 0x27e950
     * @note[short] Windows: 0x182f10
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224770
     * @note[short] MacOS (Intel): 0x27ef20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x223e58
     * @note[short] MacOS (Intel): 0x27e640
     * @note[short] Windows: 0x1822c0
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x223aa8
     * @note[short] MacOS (Intel): 0x27e250
     * @note[short] Windows: 0x1824e0
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x223c3c
     * @note[short] MacOS (Intel): 0x27e400
     * @note[short] Windows: 0x182800
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x223bb4
     * @note[short] MacOS (Intel): 0x27e360
     * @note[short] Windows: 0x182b30
     * @note[short] Android
     */
    void onSaveAndExit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x223b20
     * @note[short] MacOS (Intel): 0x27e2d0
     * @note[short] Windows: 0x182590
     * @note[short] Android
     */
    void onSaveAndPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224ac8
     * @note[short] MacOS (Intel): 0x27f2d0
     * @note[short] Windows: 0x182630
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x224b98
     * @note[short] MacOS (Intel): 0x27f3a0
     * @note[short] Windows: 0x182760
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x224a8c
     * @note[short] MacOS (Intel): 0x27f290
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void saveLevel();

    /**
     * @note[short] MacOS (ARM): 0x2242d4
     * @note[short] MacOS (Intel): 0x27eaa0
     * @note[short] Windows: 0x182390
     * @note[short] Android
     */
    void sfxSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2248ac
     * @note[short] MacOS (Intel): 0x27f070
     * @note[short] Android
     */
    void toggleDebugDraw(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224948
     * @note[short] MacOS (Intel): 0x27f120
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleEditorBackground(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2247e4
     * @note[short] MacOS (Intel): 0x27efa0
     * @note[short] Android
     */
    void toggleEditorColorMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224990
     * @note[short] MacOS (Intel): 0x27f170
     * @note[short] Android
     */
    void toggleEditorGrid(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224900
     * @note[short] MacOS (Intel): 0x27f0d0
     * @note[short] Android
     */
    void toggleEditorGround(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2248c8
     * @note[short] MacOS (Intel): 0x27f090
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleEffectDuration(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2248e4
     * @note[short] MacOS (Intel): 0x27f0b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleEffectLines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224790
     * @note[short] MacOS (Intel): 0x27ef40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleFollowPlayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2249ac
     * @note[short] MacOS (Intel): 0x27f190
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleGridOnTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224814
     * @note[short] MacOS (Intel): 0x27efd0
     * @note[short] Android
     */
    void toggleHideInvisible(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2247c8
     * @note[short] MacOS (Intel): 0x27ef80
     * @note[short] Android
     */
    void toggleIgnoreDamage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2247ac
     * @note[short] MacOS (Intel): 0x27ef60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void togglePlaytestMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22487c
     * @note[short] MacOS (Intel): 0x27f040
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void togglePreviewAnim(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224830
     * @note[short] MacOS (Intel): 0x27eff0
     * @note[short] Android
     */
    void togglePreviewParticles(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224860
     * @note[short] MacOS (Intel): 0x27f020
     * @note[short] Android
     */
    void togglePreviewShaders(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224a70
     * @note[short] MacOS (Intel): 0x27f270
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleRecordOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224a54
     * @note[short] MacOS (Intel): 0x27f250
     * @note[short] Android
     */
    void toggleSelectFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x224a20
     * @note[short] MacOS (Intel): 0x27f210
     * @note[short] Android
     */
    void toggleShowObjectInfo(cocos2d::CCObject* sender);
    bool m_saved;
    LevelEditorLayer* m_editorLayer;
    GEODE_PAD(32);
    Slider* m_musicSlider;
    Slider* m_sfxSlider;
    Slider* m_editorSFXSlider;
};
