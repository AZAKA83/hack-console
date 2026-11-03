#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJMultiplayerManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMultiplayerManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMultiplayerManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x390190
     * @note[short] iOS: 0x267040
     * @note[short] Android: Rebinded
     */
    virtual  ~GJMultiplayerManager();

    /**
     * @note[short] MacOS (ARM): 0x645f40
     * @note[short] MacOS (Intel): 0x7381a0
     * @note[short] Windows: 0x390230
     * @note[short] Android
     */
    static GJMultiplayerManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x647550
     * @note[short] MacOS (Intel): 0x739920
     * @note[short] Windows: 0x390990
     * @note[short] iOS: 0x267058
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x648228
     * @note[short] MacOS (Intel): 0x73a550
     * @note[short] Windows: 0x3919d0
     * @note[short] Android
     */
    void addComment(std::string str, int lobbyID);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x648eb4
     * @note[short] MacOS (Intel): 0x73b3d0
     * @note[short] Windows: 0x3917d0
     * @note[short] Android
     */
    void createAndAddComment(std::string text, int lobbyID);

    /**
     * @note[short] MacOS (ARM): 0x64906c
     * @note[short] MacOS (Intel): 0x73b5a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x649068
     * @note[short] MacOS (Intel): 0x73b590
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x648428
     * @note[short] MacOS (Intel): 0x73a760
     * @note[short] Android
     */
    bool exitLobby(int id);

    /**
     * @note[short] MacOS (ARM): 0x649064
     * @note[short] MacOS (Intel): 0x73b580
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x647c48
     * @note[short] MacOS (Intel): 0x73a010
     * @note[short] Windows: 0x391b90
     * @note[short] Android
     */
    std::string getBasePostString();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x647d50
     * @note[short] MacOS (Intel): 0x73a100
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getLastCommentIDForGame(int id);

    /**
     * @note[short] MacOS (ARM): 0x4db398
     * @note[short] Windows: 0x3906f0
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
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x6478f4
     * @note[short] MacOS (Intel): 0x576fc0
     * @note[short] Android
     */
    bool joinLobby(int id);

    /**
     * @note[short] MacOS (ARM): 0x6472e8
     * @note[short] MacOS (Intel): 0x7396c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onExitLobbyCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x646acc
     * @note[short] MacOS (Intel): 0x738d90
     * @note[short] Windows: 0x390ad0
     * @note[short] Android
     */
    void onJoinLobbyCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: 0x3905f0
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x6473e8
     * @note[short] MacOS (Intel): 0x7397a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onUploadCommentCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4c1a48
     * @note[short] MacOS (Intel): 0x738220
     * @note[short] Windows: 0x3902e0
     * @note[short] Android
     */
    void ProcessHttpRequest(std::string url, std::string params, std::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0x6477fc
     * @note[short] MacOS (Intel): 0xa0410
     * @note[short] Windows: 0x390a10
     * @note[short] Android
     */
    void removeDLFromActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x6486f8
     * @note[short] MacOS (Intel): 0x73aa40
     * @note[short] Windows: 0x391240
     * @note[short] Android
     */
    bool uploadComment(std::string text, int lobbyID);
    cocos2d::CCDictionary* m_activeDownloads;
    cocos2d::CCDictionary* m_lobbyScores;
    cocos2d::CCDictionary* m_scoreArrays;
    cocos2d::CCDictionary* m_lobbyComments;
    GJMPDelegate* m_mpDelegate;
    UploadActionDelegate* m_uploadDelegate;
};
