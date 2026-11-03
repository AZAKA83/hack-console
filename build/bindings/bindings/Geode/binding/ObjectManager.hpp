#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class ObjectManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ObjectManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ObjectManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x7be40
     * @note[short] iOS: 0x2eb154
     * @note[short] Android: Rebinded
     */
    virtual  ~ObjectManager();

    /**
     * @note[short] MacOS (ARM): 0x76c090
     * @note[short] MacOS (Intel): 0x876060
     * @note[short] Windows: 0x7bec0
     * @note[short] iOS: 0x2ea334
     * @note[short] Android
     */
    static ObjectManager* instance();

    /**
     * @note[short] MacOS (ARM): 0x76ce2c
     * @note[short] MacOS (Intel): 0x876e90
     * @note[short] Windows: 0x7cd70
     * @note[short] Android
     */
    static cocos2d::CCDictionary* replaceAllOccurencesOfString(cocos2d::CCString* target, cocos2d::CCString* replacement, cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x76c158
     * @note[short] MacOS (Intel): 0x876140
     * @note[short] Windows: 0x7bf50
     * @note[short] iOS: 0x2ea3c8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x76db78
     * @note[short] MacOS (Intel): 0x877d70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool animLoaded(char const* anim);

    /**
     * @note[short] MacOS (Intel): 0x877ba0
     * @note[short] Windows: 0x7d490
     * @note[short] Android
     */
    cocos2d::CCDictionary* getDefinition(char const* definitionKey);

    /**
     * @note[short] MacOS (ARM): 0x76ccec
     * @note[short] MacOS (Intel): 0x876d80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCDictionary* getGlobalAnimCopy(char const* anim);

    /**
     * @note[short] MacOS (ARM): 0x76c1a8
     * @note[short] MacOS (Intel): 0x8761a0
     * @note[short] Windows: 0x7c2a0
     * @note[short] Android
     */
    void loadCopiedAnimations();

    /**
     * @note[short] MacOS (ARM): 0x76c614
     * @note[short] MacOS (Intel): 0x876610
     * @note[short] Windows: 0x7c8a0
     * @note[short] Android
     */
    void loadCopiedSets();

    /**
     * @note[short] MacOS (ARM): 0x76c12c
     * @note[short] MacOS (Intel): 0x876110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ea39c
     * @note[short] Android
     */
    void purgeObjectManager();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setLoaded(char const* objectName);

    /**
     * @note[short] MacOS (ARM): 0x76c960
     * @note[short] MacOS (Intel): 0x8769b0
     * @note[short] Windows: 0x7bfb0
     * @note[short] iOS: 0x2ea834
     * @note[short] Android
     */
    void setup();
    cocos2d::CCDictionary* m_objectDefinitions;
    cocos2d::CCDictionary* m_loadedAnimations;
};
