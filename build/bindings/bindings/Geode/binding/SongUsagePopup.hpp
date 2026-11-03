#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/SongUsageDelegate.hpp>
#include <Geode/mapping/vector.hpp>

class SongUsagePopup : public FLAlertLayer, public SongUsageDelegate {
public:
    static constexpr auto CLASS_NAME = "SongUsagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongUsagePopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x101c00
     * @note[short] iOS: 0x52a020
     * @note[short] Android: Rebinded
     */
    virtual  ~SongUsagePopup();

    /**
     * @note[short] Windows: 0x101d30
     * @note[short] Android
     */
    static SongUsagePopup* create(int p0, std::string const& p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): 0x851cac
     * @note[short] MacOS (Intel): 0x977400
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x52b494
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x850824
     * @note[short] MacOS (Intel): 0x975d70
     * @note[short] Windows: 0x102570
     * @note[short] iOS: 0x52a670
     * @note[short] Android
     */
    virtual void songUsageFinished(int p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x851b24
     * @note[short] MacOS (Intel): 0x9772a0
     * @note[short] Windows: 0x102ff0
     * @note[short] iOS: 0x52b448
     * @note[short] Android
     */
    virtual void songUsageFailed(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn buildStatRow(std::string const* p0, std::string const* p1, int p2, float p3);

    /**
     * @note[short] Windows: 0x103030
     * @note[short] Android
     */
    TodoReturn buildUsageGrid(std::vector<SongUsageEntry> const& p0);

    /**
     * @note[short] Windows: 0x101e80
     * @note[short] Android
     */
    bool init(int p0, std::string const& p1, std::string const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn layoutPopup(float p0);

    /**
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn showStatus(char const* p0);
};
