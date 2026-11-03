#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/array.hpp>

class OBB2D : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "OBB2D";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(OBB2D, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x7b440
     * @note[short] Android: Rebinded
     */
    virtual  ~OBB2D();

    /**
     * @note[short] MacOS (ARM): 0x5de79c
     * @note[short] MacOS (Intel): 0x6c6240
     * @note[short] Windows: 0x7b2b0
     * @note[short] Android
     */
    static OBB2D* create(cocos2d::CCPoint center, float width, float height, float rotationAngle);

    /**
     * @note[short] MacOS (ARM): 0x5de920
     * @note[short] MacOS (Intel): 0x6c6370
     * @note[short] Windows: 0x7b480
     * @note[short] Android
     */
    void calculateWithCenter(cocos2d::CCPoint center, float width, float height, float rotationAngle);

    /**
     * @note[short] MacOS (ARM): 0x5dea98
     * @note[short] MacOS (Intel): 0x6c6520
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void computeAxes();

    /**
     * @note[short] MacOS (ARM): 0x5df0b8
     * @note[short] MacOS (Intel): 0x6c6c20
     * @note[short] Windows: 0x7bd30
     * @note[short] Android
     */
    cocos2d::CCRect getBoundingRect();

    /**
     * @note[short] MacOS (ARM): 0x5de8a0
     * @note[short] MacOS (Intel): 0x6c6300
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCPoint center, float width, float height, float rotationAngle);

    /**
     * @note[short] MacOS (ARM): 0x5deb98
     * @note[short] MacOS (Intel): 0x6c6680
     * @note[short] Windows: 0x7b790
     * @note[short] Android
     */
    void orderCorners();

    /**
     * @note[short] MacOS (ARM): 0x5def2c
     * @note[short] MacOS (Intel): 0x6c6a00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool overlaps(OBB2D* other);

    /**
     * @note[short] MacOS (ARM): 0x5def68
     * @note[short] MacOS (Intel): 0x6c6a30
     * @note[short] Windows: 0x7bb70
     * @note[short] Android
     */
    bool overlaps1Way(OBB2D* other);
    std::array<cocos2d::CCPoint, 4> m_corners;
    std::array<cocos2d::CCPoint, 4> m_positions;
    std::array<cocos2d::CCPoint, 4> m_edges;
    std::array<double, 2> m_projections;
    cocos2d::CCPoint m_center;
};
