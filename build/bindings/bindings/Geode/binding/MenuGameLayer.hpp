#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJGroundLayer.hpp>
#include <Geode/binding/GameToolbox.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class MenuGameLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MenuGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuGameLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MenuGameLayer();

    /**
     * @note[short] MacOS (ARM): 0x4556a4
     * @note[short] MacOS (Intel): 0x4f8700
     * @note[short] Windows: 0x46f960
     * @note[short] iOS: 0x441aa8
     * @note[short] Android: Rebinded
     */
    virtual  ~MenuGameLayer();

    /**
     * @note[short] MacOS (ARM): 0x4556dc
     * @note[short] MacOS (Intel): 0x4f8780
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static MenuGameLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x456798
     * @note[short] MacOS (Intel): 0x4f9a60
     * @note[short] Windows: 0x470860
     * @note[short] iOS: 0x44297c
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x4557c4
     * @note[short] MacOS (Intel): 0x4f8890
     * @note[short] Windows: 0x46f9f0
     * @note[short] iOS: 0x441b54
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x456c88
     * @note[short] MacOS (Intel): 0x4f9fd0
     * @note[short] Windows: 0x471920
     * @note[short] iOS: 0x442e08
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x456da0
     * @note[short] MacOS (Intel): 0x4fa0f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x442f20
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x456da8
     * @note[short] MacOS (Intel): 0x4fa110
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x442f28
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x456db0
     * @note[short] MacOS (Intel): 0x4fa130
     * @note[short] Windows: 0x83ef0
     * @note[short] iOS: 0x442f30
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x456dcc
     * @note[short] MacOS (Intel): 0x4fa170
     * @note[short] Windows: 0x471d60
     * @note[short] iOS: 0x442f4c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x456a8c
     * @note[short] MacOS (Intel): 0x4f9dd0
     * @note[short] Windows: 0x471660
     * @note[short] Android
     */
    void destroyPlayer();

    /**
     * @note[short] MacOS (ARM): 0x455bc0
     * @note[short] MacOS (Intel): 0x4f8cf0
     * @note[short] Windows: 0x470290
     * @note[short] Android
     */
    cocos2d::ccColor3B getBGColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x456158
     * @note[short] MacOS (Intel): 0x4f9210
     * @note[short] Windows: 0x470d30
     * @note[short] Android
     */
    void resetPlayer();

    /**
     * @note[short] MacOS (ARM): 0x455cfc
     * @note[short] MacOS (Intel): 0x4f8d90
     * @note[short] Windows: 0x470570
     * @note[short] Android
     */
    void tryJump(float dt);

    /**
     * @note[short] MacOS (ARM): 0x455f74
     * @note[short] MacOS (Intel): 0x4f9010
     * @note[short] Windows: 0x470140
     * @note[short] Android
     */
    void updateColor(float dt);

    /**
     * @note[short] MacOS (ARM): 0x456720
     * @note[short] MacOS (Intel): 0x4f99f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateColors();
    bool m_videoOptionsOpen;
    float m_deltaCount;
    bool m_isDestroyingPlayer;
    int m_initCount;
    cocos2d::CCPoint m_realBackgroundPosition;
    PlayerObject* m_playerObject;
    cocos2d::CCSprite* m_backgroundSprite;
    GJGroundLayer* m_groundLayer;
    float m_backgroundWrapPosition;
};
