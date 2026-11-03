#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/array.hpp>
#include <Geode/mapping/unordered_map.hpp>

class DrawGridLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "DrawGridLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DrawGridLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0xbd600
     * @note[short] MacOS (Intel): 0xd6ac0
     * @note[short] Windows: 0x3ec960
     * @note[short] iOS: 0x40c398
     * @note[short] Android: Rebinded
     */
    virtual  ~DrawGridLayer();

    /**
     * @note[short] MacOS (ARM): 0x9a6a4
     * @note[short] MacOS (Intel): 0xaba40
     * @note[short] Windows: 0x40a080
     * @note[short] Android
     */
    static DrawGridLayer* create(cocos2d::CCNode* parent, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0xbd988
     * @note[short] MacOS (Intel): 0xd6f80
     * @note[short] Windows: 0x40a690
     * @note[short] iOS: 0x40c5c0
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0xbda9c
     * @note[short] MacOS (Intel): 0xd7110
     * @note[short] Windows: 0x40a8a0
     * @note[short] iOS: 0x40c6d4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0xa912c
     * @note[short] MacOS (Intel): 0xbce80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addAudioLineObject(AudioLineGuideGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa8f74
     * @note[short] MacOS (Intel): 0xbcd00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addToEffects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa9424
     * @note[short] MacOS (Intel): 0xbd480
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addToGuides(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa94b0
     * @note[short] MacOS (Intel): 0xbd500
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addToSpeedObjects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xbd8bc
     * @note[short] MacOS (Intel): 0xd6ea0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getPortalMinMax(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xbd75c
     * @note[short] MacOS (Intel): 0xd6d00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* parent, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x9cbf4
     * @note[short] MacOS (Intel): 0xae770
     * @note[short] Windows: 0x40a3a0
     * @note[short] Android
     */
    void loadTimeMarkers(std::string markers);

    /**
     * @note[short] MacOS (ARM): 0xaf1cc
     * @note[short] MacOS (Intel): 0xc3f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint posForTime(float time);

    /**
     * @note[short] MacOS (ARM): 0xbd97c
     * @note[short] MacOS (Intel): 0xd6f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void postUpdate();

    /**
     * @note[short] MacOS (ARM): 0xa93ec
     * @note[short] MacOS (Intel): 0xbd430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeAudioLineObject(AudioLineGuideGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa93bc
     * @note[short] MacOS (Intel): 0xbd400
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeFromEffects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa9418
     * @note[short] MacOS (Intel): 0xbd460
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeFromGuides(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa9464
     * @note[short] MacOS (Intel): 0xbd4c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeFromSpeedObjects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xbd8ac
     * @note[short] MacOS (Intel): 0xd6e80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void sortSpeedObjects();

    /**
     * @note[short] MacOS (ARM): 0xadc68
     * @note[short] MacOS (Intel): 0xc2480
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, bool ignoreWarp, bool ignoreRotate, int id);

    /**
     * @note[short] MacOS (ARM): 0xbda8c
     * @note[short] MacOS (Intel): 0xd70f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMusicGuideTime(float time);

    /**
     * @note[short] MacOS (ARM): 0xadbbc
     * @note[short] MacOS (Intel): 0xc23e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateTimeMarkers();
    std::array<cocos2d::CCPoint, 400>* m_pointArray1;
    std::array<cocos2d::CCPoint, 400>* m_pointArray2;
    std::array<cocos2d::CCPoint, 400>* m_pointArray3;
    std::unordered_map<int, AudioLineGuideGameObject*> m_audioLineObjects;
    float m_musicTime;
    float m_playbackTime;
    float m_oldPlaybackTime;
    float m_playbackX;
    float m_playbackY;
    bool m_sortEffects;
    LevelEditorLayer* m_editorLayer;
    std::string m_timeMarkerString;
    cocos2d::CCNode* m_objectLayer;
    cocos2d::CCArray* m_timeMarkers;
    cocos2d::CCArray* m_effectGameObjects;
    cocos2d::CCArray* m_guideObjects;
    cocos2d::CCArray* m_speedObjects;
    double m_beatWidth;
    float m_currentSpeed;
    float m_slowSpeed;
    float m_normalSpeed;
    float m_fastSpeed;
    float m_fasterSpeed;
    float m_fastestSpeed;
    bool m_updateTimeMarkers;
    bool m_updateSpeedObjects;
    float m_gridSize;
};
