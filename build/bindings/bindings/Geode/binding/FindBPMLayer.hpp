#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CreateGuidelinesLayer.hpp>

class FindBPMLayer : public CreateGuidelinesLayer {
public:
    static constexpr auto CLASS_NAME = "FindBPMLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindBPMLayer, CreateGuidelinesLayer)

    /**
     * @note[short] iOS: 0x86c24
     * @note[short] Android: Rebinded
     */
    virtual  ~FindBPMLayer();

    /**
     * @note[short] Windows: 0x134e30
     * @note[short] Android
     */
    static FindBPMLayer* create(int songID);

    /**
     * @note[short] MacOS (ARM): 0x46a684
     * @note[short] MacOS (Intel): 0x50ef80
     * @note[short] Windows: 0x135360
     * @note[short] iOS: 0x86bdc
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46a4f0
     * @note[short] MacOS (Intel): 0x50edf0
     * @note[short] Windows: 0x1351a0
     * @note[short] iOS: 0x86a68
     * @note[short] Android
     */
    virtual void playMusic();

    /**
     * @note[short] MacOS (ARM): 0x46a58c
     * @note[short] MacOS (Intel): 0x50ee80
     * @note[short] Windows: 0x135270
     * @note[short] iOS: 0x86af4
     * @note[short] Android
     */
    virtual void registerTouch();

    /**
     * @note[short] MacOS (ARM): 0x46a680
     * @note[short] MacOS (Intel): 0x50ef70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x86bd8
     * @note[short] Android
     */
    virtual void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46a410
     * @note[short] MacOS (Intel): 0x50ece0
     * @note[short] Windows: 0x1350a0
     * @note[short] iOS: 0x869c4
     * @note[short] Android
     */
    virtual void onRecord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46a448
     * @note[short] MacOS (Intel): 0x50ed20
     * @note[short] Windows: 0x1350e0
     * @note[short] iOS: 0x869fc
     * @note[short] Android
     */
    virtual void recordingDidStop();

    /**
     * @note[short] MacOS (ARM): 0x46a4b4
     * @note[short] MacOS (Intel): 0x50ed90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void calculateBPM();

    /**
     * @note[short] MacOS (ARM): 0x46a2f8
     * @note[short] MacOS (Intel): 0x50ebb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(int songID);
    int m_songID;
    cocos2d::CCLabelBMFont* m_bpmLabel;
    float m_startOffset;
    int m_beats;
    int m_beatsPerMinute;
};
