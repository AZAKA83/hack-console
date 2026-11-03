#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJLinkObject.hpp>
#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/vector.hpp>

class SongInfoLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SongInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongInfoLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x633980
     * @note[short] iOS: 0x44d8f8
     * @note[short] Android: Rebinded
     */
    virtual  ~SongInfoLayer();

    /**
     * @note[short] Windows: 0x6346c0
     * @note[short] Android
     */
    static SongInfoLayer* create(SongInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x259a90
     * @note[short] Windows: 0x634300
     * @note[short] Android
     */
    static SongInfoLayer* create(int artistID);

    /**
     * @note[short] Windows: 0x634980
     * @note[short] Android
     */
    static SongInfoLayer* create(std::string p0, std::string p1, std::vector<GJLinkObject> p2, std::vector<GJLinkObject> p3, int p4, std::string p5, int p6);

    /**
     * @note[short] MacOS (ARM): 0x5eff74
     * @note[short] MacOS (Intel): 0x6d99a0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x44fc40
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x6363d0
     * @note[short] Android
     */
    TodoReturn addLinkRows(std::vector<GJLinkObject> const& p0, float p1, int p2);

    /**
     * @note[short] MacOS (Intel): 0x653bf0
     * @note[short] Windows: 0x634c10
     * @note[short] Android
     */
    bool init(std::string p0, std::string p1, std::vector<GJLinkObject> p2, std::vector<GJLinkObject> p3, int p4, std::string p5, int p6);

    /**
     * @note[short] MacOS (ARM): 0x5ef6d0
     * @note[short] MacOS (Intel): 0x6d91d0
     * @note[short] Windows: 0x636750
     * @note[short] Android
     */
    void onBPM(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ef694
     * @note[short] MacOS (Intel): 0x6d91a0
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x635b70
     * @note[short] Android
     */
    void onCopySongID(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x6366e0
     * @note[short] Android
     */
    void onLink(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ef9e0
     * @note[short] MacOS (Intel): 0x6d9500
     * @note[short] Windows: 0x636230
     * @note[short] Android
     */
    void onMenuMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5efa88
     * @note[short] MacOS (Intel): 0x6d9590
     * @note[short] Windows: 0x636300
     * @note[short] Android
     */
    void onPracticeMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x636800
     * @note[short] Android
     */
    void onSongUsage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5efc40
     * @note[short] MacOS (Intel): 0x6d9710
     * @note[short] Windows: 0x635c60
     * @note[short] Android
     */
    void showCustomMusicUnlockInfo();
    std::string m_songName;
    std::string m_artistName;
    int m_songID;
    int m_musicCustomizerMessageIndex;
    std::vector<GJLinkObject> m_artistLinks;
};
