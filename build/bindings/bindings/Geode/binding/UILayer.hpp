#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/CCKeyboardDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class UILayer : public cocos2d::CCLayerColor, public cocos2d::CCKeyboardDelegate {
public:
    static constexpr auto CLASS_NAME = "UILayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(UILayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x53b98
     * @note[short] Android: Out of line
     */
     UILayer();

    /**
     * @note[short] MacOS (ARM): 0x428db0
     * @note[short] MacOS (Intel): 0x4c5cf0
     * @note[short] Windows: 0x66fe70
     * @note[short] iOS: 0x531a4
     * @note[short] Android: Rebinded
     */
     ~UILayer();

    /**
     * @note[short] MacOS (ARM): 0x425460
     * @note[short] MacOS (Intel): 0x4c1e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x50574
     * @note[short] Android
     */
    static UILayer* create(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static UILayer* get();

    /**
     * @note[short] MacOS (ARM): 0x427f2c
     * @note[short] MacOS (Intel): 0x4c4f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x527b0
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x427fcc
     * @note[short] MacOS (Intel): 0x4c4fd0
     * @note[short] Windows: 0x673220
     * @note[short] iOS: 0x52820
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x428250
     * @note[short] MacOS (Intel): 0x4c51d0
     * @note[short] Windows: 0x673410
     * @note[short] iOS: 0x52a54
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x4283a4
     * @note[short] MacOS (Intel): 0x4c52e0
     * @note[short] Windows: 0x673430
     * @note[short] iOS: 0x52a90
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x428d5c
     * @note[short] MacOS (Intel): 0x4c5c70
     * @note[short] Windows: 0x83ef0
     * @note[short] iOS: 0x530bc
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x428d78
     * @note[short] MacOS (Intel): 0x4c5cb0
     * @note[short] Windows: 0x134dc0
     * @note[short] iOS: 0x530d8
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x427bf4
     * @note[short] MacOS (Intel): 0x4c4c10
     * @note[short] Windows: 0x672e70
     * @note[short] iOS: 0x52678
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x426d58
     * @note[short] MacOS (Intel): 0x4c38a0
     * @note[short] Windows: 0x6711b0
     * @note[short] iOS: 0x51830
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x51898
     * @note[short] Android: Out of line
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x426dcc
     * @note[short] MacOS (Intel): 0x4c3960
     * @note[short] Windows: 0x6713c0
     * @note[short] iOS: 0x518a4
     * @note[short] Android
     */
    virtual bool handleAction(int action, bool down, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x42650c
     * @note[short] MacOS (Intel): 0x4c3010
     * @note[short] Windows: 0x670c60
     * @note[short] iOS: 0x51140
     * @note[short] Android
     */
    void announceLevelControls();

    /**
     * @note[short] MacOS (ARM): 0x426234
     * @note[short] MacOS (Intel): 0x4c2d10
     * @note[short] Windows: 0x670be0
     * @note[short] iOS: 0x50f50
     * @note[short] Android
     */
    void applyLevelBindings();

    /**
     * @note[short] MacOS (ARM): 0x426ba4
     * @note[short] MacOS (Intel): 0x4c36c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x517b4
     * @note[short] Android
     */
    void disableMenu();

    /**
     * @note[short] MacOS (ARM): 0x427cb4
     * @note[short] MacOS (Intel): 0x4c4cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x526f8
     * @note[short] Android
     */
    void doPause();

    /**
     * @note[short] MacOS (ARM): 0x426bb8
     * @note[short] MacOS (Intel): 0x4c36e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x517c8
     * @note[short] Android
     */
    void editorPlaytest(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x426b50
     * @note[short] MacOS (Intel): 0x4c3670
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x51760
     * @note[short] Android
     */
    void enableEditorMode();

    /**
     * @note[short] MacOS (ARM): 0x427dbc
     * @note[short] MacOS (Intel): 0x4c4de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x52744
     * @note[short] Android
     */
    void enableMenu();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void handleKeypress(cocos2d::enumKeyCodes key, bool down, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x42556c
     * @note[short] MacOS (Intel): 0x4c1fd0
     * @note[short] Windows: 0x66ff70
     * @note[short] iOS: 0x505e8
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x427f30
     * @note[short] MacOS (Intel): 0x4c4f70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x527b4
     * @note[short] Android
     */
    bool isJumpButtonPressed();

    /**
     * @note[short] MacOS (ARM): 0x427f80
     * @note[short] MacOS (Intel): 0x4c4fa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x527e8
     * @note[short] Android
     */
    bool isJumpButtonPressed(bool player1);

    /**
     * @note[short] MacOS (ARM): 0x425d58
     * @note[short] MacOS (Intel): 0x4c2800
     * @note[short] Windows: 0x673050
     * @note[short] iOS: 0x50b80
     * @note[short] Android
     */
    void onCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x425dac
     * @note[short] MacOS (Intel): 0x4c2860
     * @note[short] Windows: 0x6730d0
     * @note[short] iOS: 0x50bd4
     * @note[short] Android
     */
    void onDeleteCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x425d0c
     * @note[short] MacOS (Intel): 0x4c27b0
     * @note[short] Windows: 0x672f30
     * @note[short] iOS: 0x50b34
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4280ec
     * @note[short] MacOS (Intel): 0x4c5110
     * @note[short] Windows: 0x673510
     * @note[short] iOS: 0x52990
     * @note[short] Android
     */
    bool processUINodesTouch(GJUITouchEvent event, cocos2d::CCTouch* touch);

    /**
     * @note[short] MacOS (ARM): 0x428590
     * @note[short] MacOS (Intel): 0x4c5480
     * @note[short] Windows: 0x6735e0
     * @note[short] iOS: 0x52b20
     * @note[short] Android
     */
    bool processUINodeTouch(GJUITouchEvent event, int touchID, cocos2d::CCPoint position, GJUINode* node, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x4262ac
     * @note[short] MacOS (Intel): 0x4c2d90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x50fc8
     * @note[short] Android
     */
    void reapplyLevelControls();

    /**
     * @note[short] MacOS (ARM): 0x426418
     * @note[short] MacOS (Intel): 0x4c2f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x51004
     * @note[short] Android
     */
    void refreshDpad();

    /**
     * @note[short] MacOS (ARM): 0x42642c
     * @note[short] MacOS (Intel): 0x4c2f20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5112c
     * @note[short] Android
     */
    void resetAllButtons();

    /**
     * @note[short] MacOS (ARM): 0x4269f4
     * @note[short] MacOS (Intel): 0x4c3510
     * @note[short] Windows: 0x6710a0
     * @note[short] iOS: 0x51684
     * @note[short] Android
     */
    void resetUINodeState();

    /**
     * @note[short] MacOS (ARM): 0x426100
     * @note[short] MacOS (Intel): 0x4c2be0
     * @note[short] Windows: 0x670a70
     * @note[short] iOS: 0x50e34
     * @note[short] Android
     */
    void resolveLevelControls();

    /**
     * @note[short] MacOS (ARM): 0x42673c
     * @note[short] MacOS (Intel): 0x4c3270
     * @note[short] Windows: 0x6711d0
     * @note[short] iOS: 0x51384
     * @note[short] Android
     */
    void showTextAlert(std::string text, bool isOn, bool useRawText, float delay);

    /**
     * @note[short] MacOS (ARM): 0x425df4
     * @note[short] MacOS (Intel): 0x4c28a0
     * @note[short] Windows: 0x672eb0
     * @note[short] iOS: 0x50c1c
     * @note[short] Android
     */
    void toggleCheckpointsMenu(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x427dd0
     * @note[short] MacOS (Intel): 0x4c4e00
     * @note[short] Windows: 0x673140
     * @note[short] iOS: 0x52758
     * @note[short] Android
     */
    void toggleMenuVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x425fb4
     * @note[short] MacOS (Intel): 0x4c2a70
     * @note[short] Windows: 0x670fd0
     * @note[short] iOS: 0x50da4
     * @note[short] Android
     */
    void togglePlatformerMode(bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x425e38
     * @note[short] MacOS (Intel): 0x4c28e0
     * @note[short] Windows: 0x670870
     * @note[short] iOS: 0x50c2c
     * @note[short] Android
     */
    void updateCheckState();

    /**
     * @note[short] MacOS (ARM): 0x4260e4
     * @note[short] MacOS (Intel): 0x4c2bb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x50e18
     * @note[short] Android
     */
    void updateDualMode(bool dual);

    /**
     * @note[short] MacOS (ARM): 0x42692c
     * @note[short] MacOS (Intel): 0x4c3430
     * @note[short] iOS: 0x51600
     * @note[short] Android
     */
    void updateUINodeVisibility(bool visible);
    void* m_pUnknown1;
    cocos2d::CCMenu* m_checkpointMenu;
    CCMenuItemSpriteExtra* m_pauseBtn;
    bool m_bUnknown2;
    bool m_bUnknown3;
    bool m_p1Jumping;
    bool m_p2Jumping;
    bool m_checkpointBtnDown;
    int m_p1TouchId;
    int m_p2TouchId;
    float m_clkTimer;
    bool m_inPlatformer;
    GJBaseGameLayer* m_gameLayer;
    bool m_initialized;
    cocos2d::CCArray* m_uiNodes;
    bool m_dualMode;
    bool m_dpadType;
    bool m_editorMode;
    bool m_editorPlaytest;
    cocos2d::CCArray* m_controllerButtons;
    LevelControlConfig* m_levelControls;
    bool m_didAnnounceLevelControls;
};
