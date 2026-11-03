#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJOptionsLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class GameLevelOptionsLayer : public GJOptionsLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GameLevelOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameLevelOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] Windows: 0x399cc0
     * @note[short] iOS: 0x37f710
     * @note[short] Android: Rebinded
     */
    virtual  ~GameLevelOptionsLayer();

    /**
     * @note[short] Windows: 0x3aa2b0
     * @note[short] Android
     */
    static GameLevelOptionsLayer* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x242e88
     * @note[short] MacOS (Intel): 0x29fb20
     * @note[short] Windows: 0x3aa5f0
     * @note[short] iOS: 0x37f9ac
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x242f9c
     * @note[short] MacOS (Intel): 0x29fc40
     * @note[short] Windows: 0x3aa720
     * @note[short] iOS: 0x37fac0
     * @note[short] Android
     */
    virtual void didToggle(int tag);

    /**
     * @note[short] MacOS (ARM): 0x243404
     * @note[short] MacOS (Intel): 0x2a0220
     * @note[short] Windows: 0x3aa9b0
     * @note[short] iOS: 0x37fcd8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn toggleLDM();
    GJGameLevel* m_level;
};
