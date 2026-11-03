#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCDirector.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GraphicsReloadLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GraphicsReloadLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GraphicsReloadLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GraphicsReloadLayer();

    /**
     * @note[short] Windows: 0x4cad60
     * @note[short] Android: Rebinded
     */
    virtual  ~GraphicsReloadLayer();

    /**
     * @note[short] MacOS (ARM): 0x77cb54
     * @note[short] MacOS (Intel): 0x888070
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GraphicsReloadLayer* create(cocos2d::TextureQuality quality, cocos2d::CCSize resolution, bool fullscreen, bool borderless, bool fix, bool changedResolution);

    /**
     * @note[short] MacOS (ARM): 0x77cab4
     * @note[short] MacOS (Intel): 0x887ff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(cocos2d::TextureQuality quality, cocos2d::CCSize resolution, bool fullscreen, bool borderless, bool fix, bool changedResolution);

    /**
     * @note[short] MacOS (ARM): 0x77ccb4
     * @note[short] MacOS (Intel): 0x888200
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::TextureQuality quality, cocos2d::CCSize resolution, bool fullscreen, bool borderless, bool fix, bool changedResolution);

    /**
     * @note[short] MacOS (ARM): 0x77c7a0
     * @note[short] MacOS (Intel): 0x8882d0
     * @note[short] Windows: 0x4d5f40
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void performReload();
    cocos2d::TextureQuality m_quality;
    cocos2d::CCSize m_resolution;
    bool m_fullscreen;
    bool m_borderless;
    bool m_fix;
    bool m_changedResolution;
};
