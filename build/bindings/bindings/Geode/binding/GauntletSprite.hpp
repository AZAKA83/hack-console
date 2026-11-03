#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GauntletSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GauntletSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSprite, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletSprite();

    /**
     * @note[short] Windows: 0x80dc0
     * @note[short] Android: Rebinded
     */
    virtual  ~GauntletSprite();

    /**
     * @note[short] MacOS (ARM): 0x30a9f0
     * @note[short] MacOS (Intel): 0x37f480
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GauntletSprite* create(GauntletType type, bool locked);

    /**
     * @note[short] MacOS (ARM): 0x30b400
     * @note[short] MacOS (Intel): 0x37fd90
     * @note[short] Windows: 0x2fd2d0
     * @note[short] Android
     */
    void addLockedSprite();

    /**
     * @note[short] MacOS (ARM): 0x30b304
     * @note[short] MacOS (Intel): 0x37fcc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addNormalSprite();

    /**
     * @note[short] MacOS (ARM): 0x30b804
     * @note[short] MacOS (Intel): 0xff150
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForType(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x30b270
     * @note[short] MacOS (Intel): 0x37fc30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(GauntletType type, bool locked);

    /**
     * @note[short] MacOS (Intel): 0x46b670
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float luminanceForType(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x30b19c
     * @note[short] MacOS (Intel): 0x37fb60
     * @note[short] Windows: 0x1ae790
     * @note[short] Android
     */
    void toggleLockedSprite(bool locked);
    GauntletType m_gauntletType;
};
