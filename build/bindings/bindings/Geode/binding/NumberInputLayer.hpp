#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class NumberInputLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "NumberInputLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NumberInputLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x4a1060
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     NumberInputLayer();

    /**
     * @note[short] Windows: 0x4a11a0
     * @note[short] iOS: 0x11d808
     * @note[short] Android: Rebinded
     */
    virtual  ~NumberInputLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static NumberInputLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x3f2a94
     * @note[short] MacOS (Intel): 0x489360
     * @note[short] Windows: 0x4a1250
     * @note[short] iOS: 0x11d910
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3f38d8
     * @note[short] MacOS (Intel): 0x48a260
     * @note[short] Windows: 0x5bab0
     * @note[short] iOS: 0x11e1fc
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3f385c
     * @note[short] MacOS (Intel): 0x48a1f0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x11e180
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3f3804
     * @note[short] MacOS (Intel): 0x48a1a0
     * @note[short] Windows: 0x4a1b10
     * @note[short] iOS: 0x11e128
     * @note[short] Android
     */
    virtual void onDone(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x2922b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deleteLast();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void inputNumber(int num);

    /**
     * @note[short] MacOS (ARM): 0x3abbd8
     * @note[short] MacOS (Intel): 0x4357b0
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x895b60
     * @note[short] Windows: 0x4a1820
     * @note[short] Android
     */
    void onNumber(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4a1990
     * @note[short] Android
     */
    void updateNumberState();
    cocos2d::CCLabelBMFont* m_inputLabel;
    cocos2d::CCLabelBMFont* m_title;
    CCMenuItemSpriteExtra* m_okButton;
    int m_minimum;
    int m_maximum;
    std::string m_prefixString;
    std::string m_inputString;
    NumberInputDelegate* m_delegate;
};
