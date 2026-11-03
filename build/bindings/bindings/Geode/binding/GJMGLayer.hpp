#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJMGLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJMGLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMGLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJMGLayer();

    /**
     * @note[short] Windows: 0x386c60
     * @note[short] Android: Rebinded
     */
    virtual  ~GJMGLayer();

    /**
     * @note[short] MacOS (Intel): 0x6bece0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJMGLayer* create(int index);

    /**
     * @note[short] MacOS (ARM): 0x5d797c
     * @note[short] MacOS (Intel): 0x6becc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static float defaultYOffsetForBG2(int index);

    /**
     * @note[short] MacOS (ARM): 0x5d8414
     * @note[short] MacOS (Intel): 0x6bf790
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x309d4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x5d83e4
     * @note[short] MacOS (Intel): 0x6bf760
     * @note[short] Windows: 0x387970
     * @note[short] iOS: 0x309c8
     * @note[short] Android
     */
    virtual void showGround();

    /**
     * @note[short] MacOS (ARM): 0x5d83f0
     * @note[short] MacOS (Intel): 0x6bf770
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void deactivateGround();

    /**
     * @note[short] MacOS (ARM): 0x5d7a78
     * @note[short] MacOS (Intel): 0x6bedf0
     * @note[short] Windows: 0x387b80
     * @note[short] Android
     */
    bool init(int index);

    /**
     * @note[short] MacOS (ARM): 0x5d7ef4
     * @note[short] MacOS (Intel): 0x6bf280
     * @note[short] Windows: 0x3880b0
     * @note[short] Android
     */
    void loadGroundSprites(int count, bool ground1);

    /**
     * @note[short] MacOS (ARM): 0x104d30
     * @note[short] MacOS (Intel): 0x6bf5f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float scaleGround(float scale);

    /**
     * @note[short] MacOS (ARM): 0x5d8140
     * @note[short] MacOS (Intel): 0x6bf4b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleVisible01(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x5d8180
     * @note[short] MacOS (Intel): 0x6bf4f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleVisible02(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x5d80b0
     * @note[short] MacOS (Intel): 0x6bf420
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGroundColor(cocos2d::ccColor3B color, bool ground1);

    /**
     * @note[short] MacOS (ARM): 0x5d81f8
     * @note[short] MacOS (Intel): 0x6bf570
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGroundOpacity(unsigned char opacity, bool ground1);

    /**
     * @note[short] MacOS (ARM): 0x5d81a8
     * @note[short] MacOS (Intel): 0x6bf520
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGroundPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x5d82fc
     * @note[short] MacOS (Intel): 0x6bf680
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGroundWidth(bool useThis);

    /**
     * @note[short] MacOS (ARM): 0x5d8418
     * @note[short] MacOS (Intel): 0x6bf7a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMG01Blend(bool blend);

    /**
     * @note[short] MacOS (ARM): 0x5d8454
     * @note[short] MacOS (Intel): 0x6bf7f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMG02Blend(bool blend);
    cocos2d::CCSprite* m_ground1Sprite;
    cocos2d::CCSprite* m_ground2Sprite;
    float m_textureWidth;
    void* m_unk1b0;
    bool m_showGround;
    float m_groundWidth;
    bool m_showGround1;
    bool m_showGround2;
    float m_unk1c4;
    bool m_cameraRotated;
    bool m_blendMG1;
    bool m_blendMG2;
    cocos2d::CCSpriteBatchNode* m_mg1BatchNode;
    cocos2d::CCSpriteBatchNode* m_mg2BatchNode;
    float m_groundScale;
    float m_ground2Offset;
};
