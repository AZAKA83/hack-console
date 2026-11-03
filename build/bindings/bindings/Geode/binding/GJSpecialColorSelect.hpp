#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class GJSpecialColorSelect : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJSpecialColorSelect";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSpecialColorSelect, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3be280
     * @note[short] iOS: 0x243d74
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSpecialColorSelect();

    /**
     * @note[short] MacOS (Intel): 0x7027e0
     * @note[short] Windows: 0x3be350
     * @note[short] Android
     */
    static GJSpecialColorSelect* create(int id, GJSpecialColorSelectDelegate* delegate, ColorSelectType type);

    /**
     * @note[short] MacOS (Intel): 0x615b50
     * @note[short] Windows: 0x3bf820
     * @note[short] Android
     */
    static const char* textForColorIdx(int index);

    /**
     * @note[short] MacOS (ARM): 0x614a04
     * @note[short] MacOS (Intel): 0x703680
     * @note[short] Windows: 0x3bf7d0
     * @note[short] iOS: 0x244764
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x6148c0
     * @note[short] MacOS (Intel): 0x703540
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ButtonSprite* getButtonByTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x614950
     * @note[short] MacOS (Intel): 0x7035c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void highlightSelected(ButtonSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x613d8c
     * @note[short] MacOS (Intel): 0x702a00
     * @note[short] Windows: 0x3be470
     * @note[short] Android
     */
    bool init(int id, GJSpecialColorSelectDelegate* delegate, ColorSelectType type);

    /**
     * @note[short] MacOS (ARM): 0x614760
     * @note[short] MacOS (Intel): 0x7033e0
     * @note[short] Windows: 0x3bf780
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6147e4
     * @note[short] MacOS (Intel): 0x703460
     * @note[short] Windows: 0x3bf6a0
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);
    GJSpecialColorSelectDelegate* m_delegate;
    int m_colorID;
    cocos2d::CCArray* m_buttonSprites;
};
