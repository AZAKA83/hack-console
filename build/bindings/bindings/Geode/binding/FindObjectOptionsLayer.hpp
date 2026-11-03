#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJOptionsLayer.hpp>

class FindObjectOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "FindObjectOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindObjectOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] Windows: 0x39ab40
     * @note[short] iOS: 0x1f8a34
     * @note[short] Android: Rebinded
     */
    virtual  ~FindObjectOptionsLayer();

    /**
     * @note[short] Android
     */
    static FindObjectOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x7ed630
     * @note[short] MacOS (Intel): 0x9068a0
     * @note[short] Windows: 0x180c20
     * @note[short] iOS: 0x4ddc80
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x7ed654
     * @note[short] MacOS (Intel): 0x9068d0
     * @note[short] Windows: 0x180c60
     * @note[short] iOS: 0x4ddca4
     * @note[short] Android
     */
    virtual void setupOptions();
};
