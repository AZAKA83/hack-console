#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class PointNode : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "PointNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PointNode, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     PointNode();

    /**
     * @note[short] Windows: 0x87770
     * @note[short] Android: Rebinded
     */
    virtual  ~PointNode();

    /**
     * @note[short] MacOS (ARM): 0x5dde8
     * @note[short] MacOS (Intel): 0x65050
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static PointNode* create(cocos2d::CCPoint point);

    /**
     * @note[short] MacOS (ARM): 0x7842b0
     * @note[short] MacOS (Intel): 0x65480
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCPoint point);
    cocos2d::CCPoint m_point;
};
