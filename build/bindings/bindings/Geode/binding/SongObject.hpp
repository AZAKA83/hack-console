#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class SongObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "SongObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SongObject();

    /**
     * @note[short] Windows: 0x87770
     * @note[short] Android: Rebinded
     */
    virtual  ~SongObject();

    /**
     * @note[short] MacOS (ARM): 0x1e836c
     * @note[short] MacOS (Intel): 0x23c6a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SongObject* create(int audioID);

    /**
     * @note[short] MacOS (ARM): 0x1e83d8
     * @note[short] MacOS (Intel): 0x23c710
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int audioID);
    int m_audioID;
};
