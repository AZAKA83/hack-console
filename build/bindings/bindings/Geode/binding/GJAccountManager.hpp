#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJAccountManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJAccountManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJAccountManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3050d0
     * @note[short] iOS: 0x446848
     * @note[short] Android: Rebinded
     */
    virtual  ~GJAccountManager();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GJAccountManager* get();

    /**
     * @note[short] MacOS (ARM): 0x8d410
     * @note[short] MacOS (Intel): 0x9d5a0
     * @note[short] Windows: 0x305170
     * @note[short] iOS: 0x444efc
     * @note[short] Android
     */
    static GJAccountManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x8fb24
     * @note[short] MacOS (Intel): 0xa01b0
     * @note[short] Windows: 0x3057d0
     * @note[short] iOS: 0x446860
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x305810
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addDLToActive(char const* tag, cocos2d::CCObject* object);

    /**
     * @note[short] MacOS (ARM): 0x9116c
     * @note[short] MacOS (Intel): 0xa1800
     * @note[short] Windows: 0x3074d0
     * @note[short] Android
     */
    bool backupAccount(std::string url);

    /**
     * @note[short] MacOS (ARM): 0x923a4
     * @note[short] MacOS (Intel): 0xa2c10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x9234c
     * @note[short] MacOS (Intel): 0xa2bb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x92348
     * @note[short] MacOS (Intel): 0xa2ba0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] Windows: 0x306e70
     * @note[short] Android
     */
    bool getAccountBackupURL();

    /**
     * @note[short] Windows: 0x307ef0
     * @note[short] Android
     */
    bool getAccountSyncURL();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCObject* getDLObject(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x92578
     * @note[short] MacOS (Intel): 0xa2dd0
     * @note[short] Windows: 0x30a0b0
     * @note[short] Android
     */
    std::string getShaPassword(std::string password);

    /**
     * @note[short] Windows: 0x305500
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
     * @note[short] MacOS (ARM): 0x7ff8c0
     * @note[short] Windows: 0x309590
     * @note[short] Android
     */
    void linkToAccount(std::string username, std::string gjp2, int accountID, int userID);

    /**
     * @note[short] MacOS (ARM): 0x905d0
     * @note[short] MacOS (Intel): 0xa0c90
     * @note[short] Windows: 0x3065e0
     * @note[short] Android
     */
    void loginAccount(std::string username, std::string gjp2);

    /**
     * @note[short] MacOS (ARM): 0x8e654
     * @note[short] MacOS (Intel): 0x9ea10
     * @note[short] Windows: 0x307ab0
     * @note[short] Android
     */
    void onBackupAccountCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x8f60c
     * @note[short] MacOS (Intel): 0x9fca0
     * @note[short] Windows: 0x3071e0
     * @note[short] Android
     */
    void onGetAccountBackupURLCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x8f834
     * @note[short] MacOS (Intel): 0x9feb0
     * @note[short] Windows: 0x308260
     * @note[short] Android
     */
    void onGetAccountSyncURLCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x8e2f8
     * @note[short] MacOS (Intel): 0x9e670
     * @note[short] Windows: 0x306a60
     * @note[short] Android
     */
    void onLoginAccountCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onOpenRegisterCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Windows: 0x305400
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x8e1f4
     * @note[short] MacOS (Intel): 0x9e580
     * @note[short] Windows: 0x306190
     * @note[short] Android
     */
    void onRegisterAccountCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x8e900
     * @note[short] MacOS (Intel): 0x9ece0
     * @note[short] Windows: 0x3087e0
     * @note[short] Android
     */
    void onSyncAccountCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x8f540
     * @note[short] MacOS (Intel): 0x9fc00
     * @note[short] Windows: 0x309f40
     * @note[short] Android
     */
    void onUpdateAccountSettingsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: 0x306330
     * @note[short] Android
     */
    TodoReturn openRegister();

    /**
     * @note[short] MacOS (ARM): 0x8d4bc
     * @note[short] MacOS (Intel): 0x9d670
     * @note[short] Windows: 0x3052b0
     * @note[short] Android
     */
    void ProcessHttpRequest(std::string url, std::string params, std::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (Intel): 0x3a7fd0
     * @note[short] Windows: 0x305e50
     * @note[short] Android
     */
    void registerAccount(std::string response, std::string tag, std::string data);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeDLFromActive(char const* tag);

    /**
     * @note[short] Windows: 0x309820
     * @note[short] Android
     */
    TodoReturn showAccountNeededAlert(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x91948
     * @note[short] MacOS (Intel): 0xa20a0
     * @note[short] Windows: 0x308550
     * @note[short] Android
     */
    bool syncAccount(std::string url);

    /**
     * @note[short] MacOS (ARM): 0x91e3c
     * @note[short] MacOS (Intel): 0xa25b0
     * @note[short] Windows: 0x309900
     * @note[short] Android
     */
    void unlinkFromAccount();

    /**
     * @note[short] Windows: 0x309ab0
     * @note[short] Android
     */
    TodoReturn updateAccountSettings(int p0, int p1, int p2, int p3, int p4, std::string p5, std::string p6, std::string p7, std::string p8, std::string p9, std::string p10, std::string p11);
    cocos2d::CCDictionary* m_activeDownloads;
    std::string m_username;
    int m_accountID;
    int m_unkInt1;
    int m_unkInt2;
    std::string m_GJP2;
    GJAccountRegisterDelegate* m_accountRegisterDelegate;
    GJAccountLoginDelegate* m_accountLoginDelegate;
    GJAccountDelegate* m_accountDelegate;
    GJAccountBackupDelegate* m_backupDelegate;
    GJAccountSyncDelegate* m_syncDelegate;
    GJAccountSettingsDelegate* m_accountSettingsDelegate;
    int m_gameManagerSize;
    int m_localLevelsSize;
    std::string m_password;
    std::string m_hash;
};
