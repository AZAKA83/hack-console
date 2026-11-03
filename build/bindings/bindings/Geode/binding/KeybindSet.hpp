#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/KeybindSource.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/vector.hpp>

class KeybindSet : public KeybindSource {
public:
    static constexpr auto CLASS_NAME = "KeybindSet";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeybindSet, KeybindSource)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x44a260
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     KeybindSet();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    virtual  ~KeybindSet();

    /**
     * @note[short] MacOS (ARM): 0x807ea8
     * @note[short] MacOS (Intel): 0x9250b0
     * @note[short] Windows: 0x4493e0
     * @note[short] iOS: 0x4f1cb4
     * @note[short] Android
     */
    virtual std::vector<int> chordsForAction(int action);

    /**
     * @note[short] MacOS (ARM): 0x807f88
     * @note[short] MacOS (Intel): 0x925190
     * @note[short] Windows: 0x4494d0
     * @note[short] iOS: 0x4f1d3c
     * @note[short] Android
     */
    virtual std::vector<int> actionsForChord(int chord);

    /**
     * @note[short] MacOS (ARM): 0x80805c
     * @note[short] MacOS (Intel): 0x9253a0
     * @note[short] Windows: 0x4495e0
     * @note[short] iOS: 0x4f1e04
     * @note[short] Android
     */
    virtual void bindChord(int chord, int action);

    /**
     * @note[short] MacOS (ARM): 0x8081b0
     * @note[short] MacOS (Intel): 0x9254e0
     * @note[short] Windows: 0x449620
     * @note[short] iOS: 0x4f1e68
     * @note[short] Android
     */
    virtual void unbindChord(int chord, int action);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool isLevelSet() const ;

    /**
     * @note[short] Android
     */
    void clear();
    std::map<int, std::set<int>> m_actionToChords;
    bool m_dirty;
};
