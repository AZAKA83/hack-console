#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GameObject.hpp>
#include <Geode/mapping/vector.hpp>

class TextGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "TextGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TextGameObject, GameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TextGameObject();

    /**
     * @note[short] Windows: 0x2887c0
     * @note[short] iOS: 0x302914
     * @note[short] Android: Rebinded
     */
    virtual  ~TextGameObject();

    /**
     * @note[short] MacOS (ARM): 0x5a67a0
     * @note[short] MacOS (Intel): 0x6734f0
     * @note[short] Windows: 0x2a4440
     * @note[short] Android
     */
    static TextGameObject* create(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x5be850
     * @note[short] MacOS (Intel): 0x6a32f0
     * @note[short] Windows: 0x2a4a70
     * @note[short] iOS: 0x302520
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x5be9bc
     * @note[short] MacOS (Intel): 0x6a3420
     * @note[short] Windows: 0x2a4c10
     * @note[short] iOS: 0x302660
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x5be488
     * @note[short] MacOS (Intel): 0x6a2f10
     * @note[short] Windows: 0x2a4520
     * @note[short] iOS: 0x30218c
     * @note[short] Android
     */
    virtual void updateTextKerning(int kerning);

    /**
     * @note[short] MacOS (ARM): 0x5bf1a4
     * @note[short] MacOS (Intel): 0x6a3e10
     * @note[short] Windows: 0x2887b0
     * @note[short] iOS: 0x3029b0
     * @note[short] Android
     */
    virtual int getTextKerning();

    /**
     * @note[short] MacOS (ARM): 0x5be454
     * @note[short] MacOS (Intel): 0x6a2ee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x5be490
     * @note[short] MacOS (Intel): 0x6a2f20
     * @note[short] Windows: 0x2a4530
     * @note[short] Android
     */
    void updateTextObject(std::string text, bool defaultFont);
    std::string m_text;
    int m_kerning;
};
