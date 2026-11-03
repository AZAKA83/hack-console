#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/mapping/vector.hpp>

class AudioAssetsBrowser : public FLAlertLayer, public TableViewCellDelegate, public MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "AudioAssetsBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AudioAssetsBrowser, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AudioAssetsBrowser();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x269460
     * @note[short] Android: Rebinded
     */
     ~AudioAssetsBrowser();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AudioAssetsBrowser* create(std::vector<int>& songIds, std::vector<int>& sfxIds);

    /**
     * @note[short] MacOS (ARM): 0x78d9e8
     * @note[short] MacOS (Intel): 0x89a470
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x26a340
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x78d96c
     * @note[short] MacOS (Intel): 0x89a400
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x26a2c4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x78d918
     * @note[short] MacOS (Intel): 0x89a320
     * @note[short] Windows: 0x99520
     * @note[short] iOS: 0x26a278
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x78d924
     * @note[short] MacOS (Intel): 0x89a350
     * @note[short] Windows: 0x995b0
     * @note[short] iOS: 0x26a284
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x78d938
     * @note[short] MacOS (Intel): 0x89a390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26a294
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x78d948
     * @note[short] MacOS (Intel): 0x89a3b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26a2a4
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (ARM): 0x78d958
     * @note[short] MacOS (Intel): 0x89a3d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26a2b4
     * @note[short] Android
     */
    virtual int getCellDelegateType();

    /**
     * @note[short] MacOS (ARM): 0x78cb30
     * @note[short] MacOS (Intel): 0x899400
     * @note[short] Windows: 0x98f70
     * @note[short] Android
     */
    bool init(std::vector<int>& songIds, std::vector<int>& sfxIds);

    /**
     * @note[short] MacOS (ARM): 0x78d068
     * @note[short] MacOS (Intel): 0x899970
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x78d0a4
     * @note[short] MacOS (Intel): 0x8999a0
     * @note[short] Windows: 0x99810
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x78d934
     * @note[short] MacOS (Intel): 0x89a380
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x78d6e4
     * @note[short] MacOS (Intel): 0x89a0c0
     * @note[short] Windows: 0x995f0
     * @note[short] Android
     */
    void setupList();

    /**
     * @note[short] MacOS (ARM): 0x78d878
     * @note[short] MacOS (Intel): 0x89a280
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void trySetupAudioBrowser();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePageLabel();
    cocos2d::CCArray* m_songInfoObjects;
    GJCommentListLayer* m_songList;
    cocos2d::CCLabelBMFont* m_pageIndicatorLabel;
    std::vector<int> m_songsIds;
    std::vector<int> m_sfxIds;
    LoadingCircleSprite* m_loadingCircle;
};
