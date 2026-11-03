#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>
#include <Geode/binding/OptionsObjectDelegate.hpp>
#include <Geode/mapping/vector.hpp>

class MusicSearchResult : public cocos2d::CCObject, public OptionsObjectDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicSearchResult";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicSearchResult, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x480db0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MusicSearchResult();

    /**
     * @note[short] Windows: 0x4979d0
     * @note[short] iOS: 0x1e3c60
     * @note[short] Android: Rebinded
     */
     ~MusicSearchResult();

    /**
     * @note[short] MacOS (Intel): 0x666fa0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static MusicSearchResult* create(GJSongType songType);

    /**
     * @note[short] MacOS (ARM): 0x5a0b08
     * @note[short] MacOS (Intel): 0x668480
     * @note[short] Windows: 0x498950
     * @note[short] iOS: 0x1e4604
     * @note[short] Android
     */
    virtual void updateObjects(AudioSortType type);

    /**
     * @note[short] MacOS (ARM): 0x5a0ad8
     * @note[short] MacOS (Intel): 0x668420
     * @note[short] Windows: 0x498930
     * @note[short] iOS: 0x1e45d4
     * @note[short] Android
     */
    virtual void stateChanged(OptionsObject* object);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* applyArtistFilters(cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    cocos2d::CCArray* applyTagFilters(cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    TodoReturn applyViewFilter(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createArtistFilterObjects();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createTagFilterObjects();

    /**
     * @note[short] MacOS (Intel): 0x668680
     * @note[short] Android
     */
    cocos2d::CCArray* getFilesMatchingSearch(cocos2d::CCArray* objects, std::string query);

    /**
     * @note[short] MacOS (ARM): 0x1a05cc
     * @note[short] MacOS (Intel): 0x667030
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(GJSongType songType);

    /**
     * @note[short] MacOS (ARM): 0x863168
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateFutureCount(cocos2d::CCArray* p0, cocos2d::CCArray* p1, cocos2d::CCArray* p2);

    /**
     * @note[short] MacOS (ARM): 0x5a0af8
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateObjects();
    cocos2d::CCArray* m_filterObjects;
    cocos2d::CCArray* m_tagFilterObjects;
    cocos2d::CCArray* m_artistFilterObjects;
    cocos2d::CCArray* m_viewFilterObjects;
    int m_startIndex;
    int m_audioType;
    std::string m_searchQuery;
    AudioSortType m_sortType;
    bool m_tagFilter;
    bool m_artistFilter;
    bool m_matchAny;
    GJSongType m_songType;
    int m_viewFilter;
    std::vector<int> m_filterIDs;
};
