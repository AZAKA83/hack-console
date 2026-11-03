#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class TextAlertPopup : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "TextAlertPopup";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextAlertPopup, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x399b80
     * @note[short] Android: Rebinded
     */
    virtual  ~TextAlertPopup();

    /**
     * @note[short] MacOS (ARM): 0x23f634
     * @note[short] MacOS (Intel): 0x29bfa0
     * @note[short] Windows: 0x3a8760
     * @note[short] Android
     */
    static TextAlertPopup* create(std::string text, float delay, float scale, int opacity, std::string font);

    /**
     * @note[short] Android
     */
    TodoReturn inheritOpacity(TextAlertPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x23f7ec
     * @note[short] MacOS (Intel): 0x29c160
     * @note[short] Windows: 0x3a8890
     * @note[short] Android
     */
    bool init(std::string text, float delay, float scale, int opacity, std::string font);

    /**
     * @note[short] Android
     */
    TodoReturn replaceIn(cocos2d::CCNode* p0, int p1, TextAlertPopup* p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x23fce4
     * @note[short] MacOS (Intel): 0x29c670
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setAlertPosition(cocos2d::CCPoint windowOffset, cocos2d::CCPoint pointOffset);

    /**
     * @note[short] MacOS (ARM): 0x23fca8
     * @note[short] MacOS (Intel): 0x29c630
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setLabelColor(cocos2d::ccColor3B color);
    float m_width;
    float m_height;
    cocos2d::CCLabelBMFont* m_label;
    cocos2d::extension::CCScale9Sprite* m_background;
};
