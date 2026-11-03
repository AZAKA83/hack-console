#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class NewgroundsInfoLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "NewgroundsInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NewgroundsInfoLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     NewgroundsInfoLayer();

    /**
     * @note[short] Windows: 0x5a3f0
     * @note[short] Android: Rebinded
     */
    virtual  ~NewgroundsInfoLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static NewgroundsInfoLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x1ac350
     * @note[short] MacOS (Intel): 0x1fabf0
     * @note[short] Windows: 0x166750
     * @note[short] iOS: 0x1c45d0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1acc68
     * @note[short] MacOS (Intel): 0x1fb4e0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x1c4e88
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1acae0
     * @note[short] MacOS (Intel): 0x1fb3a0
     * @note[short] Windows: 0x167010
     * @note[short] Android
     */
    void onArtists(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1acaa4
     * @note[short] MacOS (Intel): 0x1fb370
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1acb38
     * @note[short] MacOS (Intel): 0x3837b0
     * @note[short] Windows: 0x167180
     * @note[short] Android
     */
    void onGuidelines(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1671b0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1acb14
     * @note[short] Windows: 0x166fe0
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1acb5c
     * @note[short] MacOS (Intel): 0x3837d0
     * @note[short] Windows: 0x167150
     * @note[short] Android
     */
    void onSupporter(cocos2d::CCObject* sender);
};
