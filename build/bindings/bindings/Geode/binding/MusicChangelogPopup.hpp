#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ScrollViewPopup.hpp>

class MusicChangelogPopup : public ScrollViewPopup {
public:
    static constexpr auto CLASS_NAME = "MusicChangelogPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MusicChangelogPopup, ScrollViewPopup)

    /**
     * @note[short] Android: Rebinded
     */
    virtual  ~MusicChangelogPopup();

    /**
     * @note[short] Android
     */
    static MusicChangelogPopup* create(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x83609c
     * @note[short] MacOS (Intel): 0x9576b0
     * @note[short] Windows: 0x47fa60
     * @note[short] iOS: 0x517024
     * @note[short] Android
     */
    virtual float buildContent(cocos2d::CCNode* p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0);
};
