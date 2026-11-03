#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SetIDPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SetIDPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetIDPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x399900
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetIDPopup();

    /**
     * @note[short] MacOS (ARM): 0x23b818
     * @note[short] MacOS (Intel): 0x297ae0
     * @note[short] Windows: 0x3a5340
     * @note[short] iOS: 0x37adfc
     * @note[short] Android: Rebinded
     */
     ~SetIDPopup();

    /**
     * @note[short] MacOS (ARM): 0x23b904
     * @note[short] MacOS (Intel): 0x297d80
     * @note[short] Windows: 0x3a53e0
     * @note[short] iOS: 0x37ae34
     * @note[short] Android
     */
    static SetIDPopup* create(int current, int begin, int end, std::string title, std::string button, bool resetButton, int defaultValue, float offset, bool numberInput, bool arrows);

    /**
     * @note[short] MacOS (ARM): 0x23c908
     * @note[short] MacOS (Intel): 0x298e40
     * @note[short] Windows: 0x3a6340
     * @note[short] iOS: 0x37bb90
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x23c884
     * @note[short] MacOS (Intel): 0x298dc0
     * @note[short] Windows: 0x3a6160
     * @note[short] iOS: 0x37bb14
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x23c734
     * @note[short] MacOS (Intel): 0x298c40
     * @note[short] Windows: 0x1265d0
     * @note[short] iOS: 0x37ba58
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x23c750
     * @note[short] MacOS (Intel): 0x298c80
     * @note[short] Windows: 0x3a5f70
     * @note[short] iOS: 0x37ba74
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x23c880
     * @note[short] MacOS (Intel): 0x298db0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37bb10
     * @note[short] Android
     */
    virtual void valueChanged();

    /**
     * @note[short] MacOS (ARM): 0x23bbcc
     * @note[short] MacOS (Intel): 0x2980c0
     * @note[short] Windows: 0x3a5520
     * @note[short] iOS: 0x37b028
     * @note[short] Android
     */
    bool init(int current, int begin, int end, std::string title, std::string button, bool resetButton, int defaultValue, float offset, bool numberInput, bool arrows);

    /**
     * @note[short] MacOS (Intel): 0x298a60
     * @note[short] Windows: 0x3a61f0
     * @note[short] Android
     */
    void onCancel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23c464
     * @note[short] MacOS (Intel): 0x298960
     * @note[short] Windows: 0x3a62a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23c508
     * @note[short] MacOS (Intel): 0x298a10
     * @note[short] Windows: 0x3a5ef0
     * @note[short] Android
     */
    void onItemIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23c4fc
     * @note[short] MacOS (Intel): 0x2989f0
     * @note[short] Windows: 0x3a5f50
     * @note[short] Android
     */
    void onResetValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x298b00
     * @note[short] Windows: 0x3a60b0
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_inputNode;
    int m_value;
    bool m_disableDelegate;
    bool m_cancelled;
    int m_minimum;
    int m_maximum;
    int m_default;
    SetIDPopupDelegate* m_delegate;
};
