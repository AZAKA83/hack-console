#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SelectSettingLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectSettingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectSettingLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x457830
     * @note[short] iOS: 0x20e608
     * @note[short] Android: Rebinded
     */
    virtual  ~SelectSettingLayer();

    /**
     * @note[short] Windows: 0x45c2e0
     * @note[short] Android
     */
    static SelectSettingLayer* create(SelectSettingType type, int value);

    /**
     * @note[short] MacOS (ARM): 0x203254
     * @note[short] MacOS (Intel): 0x25aff0
     * @note[short] Windows: 0x45cb30
     * @note[short] Android
     */
    static std::string frameForItem(SelectSettingType type, int index);

    /**
     * @note[short] MacOS (ARM): 0x200d84
     * @note[short] MacOS (Intel): 0x2585b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static std::string frameForValue(SelectSettingType type, int value);

    /**
     * @note[short] MacOS (ARM): 0x2035b8
     * @note[short] MacOS (Intel): 0x25b300
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static int idxToValue(SelectSettingType type, int idx);

    /**
     * @note[short] MacOS (ARM): 0x203228
     * @note[short] MacOS (Intel): 0x25afc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static int valueToIdx(SelectSettingType type, int value);

    /**
     * @note[short] MacOS (ARM): 0x2035e4
     * @note[short] MacOS (Intel): 0x25b330
     * @note[short] Windows: 0x45d0b0
     * @note[short] iOS: 0x20ecdc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x201298
     * @note[short] MacOS (Intel): 0x258bb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getSelectedFrame();

    /**
     * @note[short] MacOS (ARM): 0x201268
     * @note[short] MacOS (Intel): 0x258b80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getSelectedValue();

    /**
     * @note[short] MacOS (ARM): 0x202c7c
     * @note[short] MacOS (Intel): 0x25aa10
     * @note[short] Windows: 0x45c400
     * @note[short] Android
     */
    bool init(SelectSettingType type, int value);

    /**
     * @note[short] MacOS (ARM): 0x203558
     * @note[short] MacOS (Intel): 0x25b2b0
     * @note[short] Windows: 0x45d060
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x203480
     * @note[short] MacOS (Intel): 0x25b200
     * @note[short] Windows: 0x45cfb0
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
    cocos2d::CCArray* m_settingSprites;
    int m_settingID;
    SelectSettingType m_type;
    SelectSettingDelegate* m_delegate;
};
