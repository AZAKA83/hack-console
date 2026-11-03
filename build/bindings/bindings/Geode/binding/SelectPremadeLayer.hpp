#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SelectPremadeLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectPremadeLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectPremadeLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectPremadeLayer();

    /**
     * @note[short] Windows: 0x599330
     * @note[short] iOS: 0x6bf74
     * @note[short] Android: Rebinded
     */
    virtual  ~SelectPremadeLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SelectPremadeLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x289b5c
     * @note[short] MacOS (Intel): 0x2f4af0
     * @note[short] Windows: 0x59e0f0
     * @note[short] iOS: 0x6bfac
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x28a0a4
     * @note[short] MacOS (Intel): 0x2f4ff0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x6c44c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x28a068
     * @note[short] MacOS (Intel): 0x2f4fc0
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x289ff8
     * @note[short] MacOS (Intel): 0x2f4f60
     * @note[short] Windows: 0x4517c0
     * @note[short] Android
     */
    void onSelectPremade(cocos2d::CCObject* sender);
    SelectPremadeDelegate* m_delegate;
};
