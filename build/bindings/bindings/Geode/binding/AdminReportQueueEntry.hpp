#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class AdminReportQueueEntry : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "AdminReportQueueEntry";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AdminReportQueueEntry, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x217240
     * @note[short] Android: Rebinded
     */
    virtual  ~AdminReportQueueEntry();
};
