#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class NCSInfoLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "NCSInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NCSInfoLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     NCSInfoLayer();

    /**
     * @note[short] Windows: 0x5a3f0
     * @note[short] Android: Rebinded
     */
    virtual  ~NCSInfoLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static NCSInfoLayer* create(CustomSongLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1ad450
     * @note[short] MacOS (Intel): 0x1fbcf0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x1c55e4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1acce4
     * @note[short] MacOS (Intel): 0x1fb550
     * @note[short] Windows: 0x167300
     * @note[short] Android
     */
    bool init(CustomSongLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1ad414
     * @note[short] MacOS (Intel): 0x1fbcc0
     * @note[short] Windows: 0x99f60
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ad344
     * @note[short] MacOS (Intel): 0x1fbbf0
     * @note[short] Windows: 0x167bc0
     * @note[short] Android
     */
    void onLibrary(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ad3a8
     * @note[short] MacOS (Intel): 0x1fb3d0
     * @note[short] Windows: 0x167b30
     * @note[short] Android
     */
    void onNCS(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ad3cc
     * @note[short] MacOS (Intel): 0x1fb3f0
     * @note[short] Windows: 0x167b60
     * @note[short] Android
     */
    void onNCSIO(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ad3f0
     * @note[short] MacOS (Intel): 0x1fb410
     * @note[short] Windows: 0x167b90
     * @note[short] Android
     */
    void onNCSUsage(cocos2d::CCObject* sender);
    CustomSongLayer* m_songLayer;
};
