#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SelectSFXSortLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectSFXSortLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectSFXSortLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectSFXSortLayer();

    /**
     * @note[short] Windows: 0x5a3f0
     * @note[short] Android: Rebinded
     */
    virtual  ~SelectSFXSortLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SelectSFXSortLayer* create(AudioSortType sortType);

    /**
     * @note[short] MacOS (ARM): 0x3abc80
     * @note[short] MacOS (Intel): 0x435840
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x1f89b8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3ab760
     * @note[short] Windows: 0x620b60
     * @note[short] Android
     */
    bool init(AudioSortType sortType);

    /**
     * @note[short] MacOS (ARM): 0x3abbd8
     * @note[short] MacOS (Intel): 0x4357b0
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3abc14
     * @note[short] MacOS (Intel): 0x4357e0
     * @note[short] Windows: 0x621200
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);
    AudioSortType m_sortType;
    SelectSFXSortDelegate* m_delegate;
};
