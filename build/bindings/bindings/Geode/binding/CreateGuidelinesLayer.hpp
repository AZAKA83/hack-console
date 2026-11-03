#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class CreateGuidelinesLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CreateGuidelinesLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateGuidelinesLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x132b20
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CreateGuidelinesLayer();

    /**
     * @note[short] Windows: 0x132ce0
     * @note[short] iOS: 0x84a18
     * @note[short] Android: Rebinded
     */
     ~CreateGuidelinesLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CreateGuidelinesLayer* create(CustomSongDelegate* delegate, AudioGuidelinesType type);

    /**
     * @note[short] MacOS (ARM): 0x469d64
     * @note[short] MacOS (Intel): 0x50e620
     * @note[short] Windows: 0x134a10
     * @note[short] iOS: 0x863b4
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x469fc0
     * @note[short] MacOS (Intel): 0x50e890
     * @note[short] Windows: 0x134ce0
     * @note[short] iOS: 0x865b4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x46a0f0
     * @note[short] MacOS (Intel): 0x50e980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86664
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x46a0f8
     * @note[short] MacOS (Intel): 0x50e9a0
     * @note[short] Windows: 0x134d60
     * @note[short] iOS: 0x8666c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x46a1d8
     * @note[short] MacOS (Intel): 0x50ea60
     * @note[short] Windows: 0x83ef0
     * @note[short] iOS: 0x8673c
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x46a1f4
     * @note[short] MacOS (Intel): 0x50eaa0
     * @note[short] Windows: 0x134dc0
     * @note[short] iOS: 0x86758
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x469f3c
     * @note[short] MacOS (Intel): 0x50e7f0
     * @note[short] Windows: 0x134c60
     * @note[short] iOS: 0x86530
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x46a22c
     * @note[short] MacOS (Intel): 0x50eae0
     * @note[short] Windows: 0x134e10
     * @note[short] iOS: 0x86790
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x469e30
     * @note[short] MacOS (Intel): 0x50e6f0
     * @note[short] Windows: 0x134b80
     * @note[short] iOS: 0x8645c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x469f00
     * @note[short] MacOS (Intel): 0x50e7c0
     * @note[short] Windows: 0x99f60
     * @note[short] iOS: 0x864f4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46a270
     * @note[short] MacOS (Intel): 0x50eb30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x867d4
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x469338
     * @note[short] MacOS (Intel): 0x50dcb0
     * @note[short] Windows: 0x134320
     * @note[short] iOS: 0x85c78
     * @note[short] Android
     */
    virtual void playMusic();

    /**
     * @note[short] MacOS (ARM): 0x469f78
     * @note[short] MacOS (Intel): 0x50e840
     * @note[short] Windows: 0x134c80
     * @note[short] iOS: 0x8656c
     * @note[short] Android
     */
    virtual void registerTouch();

    /**
     * @note[short] MacOS (ARM): 0x469d74
     * @note[short] MacOS (Intel): 0x50e640
     * @note[short] Windows: 0x134a30
     * @note[short] iOS: 0x863c4
     * @note[short] Android
     */
    virtual void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x469224
     * @note[short] MacOS (Intel): 0x50dba0
     * @note[short] Windows: 0x134180
     * @note[short] iOS: 0x85b68
     * @note[short] Android
     */
    virtual void onRecord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4693d8
     * @note[short] MacOS (Intel): 0x50dd40
     * @note[short] Windows: 0x134490
     * @note[short] iOS: 0x85d08
     * @note[short] Android
     */
    virtual void recordingDidStop();

    /**
     * @note[short] MacOS (ARM): 0x46917c
     * @note[short] MacOS (Intel): 0x50db10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void doClearGuidelines();

    /**
     * @note[short] MacOS (ARM): 0x469720
     * @note[short] MacOS (Intel): 0x50e090
     * @note[short] Windows: 0x1346b0
     * @note[short] Android
     */
    std::string getMergedRecordString(std::string str1, std::string str2);

    /**
     * @note[short] MacOS (ARM): 0x468104
     * @note[short] MacOS (Intel): 0x50c9d0
     * @note[short] Windows: 0x132db0
     * @note[short] Android
     */
    bool init(CustomSongDelegate* delegate, AudioGuidelinesType type);

    /**
     * @note[short] MacOS (ARM): 0x468fa4
     * @note[short] MacOS (Intel): 0x50d920
     * @note[short] Windows: 0x134050
     * @note[short] Android
     */
    void onClearGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x469074
     * @note[short] MacOS (Intel): 0x8950
     * @note[short] Windows: 0x1343c0
     * @note[short] Android
     */
    void onStop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4690d4
     * @note[short] MacOS (Intel): 0x50da50
     * @note[short] Windows: 0x134930
     * @note[short] Android
     */
    void toggleItems(bool visible);
    CustomSongDelegate* m_delegate;
    CCTextInputNode* m_offsetInput;
    cocos2d::CCArray* m_nonRecordingObjects;
    cocos2d::CCArray* m_recordingObjects;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCSprite* m_circleSprite;
    float m_elapsed;
    bool m_recording;
    bool m_unk2b5;
    int m_guidelines;
    std::string m_guidelineString;
};
