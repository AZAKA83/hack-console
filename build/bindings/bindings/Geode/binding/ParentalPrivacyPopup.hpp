#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/UploadActionPopup.hpp>
#include <Geode/binding/GJAccountSettingsDelegate.hpp>
#include <Geode/binding/UserInfoDelegate.hpp>

class ParentalPrivacyPopup : public UploadActionPopup, public GJAccountSettingsDelegate, public UserInfoDelegate {
public:
    static constexpr auto CLASS_NAME = "ParentalPrivacyPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParentalPrivacyPopup, UploadActionPopup)

    /**
     * @note[short] Windows: 0x4cac00
     * @note[short] iOS: 0x1186e4
     * @note[short] Android: Rebinded
     */
    virtual  ~ParentalPrivacyPopup();

    /**
     * @note[short] Windows: 0x4d4010
     * @note[short] Android
     */
    static ParentalPrivacyPopup* create(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x77c578
     * @note[short] MacOS (Intel): 0x887ad0
     * @note[short] Windows: 0x4d55b0
     * @note[short] iOS: 0x118d90
     * @note[short] Android
     */
    virtual void getUserInfoFinished(GJUserScore* p0);

    /**
     * @note[short] MacOS (ARM): 0x77c698
     * @note[short] MacOS (Intel): 0x887bd0
     * @note[short] Windows: 0x4d5670
     * @note[short] iOS: 0x118e10
     * @note[short] Android
     */
    virtual void getUserInfoFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x77c7a0
     * @note[short] MacOS (Intel): 0x887c90
     * @note[short] Windows: 0x4d5720
     * @note[short] iOS: 0x118e84
     * @note[short] Android
     */
    virtual void updateSettingsFinished();

    /**
     * @note[short] MacOS (ARM): 0x77c974
     * @note[short] MacOS (Intel): 0x887ec0
     * @note[short] Windows: 0x4d5eb0
     * @note[short] iOS: 0x119010
     * @note[short] Android
     */
    virtual void updateSettingsFailed();

    /**
     * @note[short] Android
     */
    TodoReturn checkPending();

    /**
     * @note[short] Android
     */
    bool init(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn snapshotIsForOtherAccount();

    /**
     * @note[short] Android
     */
    TodoReturn startWithScore(GJUserScore* p0);
};
