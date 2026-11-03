#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class SetupObjectOptionsPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SetupObjectOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectOptionsPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupObjectOptionsPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42f40
     * @note[short] Android: Rebinded
     */
     ~SetupObjectOptionsPopup();

    /**
     * @note[short] Windows: 0x5948e0
     * @note[short] Android
     */
    static SetupObjectOptionsPopup* create(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x299858
     * @note[short] MacOS (Intel): 0x3061a0
     * @note[short] Windows: 0x597690
     * @note[short] iOS: 0x4534c
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0, double p1);

    /**
     * @note[short] MacOS (ARM): 0x299834
     * @note[short] MacOS (Intel): 0x306160
     * @note[short] Windows: 0x597670
     * @note[short] iOS: 0x45328
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2998f0
     * @note[short] MacOS (Intel): 0x306250
     * @note[short] Windows: 0x1262f0
     * @note[short] iOS: 0x453e4
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x299584
     * @note[short] MacOS (Intel): 0x305d50
     * @note[short] Windows: 0x5964b0
     * @note[short] iOS: 0x45144
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x29993c
     * @note[short] MacOS (Intel): 0x3062b0
     * @note[short] Windows: 0x5976e0
     * @note[short] iOS: 0x45430
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x299864
     * @note[short] MacOS (Intel): 0x3061d0
     * @note[short] Windows: 0x5976a0
     * @note[short] iOS: 0x45358
     * @note[short] Android
     */
    virtual bool handleAction(int p0, bool p1, double p2);

    /**
     * @note[short] MacOS (ARM): 0x296ee0
     * @note[short] MacOS (Intel): 0x3030c0
     * @note[short] Windows: 0x594a20
     * @note[short] Android
     */
    bool init(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x596cf0
     * @note[short] Android
     */
    void onAlwaysHide(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5970e0
     * @note[short] Android
     */
    void onApplyScaleStick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298fdc
     * @note[short] Windows: 0x597460
     * @note[short] Android
     */
    void onCenterEffect(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x596bd0
     * @note[short] Android
     */
    void onDisableGlow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298d28
     * @note[short] MacOS (Intel): 0x305410
     * @note[short] Windows: 0x596a10
     * @note[short] Android
     */
    void onDisableObject(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x596f30
     * @note[short] Android
     */
    void onDontBoost(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d5e10
     * @note[short] MacOS (Intel): 0x305260
     * @note[short] Windows: 0x596fc0
     * @note[short] Android
     */
    void onDontBoostX(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDontEnter(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDontFade(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x299058
     * @note[short] MacOS (Intel): 0x305780
     * @note[short] Windows: 0x597320
     * @note[short] Android
     */
    void onExtendedCollision(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x3056f0
     * @note[short] Windows: 0x596f30
     * @note[short] Android
     */
    void onExtraSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x596b40
     * @note[short] Android
     */
    void onGripSlope(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHideEffects(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x305380
     * @note[short] Windows: 0x597290
     * @note[short] Android
     */
    void onHighDetail(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onIceBlock(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x597050
     * @note[short] Android
     */
    void onNoAudioScale(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x596d80
     * @note[short] Android
     */
    void onNonStickX(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x596e10
     * @note[short] Android
     */
    void onNonStickY(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x596980
     * @note[short] Android
     */
    void onNoParticle(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x596c60
     * @note[short] Android
     */
    void onPassable(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onReverse(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x299378
     * @note[short] Windows: 0x597510
     * @note[short] Android
     */
    void onSinglePlayerTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x597200
     * @note[short] Android
     */
    void onToggleAreaParent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x249930
     * @note[short] Windows: 0x597170
     * @note[short] Android
     */
    void onToggleGroupParent(cocos2d::CCObject* sender);
    GameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    bool m_iceBlock;
    bool m_dontFade;
    bool m_dontEnter;
    bool m_noEffects;
    bool m_noParticle;
    bool m_noTouch;
    bool m_passable;
    bool m_hide;
    bool m_nonStickX;
    bool m_nonStickY;
    bool m_extraSticky;
    bool m_dontBoostY;
    bool m_dontBoostX;
    bool m_noAudioScale;
    bool m_scaleStick;
    bool m_highDetail;
    bool m_groupParent;
    bool m_areaParent;
    bool m_gripSlope;
    bool m_noGlow;
    bool m_reverse;
    bool m_extendedCollision;
    bool m_unk2a6;
    bool m_effectObject;
    bool m_unk2a7;
    bool m_singlePlayerTouch;
    bool m_centerEffect;
};
