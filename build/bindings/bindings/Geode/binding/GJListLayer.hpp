#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJListLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJListLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x5bf9f8
     * @note[short] MacOS (Intel): 0x6a45f0
     * @note[short] Windows: 0x38dad0
     * @note[short] iOS: 0x88778
     * @note[short] Android: Rebinded
     */
    virtual  ~GJListLayer();

    /**
     * @note[short] MacOS (ARM): 0x5bf210
     * @note[short] MacOS (Intel): 0x6a3e80
     * @note[short] Windows: 0x38db90
     * @note[short] Android
     */
    static GJListLayer* create(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, int type);

    /**
     * @note[short] MacOS (ARM): 0x5bf304
     * @note[short] MacOS (Intel): 0x6a3f90
     * @note[short] Windows: 0x38dcc0
     * @note[short] Android
     */
    bool init(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, int type);
    BoomListView* m_listView;
};
