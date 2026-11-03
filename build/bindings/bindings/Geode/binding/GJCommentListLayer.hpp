#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJCommentListLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJCommentListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJCommentListLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x22e1d8
     * @note[short] MacOS (Intel): 0x289550
     * @note[short] Windows: 0x398f90
     * @note[short] iOS: 0x372ca8
     * @note[short] Android: Rebinded
     */
    virtual  ~GJCommentListLayer();

    /**
     * @note[short] MacOS (ARM): 0x22dc44
     * @note[short] MacOS (Intel): 0x288fc0
     * @note[short] Windows: 0x39c470
     * @note[short] Android
     */
    static GJCommentListLayer* create(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder);

    /**
     * @note[short] MacOS (ARM): 0x22dd3c
     * @note[short] MacOS (Intel): 0x2890d0
     * @note[short] Windows: 0x39c590
     * @note[short] Android
     */
    bool init(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder);
    BoomListView* m_list;
};
