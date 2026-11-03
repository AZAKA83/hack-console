#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class CCAnimateFrameCache : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "CCAnimateFrameCache";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAnimateFrameCache, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x44f00
     * @note[short] iOS: 0x245464
     * @note[short] Android: Rebinded
     */
    virtual  ~CCAnimateFrameCache();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCAnimateFrameCache* get();

    /**
     * @note[short] MacOS (ARM): 0x4e76e8
     * @note[short] MacOS (Intel): 0x597e90
     * @note[short] Windows: 0x44fe0
     * @note[short] iOS: 0x245360
     * @note[short] Android
     */
    static CCAnimateFrameCache* sharedSpriteFrameCache();

    /**
     * @note[short] MacOS (ARM): 0x4e78ec
     * @note[short] MacOS (Intel): 0x5980d0
     * @note[short] iOS: 0x245674
     * @note[short] Android
     */
    void addCustomSpriteFramesWithFile(char const* filename);

    /**
     * @note[short] MacOS (ARM): 0x4e8b38
     * @note[short] MacOS (Intel): 0x5993f0
     * @note[short] Windows: 0x45240
     * @note[short] Android
     */
    cocos2d::CCDictionary* addDict(DS_Dictionary* dict, char const* filename);

    /**
     * @note[short] MacOS (ARM): 0x4e848c
     * @note[short] MacOS (Intel): 0x598d40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCDictionary* addDict(cocos2d::CCDictionary* dict, char const* filename);

    /**
     * @note[short] MacOS (ARM): 0x4e88dc
     * @note[short] MacOS (Intel): 0x599190
     * @note[short] Windows: 0x45080
     * @note[short] iOS: 0x245674
     * @note[short] Android
     */
    cocos2d::CCDictionary* addSpriteFramesWithFile(char const* filename);

    /**
     * @note[short] MacOS (ARM): 0x4e777c
     * @note[short] MacOS (Intel): 0x597f30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] MacOS (ARM): 0x4e77c0
     * @note[short] MacOS (Intel): 0x597f80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void purgeSharedSpriteFrameCache();

    /**
     * @note[short] MacOS (ARM): 0x4e928c
     * @note[short] MacOS (Intel): 0x599b60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2457a4
     * @note[short] Android
     */
    void removeSpriteFrames();

    /**
     * @note[short] MacOS (Intel): 0x599b90
     * @note[short] Windows: 0x45860
     * @note[short] Android
     */
    cocos2d::CCArray* spriteFrameByName(char const* name);
    cocos2d::CCDictionary* m_animateFrames;
    cocos2d::CCDictionary* m_unk040;
    cocos2d::CCDictionary* m_animateDescriptions;
};
