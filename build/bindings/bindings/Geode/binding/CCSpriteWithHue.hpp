#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/array.hpp>

class CCSpriteWithHue : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpriteWithHue";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpriteWithHue, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpriteWithHue();

    /**
     * @note[short] Windows: 0x4c570
     * @note[short] Android: Rebinded
     */
    virtual  ~CCSpriteWithHue();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* create(std::string const& file);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* create(std::string const& file, cocos2d::CCRect const& rect);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x5dba18
     * @note[short] MacOS (Intel): 0x6c3060
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* createWithSpriteFrameName(std::string const& frameName);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* createWithTexture(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteWithHue* createWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated);

    /**
     * @note[short] MacOS (ARM): 0x5dc30c
     * @note[short] MacOS (Intel): 0x6c3a20
     * @note[short] Windows: 0x4ccf0
     * @note[short] iOS: 0x238a60
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x5dbcc0
     * @note[short] MacOS (Intel): 0x6c32e0
     * @note[short] Windows: 0x4c710
     * @note[short] iOS: 0x238690
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x5dbd3c
     * @note[short] MacOS (Intel): 0x6c3350
     * @note[short] Windows: 0x4c770
     * @note[short] iOS: 0x23870c
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect);

    /**
     * @note[short] MacOS (ARM): 0x5dba4c
     * @note[short] MacOS (Intel): 0x6c30a0
     * @note[short] Windows: 0x4c6b0
     * @note[short] iOS: 0x238494
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated);

    /**
     * @note[short] MacOS (ARM): 0x5dbd4c
     * @note[short] MacOS (Intel): 0x6c3370
     * @note[short] Windows: 0x4c780
     * @note[short] iOS: 0x23871c
     * @note[short] Android
     */
    virtual bool initWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x5db538
     * @note[short] MacOS (Intel): 0x6c2bf0
     * @note[short] Windows: 0x4c520
     * @note[short] iOS: 0x238364
     * @note[short] Android
     */
    virtual std::string getShaderName();

    /**
     * @note[short] MacOS (ARM): 0x5dbe90
     * @note[short] MacOS (Intel): 0x6c34b0
     * @note[short] Windows: 0x4ca30
     * @note[short] iOS: 0x238828
     * @note[short] Android
     */
    virtual const char* shaderBody();

    /**
     * @note[short] MacOS (ARM): 0x5dbea8
     * @note[short] MacOS (Intel): 0x6c34d0
     * @note[short] Windows: 0x4ca40
     * @note[short] iOS: 0x238834
     * @note[short] Android
     */
    virtual void updateColor();

    /**
     * @note[short] MacOS (ARM): 0x5dc26c
     * @note[short] MacOS (Intel): 0x6c3950
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getAlpha();

    /**
     * @note[short] MacOS (ARM): 0x5dc284
     * @note[short] MacOS (Intel): 0x6c3970
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getHue();

    /**
     * @note[short] MacOS (ARM): 0x5dbe0c
     * @note[short] MacOS (Intel): 0x6c3440
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void getUniformLocations();

    /**
     * @note[short] MacOS (ARM): 0x5dbaa4
     * @note[short] MacOS (Intel): 0x6c3100
     * @note[short] Windows: 0x4c7f0
     * @note[short] Android
     */
    void initShader();

    /**
     * @note[short] MacOS (ARM): 0x5dc2fc
     * @note[short] MacOS (Intel): 0x2ee930
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setCustomLuminance(float r, float g, float b);

    /**
     * @note[short] MacOS (ARM): 0x5dc2dc
     * @note[short] MacOS (Intel): 0x6c39d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setEvenLuminance(float luminance);

    /**
     * @note[short] MacOS (ARM): 0x5dbddc
     * @note[short] MacOS (Intel): 0x6c33f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setHue(float hue);

    /**
     * @note[short] MacOS (ARM): 0x5dc28c
     * @note[short] MacOS (Intel): 0x6c3980
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setHueDegrees(float degrees);

    /**
     * @note[short] MacOS (ARM): 0x5dbde4
     * @note[short] MacOS (Intel): 0x6c3410
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setLuminance(float luminance);

    /**
     * @note[short] MacOS (ARM): 0x5dba90
     * @note[short] MacOS (Intel): 0x6c30e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupDefaultSettings();

    /**
     * @note[short] MacOS (ARM): 0x5dbecc
     * @note[short] MacOS (Intel): 0x6c34f0
     * @note[short] Windows: 0x4ca60
     * @note[short] Android
     */
    void updateColorMatrix();

    /**
     * @note[short] MacOS (ARM): 0x5dbdb0
     * @note[short] MacOS (Intel): 0x6c33c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateHue(float unused);
    float m_hue;
    std::array<float, 3> m_luminance;
    std::array<std::array<float, 3>, 3> m_colorMatrix;
    int m_uHueLoc;
    int m_uAlphaLoc;
    int m_uLumLoc;
};
