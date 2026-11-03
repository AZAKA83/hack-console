#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SetupPortalPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SetupPortalPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPortalPopup, FLAlertLayer)
};
