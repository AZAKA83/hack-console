#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/SelectArtDelegate.hpp>

class SetupArtSwitchPopup : public SetupTriggerPopup, public SelectArtDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupArtSwitchPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupArtSwitchPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupArtSwitchPopup();

    /**
     * @note[short] Windows: 0x608160
     * @note[short] Android
     */
    static SetupArtSwitchPopup* create(ArtTriggerGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x4ffa7c
     * @note[short] MacOS (Intel): 0x5b2020
     * @note[short] Windows: 0x608ec0
     * @note[short] iOS: 0x491d24
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x4ff450
     * @note[short] MacOS (Intel): 0x5b19e0
     * @note[short] Windows: 0x608420
     * @note[short] Android
     */
    bool init(ArtTriggerGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x4ffa34
     * @note[short] MacOS (Intel): 0x5b1fd0
     * @note[short] Windows: 0x608e60
     * @note[short] Android
     */
    void onArt(cocos2d::CCObject* sender);
    SelectArtType m_artType;
    cocos2d::CCSprite* m_artSprite;
};
