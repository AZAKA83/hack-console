#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/ccTypes.hpp>

class TraceDrawObject {
public:
    static constexpr auto CLASS_NAME = "TraceDrawObject";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TraceDrawObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TraceDrawObject(int type, GameObject* fromObject, GameObject* toObject, cocos2d::ccColor4F color);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TraceDrawObject(int groupID, cocos2d::ccColor4F color);
    int m_type;
    GameObject* m_fromObject;
    GameObject* m_toObject;
    int m_groupID;
    cocos2d::ccColor4F m_color;
};
