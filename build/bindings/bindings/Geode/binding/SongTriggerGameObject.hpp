#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SFXTriggerGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class SongTriggerGameObject : public SFXTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "SongTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongTriggerGameObject, SFXTriggerGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SongTriggerGameObject();

    /**
     * @note[short] Windows: 0x6384c0
     * @note[short] iOS: 0x434518
     * @note[short] Android: Rebinded
     */
    virtual  ~SongTriggerGameObject();

    /**
     * @note[short] MacOS (Intel): 0x1b1530
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SongTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x16d7e0
     * @note[short] MacOS (Intel): 0x1b2040
     * @note[short] Windows: 0x659850
     * @note[short] iOS: 0x434840
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x16d090
     * @note[short] MacOS (Intel): 0x1b1710
     * @note[short] Windows: 0x659630
     * @note[short] iOS: 0x4345f0
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    bool m_unk7a9;
    bool m_prep;
    bool m_loadPrep;
    int m_songChannel;
};
