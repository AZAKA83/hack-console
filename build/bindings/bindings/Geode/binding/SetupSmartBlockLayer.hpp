#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/SelectArtDelegate.hpp>

class SetupSmartBlockLayer : public FLAlertLayer, public SelectArtDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSmartBlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSmartBlockLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5ebe50
     * @note[short] iOS: 0x77768
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupSmartBlockLayer();

    /**
     * @note[short] Windows: 0x5ec1e0
     * @note[short] Android
     */
    static SetupSmartBlockLayer* create(SmartGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x44115c
     * @note[short] MacOS (Intel): 0x4e1f30
     * @note[short] Windows: 0x5ee400
     * @note[short] iOS: 0x78c08
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4410f8
     * @note[short] MacOS (Intel): 0x4e1ea0
     * @note[short] Windows: 0x1262f0
     * @note[short] iOS: 0x78ba4
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x441144
     * @note[short] MacOS (Intel): 0x4e1f00
     * @note[short] Windows: 0x5ee3c0
     * @note[short] iOS: 0x78bf0
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* layer);

    /**
     * @note[short] MacOS (Intel): 0x4e1430
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x43fba4
     * @note[short] MacOS (Intel): 0x4e06a0
     * @note[short] Windows: 0x5ec330
     * @note[short] Android
     */
    bool init(SmartGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x440fc8
     * @note[short] MacOS (Intel): 0x4e1d60
     * @note[short] Windows: 0x5ed470
     * @note[short] Android
     */
    void onAllowFlipping(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4e1d20
     * @note[short] Windows: 0x5ed3f0
     * @note[short] Android
     */
    void onAllowRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x440884
     * @note[short] MacOS (Intel): 0x4e1530
     * @note[short] Windows: 0x5edd60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x440924
     * @note[short] MacOS (Intel): 0x4e15e0
     * @note[short] Windows: 0x5ede20
     * @note[short] Android
     */
    void onCreate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x440ce0
     * @note[short] MacOS (Intel): 0x4e1a40
     * @note[short] Windows: 0x5edab0
     * @note[short] Android
     */
    void onCreateAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x440a10
     * @note[short] MacOS (Intel): 0x4e16f0
     * @note[short] Windows: 0x5ee250
     * @note[short] Android
     */
    void onCreateTemplate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4e1e60
     * @note[short] Windows: 0x5ed5b0
     * @note[short] Android
     */
    void onDontDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4e1de0
     * @note[short] Windows: 0x5ed620
     * @note[short] Android
     */
    void onIgnoreCorners(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4e1e20
     * @note[short] Windows: 0x5ed540
     * @note[short] Android
     */
    void onNearbyReference(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x440af4
     * @note[short] MacOS (Intel): 0x4e17f0
     * @note[short] Windows: 0x5ed6a0
     * @note[short] Android
     */
    void onPasteTemplate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4e1c90
     * @note[short] Windows: 0x5ed360
     * @note[short] Android
     */
    void onReferenceOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x440a88
     * @note[short] MacOS (Intel): 0x4e1770
     * @note[short] Windows: 0x5ee350
     * @note[short] Android
     */
    void onSelectPremade(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x440ad0
     * @note[short] MacOS (Intel): 0x4e17c0
     * @note[short] Windows: 0x5ee3d0
     * @note[short] Android
     */
    void onSelectTemplate(cocos2d::CCObject* sender);
    bool m_referenceOnly;
    bool m_allowRotation;
    bool m_allowFlipX;
    bool m_allowFlipY;
    bool m_useNearby;
    bool m_dontDelete;
    bool m_ignoreCorners;
    int m_specialTemplate;
    SmartGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
};
