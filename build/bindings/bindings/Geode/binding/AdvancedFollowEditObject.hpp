#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/AdvancedFollowTriggerObject.hpp>
#include <Geode/mapping/vector.hpp>

class AdvancedFollowEditObject : public AdvancedFollowTriggerObject {
public:
    static constexpr auto CLASS_NAME = "AdvancedFollowEditObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AdvancedFollowEditObject, AdvancedFollowTriggerObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AdvancedFollowEditObject();

    /**
     * @note[short] Windows: 0x637db0
     * @note[short] Android: Rebinded
     */
    virtual  ~AdvancedFollowEditObject();

    /**
     * @note[short] MacOS (Intel): 0x18da00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AdvancedFollowEditObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x14ffec
     * @note[short] MacOS (Intel): 0x18ebc0
     * @note[short] Windows: 0x6408f0
     * @note[short] iOS: 0x425d78
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x14f37c
     * @note[short] MacOS (Intel): 0x18dbb0
     * @note[short] Windows: 0x640580
     * @note[short] iOS: 0x4259b0
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    float m_modX;
    float m_modXVariance;
    float m_modY;
    float m_modYVariance;
    bool m_redirectDirection;
};
