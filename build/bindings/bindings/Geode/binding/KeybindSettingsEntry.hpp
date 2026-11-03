#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class KeybindSettingsEntry {
public:
    static constexpr auto CLASS_NAME = "KeybindSettingsEntry";
    char const* m_label;
    char const* m_sprite;
    cocos2d::CCObject* m_target;
    cocos2d::SEL_MenuHandler m_callback;
    bool m_closePopup;
};
