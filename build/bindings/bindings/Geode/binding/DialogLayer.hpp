#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/binding/TextAreaDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class DialogLayer : public cocos2d::CCLayerColor, public TextAreaDelegate {
public:
    static constexpr auto CLASS_NAME = "DialogLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DialogLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DialogLayer();

    /**
     * @note[short] MacOS (Intel): 0x3b0330
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8fc30
     * @note[short] Android: Rebinded
     */
     ~DialogLayer();

    /**
     * @note[short] MacOS (ARM): 0x3376ec
     * @note[short] MacOS (Intel): 0x3b0680
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static DialogLayer* create(DialogObject* object, int background);

    /**
     * @note[short] MacOS (ARM): 0x3376f8
     * @note[short] MacOS (Intel): 0x2b2cb0
     * @note[short] Windows: 0x174ae0
     * @note[short] Android
     */
    static DialogLayer* createDialogLayer(DialogObject* object, cocos2d::CCArray* objects, int background);

    /**
     * @note[short] MacOS (ARM): 0x337808
     * @note[short] MacOS (Intel): 0x3b07d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static DialogLayer* createWithObjects(cocos2d::CCArray* objects, int background);

    /**
     * @note[short] MacOS (ARM): 0x3387a4
     * @note[short] MacOS (Intel): 0x3b1800
     * @note[short] Windows: 0x5bcf0
     * @note[short] iOS: 0x9090c
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x338678
     * @note[short] MacOS (Intel): 0x3b16b0
     * @note[short] Windows: 0x175750
     * @note[short] iOS: 0x907f0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x338720
     * @note[short] MacOS (Intel): 0x3b1750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x90888
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3386e8
     * @note[short] MacOS (Intel): 0x3b1710
     * @note[short] Windows: 0x175780
     * @note[short] iOS: 0x90850
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x338728
     * @note[short] MacOS (Intel): 0x3b1770
     * @note[short] Windows: 0x1757a0
     * @note[short] iOS: 0x90890
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x33876c
     * @note[short] MacOS (Intel): 0x3b17c0
     * @note[short] Windows: 0x5bab0
     * @note[short] iOS: 0x908d4
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x338554
     * @note[short] MacOS (Intel): 0x3b1580
     * @note[short] Windows: 0x1756c0
     * @note[short] iOS: 0x907e4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x338af8
     * @note[short] MacOS (Intel): 0x3b1b70
     * @note[short] Windows: 0x175c80
     * @note[short] iOS: 0x90bc8
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3387a8
     * @note[short] MacOS (Intel): 0x3b1810
     * @note[short] Windows: 0x1757c0
     * @note[short] iOS: 0x90910
     * @note[short] Android
     */
    virtual void fadeInTextFinished(TextArea* textArea);

    /**
     * @note[short] MacOS (ARM): 0x3384fc
     * @note[short] MacOS (Intel): 0x3b1530
     * @note[short] Windows: 0x175660
     * @note[short] Android
     */
    void addToMainScene();

    /**
     * @note[short] MacOS (ARM): 0x3388f0
     * @note[short] MacOS (Intel): 0x3b1950
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void animateIn(DialogAnimationType type);

    /**
     * @note[short] MacOS (ARM): 0x338af0
     * @note[short] MacOS (Intel): 0x3b1b60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void animateInDialog();

    /**
     * @note[short] MacOS (ARM): 0x338898
     * @note[short] MacOS (Intel): 0x3b1900
     * @note[short] Windows: 0x175830
     * @note[short] Android
     */
    void animateInRandomSide();

    /**
     * @note[short] MacOS (ARM): 0x337d90
     * @note[short] MacOS (Intel): 0x3b0d80
     * @note[short] Windows: 0x175110
     * @note[short] Android
     */
    void displayDialogObject(DialogObject* object);

    /**
     * @note[short] MacOS (ARM): 0x337cf0
     * @note[short] MacOS (Intel): 0x3b0cd0
     * @note[short] Windows: 0x1750b0
     * @note[short] Android
     */
    void displayNextObject();

    /**
     * @note[short] MacOS (ARM): 0x3383d4
     * @note[short] MacOS (Intel): 0x3b13e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void finishCurrentAnimation();

    /**
     * @note[short] Windows: 0x1754e0
     * @note[short] Android
     */
    void handleDialogTap();

    /**
     * @note[short] MacOS (ARM): 0x337818
     * @note[short] MacOS (Intel): 0x3b07f0
     * @note[short] Windows: 0x174c40
     * @note[short] Android
     */
    bool init(DialogObject* object, cocos2d::CCArray* objects, int background);

    /**
     * @note[short] MacOS (ARM): 0x33846c
     * @note[short] MacOS (Intel): 0x3b14a0
     * @note[short] Windows: 0x1756d0
     * @note[short] Android
     */
    void onClose();

    /**
     * @note[short] MacOS (ARM): 0x3381c0
     * @note[short] MacOS (Intel): 0x3b11e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateChatPlacement(DialogChatPlacement placement);

    /**
     * @note[short] MacOS (ARM): 0x338160
     * @note[short] MacOS (Intel): 0x3b1170
     * @note[short] Windows: 0x175460
     * @note[short] Android
     */
    void updateNavButtonFrame();
    double m_animateTime;
    cocos2d::CCLayer* m_mainLayer;
    cocos2d::CCLabelBMFont* m_characterLabel;
    TextArea* m_textArea;
    cocos2d::CCSprite* m_characterSprite;
    cocos2d::CCArray* m_dialogObjects;
    int m_touchID;
    cocos2d::CCSprite* m_navButtonSprite;
    bool m_animating;
    bool m_skippable;
    DialogDelegate* m_delegate;
    bool m_handleTap;
    DialogAnimationType m_animationType;
    bool m_noRemove;
};
