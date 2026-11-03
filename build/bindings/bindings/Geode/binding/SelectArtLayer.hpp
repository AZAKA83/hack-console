#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SelectArtLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectArtLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectArtLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x457750
     * @note[short] iOS: 0x20da80
     * @note[short] Android: Rebinded
     */
    virtual  ~SelectArtLayer();

    /**
     * @note[short] Windows: 0x45b3e0
     * @note[short] Android
     */
    static SelectArtLayer* create(SelectArtType type, int index);

    /**
     * @note[short] MacOS (ARM): 0x202968
     * @note[short] MacOS (Intel): 0x25a5f0
     * @note[short] Windows: 0x45c290
     * @note[short] iOS: 0x20e588
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x201de0
     * @note[short] MacOS (Intel): 0x2599e0
     * @note[short] Windows: 0x45b500
     * @note[short] Android
     */
    bool init(SelectArtType type, int index);

    /**
     * @note[short] MacOS (ARM): 0x202860
     * @note[short] MacOS (Intel): 0x25a4e0
     * @note[short] Windows: 0x45c240
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2028c0
     * @note[short] MacOS (Intel): 0x25a530
     * @note[short] Windows: 0x45c180
     * @note[short] Android
     */
    void onSelectCustom(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x202778
     * @note[short] MacOS (Intel): 0x25a410
     * @note[short] Windows: 0x45c0b0
     * @note[short] Android
     */
    void selectArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2018b4
     * @note[short] MacOS (Intel): 0x2592e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateSelectedCustom(int idx);
    cocos2d::CCArray* m_artSprites;
    cocos2d::CCArray* m_lineSprites;
    int m_art;
    int m_line;
    SelectArtType m_type;
    SelectArtDelegate* m_delegate;
};
