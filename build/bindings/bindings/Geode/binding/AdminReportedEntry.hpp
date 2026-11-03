#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class AdminReportedEntry : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "AdminReportedEntry";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AdminReportedEntry, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x2171d0
     * @note[short] Android: Rebinded
     */
    virtual  ~AdminReportedEntry();
};
