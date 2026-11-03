#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class LabelGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "LabelGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LabelGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LabelGameObject();

    /**
     * @note[short] Windows: 0x638050
     * @note[short] iOS: 0x42eee0
     * @note[short] Android: Rebinded
     */
    virtual  ~LabelGameObject();

    /**
     * @note[short] MacOS (ARM): 0x15fcec
     * @note[short] MacOS (Intel): 0x1a16b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LabelGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x15fdbc
     * @note[short] MacOS (Intel): 0x1a17a0
     * @note[short] Windows: 0x6548d0
     * @note[short] iOS: 0x42efbc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1601c0
     * @note[short] MacOS (Intel): 0x1a1ba0
     * @note[short] Windows: 0x654c80
     * @note[short] iOS: 0x42f2dc
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x15fdec
     * @note[short] MacOS (Intel): 0x1a17d0
     * @note[short] Windows: 0x654910
     * @note[short] iOS: 0x42efec
     * @note[short] Android
     */
    virtual void setupCustomSprites(std::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x160a3c
     * @note[short] MacOS (Intel): 0x1a2510
     * @note[short] Windows: 0x655140
     * @note[short] iOS: 0x42f940
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool reorder);

    /**
     * @note[short] MacOS (ARM): 0x1616d4
     * @note[short] MacOS (Intel): 0x1a34d0
     * @note[short] Windows: 0x6554e0
     * @note[short] iOS: 0x42fcfc
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x1607f8
     * @note[short] MacOS (Intel): 0x1a22a0
     * @note[short] Windows: 0x654f20
     * @note[short] iOS: 0x42f778
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x160a94
     * @note[short] MacOS (Intel): 0x1a2570
     * @note[short] Windows: 0x6551b0
     * @note[short] iOS: 0x42f998
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1609f4
     * @note[short] MacOS (Intel): 0x1a24c0
     * @note[short] Windows: 0x6550f0
     * @note[short] iOS: 0x42f8f8
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x160244
     * @note[short] MacOS (Intel): 0x1a1c20
     * @note[short] Windows: 0x654cc0
     * @note[short] iOS: 0x42f360
     * @note[short] Android
     */
    virtual void updateTextKerning(int kerning);

    /**
     * @note[short] MacOS (ARM): 0x18ab58
     * @note[short] MacOS (Intel): 0x1d61e0
     * @note[short] Windows: 0x638040
     * @note[short] iOS: 0x440b48
     * @note[short] Android
     */
    virtual int getTextKerning();

    /**
     * @note[short] MacOS (ARM): 0x15fee4
     * @note[short] MacOS (Intel): 0x1a1890
     * @note[short] Windows: 0x6549b0
     * @note[short] Android
     */
    void createLabel(std::string text);

    /**
     * @note[short] MacOS (ARM): 0x16018c
     * @note[short] MacOS (Intel): 0x1a1b70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void queueUpdateLabel(std::string text);

    /**
     * @note[short] MacOS (ARM): 0x62ebc
     * @note[short] MacOS (Intel): 0x1a19b0
     * @note[short] Windows: 0x654ba0
     * @note[short] Android
     */
    void removeLabel();

    /**
     * @note[short] MacOS (ARM): 0x1616cc
     * @note[short] MacOS (Intel): 0x1a34c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlockLabelColor();

    /**
     * @note[short] MacOS (ARM): 0x16065c
     * @note[short] MacOS (Intel): 0x1a2140
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLabel(float value);

    /**
     * @note[short] MacOS (ARM): 0x1605fc
     * @note[short] MacOS (Intel): 0x1a20e0
     * @note[short] Windows: 0x654e90
     * @note[short] Android
     */
    void updateLabel(std::string text);

    /**
     * @note[short] MacOS (ARM): 0x16011c
     * @note[short] MacOS (Intel): 0x1a1af0
     * @note[short] Android
     */
    void updateLabelAlign(int alignment);

    /**
     * @note[short] MacOS (ARM): 0x160704
     * @note[short] MacOS (Intel): 0x1a21d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateLabelIfDirty();

    /**
     * @note[short] MacOS (ARM): 0x160258
     * @note[short] MacOS (Intel): 0x6d040
     * @note[short] Windows: 0x654ce0
     * @note[short] Android
     */
    void updatePreviewLabel();
    cocos2d::CCLabelBMFont* m_label;
    bool m_labelDirty;
    std::string m_labelString;
    bool m_labelColorLocked;
    int m_alignment;
    bool m_showSecondsOnly;
    int m_shownSpecial;
    bool m_isTimeCounter;
    int m_kerning;
    bool m_updateLabel;
};
