#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCMenu.hpp>

class CCMenuExtra : public cocos2d::CCMenu {
public:
    static constexpr auto CLASS_NAME = "CCMenuExtra";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCMenuExtra, cocos2d::CCMenu)
};
