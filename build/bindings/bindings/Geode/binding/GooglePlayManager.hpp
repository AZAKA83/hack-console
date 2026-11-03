#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GooglePlayManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GooglePlayManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GooglePlayManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x77b40
     * @note[short] iOS: 0x459cc
     * @note[short] Android: Rebinded
     */
    virtual  ~GooglePlayManager();

    /**
     * @note[short] MacOS (ARM): 0x3d81f4
     * @note[short] MacOS (Intel): 0x46c7a0
     * @note[short] Windows: 0x77b90
     * @note[short] Android
     */
    static GooglePlayManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x3d8260
     * @note[short] MacOS (Intel): 0x46c810
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45a6c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3d8268
     * @note[short] MacOS (Intel): 0x46c820
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void googlePlaySignedIn();
    GooglePlayDelegate* m_delegate1;
    GooglePlayDelegate* m_delegate2;
};
