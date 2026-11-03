#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EnhancedGameObject.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class SpecialAnimGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "SpecialAnimGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpecialAnimGameObject, EnhancedGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SpecialAnimGameObject();

    /**
     * @note[short] Windows: 0x288810
     * @note[short] Android: Rebinded
     */
    virtual  ~SpecialAnimGameObject();

    /**
     * @note[short] MacOS (ARM): 0x154834
     * @note[short] MacOS (Intel): 0x193f90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SpecialAnimGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x154978
     * @note[short] MacOS (Intel): 0x194110
     * @note[short] Windows: 0x643750
     * @note[short] iOS: 0x428598
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x154984
     * @note[short] MacOS (Intel): 0x194130
     * @note[short] Windows: 0x643760
     * @note[short] iOS: 0x4285a4
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1549e4
     * @note[short] MacOS (Intel): 0x194190
     * @note[short] Windows: 0x6437d0
     * @note[short] iOS: 0x428604
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x154958
     * @note[short] MacOS (Intel): 0x1940d0
     * @note[short] Windows: 0x643710
     * @note[short] iOS: 0x428578
     * @note[short] Android
     */
    virtual void updateMainColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x154968
     * @note[short] MacOS (Intel): 0x1940f0
     * @note[short] Windows: 0x643730
     * @note[short] iOS: 0x428588
     * @note[short] Android
     */
    virtual void updateSecondaryColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x1f1094
     * @note[short] MacOS (Intel): 0x247730
     * @note[short] Windows: 0x2a6cd0
     * @note[short] iOS: 0x3e72f4
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float totalTime, int frameIndex);

    /**
     * @note[short] MacOS (ARM): 0x154930
     * @note[short] MacOS (Intel): 0x1940b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    bool m_skipMainColorUpdate;
    bool m_skipSecondaryColorUpdate;
};
