#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/DemonFilterDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class LevelSearchLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DemonFilterDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSearchLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSearchLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelSearchLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x59ad8
     * @note[short] Android: Rebinded
     */
     ~LevelSearchLayer();

    /**
     * @note[short] MacOS (ARM): 0x396fb0
     * @note[short] MacOS (Intel): 0x7042f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelSearchLayer* create(int type);

    /**
     * @note[short] MacOS (ARM): 0x396ec4
     * @note[short] MacOS (Intel): 0x7041c0
     * @note[short] Windows: 0x434300
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int type);

    /**
     * @note[short] MacOS (ARM): 0x61a81c
     * @note[short] MacOS (Intel): 0x709780
     * @note[short] Windows: 0x43b5c0
     * @note[short] iOS: 0x5d9c4
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes p0, double p1);

    /**
     * @note[short] MacOS (ARM): 0x61a76c
     * @note[short] MacOS (Intel): 0x7096d0
     * @note[short] Windows: 0x43b5b0
     * @note[short] iOS: 0x5d9b8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x619c8c
     * @note[short] MacOS (Intel): 0x708c40
     * @note[short] Windows: 0x437f40
     * @note[short] iOS: 0x5d26c
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x619d6c
     * @note[short] MacOS (Intel): 0x708d10
     * @note[short] Windows: 0x4380a0
     * @note[short] iOS: 0x5d358
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x619e7c
     * @note[short] MacOS (Intel): 0x708de0
     * @note[short] Windows: 0x4380a0
     * @note[short] iOS: 0x5d3d8
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x619bf4
     * @note[short] MacOS (Intel): 0x708bc0
     * @note[short] Windows: 0x437f00
     * @note[short] iOS: 0x5d1d4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x619738
     * @note[short] MacOS (Intel): 0x708650
     * @note[short] Windows: 0x436860
     * @note[short] iOS: 0x5ce78
     * @note[short] Android
     */
    virtual void demonFilterSelectClosed(int filter);

    /**
     * @note[short] Windows: 0x43aaf0
     * @note[short] Android
     */
    bool checkDiff(int diff);

    /**
     * @note[short] Windows: 0x43b120
     * @note[short] Android
     */
    bool checkTime(int time);

    /**
     * @note[short] MacOS (ARM): 0x619064
     * @note[short] Windows: 0x436d90
     * @note[short] Android
     */
    void clearFilters();

    /**
     * @note[short] MacOS (ARM): 0x617d34
     * @note[short] MacOS (Intel): 0x706bf0
     * @note[short] Windows: 0x436c70
     * @note[short] Android
     */
    void confirmClearFilters(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61959c
     * @note[short] MacOS (Intel): 0x708430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getDiffKey(int diff);

    /**
     * @note[short] MacOS (ARM): 0x61a3ec
     * @note[short] MacOS (Intel): 0x709380
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getLevelLenKey();

    /**
     * @note[short] MacOS (ARM): 0x61a2f4
     * @note[short] MacOS (Intel): 0x709290
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getSearchDiffKey();

    /**
     * @note[short] MacOS (ARM): 0x619fa0
     * @note[short] Windows: 0x438540
     * @note[short] Android
     */
    GJSearchObject* getSearchObject(SearchType type, std::string query);

    /**
     * @note[short] MacOS (ARM): 0x61a744
     * @note[short] MacOS (Intel): 0x7096b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getTimeKey(int time);

    /**
     * @note[short] MacOS (ARM): 0x6154b8
     * @note[short] MacOS (Intel): 0x704400
     * @note[short] Windows: 0x434450
     * @note[short] Android
     */
    bool init(int type);

    /**
     * @note[short] MacOS (ARM): 0x619230
     * @note[short] MacOS (Intel): 0x7080d0
     * @note[short] Windows: 0x43a300
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x618468
     * @note[short] MacOS (Intel): 0x707360
     * @note[short] Windows: 0x43a2c0
     * @note[short] Android
     */
    void onClearFreeSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x619f8c
     * @note[short] MacOS (Intel): 0x708eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFollowed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6188bc
     * @note[short] MacOS (Intel): 0x707790
     * @note[short] Windows: 0x439c80
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHyped(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onLatestStars(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMagic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x617e14
     * @note[short] MacOS (Intel): 0x706cd0
     * @note[short] Windows: 0x436b20
     * @note[short] Android
     */
    void onMoreOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMostDownloaded(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMostLikes(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onMostRecent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6181a8
     * @note[short] MacOS (Intel): 0x7070c0
     * @note[short] Windows: 0x439e00
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x617e30
     * @note[short] MacOS (Intel): 0x706cf0
     * @note[short] Windows: 0x436ad0
     * @note[short] Android
     */
    void onSearchMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x618330
     * @note[short] MacOS (Intel): 0x707230
     * @note[short] Windows: 0x43a060
     * @note[short] Android
     */
    void onSearchUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x618e84
     * @note[short] MacOS (Intel): 0x707d50
     * @note[short] Windows: 0x4366f0
     * @note[short] Android
     */
    void onSpecialDemon(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x618928
     * @note[short] MacOS (Intel): 0x707800
     * @note[short] Windows: 0x439d40
     * @note[short] Android
     */
    void onStarAward(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTrending(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x618994
     * @note[short] MacOS (Intel): 0x707870
     * @note[short] Windows: 0x43abe0
     * @note[short] Android
     */
    void toggleDifficulty(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x619288
     * @note[short] MacOS (Intel): 0x708120
     * @note[short] Windows: 0x43af60
     * @note[short] Android
     */
    void toggleDifficultyNum(int diff, bool enabled);

    /**
     * @note[short] Windows: 0x43a740
     * @note[short] Android
     */
    void toggleNoStar(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x2ec8e0
     * @note[short] Windows: 0x43a380
     * @note[short] Android
     */
    void toggleStar(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x618ec0
     * @note[short] MacOS (Intel): 0x707d90
     * @note[short] Windows: 0x43b210
     * @note[short] Android
     */
    void toggleTime(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61940c
     * @note[short] MacOS (Intel): 0x7082a0
     * @note[short] Windows: 0x43b3e0
     * @note[short] Android
     */
    void toggleTimeNum(int time, bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x617e74
     * @note[short] MacOS (Intel): 0x706d40
     * @note[short] Windows: 0x438180
     * @note[short] Android
     */
    void updateSearchLabel(char const* label);
    int m_type;
    CCTextInputNode* m_searchInput;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCSprite* m_noStarSprite;
    cocos2d::CCArray* m_difficultySprites;
    cocos2d::CCArray* m_lengthSprites;
    cocos2d::CCDictionary* m_difficultyDict;
    cocos2d::CCSprite* m_lastDifficultySprite;
    CCMenuItemSpriteExtra* m_demonTypeButton;
};
