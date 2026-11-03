#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCPoint.hpp>

class GameObjectEditorState {
public:
    static constexpr auto CLASS_NAME = "GameObjectEditorState";

    /**
     * @note[short] MacOS (ARM): 0x57c684
     * @note[short] MacOS (Intel): 0x6404b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadValues(GameObject* obj);
    cocos2d::CCPoint m_position;
    float m_scaleX;
    float m_scaleY;
    float m_rotationX;
    float m_rotationY;
};
