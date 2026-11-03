#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJEditorSoundConfig : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJEditorSoundConfig";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJEditorSoundConfig, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x360130
     * @note[short] iOS: 0x4decb8
     * @note[short] Android: Rebinded
     */
    virtual  ~GJEditorSoundConfig();

    /**
     * @note[short] Android
     */
    static GJEditorSoundConfig* create();

    /**
     * @note[short] Android
     */
    static GJEditorSoundConfig* create(cocos2d::CCDictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x7ee990
     * @note[short] MacOS (Intel): 0x907d10
     * @note[short] Windows: 0x3618e0
     * @note[short] iOS: 0x4deae4
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] MacOS (ARM): 0x7ed78c
     * @note[short] MacOS (Intel): 0x906a20
     * @note[short] Windows: 0x8b060
     * @note[short] iOS: 0x4dddd0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    TodoReturn clearServerState();

    /**
     * @note[short] Android
     */
    TodoReturn copyServerFields(GJEditorSoundConfig* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createWithCoder(DS_Dictionary* p0);

    /**
     * @note[short] Windows: 0x360ee0
     * @note[short] Android
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getUnpackedSoundDesc();

    /**
     * @note[short] Windows: 0x361180
     * @note[short] Android
     */
    TodoReturn showSoundInfo();
};
