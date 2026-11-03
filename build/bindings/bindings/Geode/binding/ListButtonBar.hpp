#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ListButtonBar : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ListButtonBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ListButtonBar, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x77c10
     * @note[short] iOS: 0x1f09b4
     * @note[short] Android: Rebinded
     */
    virtual  ~ListButtonBar();

    /**
     * @note[short] MacOS (ARM): 0x35c004
     * @note[short] MacOS (Intel): 0x3dd1a0
     * @note[short] Windows: 0x77cb0
     * @note[short] Android
     */
    static ListButtonBar* create(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset, float arrowOffset, int arrowType);

    /**
     * @note[short] MacOS (ARM): 0x35c6f8
     * @note[short] MacOS (Intel): 0x3dd8f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getPage();

    /**
     * @note[short] MacOS (ARM): 0x35c704
     * @note[short] MacOS (Intel): 0x3dd910
     * @note[short] Windows: 0x782e0
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x35c0e8
     * @note[short] MacOS (Intel): 0x3dd270
     * @note[short] Windows: 0x77dd0
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset, float arrowOffset, int arrowType);

    /**
     * @note[short] MacOS (ARM): 0x35c5f0
     * @note[short] MacOS (Intel): 0x3dd7c0
     * @note[short] Windows: 0x78390
     * @note[short] Android
     */
    void onLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x346aa0
     * @note[short] MacOS (Intel): 0x3dd860
     * @note[short] Windows: 0x78370
     * @note[short] Android
     */
    void onRight(cocos2d::CCObject* sender);
    BoomScrollLayer* m_scrollLayer;
    cocos2d::CCArray* m_pages;
    ListButtonBarDelegate* m_delegate;
    bool m_useMoveAnimation;
};
