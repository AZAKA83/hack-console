#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class StarInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "StarInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StarInfoPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x1ae6b0
     * @note[short] MacOS (Intel): 0x1fd040
     * @note[short] Windows: 0x5a3f0
     * @note[short] Android: Rebinded
     */
    virtual  ~StarInfoPopup();

    /**
     * @note[short] Windows: 0x55bf40
     * @note[short] Android
     */
    static StarInfoPopup* create(int autos, int easies, int normals, int hards, int harders, int insanes, int dailies, int gauntlets, int maps, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x7972f4
     * @note[short] MacOS (Intel): 0x8a4810
     * @note[short] Windows: 0x55b950
     * @note[short] Android
     */
    static StarInfoPopup* createFromString(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x797554
     * @note[short] MacOS (Intel): 0x8a4aa0
     * @note[short] Windows: 0x55bc70
     * @note[short] Android
     */
    static StarInfoPopup* createFromStringMoons(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x79be54
     * @note[short] MacOS (Intel): 0x8a93b0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x2328c8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x79b4b0
     * @note[short] MacOS (Intel): 0x8a8aa0
     * @note[short] Windows: 0x55c090
     * @note[short] Android
     */
    bool init(int autos, int easies, int normals, int hards, int harders, int insanes, int dailies, int gauntlets, int maps, bool platformer);

    /**
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
};
