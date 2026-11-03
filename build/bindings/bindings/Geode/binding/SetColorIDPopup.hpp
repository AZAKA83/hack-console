#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetIDPopup.hpp>
#include <Geode/binding/GJSpecialColorSelectDelegate.hpp>

class SetColorIDPopup : public SetIDPopup, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "SetColorIDPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetColorIDPopup, SetIDPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetColorIDPopup();

    /**
     * @note[short] Windows: 0x399a00
     * @note[short] iOS: 0x37bb9c
     * @note[short] Android: Rebinded
     */
    virtual  ~SetColorIDPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetColorIDPopup* create(int id);

    /**
     * @note[short] MacOS (ARM): 0x23d0cc
     * @note[short] MacOS (Intel): 0x2997b0
     * @note[short] Windows: 0x3a65a0
     * @note[short] iOS: 0x37be8c
     * @note[short] Android
     */
    virtual void colorSelectClosed(GJSpecialColorSelect* select, int id);

    /**
     * @note[short] MacOS (ARM): 0x23ce10
     * @note[short] Windows: 0x3a6350
     * @note[short] Android
     */
    bool init(int id);

    /**
     * @note[short] MacOS (Intel): 0x299760
     * @note[short] Windows: 0x3a6530
     * @note[short] Android
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);
};
