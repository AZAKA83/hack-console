#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ControlMenuTouch.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/unordered_map.hpp>

class GJTransformControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJTransformControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJTransformControl, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x5833b4
     * @note[short] MacOS (Intel): 0x647df0
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     GJTransformControl();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1597ec
     * @note[short] Android: Rebinded
     */
     ~GJTransformControl();

    /**
     * @note[short] MacOS (Intel): 0x6d5740
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJTransformControl* create();

    /**
     * @note[short] MacOS (ARM): 0x57fb54
     * @note[short] MacOS (Intel): 0x643dd0
     * @note[short] Windows: 0x1a4fb0
     * @note[short] iOS: 0x159898
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x581274
     * @note[short] MacOS (Intel): 0x645780
     * @note[short] Windows: 0x1a6f20
     * @note[short] iOS: 0x15adf4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x582014
     * @note[short] MacOS (Intel): 0x6466f0
     * @note[short] Windows: 0x1a7410
     * @note[short] iOS: 0x15b514
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x582a20
     * @note[short] MacOS (Intel): 0x647240
     * @note[short] Windows: 0x1a7cb0
     * @note[short] iOS: 0x15bf44
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x582e54
     * @note[short] MacOS (Intel): 0x647720
     * @note[short] Windows: 0x1a7fd0
     * @note[short] iOS: 0x15c364
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    TodoReturn applyFreeRotation(float p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void applyRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x581228
     * @note[short] MacOS (Intel): 0x645730
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void calculateRotationOffset();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void finishTouch();

    /**
     * @note[short] Android
     */
    TodoReturn getOppositeHandleTag(int p0);

    /**
     * @note[short] MacOS (ARM): 0x580f04
     * @note[short] MacOS (Intel): 0x6453d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadFromState(GJTransformState& state);

    /**
     * @note[short] MacOS (ARM): 0x5810b0
     * @note[short] MacOS (Intel): 0x6455a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadValues(GameObject* object, cocos2d::CCArray* objects, std::unordered_map<int, GameObjectEditorState>& states);

    /**
     * @note[short] Android
     */
    TodoReturn moveAnchorTo(cocos2d::CCPoint p0);

    /**
     * @note[short] Windows: 0x1a5d00
     * @note[short] Android
     */
    void onToggleFreeRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1a5c10
     * @note[short] Android
     */
    void onToggleGridSnap(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleLockScale(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1a5b20
     * @note[short] Android
     */
    void onToggleOppositeAnchor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5803bc
     * @note[short] MacOS (Intel): 0x644660
     * @note[short] Windows: 0x1a5880
     * @note[short] Android
     */
    void refreshControl();

    /**
     * @note[short] MacOS (ARM): 0x580fb0
     * @note[short] MacOS (Intel): 0x645490
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void saveToState(GJTransformState& state);

    /**
     * @note[short] MacOS (ARM): 0x5802ec
     * @note[short] Windows: 0x1a5df0
     * @note[short] Android
     */
    void scaleButtons(float scale);

    /**
     * @note[short] Android
     */
    TodoReturn snapAngleTo45(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn snapToGrid(cocos2d::CCPoint p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn snapToNearestVertex(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x3d3fec
     * @note[short] MacOS (Intel): 0x467e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCSprite* spriteByTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x582fd8
     * @note[short] MacOS (Intel): 0x6478c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateAnchorSprite(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x580524
     * @note[short] Windows: 0x1a5ff0
     * @note[short] Android
     */
    void updateButtons(bool transform, bool skew);

    /**
     * @note[short] MacOS (ARM): 0x582eec
     * @note[short] MacOS (Intel): 0x6477c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateMinMaxPositions();
    cocos2d::CCNode* m_mainNodeParent;
    cocos2d::CCNode* m_mainNode;
    cocos2d::CCArray* m_objects;
    int m_touchID;
    short m_transformButtonType;
    GJTransformControlDelegate* m_delegate;
    cocos2d::CCPoint m_cursorDifference;
    cocos2d::CCPoint m_topRight;
    cocos2d::CCPoint m_bottomLeft;
    cocos2d::CCPoint m_topRightPosition;
    cocos2d::CCPoint m_bottomLeftPosition;
    cocos2d::CCPoint m_rotationOffset;
    cocos2d::CCPoint m_topRightOrigin;
    cocos2d::CCPoint m_bottomLeftOrigin;
    cocos2d::CCArray* m_warpSprites;
    cocos2d::CCPoint m_rotatePosition;
    CCMenuItemSpriteExtra* m_warpLockButton;
    CCMenuItemSpriteExtra* m_oppositeAnchorButton;
    CCMenuItemSpriteExtra* m_gridSnapButton;
    CCMenuItemSpriteExtra* m_freeRotationButton;
    ControlMenuTouch m_controlMenuTouch;
    float m_scaleX;
    float m_scaleY;
    bool m_warpLocked;
    bool m_oppositeAnchor;
    bool m_gridSnap;
    bool m_freeRotation;
    float m_rotationX;
    float m_rotationY;
    float m_rotation;
    float m_buttonScale;
    cocos2d::CCPoint m_unk26c;
    bool m_anchoring;
    int m_nearestVertex;
    cocos2d::CCPoint m_unk27c;
};
