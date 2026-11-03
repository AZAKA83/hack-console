#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class CCURLObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "CCURLObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCURLObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x276270
     * @note[short] Android: Rebinded
     */
    virtual  ~CCURLObject();

    /**
     * @note[short] MacOS (ARM): 0x2ee998
     * @note[short] MacOS (Intel): 0x35fc70
     * @note[short] Windows: 0x2760e0
     * @note[short] Android
     */
    static CCURLObject* create(std::string name, std::string url);

    /**
     * @note[short] MacOS (ARM): 0x2eeb14
     * @note[short] MacOS (Intel): 0x35fde0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(std::string name, std::string url);
    std::string m_name;
    std::string m_url;
};
