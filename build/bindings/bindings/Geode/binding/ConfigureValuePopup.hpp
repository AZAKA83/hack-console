#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class ConfigureValuePopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ConfigureValuePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ConfigureValuePopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x1318b0
     * @note[short] iOS: 0x1ce4a8
     * @note[short] Android: Rebinded
     */
    virtual  ~ConfigureValuePopup();

    /**
     * @note[short] MacOS (ARM): 0x612450
     * @note[short] MacOS (Intel): 0x700e30
     * @note[short] Windows: 0x131960
     * @note[short] Android
     */
    static ConfigureValuePopup* create(ConfigureValuePopupDelegate* delegate, float value, float minimum, float maximum, std::string title, std::string description, int type);

    /**
     * @note[short] MacOS (ARM): 0x613680
     * @note[short] MacOS (Intel): 0x702180
     * @note[short] Windows: 0x132b00
     * @note[short] iOS: 0x1cf4f8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x613500
     * @note[short] MacOS (Intel): 0x701fb0
     * @note[short] Windows: 0x1265d0
     * @note[short] iOS: 0x1cf384
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x61351c
     * @note[short] MacOS (Intel): 0x701ff0
     * @note[short] Windows: 0x132830
     * @note[short] iOS: 0x1cf3a0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x23f1e0
     * @note[short] MacOS (Intel): 0x29bb90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addInfoAlertButton(std::string title, std::string description);

    /**
     * @note[short] MacOS (ARM): 0x6126ec
     * @note[short] MacOS (Intel): 0x701150
     * @note[short] Windows: 0x131b40
     * @note[short] Android
     */
    bool init(ConfigureValuePopupDelegate* delegate, float value, float minimum, float maximum, std::string title, std::string description, int type);

    /**
     * @note[short] MacOS (Intel): 0x701ca0
     * @note[short] Windows: 0x1325e0
     * @note[short] Android
     */
    void onArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6130e0
     * @note[short] MacOS (Intel): 0x701bd0
     * @note[short] Windows: 0x132a80
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x613160
     * @note[short] MacOS (Intel): 0x701c50
     * @note[short] Windows: 0x132590
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x701d00
     * @note[short] Windows: 0x132650
     * @note[short] Android
     */
    void updateTextInputLabel();
    int m_type;
    float m_value;
    float m_minimum;
    float m_maximum;
    bool m_enableDelegate;
    bool m_disableTextDelegate;
    ConfigureValuePopupDelegate* m_delegate;
    CCTextInputNode* m_input;
    Slider* m_slider;
};
