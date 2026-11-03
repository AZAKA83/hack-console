#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/RingObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class TeleportPortalObject : public RingObject {
public:
    static constexpr auto CLASS_NAME = "TeleportPortalObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TeleportPortalObject, RingObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TeleportPortalObject();

    /**
     * @note[short] Windows: 0x637f40
     * @note[short] Android: Rebinded
     */
    virtual  ~TeleportPortalObject();

    /**
     * @note[short] MacOS (ARM): 0x15d460
     * @note[short] MacOS (Intel): 0x19e3b0
     * @note[short] Windows: 0x6536b0
     * @note[short] Android
     */
    static TeleportPortalObject* create(char const* frame, bool trigger);

    /**
     * @note[short] MacOS (ARM): 0x15d7c0
     * @note[short] MacOS (Intel): 0x19e750
     * @note[short] Windows: 0x653890
     * @note[short] iOS: 0x42dfd4
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x15d86c
     * @note[short] MacOS (Intel): 0x19e800
     * @note[short] Windows: 0x653a10
     * @note[short] iOS: 0x42e080
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x15d624
     * @note[short] MacOS (Intel): 0x19e5b0
     * @note[short] Windows: 0x6537d0
     * @note[short] iOS: 0x42de44
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x15f6fc
     * @note[short] MacOS (Intel): 0x1a0fb0
     * @note[short] Windows: 0x6543f0
     * @note[short] iOS: 0x42ea10
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x15d9d0
     * @note[short] MacOS (Intel): 0x19e950
     * @note[short] Windows: 0x653c20
     * @note[short] iOS: 0x42e1e0
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x15d8ec
     * @note[short] MacOS (Intel): 0x19e890
     * @note[short] Windows: 0x653ad0
     * @note[short] iOS: 0x42e100
     * @note[short] Android
     */
    virtual int addToGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x15d968
     * @note[short] MacOS (Intel): 0x19e8f0
     * @note[short] Windows: 0x653b90
     * @note[short] iOS: 0x42e178
     * @note[short] Android
     */
    virtual void removeFromGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x15d8e0
     * @note[short] MacOS (Intel): 0x19e860
     * @note[short] Windows: 0x501e70
     * @note[short] iOS: 0x42e0f4
     * @note[short] Android
     */
    virtual void setRotation2(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x15d8e4
     * @note[short] MacOS (Intel): 0x19e870
     * @note[short] Windows: 0x653ab0
     * @note[short] iOS: 0x42e0f8
     * @note[short] Android
     */
    virtual void addToGroup2(int id);

    /**
     * @note[short] MacOS (ARM): 0x15d8e8
     * @note[short] MacOS (Intel): 0x19e880
     * @note[short] Windows: 0x653ac0
     * @note[short] iOS: 0x42e0fc
     * @note[short] Android
     */
    virtual void removeFromGroup2(int id);

    /**
     * @note[short] MacOS (ARM): 0x15d6ec
     * @note[short] MacOS (Intel): 0x19e680
     * @note[short] Windows: 0x653930
     * @note[short] Android
     */
    float getTeleportXOff(cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x15d594
     * @note[short] MacOS (Intel): 0x19e510
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame, bool trigger);

    /**
     * @note[short] MacOS (ARM): 0x15d620
     * @note[short] MacOS (Intel): 0x19e5a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setPositionOverride(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x15d5e8
     * @note[short] MacOS (Intel): 0x19e570
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setStartPosOverride(cocos2d::CCPoint position);
    TeleportPortalObject* m_orangePortal;
    bool m_isYellowPortal;
    float m_teleportYOffset;
    bool m_teleportEase;
    bool m_staticForceEnabled;
    float m_staticForce;
    bool m_redirectForceEnabled;
    float m_redirectForceMod;
    float m_redirectForceMin;
    float m_redirectForceMax;
    bool m_saveOffset;
    bool m_ignoreX;
    bool m_ignoreY;
    int m_gravityMode;
    bool m_staticForceAdditive;
    bool m_instantCamera;
    bool m_snapGround;
    bool m_redirectDash;
    cocos2d::CCPoint m_teleportPosition;
};
