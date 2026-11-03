#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJTransformState.hpp>
#include <Geode/mapping/CCObject.hpp>

class UndoObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "UndoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(UndoObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UndoObject();

    /**
     * @note[short] MacOS (ARM): 0xbd1e0
     * @note[short] MacOS (Intel): 0xd6690
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x40c07c
     * @note[short] Android: Rebinded
     */
     ~UndoObject();

    /**
     * @note[short] MacOS (ARM): 0x9d760
     * @note[short] MacOS (Intel): 0xaf3d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static UndoObject* create(GameObject* object, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xa02d0
     * @note[short] MacOS (Intel): 0xb2270
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static UndoObject* createWithArray(cocos2d::CCArray* array, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xbd2f8
     * @note[short] MacOS (Intel): 0xd67b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static UndoObject* createWithTransformObjects(cocos2d::CCArray* objects, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xbd2bc
     * @note[short] MacOS (Intel): 0xd6780
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(GameObject* object, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xbd454
     * @note[short] MacOS (Intel): 0xd6920
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* array, UndoCommand command);

    /**
     * @note[short] MacOS (ARM): 0xbd3d0
     * @note[short] MacOS (Intel): 0xd68a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool initWithTransformObjects(cocos2d::CCArray* objects, UndoCommand command);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setObjects(cocos2d::CCArray* objects);
    GameObjectCopy* m_objectCopy;
    UndoCommand m_command;
    cocos2d::CCArray* m_objects;
    bool m_redo;
    bool m_undoTransform;
    GJTransformState m_transformState;
};
