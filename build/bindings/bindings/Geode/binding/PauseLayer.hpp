#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCBlockLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/StartPosBrowserDelegate.hpp>
#include <Geode/binding/CreateStartPosPopupDelegate.hpp>
#include <Geode/binding/VolumeChangeDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class PauseLayer : public CCBlockLayer, public FLAlertLayerProtocol, public StartPosBrowserDelegate, public CreateStartPosPopupDelegate, public VolumeChangeDelegate {
public:
    static constexpr auto CLASS_NAME = "PauseLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PauseLayer, CCBlockLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     PauseLayer();

    /**
     * @note[short] MacOS (ARM): 0x3444e0
     * @note[short] MacOS (Intel): 0x3bf270
     * @note[short] Windows: 0x4d6600
     * @note[short] iOS: 0x1bdfb0
     * @note[short] Android: Rebinded
     */
    virtual  ~PauseLayer();

    /**
     * @note[short] MacOS (Intel): 0x3bf660
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static PauseLayer* create(bool unfocused);

    /**
     * @note[short] MacOS (ARM): 0x3480fc
     * @note[short] MacOS (Intel): 0x3c34a0
     * @note[short] Windows: 0x4dba00
     * @note[short] iOS: 0x1c1374
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x347fc0
     * @note[short] MacOS (Intel): 0x3c3350
     * @note[short] Windows: 0x4db900
     * @note[short] iOS: 0x1c126c
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x344754
     * @note[short] MacOS (Intel): 0x3bf7e0
     * @note[short] Windows: 0x4d68e0
     * @note[short] iOS: 0x1be0b8
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x347e1c
     * @note[short] MacOS (Intel): 0x3c3200
     * @note[short] Windows: 0x4db6f0
     * @note[short] iOS: 0x1c11a8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3480f4
     * @note[short] MacOS (Intel): 0x3c3480
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c136c
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3445a0
     * @note[short] MacOS (Intel): 0x3bf5b0
     * @note[short] Windows: 0x4d6820
     * @note[short] iOS: 0x1bdfe8
     * @note[short] Android
     */
    virtual void volumeChanged();

    /**
     * @note[short] MacOS (ARM): 0x347f00
     * @note[short] MacOS (Intel): 0x3c32c0
     * @note[short] Windows: 0x4db8b0
     * @note[short] iOS: 0x1c1218
     * @note[short] Android
     */
    virtual bool handleAction(int action, bool down, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x346e78
     * @note[short] MacOS (Intel): 0x3c21d0
     * @note[short] Windows: 0x4d92c0
     * @note[short] iOS: 0x1c04ac
     * @note[short] Android
     */
    virtual void startPosSelected(StartPosBrowser* p0, int p1, StartPosObject* p2);

    /**
     * @note[short] MacOS (ARM): 0x346e98
     * @note[short] MacOS (Intel): 0x3c2210
     * @note[short] Windows: 0x4d92e0
     * @note[short] iOS: 0x1c04cc
     * @note[short] Android
     */
    virtual void createStartPosPopupClosed(CreateStartPosPopup* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void checkQuestsStatus();

    /**
     * @note[short] MacOS (ARM): 0x346f8c
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] Windows: 0x4d8f90
     * @note[short] Android
     */
    StartPosObject* getQueuedStartPos();

    /**
     * @note[short] MacOS (ARM): 0x347ce4
     * @note[short] MacOS (Intel): 0x3c30c0
     * @note[short] Windows: 0x4db450
     * @note[short] Android
     */
    void goEdit();

    /**
     * @note[short] MacOS (Intel): 0x3bf7c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(bool unfocused);

    /**
     * @note[short] MacOS (ARM): 0x224294
     * @note[short] MacOS (Intel): 0x27ea60
     * @note[short] Windows: 0x1822f0
     * @note[short] Android
     */
    void musicSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x346918
     * @note[short] MacOS (Intel): 0x3c1b70
     * @note[short] Windows: 0x4d93c0
     * @note[short] Android
     */
    void onChangeStartpos(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x346ad8
     * @note[short] MacOS (Intel): 0x3c1ea0
     * @note[short] Windows: 0x4d8ff0
     * @note[short] Android
     */
    void onCreateStartpos(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x347c08
     * @note[short] MacOS (Intel): 0x3c2fe0
     * @note[short] Windows: 0x4db250
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x308130
     * @note[short] MacOS (Intel): 0x3c3140
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x345ff0
     * @note[short] MacOS (Intel): 0x3c1230
     * @note[short] Windows: 0x4dab90
     * @note[short] Android
     */
    void onNormalMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x345fb4
     * @note[short] MacOS (Intel): 0x3c11f0
     * @note[short] Windows: 0x4daac0
     * @note[short] Android
     */
    void onPracticeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x347d68
     * @note[short] MacOS (Intel): 0x3c3160
     * @note[short] Windows: 0x4db760
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x3c2fb0
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x346f88
     * @note[short] MacOS (Intel): 0x3c2340
     * @note[short] Android
     */
    void onReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x346298
     * @note[short] MacOS (Intel): 0x3c14e0
     * @note[short] Windows: 0x4dae30
     * @note[short] Android
     */
    void onRestart(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x345ef8
     * @note[short] MacOS (Intel): 0x3c1130
     * @note[short] Windows: 0x4daf60
     * @note[short] Android
     */
    void onRestartFull(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34603c
     * @note[short] MacOS (Intel): 0x3c1280
     * @note[short] Windows: 0x4dac50
     * @note[short] Android
     */
    void onResume(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x346aa0
     * @note[short] MacOS (Intel): 0x3c1cf0
     * @note[short] Windows: 0x4d9150
     * @note[short] Android
     */
    void onShowStartposBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4d9520
     * @note[short] Android
     */
    void onSideButtonPressed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x346f84
     * @note[short] MacOS (Intel): 0x3c2330
     * @note[short] Android
     */
    void onTime(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleUI(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x345dec
     * @note[short] MacOS (Intel): 0x3c1020
     * @note[short] Windows: 0x4db090
     * @note[short] Android
     */
    void onTryEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4da1e0
     * @note[short] Android
     */
    void setupLegacyProgressBars();

    /**
     * @note[short] Windows: 0x4da5d0
     * @note[short] Android
     */
    void setupPlatformerLabels(bool p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupProgressBars();

    /**
     * @note[short] Windows: 0x4d9d60
     * @note[short] Android
     */
    void setupSessionProgressBar();

    /**
     * @note[short] MacOS (ARM): 0x3468d8
     * @note[short] MacOS (Intel): 0x3c1b30
     * @note[short] Windows: 0x182390
     * @note[short] Android
     */
    void sfxSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x346140
     * @note[short] MacOS (Intel): 0x3c1390
     * @note[short] Windows: 0x4db520
     * @note[short] Android
     */
    void tryQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x346f54
     * @note[short] MacOS (Intel): 0x3c2300
     * @note[short] Android
     */
    void tryShowBanner(float dt);
    bool m_unfocused;
    bool m_tryingQuit;
    bool m_uiHidden;
    cocos2d::CCLabelBMFont* m_startposLabel;
    int m_startPosIndex;
    cocos2d::CCArray* m_startPositions;
    bool m_isEditorLevel;
    TimeSpeedControl* m_timeSpeedControls;
    cocos2d::CCLayer* m_layer;
    Slider* m_musicSlider;
    Slider* m_sfxSlider;
    cocos2d::CCMenu* m_showUIMenu;
    CCMenuItemSpriteExtra* m_platformSettingsButton;
};
