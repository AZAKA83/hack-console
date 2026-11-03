#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCSpriteCOpacity.hpp>

class GJPathSprite : public CCSpriteCOpacity {
public:
    static constexpr auto CLASS_NAME = "GJPathSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathSprite, CCSpriteCOpacity)

    /**
     * @note[short] Windows: 0x7e780
     * @note[short] Android: Rebinded
     */
    virtual  ~GJPathSprite();

    /**
     * @note[short] MacOS (ARM): 0x27f888
     * @note[short] MacOS (Intel): 0x2e9480
     * @note[short] Windows: 0x396e70
     * @note[short] Android
     */
    static GJPathSprite* create(int path);

    /**
     * @note[short] MacOS (ARM): 0x283aa0
     * @note[short] MacOS (Intel): 0x2edb70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addRankLabel(int path);

    /**
     * @note[short] MacOS (ARM): 0x283538
     * @note[short] MacOS (Intel): 0x2ed640
     * @note[short] Windows: 0x397500
     * @note[short] Android
     */
    void addShardSprite();

    /**
     * @note[short] MacOS (ARM): 0x2826e0
     * @note[short] MacOS (Intel): 0x2ec5f0
     * @note[short] Windows: 0x397210
     * @note[short] Android
     */
    void changeToLockedArt();

    /**
     * @note[short] MacOS (ARM): 0x283968
     * @note[short] MacOS (Intel): 0x2eda50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(int path);

    /**
     * @note[short] MacOS (ARM): 0x27f934
     * @note[short] MacOS (Intel): 0x2e9520
     * @note[short] Windows: 0x397020
     * @note[short] Android
     */
    void updateState();
    int m_pathNumber;
};
