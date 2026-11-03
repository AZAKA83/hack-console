#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CCPartAnimSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCPartAnimSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCPartAnimSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCPartAnimSprite();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x87f1c
     * @note[short] Android: Rebinded
     */
     ~CCPartAnimSprite();

    /**
     * @note[short] MacOS (ARM): 0x2ebf94
     * @note[short] MacOS (Intel): 0x35cf40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCPartAnimSprite* createWithAnimDesc(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2ed604
     * @note[short] MacOS (Intel): 0x35e750
     * @note[short] Windows: 0x4a460
     * @note[short] iOS: 0x87bc8
     * @note[short] Android
     */
    virtual void setScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x2ed62c
     * @note[short] MacOS (Intel): 0x35e770
     * @note[short] Windows: 0x4a480
     * @note[short] iOS: 0x87bf0
     * @note[short] Android
     */
    virtual void setScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x2ed5dc
     * @note[short] MacOS (Intel): 0x35e730
     * @note[short] Windows: 0x4a440
     * @note[short] iOS: 0x87ba0
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x2ed8f0
     * @note[short] MacOS (Intel): 0x35e9e0
     * @note[short] Windows: 0x4a640
     * @note[short] iOS: 0x87ddc
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2ed654
     * @note[short] MacOS (Intel): 0x35e790
     * @note[short] Windows: 0x4a4a0
     * @note[short] iOS: 0x87c18
     * @note[short] Android
     */
    virtual void setBlendFunc(cocos2d::ccBlendFunc blendFunc);

    /**
     * @note[short] MacOS (ARM): 0x2ed1b4
     * @note[short] MacOS (Intel): 0x35e300
     * @note[short] Windows: 0x49e50
     * @note[short] iOS: 0x8786c
     * @note[short] Android
     */
    virtual void setDisplayFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x2ed30c
     * @note[short] MacOS (Intel): 0x35e470
     * @note[short] Windows: 0x4a0c0
     * @note[short] iOS: 0x87998
     * @note[short] Android
     */
    virtual bool isFrameDisplayed(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x2ed324
     * @note[short] MacOS (Intel): 0x35e490
     * @note[short] Windows: 0x4a0e0
     * @note[short] iOS: 0x879b0
     * @note[short] Android
     */
    virtual cocos2d::CCSpriteFrame* displayFrame();

    /**
     * @note[short] MacOS (ARM): 0x2ece20
     * @note[short] MacOS (Intel): 0x35dfa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void changeTextureOfID(char const* key, char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x2edaa4
     * @note[short] MacOS (Intel): 0x35eb70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int countParts();

    /**
     * @note[short] MacOS (ARM): 0x2edac0
     * @note[short] MacOS (Intel): 0x35eb90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void dirtify();

    /**
     * @note[short] MacOS (Intel): 0x35e220
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    CCSpritePart* getSpriteForKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2ec080
     * @note[short] MacOS (Intel): 0x35d020
     * @note[short] Windows: 0x49670
     * @note[short] Android
     */
    bool initWithAnimDesc(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2ed804
     * @note[short] MacOS (Intel): 0x35e910
     * @note[short] Windows: 0x4a570
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2ed534
     * @note[short] MacOS (Intel): 0x35e6a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setFlipX(bool flipX);

    /**
     * @note[short] MacOS (ARM): 0x2ed58c
     * @note[short] MacOS (Intel): 0x35e6f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setFlipY(bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x2ec9dc
     * @note[short] MacOS (Intel): 0x35db40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void transformSprite(SpriteDescription* description);

    /**
     * @note[short] MacOS (ARM): 0x2ecc78
     * @note[short] MacOS (Intel): 0x35ddf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void tweenSpriteTo(SpriteDescription* description, float duration);

    /**
     * @note[short] MacOS (ARM): 0x2ed32c
     * @note[short] MacOS (Intel): 0x35e4a0
     * @note[short] Windows: 0x4a0f0
     * @note[short] Android
     */
    void tweenToFrame(cocos2d::CCSpriteFrame* frame, float duration);
    cocos2d::CCDictionary* m_spritePartIDs;
    cocos2d::CCSpriteFrame* m_spriteFrame;
    bool m_hasChanged;
    cocos2d::CCSize m_unkSize;
    cocos2d::CCArray* m_spriteParts;
};
