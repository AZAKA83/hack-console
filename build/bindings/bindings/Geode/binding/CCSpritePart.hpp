#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCSpritePlus.hpp>

class CCSpritePart : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "CCSpritePart";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCSpritePart, CCSpritePlus)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x49580
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpritePart();

    /**
     * @note[short] Windows: 0x495f0
     * @note[short] iOS: 0x87f40
     * @note[short] Android: Rebinded
     */
    virtual  ~CCSpritePart();

    /**
     * @note[short] MacOS (ARM): 0x2ec928
     * @note[short] MacOS (Intel): 0x35da90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCSpritePart* create(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x2ec7c8
     * @note[short] MacOS (Intel): 0x35d910
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCSpritePart* createWithSpriteFrameName(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x2edcc4
     * @note[short] MacOS (Intel): 0x35edd0
     * @note[short] Windows: 0x4a7c0
     * @note[short] iOS: 0x87f34
     * @note[short] Android
     */
    virtual void setVisible(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x2ecb60
     * @note[short] MacOS (Intel): 0x35dcc0
     * @note[short] Windows: 0x4a710
     * @note[short] Android
     */
    void frameChanged(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x2edcbc
     * @note[short] MacOS (Intel): 0x35edc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool getBeingUsed();

    /**
     * @note[short] MacOS (ARM): 0x2ed2f0
     * @note[short] MacOS (Intel): 0x35e450
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideInactive();

    /**
     * @note[short] MacOS (ARM): 0x2ed2e8
     * @note[short] MacOS (Intel): 0x35e440
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void markAsNotBeingUsed();

    /**
     * @note[short] MacOS (ARM): 0x2ecfd8
     * @note[short] MacOS (Intel): 0x35e150
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetTextureRect();

    /**
     * @note[short] MacOS (ARM): 0x2ecc70
     * @note[short] MacOS (Intel): 0x35dde0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setBeingUsed(bool beingUsed);

    /**
     * @note[short] MacOS (ARM): 0x2ecfec
     * @note[short] MacOS (Intel): 0x35e170
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateDisplayFrame(std::string frame);
    bool m_isBeingUsed;
    std::string m_spriteFrameName;
    SpritePartDelegate* m_delegate;
};
