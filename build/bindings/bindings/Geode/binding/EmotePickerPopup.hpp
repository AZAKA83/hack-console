#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EditorWindowPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/vector.hpp>

class EmotePickerPopup : public EditorWindowPopup {
public:
    static constexpr auto CLASS_NAME = "EmotePickerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EmotePickerPopup, EditorWindowPopup)

    /**
     * @note[short] MacOS (ARM): 0x7ead00
     * @note[short] MacOS (Intel): 0x903d40
     * @note[short] Windows: 0x1236e0
     * @note[short] iOS: 0x4dbe6c
     * @note[short] Android: Rebinded
     */
    virtual  ~EmotePickerPopup();

    /**
     * @note[short] Windows: 0x123430
     * @note[short] Android: Rebinded
     */
     EmotePickerPopup();

    /**
     * @note[short] MacOS (ARM): 0x7e9568
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EmotePickerPopup* create(CCTextInputNode* p0, cocos2d::CCPoint p1, int p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x7e9a38
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EmotePickerPopup* toggle(EmotePickerPopup* p0, EmotePickerDelegate* p1, cocos2d::CCNode* p2, CCTextInputNode* p3, int p4, int p5);

    /**
     * @note[short] Windows: 0x1237e0
     * @note[short] Android
     */
    static cocos2d::CCPoint buttonAnchor(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7e9b08
     * @note[short] MacOS (Intel): 0x902b60
     * @note[short] Windows: 0x123840
     * @note[short] Android
     */
    static EmotePickerPopup* openAt(EmotePickerPopup* p0, EmotePickerDelegate* p1, cocos2d::CCNode* p2);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EmotePickerPopup* createPicker(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EmotePickerPopup* togglePicker(EmotePickerPopup* p0, EmotePickerDelegate* p1, cocos2d::CCNode* p2);

    /**
     * @note[short] MacOS (ARM): 0x7ea928
     * @note[short] MacOS (Intel): 0x903940
     * @note[short] Windows: 0x124390
     * @note[short] iOS: 0x4dbbb8
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7eab24
     * @note[short] MacOS (Intel): 0x903b10
     * @note[short] Windows: 0x124a30
     * @note[short] iOS: 0x4dbcf8
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x7eac10
     * @note[short] MacOS (Intel): 0x903be0
     * @note[short] Windows: 0x124b00
     * @note[short] iOS: 0x4dbd80
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x7eac18
     * @note[short] MacOS (Intel): 0x903c00
     * @note[short] Windows: 0x124b10
     * @note[short] iOS: 0x4dbd88
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7e9e30
     * @note[short] MacOS (Intel): 0x902e60
     * @note[short] Windows: 0x123c60
     * @note[short] iOS: 0x4db458
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7e9e3c
     * @note[short] MacOS (Intel): 0x902e90
     * @note[short] Windows: 0x123c70
     * @note[short] iOS: 0x4db464
     * @note[short] Android
     */
    virtual void onBuildWindowContent();

    /**
     * @note[short] MacOS (ARM): 0x7ea924
     * @note[short] MacOS (Intel): 0x903930
     * @note[short] Windows: 0x124380
     * @note[short] iOS: 0x4dbbb4
     * @note[short] Android
     */
    virtual void onWindowResized();

    /**
     * @note[short] MacOS (ARM): 0x7ea44c
     * @note[short] MacOS (Intel): 0x9033f0
     * @note[short] Windows: 0x123f70
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* addCell(EmoteDef const* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x7eaa58
     * @note[short] MacOS (Intel): 0x903a70
     * @note[short] Windows: 0x124520
     * @note[short] Android
     */
    bool canAddEmote();

    /**
     * @note[short] MacOS (ARM): 0x7e96b8
     * @note[short] MacOS (Intel): 0x902680
     * @note[short] Windows: 0x123970
     * @note[short] Android
     */
    bool init(CCTextInputNode* p0, cocos2d::CCPoint p1, int p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x7ea548
     * @note[short] MacOS (Intel): 0x9034d0
     * @note[short] Windows: 0x124050
     * @note[short] Android
     */
    void layoutEmoteGrid();

    /**
     * @note[short] Windows: 0x124780
     * @note[short] Android
     */
    void onPickEmote(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x124640
     * @note[short] Android
     */
    void refreshEnabled();
    CCTextInputNode* m_input;
    int m_maxEmotes;
    int m_maxLength;
    EmotePickerDelegate* m_delegate;
    cocos2d::CCRect m_openPickerButtonRect;
    int m_canAdd;
    std::vector<CCMenuItemSpriteExtra*> m_recentEmoteButtons;
};
