#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/GJDropDownLayerDelegate.hpp>
#include <Geode/binding/MusicBrowserDelegate.hpp>

class CustomSongLayer : public FLAlertLayer, public GJDropDownLayerDelegate, public MusicBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CustomSongLayer();

    /**
     * @note[short] Windows: 0x163a30
     * @note[short] iOS: 0x1c24b0
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomSongLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c24e8
     * @note[short] Android
     */
    static CustomSongLayer* create(CustomSongDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x1ab2ec
     * @note[short] MacOS (Intel): 0x1f9a70
     * @note[short] Windows: 0x165580
     * @note[short] iOS: 0x1c37c8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1ab3d8
     * @note[short] MacOS (Intel): 0x1f9b60
     * @note[short] Windows: 0x165590
     * @note[short] iOS: 0x1c37d4
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x1aae64
     * @note[short] MacOS (Intel): 0x1f9520
     * @note[short] Windows: 0x164f00
     * @note[short] iOS: 0x1c3568
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1aade4
     * @note[short] MacOS (Intel): 0x1f94c0
     * @note[short] Windows: 0x164e40
     * @note[short] iOS: 0x1c3530
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1aad64
     * @note[short] MacOS (Intel): 0x1f9460
     * @note[short] Windows: 0x164e40
     * @note[short] iOS: 0x1c34f8
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1ab15c
     * @note[short] MacOS (Intel): 0x1f9910
     * @note[short] Windows: 0x1652f0
     * @note[short] iOS: 0x1c36f8
     * @note[short] Android
     */
    virtual void dropDownLayerWillClose(GJDropDownLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1ab224
     * @note[short] MacOS (Intel): 0x1f99c0
     * @note[short] Windows: 0x1653d0
     * @note[short] iOS: 0x1c3760
     * @note[short] Android
     */
    virtual void musicBrowserClosed(MusicBrowser* browser);

    /**
     * @note[short] MacOS (ARM): 0x1a9c8c
     * @note[short] MacOS (Intel): 0x1f8250
     * @note[short] Windows: 0x163ca0
     * @note[short] Android
     */
    bool init(CustomSongDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x1aa808
     * @note[short] MacOS (Intel): 0x1f8e90
     * @note[short] Windows: 0x1654b0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa960
     * @note[short] MacOS (Intel): 0x8120
     * @note[short] Windows: 0x165200
     * @note[short] Android
     */
    void onCreateLines(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa8fc
     * @note[short] MacOS (Intel): 0x1f8f80
     * @note[short] Windows: 0x164f90
     * @note[short] Android
     */
    void onMusicBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa8e0
     * @note[short] MacOS (Intel): 0x1f8f60
     * @note[short] Windows: 0x164ff0
     * @note[short] Android
     */
    void onNCSBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa944
     * @note[short] MacOS (Intel): 0x1f8fd0
     * @note[short] Windows: 0x165100
     * @note[short] Android
     */
    void onNewgroundsBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x193798
     * @note[short] MacOS (Intel): 0x1dfa80
     * @note[short] Windows: 0x164940
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa9bc
     * @note[short] MacOS (Intel): 0x1f9050
     * @note[short] Windows: 0x164a50
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aa87c
     * @note[short] MacOS (Intel): 0x1f8f00
     * @note[short] Windows: 0x164f10
     * @note[short] Android
     */
    void onSongBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1aab38
     * @note[short] MacOS (Intel): 0x1f91c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showNewgroundsMessage();
    CustomSongDelegate* m_songDelegate;
    CCTextInputNode* m_songIDInput;
    CustomSongWidget* m_songWidget;
    CustomSongLayerDelegate* m_delegate;
};
