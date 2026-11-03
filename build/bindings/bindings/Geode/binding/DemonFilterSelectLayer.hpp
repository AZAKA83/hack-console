#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class DemonFilterSelectLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DemonFilterSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DemonFilterSelectLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DemonFilterSelectLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x5f958
     * @note[short] Android: Rebinded
     */
     ~DemonFilterSelectLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static DemonFilterSelectLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x61cd78
     * @note[short] MacOS (Intel): 0x70c140
     * @note[short] Windows: 0x440bb0
     * @note[short] iOS: 0x5f990
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x61d368
     * @note[short] MacOS (Intel): 0x70c720
     * @note[short] Windows: 0x441340
     * @note[short] iOS: 0x5fef0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x61d308
     * @note[short] MacOS (Intel): 0x70c6d0
     * @note[short] Windows: 0x4412f0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61d240
     * @note[short] MacOS (Intel): 0x70c610
     * @note[short] Windows: 0x441230
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
    cocos2d::CCArray* m_demons;
    void* m_unkPtr;
    int m_currentDemon;
    DemonFilterDelegate* m_delegate;
};
