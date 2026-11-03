#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class FriendRowEdges : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FriendRowEdges";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FriendRowEdges, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x80dc0
     * @note[short] Android: Rebinded
     */
    virtual  ~FriendRowEdges();

    /**
     * @note[short] MacOS (ARM): 0x645e44
     * @note[short] MacOS (Intel): 0x738090
     * @note[short] Windows: 0x213020
     * @note[short] iOS: 0x273e20
     * @note[short] Android
     */
    virtual void draw();
};
