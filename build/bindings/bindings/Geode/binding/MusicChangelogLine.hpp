#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class MusicChangelogLine : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "MusicChangelogLine";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicChangelogLine, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x480d00
     * @note[short] Android: Rebinded
     */
    virtual  ~MusicChangelogLine();

    /**
     * @note[short] Android
     */
    static MusicChangelogLine* create(int p0, std::string p1, int p2);

    /**
     * @note[short] Android
     */
    bool init(int p0, std::string p1, int p2);
};
