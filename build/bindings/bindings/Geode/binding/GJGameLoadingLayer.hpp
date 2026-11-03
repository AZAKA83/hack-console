#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>

class GJGameLoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGameLoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGameLoadingLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJGameLoadingLayer();

    /**
     * @note[short] Windows: 0x30a5c0
     * @note[short] iOS: 0x2a648c
     * @note[short] Android: Rebinded
     */
    virtual  ~GJGameLoadingLayer();

    /**
     * @note[short] MacOS (ARM): 0x117de4
     * @note[short] MacOS (Intel): 0x1449d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJGameLoadingLayer* create(GJGameLevel* level, bool editor);

    /**
     * @note[short] MacOS (ARM): 0x117cd8
     * @note[short] MacOS (Intel): 0x1448b0
     * @note[short] Windows: 0x353110
     * @note[short] Android
     */
    static GJGameLoadingLayer* transitionToLoadingLayer(GJGameLevel* level, bool editor);

    /**
     * @note[short] MacOS (ARM): 0x1181e8
     * @note[short] MacOS (Intel): 0x144ea0
     * @note[short] Windows: 0x5bcf0
     * @note[short] iOS: 0x2a6624
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x1181e4
     * @note[short] MacOS (Intel): 0x144e90
     * @note[short] Windows: 0x3533a0
     * @note[short] iOS: 0x2a6620
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] MacOS (ARM): 0xcd3fc
     * @note[short] MacOS (Intel): 0xebcf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void gameLayerDidUnload();

    /**
     * @note[short] MacOS (ARM): 0x118080
     * @note[short] MacOS (Intel): 0x144d30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool editor);

    /**
     * @note[short] MacOS (ARM): 0x11817c
     * @note[short] MacOS (Intel): 0x144e30
     * @note[short] Windows: 0x353300
     * @note[short] Android
     */
    void loadLevel();
    GJGameLevel* m_level;
    bool m_editor;
};
