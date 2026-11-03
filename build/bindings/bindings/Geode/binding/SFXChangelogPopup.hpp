#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ScrollViewPopup.hpp>

class SFXChangelogPopup : public ScrollViewPopup {
public:
    static constexpr auto CLASS_NAME = "SFXChangelogPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXChangelogPopup, ScrollViewPopup)

    /**
     * @note[short] Windows: 0x6218d0
     * @note[short] iOS: 0x5178b8
     * @note[short] Android: Rebinded
     */
    virtual  ~SFXChangelogPopup();

    /**
     * @note[short] Android
     */
    static SFXChangelogPopup* create(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x84cd30
     * @note[short] MacOS (Intel): 0x970e10
     * @note[short] Windows: 0x621370
     * @note[short] iOS: 0x5279ac
     * @note[short] Android
     */
    virtual float buildContent(cocos2d::CCNode* p0, float p1, float p2);

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0x621270
     * @note[short] Android
     */
    void onCredits(cocos2d::CCObject* sender);
};
