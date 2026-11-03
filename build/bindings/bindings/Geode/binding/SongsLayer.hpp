#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>

class SongsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "SongsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongsLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x636840
     * @note[short] iOS: 0x3e56e4
     * @note[short] Android: Rebinded
     */
    virtual  ~SongsLayer();

    /**
     * @note[short] Windows: 0x6368e0
     * @note[short] Android
     */
    static SongsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x46dd7c
     * @note[short] MacOS (Intel): 0x512cf0
     * @note[short] Windows: 0x6369b0
     * @note[short] iOS: 0x3e571c
     * @note[short] Android
     */
    virtual void customSetup();
};
