#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class StatsObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "StatsObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(StatsObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x14e8e0
     * @note[short] Android: Rebinded
     */
    virtual  ~StatsObject();

    /**
     * @note[short] MacOS (ARM): 0x1e750c
     * @note[short] MacOS (Intel): 0x23b900
     * @note[short] Windows: 0x14e7a0
     * @note[short] Android
     */
    static StatsObject* create(char const* key, int value);

    /**
     * @note[short] MacOS (ARM): 0x1e7594
     * @note[short] MacOS (Intel): 0x23b990
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(char const* key, int value);
    const char* m_key;
    int m_value;
};
