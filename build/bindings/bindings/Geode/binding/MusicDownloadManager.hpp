#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCHttpRequest.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/PlatformDownloadDelegate.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class MusicDownloadManager : public cocos2d::CCNode, public PlatformDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "MusicDownloadManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicDownloadManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x482350
     * @note[short] iOS: 0x1d2b8c
     * @note[short] Android: Rebinded
     */
    virtual  ~MusicDownloadManager();

    /**
     * @note[short] MacOS (ARM): 0x584e0c
     * @note[short] MacOS (Intel): 0x649cd0
     * @note[short] Windows: 0x481e60
     * @note[short] Android
     */
    static MusicDownloadManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x586200
     * @note[short] MacOS (Intel): 0x64b320
     * @note[short] Windows: 0x482560
     * @note[short] iOS: 0x1d2ba4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x586e88
     * @note[short] MacOS (Intel): 0x64bfe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag);

    /**
     * @note[short] MacOS (Intel): 0x64f710
     * @note[short] Windows: 0x4842e0
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x586380
     * @note[short] MacOS (Intel): 0x64b4d0
     * @note[short] Windows: 0x482700
     * @note[short] Android
     */
    void addMusicDownloadDelegate(MusicDownloadDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x4c6374
     * @note[short] MacOS (Intel): 0x64c080
     * @note[short] Windows: 0x482dc0
     * @note[short] Android
     */
    SongInfoObject* addSongObjectFromString(std::string str);

    /**
     * @note[short] MacOS (Intel): 0x64ea10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void clearSong(int songID);

    /**
     * @note[short] Android
     */
    void clearSortedMusicCache();

    /**
     * @note[short] MacOS (ARM): 0x589708
     * @note[short] MacOS (Intel): 0x64ebc0
     * @note[short] Windows: 0x483950
     * @note[short] Android
     */
    void clearUnusedSongs();

    /**
     * @note[short] Android
     */
    cocos2d::CCDictionary* createArtistsInfo(std::string str);

    /**
     * @note[short] Android
     */
    TodoReturn createCustomSFXFolder(std::string p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn createCustomSFXPlacement(int p0, int p1, std::string p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x588154
     * @note[short] MacOS (Intel): 0x64d520
     * @note[short] Windows: 0x483140
     * @note[short] Android
     */
    void createSongsInfo(std::string songsStr, std::string artistsStr);

    /**
     * @note[short] Android
     */
    TodoReturn customSFXPathDisplay(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn customSFXPathLeaf(std::string const& p0);

    /**
     * @note[short] Windows: 0x48af10
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] Android
     */
    TodoReturn decodeCustomSFX(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn decodeCustomSFXMappingEntries(std::string const& p0, std::map<std::pair<int, int>, std::string>& p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn deleteCustomSFXObject(int p0);

    /**
     * @note[short] MacOS (ARM): 0x59a3fc
     * @note[short] MacOS (Intel): 0x660fc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deleteSFX(int id);

    /**
     * @note[short] MacOS (ARM): 0x5894b4
     * @note[short] MacOS (Intel): 0x64e9c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deleteSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x589bf4
     * @note[short] MacOS (Intel): 0x64f120
     * @note[short] Windows: 0x48c430
     * @note[short] Android
     */
    void downloadCustomSong(int id);

    /**
     * @note[short] Windows: 0x48ca90
     * @note[short] Android
     */
    void downloadMusicLibrary();

    /**
     * @note[short] Windows: 0x491b40
     * @note[short] Android
     */
    TodoReturn downloadNewsFeed();

    /**
     * @note[short] Windows: 0x493650
     * @note[short] Android
     */
    TodoReturn downloadNewsImage(std::string p0);

    /**
     * @note[short] MacOS (ARM): 0x598410
     * @note[short] MacOS (Intel): 0x65ec30
     * @note[short] Windows: 0x48f030
     * @note[short] Android
     */
    void downloadSFX(int id);

    /**
     * @note[short] MacOS (ARM): 0x598920
     * @note[short] MacOS (Intel): 0x65f170
     * @note[short] Windows: 0x493fb0
     * @note[short] Android
     */
    void downloadSFXFailed(int id, GJSongError errorCode);

    /**
     * @note[short] MacOS (ARM): 0x593064
     * @note[short] MacOS (Intel): 0x65f1e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void downloadSFXFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x598d50
     * @note[short] MacOS (Intel): 0x65f590
     * @note[short] Windows: 0x48f820
     * @note[short] Android
     */
    void downloadSFXLibrary();

    /**
     * @note[short] MacOS (ARM): 0x589850
     * @note[short] MacOS (Intel): 0x64ed20
     * @note[short] Windows: 0x483ce0
     * @note[short] Android
     */
    void downloadSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x58a298
     * @note[short] MacOS (Intel): 0x64f800
     * @note[short] Windows: 0x493f30
     * @note[short] Android
     */
    void downloadSongFailed(int id, GJSongError errorCode);

    /**
     * @note[short] MacOS (ARM): 0x58a30c
     * @note[short] MacOS (Intel): 0x64f870
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void downloadSongFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x5897d8
     * @note[short] MacOS (Intel): 0x64eca0
     * @note[short] Windows: 0x483c60
     * @note[short] Android
     */
    void downloadSongStarted(int id);

    /**
     * @note[short] Windows: 0x48a310
     * @note[short] Android
     */
    TodoReturn encodeCustomSFX(std::set<int> const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn encodeCustomSFXMappingEntries(std::map<std::pair<int, int>, std::string> const& p0);

    /**
     * @note[short] MacOS (ARM): 0x7ee990
     * @note[short] MacOS (Intel): 0xa2bb0
     * @note[short] Windows: 0x48a970
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] Windows: 0x489310
     * @note[short] Android
     */
    TodoReturn exportCustomSFXToFile();

    /**
     * @note[short] MacOS (ARM): 0x598098
     * @note[short] MacOS (Intel): 0x65e800
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    cocos2d::CCArray* filterMusicByArtistID(int id, cocos2d::CCArray* songs);

    /**
     * @note[short] MacOS (ARM): 0x5981f0
     * @note[short] MacOS (Intel): 0x65ea20
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    cocos2d::CCArray* filterMusicByTag(int id, cocos2d::CCArray* songs);

    /**
     * @note[short] MacOS (ARM): 0x59157c
     * @note[short] MacOS (Intel): 0x657250
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x5938c0
     * @note[short] MacOS (Intel): 0x659690
     * @note[short] Windows: 0x490c20
     * @note[short] Android
     */
    std::string generateCustomContentURL(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x5862d4
     * @note[short] MacOS (Intel): 0x64b410
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void generateResourceAssetList();

    /**
     * @note[short] MacOS (ARM): 0x597f8c
     * @note[short] MacOS (Intel): 0x65e6e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getAllMusicArtists(OptionsObjectDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x597b7c
     * @note[short] MacOS (Intel): 0x65e2b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getAllMusicObjects(GJSongType type);

    /**
     * @note[short] Android
     */
    TodoReturn getAllMusicObjectsSorted(GJSongType p0, AudioSortType p1);

    /**
     * @note[short] MacOS (ARM): 0x597e38
     * @note[short] MacOS (Intel): 0x65e580
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getAllMusicTags(OptionsObjectDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x59a354
     * @note[short] MacOS (Intel): 0x660f00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSFXObjects(bool onlySFX);

    /**
     * @note[short] MacOS (ARM): 0x589330
     * @note[short] MacOS (Intel): 0x64e820
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSongs();

    /**
     * @note[short] Windows: 0x48be10
     * @note[short] Android
     */
    TodoReturn getAudioFilesize(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x592e78
     * @note[short] MacOS (Intel): 0x658c50
     * @note[short] Windows: 0x48b630
     * @note[short] Android
     */
    void getCustomContentURL();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXCount(std::set<int> const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXFolderForID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXFolderPath(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXLocationText(SFXInfoObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXObject(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXRawPath(SFXInfoObject* p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXRoot();

    /**
     * @note[short] MacOS (Intel): 0x64b770
     * @note[short] Windows: 0x3c560
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x58902c
     * @note[short] MacOS (Intel): 0x64e4d0
     * @note[short] Windows: 0x483890
     * @note[short] Android
     */
    cocos2d::CCArray* getDownloadedSongs();

    /**
     * @note[short] MacOS (ARM): 0x58a378
     * @note[short] MacOS (Intel): 0x64f8e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getDownloadProgress(int id);

    /**
     * @note[short] MacOS (ARM): 0x597b68
     * @note[short] MacOS (Intel): 0x652640
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    MusicArtistObject* getMusicArtistForID(int id);

    /**
     * @note[short] MacOS (ARM): 0x58a460
     * @note[short] MacOS (Intel): 0x64f9a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    SongInfoObject* getMusicObject(int id);

    /**
     * @note[short] Android
     */
    TodoReturn getNewsImageDownloadKey(std::string p0);

    /**
     * @note[short] MacOS (ARM): 0x58a438
     * @note[short] MacOS (Intel): 0x64f980
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getSFXDownloadKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x58a3d8
     * @note[short] MacOS (Intel): 0x64f930
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getSFXDownloadProgress(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    SFXFolderObject* getSFXFolderObjectForID(int id);

    /**
     * @note[short] Android
     */
    std::string getSFXFolderPathForID(int id, bool nextFolder);

    /**
     * @note[short] MacOS (ARM): 0x597b68
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    SFXInfoObject* getSFXObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x5865c0
     * @note[short] MacOS (Intel): 0x64b700
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getSongDownloadKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x586a14
     * @note[short] MacOS (Intel): 0x64bb20
     * @note[short] Windows: 0x482950
     * @note[short] Android
     */
    void getSongInfo(int id, bool download);

    /**
     * @note[short] MacOS (ARM): 0x586598
     * @note[short] MacOS (Intel): 0x64b6e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    char const* getSongInfoKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x5868d0
     * @note[short] MacOS (Intel): 0x64b9c0
     * @note[short] Windows: 0x484480
     * @note[short] Android
     */
    SongInfoObject* getSongInfoObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x586a00
     * @note[short] MacOS (Intel): 0x64bb00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getSongPriority();

    /**
     * @note[short] Windows: 0x482210
     * @note[short] Android
     */
    void handleIt(bool success, std::string response, std::string tag, GJHttpType type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleItDelayed(bool success, std::string response, std::string tag, GJHttpType type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* node, void* data);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool hasUnreadNews();

    /**
     * @note[short] Windows: 0x489620
     * @note[short] Android
     */
    TodoReturn importCustomSFXFromFile(std::string& p0, int& p1, int& p2);

    /**
     * @note[short] Android
     */
    TodoReturn importCustomSFXMappings(std::map<std::pair<int, int>, std::string> const& p0, std::string const& p1, int& p2, int& p3);

    /**
     * @note[short] Android
     */
    TodoReturn importCustomSFXSetup(std::string const& p0, std::string const& p1, bool p2, int& p3, int& p4);

    /**
     * @note[short] MacOS (ARM): 0x58689c
     * @note[short] MacOS (Intel): 0x64b990
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementPriorityForSong(int id);

    /**
     * @note[short] Android
     */
    bool isCustomSFXFavorite(int p0);

    /**
     * @note[short] Android
     */
    bool isCustomSFXInScope(SFXInfoObject* p0, std::set<int> const& p1);

    /**
     * @note[short] MacOS (ARM): 0x58657c
     * @note[short] MacOS (Intel): 0x64b6c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] Android
     */
    bool isMusicFavorite(int p0);

    /**
     * @note[short] MacOS (ARM): 0x596454
     * @note[short] MacOS (Intel): 0x65cb50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isMusicLibraryLoaded();

    /**
     * @note[short] Android
     */
    bool isNewsFeedLoaded();

    /**
     * @note[short] Android
     */
    bool isNewsImageDownloaded(std::string p0);

    /**
     * @note[short] MacOS (ARM): 0x58a9a8
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isResourceSFX(int id);

    /**
     * @note[short] MacOS (ARM): 0x58a474
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isResourceSong(int id);

    /**
     * @note[short] MacOS (ARM): 0x5864f4
     * @note[short] MacOS (Intel): 0x64b650
     * @note[short] Windows: 0x482870
     * @note[short] Android
     */
    bool isRunningActionForSongID(int id);

    /**
     * @note[short] MacOS (ARM): 0x58a73c
     * @note[short] MacOS (Intel): 0x64fd60
     * @note[short] Windows: 0x4848e0
     * @note[short] Android
     */
    bool isSFXDownloaded(int id);

    /**
     * @note[short] Android
     */
    bool isSFXFavorite(int p0);

    /**
     * @note[short] MacOS (ARM): 0x599fdc
     * @note[short] MacOS (Intel): 0x660b80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSFXLibraryLoaded();

    /**
     * @note[short] MacOS (ARM): 0x5890c4
     * @note[short] MacOS (Intel): 0x64e570
     * @note[short] Windows: 0x4845a0
     * @note[short] Android
     */
    bool isSongDownloaded(int id);

    /**
     * @note[short] Android
     */
    TodoReturn joinIDString(std::vector<int> const& p0);

    /**
     * @note[short] MacOS (ARM): 0x589380
     * @note[short] MacOS (Intel): 0x64e880
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void limitDownloadedSongs();

    /**
     * @note[short] Android
     */
    TodoReturn linkRowString(GJLinkObject const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn linkTitleForType(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn linkTypeForURL(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x586eb8
     * @note[short] MacOS (Intel): 0x64c010
     * @note[short] Windows: 0x493eb0
     * @note[short] Android
     */
    void loadSongInfoFailed(int id, GJSongError errorCode);

    /**
     * @note[short] MacOS (ARM): 0x586e1c
     * @note[short] MacOS (Intel): 0x64bf70
     * @note[short] Windows: 0x493e30
     * @note[short] Android
     */
    void loadSongInfoFinished(SongInfoObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn mintCustomSFXID();

    /**
     * @note[short] Android
     */
    TodoReturn moveCustomSFXObject(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x592ff8
     * @note[short] MacOS (Intel): 0x658dc0
     * @note[short] Windows: 0x4940b0
     * @note[short] Android
     */
    void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] Windows: 0x494030
     * @note[short] Android
     */
    void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x5982c4
     * @note[short] MacOS (Intel): 0x65eb00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string nameForTagID(int id);

    /**
     * @note[short] Android
     */
    TodoReturn newsImageDownloaded(std::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn newsImageFailed(std::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn noteSFXUsed(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn noteSongUsed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x594428
     * @note[short] MacOS (Intel): 0x65a3c0
     * @note[short] Windows: 0x48cd40
     * @note[short] Android
     */
    void onDownloadMusicLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] Android
     */
    TodoReturn onDownloadNewsFeedCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] Android
     */
    TodoReturn onDownloadNewsImageCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] MacOS (ARM): 0x5986e8
     * @note[short] Windows: 0x48f2b0
     * @note[short] Android
     */
    void onDownloadSFXCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x598f2c
     * @note[short] MacOS (Intel): 0x65f740
     * @note[short] Windows: 0x48fa90
     * @note[short] Android
     */
    void onDownloadSFXLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x589f20
     * @note[short] Windows: 0x484030
     * @note[short] Android
     */
    void onDownloadSongCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] Windows: 0x48c1c0
     * @note[short] Android
     */
    TodoReturn onGetAudioFilesizeCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x585b6c
     * @note[short] MacOS (Intel): 0x64ab50
     * @note[short] Windows: 0x48b8c0
     * @note[short] Android
     */
    void onGetCustomContentURLCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x5858dc
     * @note[short] MacOS (Intel): 0x64a8b0
     * @note[short] Windows: 0x482c30
     * @note[short] Android
     */
    void onGetSongInfoCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: 0x482110
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] Windows: 0x48c950
     * @note[short] Android
     */
    void onTryUpdateMusicLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] Windows: 0x491a00
     * @note[short] Android
     */
    TodoReturn onTryUpdateNewsFeedCompleted(cocos2d::extension::CCHttpClient* p0, cocos2d::extension::CCHttpResponse* p1);

    /**
     * @note[short] Windows: 0x48f6d0
     * @note[short] Android
     */
    void onTryUpdateSFXLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] Android
     */
    TodoReturn parseLinkRows(std::string const& p0, std::vector<GJLinkObject>& p1);

    /**
     * @note[short] MacOS (ARM): 0x5990fc
     * @note[short] Windows: 0x48cf00
     * @note[short] Android
     */
    void parseMusicLibrary();

    /**
     * @note[short] Windows: 0x492170
     * @note[short] Android
     */
    TodoReturn parseNewsFeed();

    /**
     * @note[short] Windows: 0x48fc30
     * @note[short] Android
     */
    void parseSFXLibrary();

    /**
     * @note[short] Android
     */
    TodoReturn pathForNewsFolder();

    /**
     * @note[short] Android
     */
    TodoReturn pathForNewsImage(std::string p0);

    /**
     * @note[short] MacOS (ARM): 0x58aa8c
     * @note[short] MacOS (Intel): 0x650150
     * @note[short] Windows: 0x484b70
     * @note[short] Android
     */
    std::string pathForSFX(int id);

    /**
     * @note[short] Windows: 0x484a20
     * @note[short] Android
     */
    std::string pathForSFXFolder(int id);

    /**
     * @note[short] MacOS (ARM): 0x58961c
     * @note[short] MacOS (Intel): 0x64eb00
     * @note[short] Windows: 0x484830
     * @note[short] Android
     */
    std::string pathForSong(int id);

    /**
     * @note[short] Windows: 0x4846e0
     * @note[short] Android
     */
    std::string pathForSongFolder(int id);

    /**
     * @note[short] MacOS (ARM): 0x58526c
     * @note[short] MacOS (Intel): 0x5b3c50
     * @note[short] Windows: 0x481ff0
     * @note[short] Android
     */
    cocos2d::extension::CCHttpRequest* ProcessHttpGetRequest(std::string url, std::string tag, cocos2d::extension::SEL_HttpResponse selector, int connectTimeout, int readTimeout);

    /**
     * @note[short] MacOS (ARM): 0x584f3c
     * @note[short] MacOS (Intel): 0x649ec0
     * @note[short] Windows: 0x481eb0
     * @note[short] Android
     */
    void ProcessHttpRequest(std::string url, std::string params, std::string tag, GJHttpType type);

    /**
     * @note[short] Android
     */
    TodoReturn rebuildCustomSFXMappings(std::vector<std::pair<int, int>> const& p0, std::map<std::pair<int, int>, std::string>& p1, std::set<int> const* p2);

    /**
     * @note[short] MacOS (ARM): 0x586748
     * @note[short] MacOS (Intel): 0x64b850
     * @note[short] Windows: 0x4843c0
     * @note[short] Android
     */
    void removeDLFromActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x586474
     * @note[short] MacOS (Intel): 0x64b5c0
     * @note[short] Windows: 0x4827e0
     * @note[short] Android
     */
    void removeMusicDownloadDelegate(MusicDownloadDelegate* delegate);

    /**
     * @note[short] Android
     */
    TodoReturn renameCustomSFXObject(int p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn resolveSFXPlacement(int p0, int p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): 0x5871cc
     * @note[short] MacOS (Intel): 0x64c320
     * @note[short] Windows: 0x4835e0
     * @note[short] Android
     */
    cocos2d::CCDictionary* responseToDict(std::string response, char const* delimiter);

    /**
     * @note[short] MacOS (ARM): 0x58ad54
     * @note[short] MacOS (Intel): 0x650470
     * @note[short] Windows: 0x484c30
     * @note[short] Android
     */
    void showTOS(FLAlertLayerProtocol* delegate);

    /**
     * @note[short] MacOS (ARM): 0x586840
     * @note[short] MacOS (Intel): 0x64b930
     * @note[short] Windows: 0x4828f0
     * @note[short] Android
     */
    void songStateChanged();

    /**
     * @note[short] Android
     */
    TodoReturn splitIDString(std::string const& p0, std::vector<int>& p1);

    /**
     * @note[short] MacOS (ARM): 0x5865e8
     * @note[short] MacOS (Intel): 0x64b720
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopDownload(int id);

    /**
     * @note[short] MacOS (Intel): 0x65ddb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeMusicObject(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x59a000
     * @note[short] MacOS (Intel): 0x660ba0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void storeSFXInfoObject(SFXInfoObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn sumLocalAudioSizeBytes(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn syncCustomSFXPlacements();

    /**
     * @note[short] Android
     */
    TodoReturn toggleCustomSFXFavorite(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleMusicFavorite(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleSFXFavorite(int p0);

    /**
     * @note[short] MacOS (ARM): 0x59a0e4
     * @note[short] MacOS (Intel): 0x660c80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void tryLoadLibraries();

    /**
     * @note[short] Android
     */
    TodoReturn tryLoadNewsFeed();

    /**
     * @note[short] MacOS (ARM): 0x593ed8
     * @note[short] MacOS (Intel): 0x659e90
     * @note[short] Windows: 0x48c6b0
     * @note[short] Android
     */
    void tryUpdateMusicLibrary();

    /**
     * @note[short] Windows: 0x491720
     * @note[short] Android
     */
    void tryUpdateNewsFeed();

    /**
     * @note[short] Windows: 0x48f410
     * @note[short] Android
     */
    void tryUpdateSFXLibrary();

    /**
     * @note[short] Android
     */
    std::string urlEncode(std::string const& p0);
    cocos2d::CCDictionary* m_activeDownloads;
    cocos2d::CCArray* m_musicDownloadDelegates;
    cocos2d::CCDictionary* m_songObjects;
    cocos2d::CCDictionary* m_MDLM003;
    int m_songPriority;
    std::string m_customContentURL;
    cocos2d::CCDictionary* m_sfxObjects;
    cocos2d::CCArray* m_sfxArtists;
    cocos2d::CCObject* m_unk1a0;
    cocos2d::CCObject* m_unk1a8;
    int m_sfxLibraryVersion;
    int m_sfxObjectCount;
    bool m_requestedSfxLibraryDownloaded;
    cocos2d::CCDictionary* m_musicObjects;
    cocos2d::CCDictionary* m_musicArtists;
    cocos2d::CCObject* m_unk1d0;
    std::map<int, std::string> m_musicTags;
    std::map<int, cocos2d::CCArray*> m_sortedMusicCache;
    int m_musicLibraryVersion;
    int m_musicObjectCount;
    int m_ncsSongCount;
    bool m_downloadingMusicLibrary;
    bool m_triedToLoadLibraries;
    bool m_unkBool;
    std::unordered_set<int> m_resourceSfxUnorderedSet;
    std::unordered_set<int> m_resourceSongUnorderedSet;
    std::unordered_set<int> m_unk288;
    std::unordered_set<int> m_unk2c8;
    std::unordered_set<int> m_unk308;
    std::vector<int> m_unk348;
    std::vector<int> m_unk360;
    std::set<int> m_unk378;
    std::set<int> m_unk388;
    cocos2d::CCObject* m_unk398;
    GEODE_PAD(36);
    int m_newsPages;
    GEODE_PAD(8);
    bool m_updatingNewsFeed;
    bool m_unkBool2;
    bool m_requestedNewsFeedUpdate;
    int m_unkInt5;
};
