#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class NewsPopup : public FLAlertLayer, public FLAlertLayerProtocol, public MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "NewsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NewsPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x49d9f0
     * @note[short] iOS: 0x517a88
     * @note[short] Android: Rebinded
     */
    virtual  ~NewsPopup();

    /**
     * @note[short] Android
     */
    static NewsPopup* create();

    /**
     * @note[short] MacOS (ARM): 0x837058
     * @note[short] MacOS (Intel): 0x9587d0
     * @note[short] Windows: 0x49dbe0
     * @note[short] iOS: 0x517b34
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x839a88
     * @note[short] MacOS (Intel): 0x95b490
     * @note[short] Windows: 0x4a0620
     * @note[short] iOS: 0x519d54
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x839b5c
     * @note[short] MacOS (Intel): 0x95b570
     * @note[short] Windows: 0x4a06a0
     * @note[short] iOS: 0x519dc4
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x839c28
     * @note[short] MacOS (Intel): 0x95b650
     * @note[short] Windows: 0x4a07a0
     * @note[short] iOS: 0x519e90
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x839d60
     * @note[short] MacOS (Intel): 0x95b770
     * @note[short] Windows: 0x4a0840
     * @note[short] iOS: 0x519f28
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x839950
     * @note[short] MacOS (Intel): 0x95b360
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x519c74
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x8399cc
     * @note[short] MacOS (Intel): 0x95b3d0
     * @note[short] Windows: 0x4a05b0
     * @note[short] iOS: 0x519cf0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x8394c8
     * @note[short] MacOS (Intel): 0x95afa0
     * @note[short] Windows: 0x4a03d0
     * @note[short] iOS: 0x5199f0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x8395a8
     * @note[short] MacOS (Intel): 0x95b070
     * @note[short] Windows: 0x4a0410
     * @note[short] iOS: 0x519a58
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x8395cc
     * @note[short] MacOS (Intel): 0x95b0b0
     * @note[short] Windows: 0x4a0430
     * @note[short] iOS: 0x519a7c
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x839680
     * @note[short] MacOS (Intel): 0x95b170
     * @note[short] Windows: 0x4a0480
     * @note[short] iOS: 0x519b20
     * @note[short] Android
     */
    virtual void newsImageDownloaded(std::string p0);

    /**
     * @note[short] MacOS (ARM): 0x8397e4
     * @note[short] MacOS (Intel): 0x95b2a0
     * @note[short] Windows: 0x4a0510
     * @note[short] iOS: 0x519bc8
     * @note[short] Android
     */
    virtual void newsImageFailed(std::string p0);

    /**
     * @note[short] Windows: 0x49fca0
     * @note[short] Android
     */
    void onBlockClicked(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn pageReferencesImage(int p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn prefetchPageImages(int p0);

    /**
     * @note[short] Windows: 0x49e6c0
     * @note[short] Android
     */
    TodoReturn rebuildPage(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn refreshFromManager();
};
