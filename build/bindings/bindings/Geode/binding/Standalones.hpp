#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCPoint.hpp>

    /**
     * @note[short] Windows: 0x1a1a50
     * @note[short] Android
     */
    bool isSpecialSnapObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x548e74
     * @note[short] MacOS (Intel): 0x603db0
     * @note[short] Windows: 0x19f3e0
     * @note[short] Android
     */
    cocos2d::CCPoint offsetForKey(int id);
