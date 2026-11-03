#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/IDNameBrowserDelegate.hpp>
#include <Geode/binding/DropdownListPopupOwner.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/vector.hpp>

class IDNameInput : public cocos2d::CCNode, public TextInputDelegate, public IDNameBrowserDelegate, public DropdownListPopupOwner {
public:
    static constexpr auto CLASS_NAME = "IDNameInput";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(IDNameInput, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x7f8a44
     * @note[short] MacOS (Intel): 0x9132b0
     * @note[short] Windows: 0x3c72b0
     * @note[short] iOS: 0x4e6c60
     * @note[short] Android: Rebinded
     */
    virtual  ~IDNameInput();

    /**
     * @note[short] Android
     */
    static IDNameInput* create(FLAlertLayer* p0, TextInputDelegate* p1, int p2, int p3, std::string const& p4, cocos2d::CCPoint p5, float p6, int p7, int p8, int p9, bool p10);

    /**
     * @note[short] MacOS (ARM): 0x7fa310
     * @note[short] MacOS (Intel): 0x914d90
     * @note[short] Windows: 0x3c9640
     * @note[short] iOS: 0x4e7f44
     * @note[short] Android
     */
    virtual void idNameBrowserClosed(IDNameBrowserPopup* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x7fb3e8
     * @note[short] MacOS (Intel): 0x916040
     * @note[short] Windows: 0x3cabe0
     * @note[short] iOS: 0x4e89d0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7fb75c
     * @note[short] MacOS (Intel): 0x916330
     * @note[short] Windows: 0x3cafc0
     * @note[short] iOS: 0x4e8bec
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7fb530
     * @note[short] MacOS (Intel): 0x916180
     * @note[short] Windows: 0x3cada0
     * @note[short] iOS: 0x4e8ab8
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7fb78c
     * @note[short] MacOS (Intel): 0x916370
     * @note[short] Windows: 0x3cafe0
     * @note[short] iOS: 0x4e8c1c
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x7fb7bc
     * @note[short] MacOS (Intel): 0x9163b0
     * @note[short] Windows: 0x3cb000
     * @note[short] iOS: 0x4e8c4c
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7fb7ec
     * @note[short] MacOS (Intel): 0x9163f0
     * @note[short] Windows: 0x3cb020
     * @note[short] iOS: 0x4e8c7c
     * @note[short] Android
     */
    virtual bool allowTextInput(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7fb824
     * @note[short] MacOS (Intel): 0x916430
     * @note[short] Windows: 0x3cb040
     * @note[short] iOS: 0x4e8cb4
     * @note[short] Android
     */
    virtual void enterPressed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7fb854
     * @note[short] MacOS (Intel): 0x916470
     * @note[short] Windows: 0x3cb140
     * @note[short] iOS: 0x4e8ce4
     * @note[short] Android
     */
    virtual void dropdownListPopupClosed(DropdownListPopup* p0);

    /**
     * @note[short] Android
     */
    TodoReturn collectMatches(std::string const& p0, std::vector<DropdownListRow>& p1);

    /**
     * @note[short] Android
     */
    TodoReturn commitID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn commitTypedName();

    /**
     * @note[short] Android
     */
    TodoReturn dismissAutocomplete();

    /**
     * @note[short] Android
     */
    TodoReturn idNameTypeForItemValueType(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn initCore(FLAlertLayer* p0, TextInputDelegate* p1, int p2, int p3, std::string const& p4, cocos2d::CCPoint p5, float p6, int p7, int p8, int p9, bool p10);

    /**
     * @note[short] Android
     */
    TodoReturn nameLess(std::string const& p0, int p1, std::string const& p2, int p3);

    /**
     * @note[short] Windows: 0x3c8ad0
     * @note[short] Android
     */
    void onArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c8ae0
     * @note[short] Android
     */
    void onArrowRight(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3cb060
     * @note[short] Android
     */
    void onAutocompleteRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c8af0
     * @note[short] Android
     */
    void onBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c8dd0
     * @note[short] Android
     */
    void onNextFree(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshLabel();

    /**
     * @note[short] Android
     */
    TodoReturn revertToLastID();

    /**
     * @note[short] Android
     */
    void setType(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn stepArrow(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn textIsPureInt(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateAutocomplete();

    /**
     * @note[short] Android
     */
    TodoReturn useRank(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn useRankLess(std::unordered_map<int, int> const& p0, int p1, int p2);
};
