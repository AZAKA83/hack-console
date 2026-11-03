#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class OptionsObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "OptionsObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(OptionsObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x399c70
     * @note[short] iOS: 0x37ee6c
     * @note[short] Android: Rebinded
     */
    virtual  ~OptionsObject();

    /**
     * @note[short] MacOS (ARM): 0x240e00
     * @note[short] MacOS (Intel): 0x29d960
     * @note[short] Windows: 0x3a99e0
     * @note[short] Android
     */
    static OptionsObject* create(int id, bool enabled, std::string name, OptionsObjectDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x240ef8
     * @note[short] MacOS (Intel): 0x29da50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int id, bool enabled, std::string name, OptionsObjectDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x240f34
     * @note[short] MacOS (Intel): 0x29da80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleState();
    int m_optionID;
    bool m_enabled;
    std::string m_name;
    OptionsObjectDelegate* m_delegate;
    int m_type;
    int m_count;
    StartPosObject* m_startPosObject;
};
