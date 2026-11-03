#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GameObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class EndPortalObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EndPortalObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndPortalObject, GameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EndPortalObject();

    /**
     * @note[short] Windows: 0x288810
     * @note[short] iOS: 0x3028ec
     * @note[short] Android: Rebinded
     */
    virtual  ~EndPortalObject();

    /**
     * @note[short] MacOS (ARM): 0x310c18
     * @note[short] MacOS (Intel): 0x385cf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EndPortalObject* create();

    /**
     * @note[short] MacOS (ARM): 0x310cb4
     * @note[short] MacOS (Intel): 0x385d90
     * @note[short] Windows: 0x208ef0
     * @note[short] iOS: 0x47f078
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x311124
     * @note[short] MacOS (Intel): 0x386280
     * @note[short] Windows: 0x2093f0
     * @note[short] iOS: 0x47f4e8
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x31121c
     * @note[short] MacOS (Intel): 0x386390
     * @note[short] Windows: 0x209550
     * @note[short] iOS: 0x47f5e0
     * @note[short] Android
     */
    virtual void setVisible(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x3110c0
     * @note[short] MacOS (Intel): 0x386200
     * @note[short] Windows: 0x209330
     * @note[short] Android
     */
    cocos2d::CCPoint getSpawnPos();

    /**
     * @note[short] MacOS (ARM): 0x311050
     * @note[short] MacOS (Intel): 0x386180
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerObject(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x310f84
     * @note[short] MacOS (Intel): 0x3860c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateColors(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x311280
     * @note[short] MacOS (Intel): 0x3863f0
     * @note[short] Windows: 0x2095a0
     * @note[short] Android
     */
    void updateEndPos(bool updateParticle);
    cocos2d::CCSprite* m_gradientBar;
    bool m_flippedX;
    bool m_startPosHeightRelated;
};
