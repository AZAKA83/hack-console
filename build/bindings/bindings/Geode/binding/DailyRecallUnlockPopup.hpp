#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class DailyRecallUnlockPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DailyRecallUnlockPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DailyRecallUnlockPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5a3f0
     * @note[short] Android: Rebinded
     */
    virtual  ~DailyRecallUnlockPopup();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DailyRecallUnlockPopup();

    /**
     * @note[short] MacOS (ARM): 0x864888
     * @note[short] MacOS (Intel): 0x98a160
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x53a23c
     * @note[short] Android
     */
    static DailyRecallUnlockPopup* create(FLAlertLayerProtocol* p0, GJGameLevel* p1);

    /**
     * @note[short] MacOS (ARM): 0x864a0c
     * @note[short] MacOS (Intel): 0x98a360
     * @note[short] Windows: 0x173c90
     * @note[short] iOS: 0x53a308
     * @note[short] Android
     */
    bool init(FLAlertLayerProtocol* p0, GJGameLevel* p1);
};
