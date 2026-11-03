#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class VirtualRowSource {
public:
    static constexpr auto CLASS_NAME = "VirtualRowSource";

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual int virtualRowCount();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual int virtualRowHeight(int p0);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2);

    /**
     * @note[short] Windows: 0x3f5c0
     * @note[short] Android
     */
    virtual void unmountVirtualRow(int p0, cocos2d::CCNode* p1);
};
