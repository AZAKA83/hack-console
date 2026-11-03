#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GameObjectCopy : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GameObjectCopy";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameObjectCopy, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x409dc0
     * @note[short] iOS: 0x40c20c
     * @note[short] Android: Rebinded
     */
    virtual  ~GameObjectCopy();

    /**
     * @note[short] MacOS (ARM): 0xa0cd0
     * @note[short] MacOS (Intel): 0xb2d90
     * @note[short] Windows: 0x409e20
     * @note[short] Android
     */
    static GameObjectCopy* create(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xbd55c
     * @note[short] MacOS (Intel): 0xd6a30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa0de8
     * @note[short] MacOS (Intel): 0xb2eb0
     * @note[short] Windows: 0x409f20
     * @note[short] Android
     */
    void resetObject();
    GameObject* m_object;
    cocos2d::CCPoint m_position;
    float m_rotationX;
    float m_rotationY;
    bool m_isFlipX;
    bool m_isFlipY;
    float m_customScaleX;
    float m_customScaleY;
};
