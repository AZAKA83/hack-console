#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class SFXChangelogEntry : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "SFXChangelogEntry";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SFXChangelogEntry, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x480ca0
     * @note[short] iOS: 0x1e3b6c
     * @note[short] Android: Rebinded
     */
    virtual  ~SFXChangelogEntry();

    /**
     * @note[short] Android
     */
    static SFXChangelogEntry* create(int p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    bool init(int p0, int p1, int p2);
};
