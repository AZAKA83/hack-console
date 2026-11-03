#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCSpriteWithHue.hpp>
#include <Geode/mapping/CCPoint.hpp>

class CCSpriteGrayscale : public CCSpriteWithHue {
public:
    static constexpr auto CLASS_NAME = "CCSpriteGrayscale";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCSpriteGrayscale, CCSpriteWithHue)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpriteGrayscale();

    /**
     * @note[short] Windows: 0x4c570
     * @note[short] Android: Rebinded
     */
    virtual  ~CCSpriteGrayscale();

    /**
     * @note[short] MacOS (ARM): 0x5dc5f0
     * @note[short] MacOS (Intel): 0x6c3e20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteGrayscale* create(std::string const& file);

    /**
     * @note[short] MacOS (ARM): 0x5dc6bc
     * @note[short] MacOS (Intel): 0x6c3ee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteGrayscale* create(std::string const& file, cocos2d::CCRect const& rect);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x5dcaa4
     * @note[short] MacOS (Intel): 0x6c4260
     * @note[short] Windows: 0x4d150
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithSpriteFrameName(std::string const& frameName);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteGrayscale* createWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated);

    /**
     * @note[short] MacOS (ARM): 0x5dc5cc
     * @note[short] MacOS (Intel): 0x6c3e00
     * @note[short] Windows: 0x4d0f0
     * @note[short] iOS: 0x238cb8
     * @note[short] Android
     */
    virtual std::string getShaderName();

    /**
     * @note[short] MacOS (ARM): 0x5dc48c
     * @note[short] MacOS (Intel): 0x6c3bd0
     * @note[short] Windows: 0x4cf10
     * @note[short] iOS: 0x238bdc
     * @note[short] Android
     */
    virtual const char* shaderBody();
};
