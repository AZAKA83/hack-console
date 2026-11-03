#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SelectListIconLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectListIconLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectListIconLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectListIconLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e4b3c
     * @note[short] Android: Rebinded
     */
     ~SelectListIconLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SelectListIconLayer* create(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x2dd988
     * @note[short] MacOS (Intel): 0x34d420
     * @note[short] Windows: 0x431c50
     * @note[short] iOS: 0x2e5150
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2dd2f0
     * @note[short] Windows: 0x431360
     * @note[short] Android
     */
    bool init(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x2dd930
     * @note[short] MacOS (Intel): 0x34d3d0
     * @note[short] Windows: 0x431c10
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2dd838
     * @note[short] MacOS (Intel): 0x34d310
     * @note[short] Windows: 0x431b50
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
    cocos2d::CCArray* m_difficulties;
    int m_currentDifficulty;
    SelectListIconDelegate* m_delegate;
};
