#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GJUINode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUINode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUINode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x1107a0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJUINode();

    /**
     * @note[short] MacOS (ARM): 0x425c30
     * @note[short] MacOS (Intel): 0x4c26d0
     * @note[short] Windows: 0x673b50
     * @note[short] Android
     */
    static GJUINode* create(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0x429c90
     * @note[short] MacOS (Intel): 0x4c6d80
     * @note[short] Windows: 0x6745b0
     * @note[short] iOS: 0x5392c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x429b44
     * @note[short] MacOS (Intel): 0x4c6c30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int activeRangeTouchTest(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x428b80
     * @note[short] MacOS (Intel): 0x4c5ad0
     * @note[short] Windows: 0x674280
     * @note[short] Android
     */
    int activeTouchTest(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (Intel): 0x4c6710
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getButtonScale();

    /**
     * @note[short] MacOS (Intel): 0x3e48e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    uint8_t getOpacity();

    /**
     * @note[short] MacOS (ARM): 0x428bf0
     * @note[short] MacOS (Intel): 0x4c5b40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void highlightButton(int button);

    /**
     * @note[short] MacOS (ARM): 0x428e7c
     * @note[short] MacOS (Intel): 0x4c5e50
     * @note[short] Windows: 0x673c30
     * @note[short] Android
     */
    bool init(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0x4296d4
     * @note[short] MacOS (Intel): 0x4c6750
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadFromConfig(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0x426ac4
     * @note[short] MacOS (Intel): 0x4c35f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetState();

    /**
     * @note[short] MacOS (ARM): 0x42961c
     * @note[short] MacOS (Intel): 0x4c6660
     * @note[short] Windows: 0x673ee0
     * @note[short] Android
     */
    void saveToConfig(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0x4295cc
     * @note[short] MacOS (Intel): 0x4c6620
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x428b08
     * @note[short] MacOS (Intel): 0x4c5a70
     * @note[short] Windows: 0x674520
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleHighlight(int button, bool highlight);

    /**
     * @note[short] MacOS (ARM): 0x429398
     * @note[short] MacOS (Intel): 0x420330
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleModeB(bool modeB);

    /**
     * @note[short] MacOS (ARM): 0x428ca8
     * @note[short] MacOS (Intel): 0x4c5be0
     * @note[short] Windows: 0x674460
     * @note[short] Android
     */
    void touchEnded();

    /**
     * @note[short] MacOS (ARM): 0x4289b0
     * @note[short] MacOS (Intel): 0x4c5920
     * @note[short] Windows: 0x674170
     * @note[short] Android
     */
    int touchTest(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x42994c
     * @note[short] MacOS (Intel): 0x4c6a00
     * @note[short] Windows: 0x673f90
     * @note[short] Android
     */
    void updateButtonFrames();

    /**
     * @note[short] MacOS (ARM): 0x4291d8
     * @note[short] MacOS (Intel): 0x4c6200
     * @note[short] Windows: 0x674070
     * @note[short] Android
     */
    void updateButtonPositions();

    /**
     * @note[short] MacOS (ARM): 0x42949c
     * @note[short] MacOS (Intel): 0x4c64f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateButtonScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x42938c
     * @note[short] MacOS (Intel): 0x4c63d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateDeadzone(int deadzone);

    /**
     * @note[short] MacOS (ARM): 0x4292ac
     * @note[short] MacOS (Intel): 0x4c62e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateDragRadius(float radius);

    /**
     * @note[short] MacOS (ARM): 0x429a68
     * @note[short] MacOS (Intel): 0x4c6b30
     * @note[short] Android
     */
    void updateHeight(float height);

    /**
     * @note[short] MacOS (ARM): 0x429abc
     * @note[short] MacOS (Intel): 0x4c6ba0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateRangePos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x429188
     * @note[short] MacOS (Intel): 0x4c61a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateSize(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x429a14
     * @note[short] MacOS (Intel): 0x4c6ac0
     * @note[short] Android
     */
    void updateWidth(float width);
    cocos2d::CCSprite* m_firstSprite;
    cocos2d::CCSprite* m_secondSprite;
    cocos2d::CCRect m_rect;
    int m_touchID;
    cocos2d::CCPoint m_touchDelta;
    cocos2d::CCPoint m_touchPosition;
    float m_radius;
    float m_deadzone;
    bool m_drawLines;
    bool m_modeB;
    bool m_snap;
    bool m_swiping;
    bool m_moving;
    bool m_player2;
    bool m_oneButton;
    bool m_split;
    PlayerButton m_currentButton;
};
