#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class AdminLogEntry : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "AdminLogEntry";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AdminLogEntry, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x217160
     * @note[short] Android: Rebinded
     */
    virtual  ~AdminLogEntry();
};
