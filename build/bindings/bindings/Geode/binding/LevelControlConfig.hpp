#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/KeybindSet.hpp>
#include <Geode/binding/LevelTouchSlot.hpp>
#include <Geode/binding/UIButtonConfig.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class LevelControlConfig : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "LevelControlConfig";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelControlConfig, cocos2d::CCObject)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelControlConfig();

    /**
     * @note[short] Windows: 0x44a1d0
     * @note[short] Android
     */
    static LevelControlConfig* create();

    /**
     * @note[short] Windows: 0x44b3e0
     * @note[short] Android
     */
    static void bindGlobalBinds(KeybindSource* target, bool controller);

    /**
     * @note[short] Windows: 0x44b2b0
     * @note[short] Android
     */
    static void bindDefaultController(KeybindSource* target);

    /**
     * @note[short] Windows: 0x44b210
     * @note[short] Android
     */
    static void bindDefaultKeyboard(KeybindSource* target);

    /**
     * @note[short] Windows: 0x44b0f0
     * @note[short] Android
     */
    static LevelControlConfig* createFromB64(std::string const& data);

    /**
     * @note[short] Windows: 0x44b6d0
     * @note[short] Android
     */
    static LevelControlConfig* createFromGlobal(bool dualMode);

    /**
     * @note[short] Windows: 0x44aa20
     * @note[short] Android
     */
    bool decode(std::string const& data);

    /**
     * @note[short] Windows: 0x44a430
     * @note[short] Android
     */
    std::string encode() const ;

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string encodeB64() const ;

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void keepClasses(int classes);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int presentClasses() const ;

    /**
     * @note[short] Windows: 0x44bad0
     * @note[short] Android
     */
    UIButtonConfig resolveSlot(LevelTouchSlot const& slot, cocos2d::CCSize const& winSize) const ;

    /**
     * @note[short] Windows: 0x44b640
     * @note[short] Android
     */
    void seedBase();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void seedDefaults();

    /**
     * @note[short] Android
     */
    LevelTouchSlot slotFromConfig(UIButtonConfig const& config, cocos2d::CCSize const& winSize, int anchorX, int anchorY, bool scaleX, bool scaleY) const ;
    int m_version;
    cocos2d::CCSize m_canvasSize;
    int m_jumpL;
    KeybindSet m_keyboardBinds;
    KeybindSet m_controllerBinds;
    std::vector<LevelTouchSlot> m_touchSlots;
};
