#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CCCircleWave : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCCircleWave";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCircleWave, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x46470
     * @note[short] iOS: 0x1fa4d0
     * @note[short] Android: Rebinded
     */
    virtual  ~CCCircleWave();

    /**
     * @note[short] MacOS (ARM): 0x123860
     * @note[short] MacOS (Intel): 0x157810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1fa4e8
     * @note[short] Android
     */
    static CCCircleWave* create(float startRadius, float endRadius, float duration, bool fadeIn);

    /**
     * @note[short] MacOS (ARM): 0x123868
     * @note[short] MacOS (Intel): 0x157820
     * @note[short] Windows: 0x464d0
     * @note[short] iOS: 0x1fa4f0
     * @note[short] Android
     */
    static CCCircleWave* create(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut);

    /**
     * @note[short] MacOS (ARM): 0x123b3c
     * @note[short] MacOS (Intel): 0x157b70
     * @note[short] Windows: 0x467c0
     * @note[short] iOS: 0x1fa748
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x123fe0
     * @note[short] MacOS (Intel): 0x158020
     * @note[short] Windows: 0x46c10
     * @note[short] iOS: 0x1faac8
     * @note[short] Android
     */
    virtual void removeMeAndCleanup();

    /**
     * @note[short] MacOS (ARM): 0x123e9c
     * @note[short] MacOS (Intel): 0x157ee0
     * @note[short] Windows: 0x46ae0
     * @note[short] iOS: 0x1fa990
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x123c4c
     * @note[short] MacOS (Intel): 0x157c70
     * @note[short] Windows: 0x46840
     * @note[short] iOS: 0x1fa858
     * @note[short] Android
     */
    virtual void updateTweenAction(float value, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x123b00
     * @note[short] MacOS (Intel): 0x157b10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void baseSetup(float radius);

    /**
     * @note[short] MacOS (ARM): 0x123bbc
     * @note[short] MacOS (Intel): 0x157be0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void followObject(cocos2d::CCNode* newTarget, bool staticPosition);

    /**
     * @note[short] MacOS (ARM): 0x12393c
     * @note[short] MacOS (Intel): 0x157910
     * @note[short] Windows: 0x46580
     * @note[short] Android
     */
    bool init(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut);

    /**
     * @note[short] MacOS (ARM): 0x123b70
     * @note[short] MacOS (Intel): 0x157ba0
     * @note[short] Windows: 0x46800
     * @note[short] Android
     */
    void updatePosition(float dt);
    cocos2d::CCNode* m_target;
    float m_width;
    float m_radius;
    float m_opacity;
    cocos2d::ccColor3B m_color;
    cocos2d::CCPoint m_position;
    CircleMode m_circleMode;
    int m_lineWidth;
    float m_opacityMod;
    bool m_blendAdditive;
    CCCircleWaveDelegate* m_delegate;
};
