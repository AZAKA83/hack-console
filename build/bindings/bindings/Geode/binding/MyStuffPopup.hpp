#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class MyStuffPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "MyStuffPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MyStuffPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x550070
     * @note[short] iOS: 0x2329b8
     * @note[short] Android: Rebinded
     */
    virtual  ~MyStuffPopup();

    /**
     * @note[short] Android
     */
    static MyStuffPopup* create(GJUserScore* p0);

    /**
     * @note[short] MacOS (ARM): 0x79c7b4
     * @note[short] MacOS (Intel): 0x8a9ef0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x233044
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x55c8f0
     * @note[short] Android
     */
    bool init(GJUserScore* p0);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSocialPage(cocos2d::CCObject* sender);
};
