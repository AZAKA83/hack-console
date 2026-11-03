#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/map.hpp>

class ObjectToolbox : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ObjectToolbox";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ObjectToolbox, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x4a1b60
     * @note[short] iOS: 0x3166d8
     * @note[short] Android: Rebinded
     */
    virtual  ~ObjectToolbox();

    /**
     * @note[short] MacOS (ARM): 0x655cd4
     * @note[short] MacOS (Intel): 0x749280
     * @note[short] Windows: 0x4a1be0
     * @note[short] iOS: 0x316630
     * @note[short] Android
     */
    static ObjectToolbox* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x655dfc
     * @note[short] MacOS (Intel): 0x7493c0
     * @note[short] Windows: 0x4a1ca0
     * @note[short] iOS: 0x316714
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x6feac4
     * @note[short] MacOS (Intel): 0x7f92b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* allKeys();

    /**
     * @note[short] MacOS (ARM): 0x6febb0
     * @note[short] MacOS (Intel): 0x7f9390
     * @note[short] Windows: 0x4c9b00
     * @note[short] Android
     */
    float gridNodeSizeForKey(int key);

    /**
     * @note[short] MacOS (ARM): 0x6feacc
     * @note[short] MacOS (Intel): 0x7f92c0
     * @note[short] Windows: 0x4c9ad0
     * @note[short] Android
     */
    const char* intKeyToFrame(int key);

    /**
     * @note[short] MacOS (Intel): 0x7fcd50
     * @note[short] Windows: 0x4ca520
     * @note[short] Android
     */
    const char* perspectiveBlockFrame(int key);
    std::map<int, std::string> m_allKeys;
};
