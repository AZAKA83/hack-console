#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class MusicChangelogEntry : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "MusicChangelogEntry";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicChangelogEntry, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x480d50
     * @note[short] iOS: 0x1e3bc0
     * @note[short] Android: Rebinded
     */
    virtual  ~MusicChangelogEntry();

    /**
     * @note[short] Android
     */
    static MusicChangelogEntry* create(int p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    bool init(int p0, int p1, int p2);
};
