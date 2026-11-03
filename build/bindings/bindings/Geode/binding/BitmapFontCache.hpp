#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class BitmapFontCache : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "BitmapFontCache";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BitmapFontCache, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BitmapFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1b4524
     * @note[short] MacOS (Intel): 0x203650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38fcdc
     * @note[short] Android: Rebinded
     */
     ~BitmapFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1b44f8
     * @note[short] MacOS (Intel): 0x203620
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38fc74
     * @note[short] Android
     */
    static void purgeSharedFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1b4454
     * @note[short] MacOS (Intel): 0x203570
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static BitmapFontCache* sharedFontCache();

    /**
     * @note[short] MacOS (ARM): 0x1b45dc
     * @note[short] MacOS (Intel): 0x203710
     * @note[short] Windows: 0x3de90
     * @note[short] Android
     */
    FontObject* fontWithConfigFile(char const* font, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1b44cc
     * @note[short] MacOS (Intel): 0x2035f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init();
    cocos2d::CCDictionary* m_cache;
};
