#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class GJPromoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJPromoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPromoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJPromoPopup();

    /**
     * @note[short] Windows: 0x5a3f0
     * @note[short] iOS: 0x38140c
     * @note[short] Android: Rebinded
     */
    virtual  ~GJPromoPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJPromoPopup* create(std::string filename);

    /**
     * @note[short] MacOS (ARM): 0x2472c4
     * @note[short] MacOS (Intel): 0x2a47e0
     * @note[short] Windows: 0x3aaed0
     * @note[short] iOS: 0x380380
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x2473d4
     * @note[short] MacOS (Intel): 0x2a48f0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x3803c0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x247304
     * @note[short] MacOS (Intel): 0x2a4820
     * @note[short] Windows: 0x393180
     * @note[short] iOS: 0x3803b4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x24740c
     * @note[short] MacOS (Intel): 0x2a4930
     * @note[short] Windows: 0x9eec0
     * @note[short] iOS: 0x3803f8
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: 0x3aabf0
     * @note[short] Android
     */
    bool init(std::string filename);

    /**
     * @note[short] MacOS (ARM): 0x24725c
     * @note[short] MacOS (Intel): 0x2a4780
     * @note[short] Windows: 0x393120
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    std::string m_promoFrame;
};
