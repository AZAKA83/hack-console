#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>

class ColorChannelSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ColorChannelSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ColorChannelSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x3624a0
     * @note[short] Android: Rebinded
     */
    virtual  ~ColorChannelSprite();

    /**
     * @note[short] MacOS (ARM): 0x263150
     * @note[short] MacOS (Intel): 0x2c3630
     * @note[short] Windows: 0x362d80
     * @note[short] iOS: 0xd13c
     * @note[short] Android
     */
    static ColorChannelSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x2631f8
     * @note[short] MacOS (Intel): 0x2c36d0
     * @note[short] Windows: 0x362e40
     * @note[short] iOS: 0xd1d8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2634f4
     * @note[short] MacOS (Intel): 0x2c3a00
     * @note[short] Windows: 0x363180
     * @note[short] iOS: 0xd4c8
     * @note[short] Android
     */
    void updateBlending(bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x263204
     * @note[short] MacOS (Intel): 0x2c36f0
     * @note[short] Windows: 0x362e60
     * @note[short] iOS: 0xd1e4
     * @note[short] Android
     */
    void updateCopyLabel(int channelID, bool copyColorLoop);

    /**
     * @note[short] MacOS (ARM): 0x2633ac
     * @note[short] MacOS (Intel): 0x2c38b0
     * @note[short] Windows: 0x363020
     * @note[short] iOS: 0xd384
     * @note[short] Android
     */
    void updateOpacity(float alpha);

    /**
     * @note[short] MacOS (ARM): 0x263600
     * @note[short] MacOS (Intel): 0x2c3b10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd5d0
     * @note[short] Android
     */
    void updateValues(ColorAction* action);
    cocos2d::CCLabelBMFont* m_copyLabel;
    cocos2d::CCLabelBMFont* m_opacityLabel;
    cocos2d::CCLabelBMFont* m_blendingLabel;
};
