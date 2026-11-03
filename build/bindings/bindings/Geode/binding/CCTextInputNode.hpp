#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EmoteToken.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCIMEDelegate.hpp>
#include <Geode/mapping/CCTextFieldDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/vector.hpp>

class CCTextInputNode : public cocos2d::CCLayer, public cocos2d::CCIMEDelegate, public cocos2d::CCTextFieldDelegate {
public:
    static constexpr auto CLASS_NAME = "CCTextInputNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCTextInputNode, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCTextInputNode();

    /**
     * @note[short] MacOS (ARM): 0x5e3e0
     * @note[short] MacOS (Intel): 0x65690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fad40
     * @note[short] Android: Out of line
     */
     ~CCTextInputNode();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, char const* fontPath);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, int fontSize, char const* fontPath);

    /**
     * @note[short] MacOS (ARM): 0x5e5e0
     * @note[short] MacOS (Intel): 0x65940
     * @note[short] Windows: 0x54260
     * @note[short] iOS: 0x1fad98
     * @note[short] Android
     */
    static CCTextInputNode* create(float width, float height, char const* placeholder, char const* textFont, int fontSize, char const* labelFont);

    /**
     * @note[short] MacOS (ARM): 0x5fce8
     * @note[short] MacOS (Intel): 0x66fe0
     * @note[short] Windows: 0x54e30
     * @note[short] iOS: 0x1fbc24
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x65460
     * @note[short] MacOS (Intel): 0x6c240
     * @note[short] Windows: 0x58bd0
     * @note[short] iOS: 0x1fefa8
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x65838
     * @note[short] MacOS (Intel): 0x6c670
     * @note[short] Windows: 0x58eb0
     * @note[short] iOS: 0x1ff2fc
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x65698
     * @note[short] MacOS (Intel): 0x6c4c0
     * @note[short] Windows: 0x58d40
     * @note[short] iOS: 0x1ff1bc
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x65770
     * @note[short] MacOS (Intel): 0x6c5b0
     * @note[short] Windows: 0x58e20
     * @note[short] iOS: 0x1ff294
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x66740
     * @note[short] MacOS (Intel): 0x6d660
     * @note[short] Windows: 0x59a40
     * @note[short] iOS: 0x1ffc68
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x62ebc
     * @note[short] MacOS (Intel): 0x69a10
     * @note[short] Windows: 0x57110
     * @note[short] iOS: 0x1fd51c
     * @note[short] Android
     */
    virtual void textChanged();

    /**
     * @note[short] MacOS (ARM): 0x62e9c
     * @note[short] MacOS (Intel): 0x699f0
     * @note[short] Windows: 0x570f0
     * @note[short] iOS: 0x1fd4b8
     * @note[short] Android
     */
    virtual void onClickTrackNode(bool selected);

    /**
     * @note[short] MacOS (ARM): 0x62b90
     * @note[short] MacOS (Intel): 0x696b0
     * @note[short] Windows: 0x56f10
     * @note[short] iOS: 0x1fd230
     * @note[short] Android
     */
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& info);

    /**
     * @note[short] MacOS (ARM): 0x62d18
     * @note[short] MacOS (Intel): 0x69880
     * @note[short] Windows: 0x57030
     * @note[short] iOS: 0x1fd3f8
     * @note[short] Android
     */
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& info);

    /**
     * @note[short] MacOS (ARM): 0x63008
     * @note[short] MacOS (Intel): 0x69b70
     * @note[short] Windows: 0x571f0
     * @note[short] iOS: 0x1fd5d0
     * @note[short] Android
     */
    virtual bool onTextFieldInsertText(cocos2d::CCTextFieldTTF* pSender, char const* text, int nLen, cocos2d::enumKeyCodes keyCodes);

    /**
     * @note[short] MacOS (ARM): 0x63f6c
     * @note[short] MacOS (Intel): 0x6aa60
     * @note[short] Windows: 0x57b70
     * @note[short] iOS: 0x1fdefc
     * @note[short] Android
     */
    virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* tField);

    /**
     * @note[short] MacOS (ARM): 0x642bc
     * @note[short] MacOS (Intel): 0x6ae00
     * @note[short] Windows: 0x57e50
     * @note[short] iOS: 0x1fe17c
     * @note[short] Android
     */
    virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* tField);

    /**
     * @note[short] MacOS (ARM): 0x65974
     * @note[short] MacOS (Intel): 0x6c7c0
     * @note[short] Windows: 0x58fb0
     * @note[short] iOS: 0x1ff414
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x6192c
     * @note[short] MacOS (Intel): 0x684c0
     * @note[short] Windows: 0x55810
     * @note[short] iOS: 0x1fc7e8
     * @note[short] Android
     */
    virtual bool onTextFieldDeleteBackward(cocos2d::CCTextFieldTTF* p0, char const* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x661dc
     * @note[short] MacOS (Intel): 0x6d040
     * @note[short] Windows: 0x595c0
     * @note[short] iOS: 0x1ff8f0
     * @note[short] Android
     */
    virtual bool scrollWheel(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x65b60
     * @note[short] MacOS (Intel): 0x6c9b0
     * @note[short] Windows: 0x59150
     * @note[short] iOS: 0x1ff590
     * @note[short] Android
     */
    virtual bool rightClick(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x5e9e8
     * @note[short] MacOS (Intel): 0x65d50
     * @note[short] Windows: 0x54770
     * @note[short] Android
     */
    void addTextArea(TextArea* textArea);

    /**
     * @note[short] iOS: 0x1ff160
     * @note[short] Android
     */
    TodoReturn armHold(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn canClearText();

    /**
     * @note[short] Android
     */
    TodoReturn canCopyText();

    /**
     * @note[short] Android
     */
    TodoReturn clearText();

    /**
     * @note[short] iOS: 0x1fabc8
     * @note[short] Android
     */
    TodoReturn closeActiveInput();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void closeEditMenu();

    /**
     * @note[short] iOS: 0x1fed00
     * @note[short] Android
     */
    bool containsTouchPoint(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn copyText();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void disarmHold();

    /**
     * @note[short] Android
     */
    TodoReturn displayToRawIndex(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn doneFromIME();

    /**
     * @note[short] Android
     */
    TodoReturn emoteTokenContaining(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn emoteTokenEndingAt(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn emoteTokenStartingAt(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn enableTextScroll();

    /**
     * @note[short] MacOS (Intel): 0x6b5d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void forceOffset();

    /**
     * @note[short] Android
     */
    TodoReturn getBoxRect();

    /**
     * @note[short] MacOS (ARM): 0x62074
     * @note[short] MacOS (Intel): 0x68a30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fca78
     * @note[short] Android
     */
    std::string getString();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    cocos2d::CCLabelBMFont* getTextLabel();

    /**
     * @note[short] Android
     */
    TodoReturn getTextRowCount();

    /**
     * @note[short] Android
     */
    TodoReturn getWorldRect();

    /**
     * @note[short] Windows: 0x59050
     * @note[short] Android
     */
    void holdTimerFired(float p0);

    /**
     * @note[short] MacOS (ARM): 0x5e694
     * @note[short] MacOS (Intel): 0x659e0
     * @note[short] Windows: 0x54510
     * @note[short] Android
     */
    bool init(float width, float height, char const* placeholder, char const* textFont, int fontSize, char const* labelFont);

    /**
     * @note[short] Windows: 0x54f50
     * @note[short] Android
     */
    TodoReturn insertAtCursor(std::string p0);

    /**
     * @note[short] Android
     */
    bool isCoveredByPopup();

    /**
     * @note[short] iOS: 0x1feec4
     * @note[short] Android
     */
    bool isVisibleInTree();

    /**
     * @note[short] Android
     */
    TodoReturn moveCursorToEnd();

    /**
     * @note[short] Android
     */
    TodoReturn moveCursorVertical(int p0);

    /**
     * @note[short] Windows: 0x59440
     * @note[short] Android
     */
    TodoReturn openEditMenu(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn pasteText();

    /**
     * @note[short] Windows: 0x55460
     * @note[short] Android
     */
    TodoReturn rawToDisplayIndex(int p0);

    /**
     * @note[short] MacOS (ARM): 0x62124
     * @note[short] MacOS (Intel): 0x68ae0
     * @note[short] Windows: 0x565a0
     * @note[short] iOS: 0x1fcaac
     * @note[short] Android
     */
    void refreshLabel();

    /**
     * @note[short] Windows: 0x54aa0
     * @note[short] Android
     */
    TodoReturn scrollToCursor();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setAllowedChars(std::string filter);

    /**
     * @note[short] Android
     */
    void setAllowNewlines(bool p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setDelegate(TextInputDelegate* delegate);

    /**
     * @note[short] MacOS (Intel): 0x68e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setLabelNormalColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x62464
     * @note[short] MacOS (Intel): 0x68e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fccec
     * @note[short] Android
     */
    void setLabelPlaceholderColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x6245c
     * @note[short] MacOS (Intel): 0x68e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fcce4
     * @note[short] Android
     */
    void setLabelPlaceholderScale(float v);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setMaxLabelLength(int v);

    /**
     * @note[short] MacOS (ARM): 0x6244c
     * @note[short] MacOS (Intel): 0x68e10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fccd4
     * @note[short] Android
     */
    void setMaxLabelScale(float v);

    /**
     * @note[short] MacOS (ARM): 0x62454
     * @note[short] MacOS (Intel): 0x68e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fccdc
     * @note[short] Android
     */
    void setMaxLabelWidth(float v);

    /**
     * @note[short] Android
     */
    void setMaxTextAreaHeight(float p0);

    /**
     * @note[short] Android
     */
    void setParseEmotes(int p0);

    /**
     * @note[short] MacOS (ARM): 0x5fd44
     * @note[short] MacOS (Intel): 0x67040
     * @note[short] Windows: 0x54ea0
     * @note[short] iOS: 0x1fbc80
     * @note[short] Android
     */
    void setString(std::string text);

    /**
     * @note[short] Android
     */
    void setTextScrollViewSize(cocos2d::CCSize p0);

    /**
     * @note[short] Android
     */
    void setUnicodeText(bool p0);

    /**
     * @note[short] Android
     */
    void setWheelRange(float p0, float p1);

    /**
     * @note[short] Windows: 0x59110
     * @note[short] Android
     */
    void showHoldMenu(float p0);

    /**
     * @note[short] MacOS (Intel): 0x67dc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateBlinkLabel();

    /**
     * @note[short] Windows: 0x568b0
     * @note[short] Android
     */
    void updateBlinkLabelToChar(int index);

    /**
     * @note[short] MacOS (ARM): 0x64968
     * @note[short] MacOS (Intel): 0x6b5e0
     * @note[short] Windows: 0x583a0
     * @note[short] iOS: 0x1fe7b0
     * @note[short] Android
     */
    void updateCursorPosition(cocos2d::CCPoint position, cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x5e944
     * @note[short] MacOS (Intel): 0x65cb0
     * @note[short] Windows: 0x54c30
     * @note[short] Android
     */
    void updateDefaultFontValues(std::string font);

    /**
     * @note[short] MacOS (ARM): 0x5ec2c
     * @note[short] MacOS (Intel): 0x65f90
     * @note[short] Windows: 0x55d20
     * @note[short] iOS: 0x1fb214
     * @note[short] Android
     */
    void updateLabel(std::string text);
    bool m_numberInput;
    std::string m_caption;
    float m_keyboardOffset;
    bool m_selected;
    bool m_keyboardShowing;
    float m_fontValue1;
    float m_fontValue2;
    std::string m_allowedChars;
    void* m_unkDelegate;
    int m_parseEmotes;
    std::vector<EmoteToken> m_emoteVector;
    cocos2d::CCNode* m_emoteContainer;
    float m_maxLabelWidth;
    float m_maxLabelScale;
    float m_placeholderScale;
    cocos2d::ccColor3B m_placeholderColor;
    cocos2d::ccColor3B m_textColor;
    cocos2d::CCLabelBMFont* m_cursor;
    cocos2d::CCTextFieldTTF* m_textField;
    TextInputDelegate* m_delegate;
    int m_maxLabelLength;
    cocos2d::CCLabelBMFont* m_textLabel;
    bool m_filterSwearWords;
    bool m_usePasswordChar;
    bool m_forceOffset;
    TextArea* m_textArea;
    bool m_allowNewlines;
    bool m_unicodeText;
    bool m_deselectOnOutsideTap;
    cocos2d::CCSize m_hitPadding;
    ScrollableContentLayer* m_scrollableLayer;
    float m_cursorTargetX;
    float m_maxTextAreaHeight;
    int m_unkTextareaMember;
    bool m_wheelRangeSet;
    float m_wheelRangeMin;
    float m_wheelRangeMax;
    int m_maxDigits;
    bool m_doneFromIME;
    CCTextInputMenu* m_editMenu;
    cocos2d::CCPoint m_holdMenuSpawn;
    bool m_holdTimerArmed;
    bool m_holdTimerFired;
    InputValueType m_valueType;
    int m_decimalPlaces;
    int m_kerningAmount;
};
