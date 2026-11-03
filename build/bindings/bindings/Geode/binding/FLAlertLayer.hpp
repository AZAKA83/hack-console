#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class FLAlertLayer : public cocos2d::CCLayerColor, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "FLAlertLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FLAlertLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x5a280
     * @note[short] iOS: 0xa908
     * @note[short] Android: Out of line
     */
     FLAlertLayer();

    /**
     * @note[short] MacOS (ARM): 0x3fbed0
     * @note[short] MacOS (Intel): 0x4937b0
     * @note[short] Windows: 0x5a3f0
     * @note[short] iOS: 0x34a8c0
     * @note[short] Android: Rebinded
     */
     ~FLAlertLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FLAlertLayer* create(char const* title, const std::string& desc, char const* btn);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2);

    /**
     * @note[short] MacOS (ARM): 0x3fc44c
     * @note[short] MacOS (Intel): 0x493d70
     * @note[short] Windows: 0x5a560
     * @note[short] iOS: 0x34aaf0
     * @note[short] Android
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width);

    /**
     * @note[short] Windows: 0x5a610
     * @note[short] iOS: 0x34a9b8
     * @note[short] Android
     */
    static FLAlertLayer* create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale);

    /**
     * @note[short] MacOS (ARM): 0x3fd45c
     * @note[short] MacOS (Intel): 0x494de0
     * @note[short] Windows: 0x5b6e0
     * @note[short] iOS: 0x34b8f0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3fd73c
     * @note[short] MacOS (Intel): 0x495060
     * @note[short] Windows: 0x5b860
     * @note[short] iOS: 0x34bb30
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3fd5b4
     * @note[short] MacOS (Intel): 0x494f00
     * @note[short] Windows: 0x5b780
     * @note[short] iOS: 0x34b9a8
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3fd678
     * @note[short] MacOS (Intel): 0x494fb0
     * @note[short] Windows: 0x5b7f0
     * @note[short] iOS: 0x34ba6c
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3fd9b8
     * @note[short] MacOS (Intel): 0x4952d0
     * @note[short] Windows: 0x5bab0
     * @note[short] iOS: 0x34bd74
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3fd388
     * @note[short] MacOS (Intel): 0x494d00
     * @note[short] Windows: 0x5b550
     * @note[short] iOS: 0x34b890
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3fd278
     * @note[short] MacOS (Intel): 0x494be0
     * @note[short] Windows: 0x5b4c0
     * @note[short] iOS: 0x34b7ec
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void rebuildContent();

    /**
     * @note[short] MacOS (ARM): 0x3fd7d4
     * @note[short] MacOS (Intel): 0x4950e0
     * @note[short] Windows: 0x5b8a0
     * @note[short] iOS: 0x34bbac
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool ownsTouchPrio();

    /**
     * @note[short] MacOS (ARM): 0x3fda50
     * @note[short] MacOS (Intel): 0x495380
     * @note[short] Windows: 0x5bb10
     * @note[short] iOS: 0x34be68
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x3fdba8
     * @note[short] MacOS (Intel): 0x495510
     * @note[short] Windows: 0x5bc70
     * @note[short] iOS: 0x34bfe0
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x5b3a0
     * @note[short] Android
     */
    void addCloseButton();

    /**
     * @note[short] Android
     */
    TodoReturn cancelKeyboardSlide();

    /**
     * @note[short] Android
     */
    TodoReturn containsNode(cocos2d::CCNode* p0);

    /**
     * @note[short] Windows: 0x5bd10
     * @note[short] Android
     */
    void incrementForcePrio();

    /**
     * @note[short] Windows: 0x5a720
     * @note[short] Android
     */
    bool init(int opacity);

    /**
     * @note[short] MacOS (ARM): 0x3fc534
     * @note[short] MacOS (Intel): 0x493e30
     * @note[short] Windows: 0x5a810
     * @note[short] iOS: 0x34abb8
     * @note[short] Android
     */
    bool init(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale);

    /**
     * @note[short] Android
     */
    TodoReturn keyboardRaise(float p0, float p1);

    /**
     * @note[short] Windows: 0x5b640
     * @note[short] Android
     */
    void onButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5b670
     * @note[short] Android
     */
    void onButtonTag(int tag);

    /**
     * @note[short] Android
     */
    TodoReturn ownedTouchPrio(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn rebuildContentDeferred(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn requestRebuild();
    cocos2d::CCMenu* m_buttonMenu;
    FLAlertLayerProtocol* m_alertProtocol;
    cocos2d::CCNode* m_scene;
    bool m_reverseKeyBack;
    cocos2d::ccColor3B m_color;
    cocos2d::CCLayer* m_mainLayer;
    int m_ZOrder;
    bool m_noElasticity;
    cocos2d::ccColor3B m_color2;
    cocos2d::CCPoint m_unk258;
    ButtonSprite* m_button1;
    ButtonSprite* m_button2;
    ScrollingLayer* m_scrollingLayer;
    int m_controlConnected;
    bool m_containsBorder;
    bool m_noAction;
    int m_joystickConnected;
    bool m_forcePrioRegistered;
    float m_width;
    float m_height;
    bool m_unk290;
};
