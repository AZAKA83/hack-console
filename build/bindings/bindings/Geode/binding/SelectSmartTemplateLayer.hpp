#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>

class SelectSmartTemplateLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "SelectSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectSmartTemplateLayer, GJDropDownLayer)

    /**
     * @note[short] Android
     */
    static SelectSmartTemplateLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x5c11a4
     * @note[short] MacOS (Intel): 0x6a64d0
     * @note[short] Android
     */
    virtual void customSetup();
};
