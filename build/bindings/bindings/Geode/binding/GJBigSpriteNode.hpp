#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GJBigSpriteNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJBigSpriteNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBigSpriteNode, cocos2d::CCNode)
};
