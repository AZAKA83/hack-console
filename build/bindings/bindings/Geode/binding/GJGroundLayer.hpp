#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJGroundLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJGroundLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGroundLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x5d6708
     * @note[short] MacOS (Intel): 0x6bd990
     * @note[short] Windows: 0x386ca0
     * @note[short] iOS: 0x2f230
     * @note[short] Android: Rebinded
     */
    virtual  ~GJGroundLayer();

    /**
     * @note[short] MacOS (ARM): 0x5d6734
     * @note[short] MacOS (Intel): 0x6bda10
     * @note[short] Windows: 0x386d00
     * @note[short] Android
     */
    static GJGroundLayer* create(int groundID, int lineType);

    /**
     * @note[short] MacOS (ARM): 0x5d7834
     * @note[short] MacOS (Intel): 0x6beb40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30094
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x5d7628
     * @note[short] MacOS (Intel): 0x6be960
     * @note[short] Windows: 0x387970
     * @note[short] iOS: 0x2ff2c
     * @note[short] Android
     */
    virtual void showGround();

    /**
     * @note[short] MacOS (ARM): 0x5d7634
     * @note[short] MacOS (Intel): 0x6be970
     * @note[short] Windows: 0x387980
     * @note[short] iOS: 0x2ff38
     * @note[short] Android
     */
    virtual void fadeInGround(float duration);

    /**
     * @note[short] MacOS (ARM): 0x5d7808
     * @note[short] MacOS (Intel): 0x6beb10
     * @note[short] Windows: 0x387b70
     * @note[short] iOS: 0x3008c
     * @note[short] Android
     */
    virtual void fadeOutGround(float duration);

    /**
     * @note[short] MacOS (ARM): 0x5d6d24
     * @note[short] MacOS (Intel): 0x6be000
     * @note[short] Windows: 0x3875e0
     * @note[short] Android
     */
    void createLine(int lineType);

    /**
     * @note[short] MacOS (ARM): 0x5d7810
     * @note[short] MacOS (Intel): 0x6beb20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void deactivateGround();

    /**
     * @note[short] MacOS (ARM): 0x5d76b4
     * @note[short] MacOS (Intel): 0x6be9e0
     * @note[short] Windows: 0x387970
     * @note[short] Android
     */
    void fadeInFinished();

    /**
     * @note[short] MacOS (ARM): 0x5d7880
     * @note[short] MacOS (Intel): 0x6beb90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getGroundY();

    /**
     * @note[short] MacOS (ARM): 0x5d76c0
     * @note[short] MacOS (Intel): 0x6be9f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideShadows();

    /**
     * @note[short] MacOS (ARM): 0x5d6818
     * @note[short] MacOS (Intel): 0x6bdb20
     * @note[short] Windows: 0x386d80
     * @note[short] Android
     */
    bool init(int groundID, int lineType);

    /**
     * @note[short] MacOS (ARM): 0x5d6ec4
     * @note[short] MacOS (Intel): 0x6be1c0
     * @note[short] Windows: 0x387320
     * @note[short] Android
     */
    void loadGroundSprites(int count, bool ground1);

    /**
     * @note[short] MacOS (ARM): 0x5d7838
     * @note[short] MacOS (Intel): 0x6beb50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void positionGround(float y);

    /**
     * @note[short] MacOS (ARM): 0x5d72fc
     * @note[short] MacOS (Intel): 0x6be5f0
     * @note[short] Windows: 0x3877c0
     * @note[short] Android
     */
    float scaleGround(float scale);

    /**
     * @note[short] MacOS (ARM): 0x5d71c0
     * @note[short] MacOS (Intel): 0x6be4a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleVisible01(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x5d7200
     * @note[short] MacOS (Intel): 0x6be4e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleVisible02(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x5d7140
     * @note[short] MacOS (Intel): 0x6be420
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGround01Color(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x5d7278
     * @note[short] MacOS (Intel): 0x6be560
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGround02Color(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x5d7228
     * @note[short] MacOS (Intel): 0x6be510
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGroundPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x5d73f0
     * @note[short] MacOS (Intel): 0x6be700
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGroundWidth(bool useThis);

    /**
     * @note[short] MacOS (ARM): 0x5d75ec
     * @note[short] MacOS (Intel): 0x6be910
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateLineBlend(bool blend);

    /**
     * @note[short] MacOS (ARM): 0x5d7558
     * @note[short] MacOS (Intel): 0x6be880
     * @note[short] Windows: 0x387a00
     * @note[short] Android
     */
    void updateShadows();

    /**
     * @note[short] MacOS (ARM): 0x5d7740
     * @note[short] MacOS (Intel): 0x6bea50
     * @note[short] Windows: 0x387aa0
     * @note[short] Android
     */
    void updateShadowXPos(float leftX, float rightX);
    cocos2d::CCSprite* m_ground1Sprite;
    cocos2d::CCSprite* m_ground2Sprite;
    float m_textureWidth;
    cocos2d::CCSprite* m_lineSprite;
    bool m_showGround;
    bool m_blendLine;
    float m_ground1Offset;
    int m_lineType;
    float m_groundWidth;
    bool m_showGround1;
    bool m_showGround2;
    float m_unk1cc;
    bool m_cameraRotated;
};
