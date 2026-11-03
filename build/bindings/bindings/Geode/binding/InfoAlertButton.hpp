#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCMenuItemSpriteExtra.hpp>

class InfoAlertButton : public CCMenuItemSpriteExtra {
public:
    static constexpr auto CLASS_NAME = "InfoAlertButton";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoAlertButton, CCMenuItemSpriteExtra)

    /**
     * @note[short] MacOS (ARM): 0x4f242c
     * @note[short] MacOS (Intel): 0x5a3300
     * @note[short] Windows: 0x3cd5b0
     * @note[short] iOS: 0x1f8ff4
     * @note[short] Android: Rebinded
     */
    virtual  ~InfoAlertButton();

    /**
     * @note[short] MacOS (ARM): 0x4f1fcc
     * @note[short] MacOS (Intel): 0x5a2f20
     * @note[short] Windows: 0x3cd630
     * @note[short] Android
     */
    static InfoAlertButton* create(std::string title, std::string desc, float spriteScale);

    /**
     * @note[short] MacOS (ARM): 0x4f225c
     * @note[short] MacOS (Intel): 0x5a31a0
     * @note[short] Windows: 0x3cd830
     * @note[short] iOS: 0x1f8f2c
     * @note[short] Android
     */
    virtual void activate();

    /**
     * @note[short] MacOS (ARM): 0x4f21b8
     * @note[short] MacOS (Intel): 0x5a3100
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(std::string title, std::string desc, float spriteScale);
    std::string m_title;
    std::string m_description;
    float m_textScale;
    bool m_scroll;
};
