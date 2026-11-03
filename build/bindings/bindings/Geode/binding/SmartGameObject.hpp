#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GameObject.hpp>
#include <Geode/mapping/vector.hpp>

class SmartGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "SmartGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SmartGameObject, GameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SmartGameObject();

    /**
     * @note[short] Windows: 0x6375c0
     * @note[short] iOS: 0x4409c0
     * @note[short] Android: Rebinded
     */
    virtual  ~SmartGameObject();

    /**
     * @note[short] MacOS (ARM): 0x151e94
     * @note[short] MacOS (Intel): 0x1911c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SmartGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1526b8
     * @note[short] MacOS (Intel): 0x191ae0
     * @note[short] Windows: 0x641800
     * @note[short] iOS: 0x426d48
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1521c8
     * @note[short] MacOS (Intel): 0x191510
     * @note[short] Windows: 0x6416b0
     * @note[short] iOS: 0x426bb0
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x151f5c
     * @note[short] MacOS (Intel): 0x191290
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x151fac
     * @note[short] MacOS (Intel): 0x1912e0
     * @note[short] Windows: 0x6414b0
     * @note[short] Android
     */
    void updateSmartFrame();
    bool m_referenceOnly;
    std::string m_baseFrame;
    std::string m_smartFrame;
};
