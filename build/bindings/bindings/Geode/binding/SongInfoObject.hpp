#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJLinkObject.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class SongInfoObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "SongInfoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SongInfoObject, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x480a20
     * @note[short] iOS: 0x1e1e5c
     * @note[short] Android: Rebinded
     */
    virtual  ~SongInfoObject();

    /**
     * @note[short] MacOS (Intel): 0x64c600
     * @note[short] Windows: 0x494330
     * @note[short] Android
     */
    static SongInfoObject* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x59d1c8
     * @note[short] MacOS (Intel): 0x664460
     * @note[short] Windows: 0x4941e0
     * @note[short] Android
     */
    static SongInfoObject* create(int songID);

    /**
     * @note[short] MacOS (ARM): 0x7bdfb4
     * @note[short] Windows: 0x4952a0
     * @note[short] Android
     */
    static SongInfoObject* create(int songID, std::string songName, std::string artistName, int artistID, float fileSize, std::string songUrl, int nongType, std::string extraArtistIDs, bool isNew, int libraryOrder, int priority);

    /**
     * @note[short] Windows: 0x495750
     * @note[short] Android
     */
    static SongInfoObject* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x59e1bc
     * @note[short] MacOS (Intel): 0x665630
     * @note[short] Windows: 0x495f40
     * @note[short] iOS: 0x1e2b94
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x59e338
     * @note[short] MacOS (Intel): 0x6657f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1e2d10
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addArtistLink(GJLinkObject const& link);

    /**
     * @note[short] Windows: 0x4969b0
     * @note[short] Android
     */
    void addSongLink(GJLinkObject const& link);

    /**
     * @note[short] MacOS (ARM): 0x5974cc
     * @note[short] MacOS (Intel): 0x65db90
     * @note[short] Windows: 0x497150
     * @note[short] Android
     */
    void addTags(std::string tags);

    /**
     * @note[short] MacOS (ARM): 0x3a9cd0
     * @note[short] MacOS (Intel): 0x4333e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool containsTag(int tag);

    /**
     * @note[short] MacOS (Intel): 0x8da790
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void copyValues(SongInfoObject* object);

    /**
     * @note[short] Windows: 0x496d80
     * @note[short] Android
     */
    std::vector<GJLinkObject> getArtistLinks();

    /**
     * @note[short] MacOS (ARM): 0x59e340
     * @note[short] MacOS (Intel): 0x665800
     * @note[short] Windows: 0x4962c0
     * @note[short] Android
     */
    std::string getArtistNames(int unused);

    /**
     * @note[short] MacOS (ARM): 0x59e80c
     * @note[short] MacOS (Intel): 0x665e40
     * @note[short] Windows: 0x496750
     * @note[short] Android
     */
    int getExtraArtistCount();

    /**
     * @note[short] Windows: 0x496ad0
     * @note[short] Android
     */
    std::vector<GJLinkObject> getSongLinks();

    /**
     * @note[short] MacOS (ARM): 0x59eee8
     * @note[short] MacOS (Intel): 0x666570
     * @note[short] Windows: 0x497380
     * @note[short] Android
     */
    std::string getTagsString(bool shortTags);

    /**
     * @note[short] MacOS (ARM): 0x1ad718
     * @note[short] Windows: 0x495460
     * @note[short] Android
     */
    bool init(int songID, std::string songName, std::string artistName, int artistID, float fileSize, std::string songUrl, int nongType, std::string extraArtistIDs, bool isNew, int libraryOrder, int priority);

    /**
     * @note[short] Windows: 0x496860
     * @note[short] Android
     */
    void setArtistLinks(std::string const& links);

    /**
     * @note[short] Windows: 0x4967c0
     * @note[short] Android
     */
    void setSongLinks(std::string const& links);

    /**
     * @note[short] MacOS (Intel): 0x664870
     * @note[short] Windows: 0x496120
     * @note[short] Android
     */
    void updateArtists(std::string artists);
    int m_songID;
    std::string m_songName;
    std::string m_artistName;
    std::string m_songUrl;
    int m_artistID;
    float m_fileSize;
    int m_nongType;
    std::string m_extraArtists;
    bool m_unloaded;
    bool m_verified;
    bool m_isBlocked;
    int m_priority;
    int m_duration;
    int m_BPM;
    bool m_isNew;
    int m_libraryOrder;
    int m_songOrder;
    std::string m_extraArtistNames;
    std::unordered_set<int> m_artistIDs;
    std::string m_songLinksString;
    std::string m_artistLinksString;
    std::vector<GJLinkObject> m_songLinks;
    std::vector<GJLinkObject> m_artistLinks;
    std::set<int> m_tags;
    std::string m_longTagsString;
    std::string m_shortTagsString;
    std::string m_songNameLower;
    std::string m_artistNameLower;
};
