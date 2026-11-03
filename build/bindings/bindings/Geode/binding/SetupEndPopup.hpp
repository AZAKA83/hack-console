#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupEndPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupEndPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEndPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5b1d50
     * @note[short] iOS: 0x34c180
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupEndPopup();

    /**
     * @note[short] Windows: 0x5b1ef0
     * @note[short] Android
     */
    static SetupEndPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x6553d4
     * @note[short] MacOS (Intel): 0x748800
     * @note[short] Windows: 0x5b27b0
     * @note[short] iOS: 0x34c904
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x655644
     * @note[short] MacOS (Intel): 0x748b20
     * @note[short] Windows: 0x5ab300
     * @note[short] iOS: 0x34caf8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6554cc
     * @note[short] MacOS (Intel): 0x748930
     * @note[short] Windows: 0x1265d0
     * @note[short] iOS: 0x34c9d8
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x6554e8
     * @note[short] MacOS (Intel): 0x748970
     * @note[short] Windows: 0x5b2a10
     * @note[short] iOS: 0x34c9f4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x852d74
     * @note[short] MacOS (Intel): 0x747f70
     * @note[short] Windows: 0x5b2030
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x298aa4
     * @note[short] MacOS (Intel): 0x748770
     * @note[short] Windows: 0x5b2980
     * @note[short] Android
     */
    void onLockY(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6552c4
     * @note[short] MacOS (Intel): 0x7486b0
     * @note[short] Windows: 0x5b28c0
     * @note[short] Android
     */
    void onMultiActivate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298a28
     * @note[short] Windows: 0x5b28f0
     * @note[short] Android
     */
    void onReversed(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Windows: 0x5a1620
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_groupIDInput;
    bool m_reversed;
    bool m_lockY;
    int m_groupID;
    bool m_multiActivate;
};
