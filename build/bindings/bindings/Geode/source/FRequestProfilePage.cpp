
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FRequestProfilePage.hpp>

using namespace geode;
using namespace geode::modifier;

#if !defined(GEODE_WRAP_FUNCTION)
#define GEODE_WRAP_FUNCTION
template <class F>
static auto wrapFunction(uintptr_t address, tulip::hook::TulipConvention convention) {
	auto wrapped = geode::hook::createWrapper(reinterpret_cast<void*>(address), tulip::hook::WrapperMetadata{
		.m_convention = geode::hook::createConvention(convention),
		.m_abstract = tulip::hook::AbstractFunction::from(F(nullptr)),
	});
	if (wrapped.isErr()) {
		throw std::runtime_error(wrapped.unwrapErr());
	}
	return wrapped.unwrap();
}
#endif

FRequestProfilePage::~FRequestProfilePage() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(FRequestProfilePage*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x20f240, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) FRequestProfilePage(geode::CutoffConstructor, sizeof(FRequestProfilePage));
		geode::DestructorLock::addLock(this);
	}
}

auto FRequestProfilePage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FRequestProfilePage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(FRequestProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FRequestProfilePage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FRequestProfilePage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(FRequestProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x211f10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FRequestProfilePage::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&FRequestProfilePage::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(FRequestProfilePage*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2119f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto FRequestProfilePage::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&FRequestProfilePage::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(FRequestProfilePage*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x211f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto FRequestProfilePage::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&FRequestProfilePage::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(FRequestProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x211f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto FRequestProfilePage::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&FRequestProfilePage::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(FRequestProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto FRequestProfilePage::loadFRequestsFinished(cocos2d::CCArray* scores, char const* key) -> decltype(loadFRequestsFinished(scores, key)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*>::func(&FRequestProfilePage::loadFRequestsFinished), this);
	using FunctionType = decltype(loadFRequestsFinished(scores, key))(*)(FRequestProfilePage*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scores, key);
}

auto FRequestProfilePage::loadFRequestsFailed(char const* key, GJErrorCode errorType) -> decltype(loadFRequestsFailed(key, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, GJErrorCode>::func(&FRequestProfilePage::loadFRequestsFailed), this);
	using FunctionType = decltype(loadFRequestsFailed(key, errorType))(*)(FRequestProfilePage*, char const*, GJErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, errorType);
}

auto FRequestProfilePage::setupPageInfo(std::string info, char const* key) -> decltype(setupPageInfo(info, key)) {
	auto self = addresser::thunkAdjust(Resolve<std::string, char const*>::func(&FRequestProfilePage::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(info, key))(*)(FRequestProfilePage*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, info, key);
}

auto FRequestProfilePage::forceReloadRequests(bool sent) -> decltype(forceReloadRequests(sent)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&FRequestProfilePage::forceReloadRequests), this);
	using FunctionType = decltype(forceReloadRequests(sent))(*)(FRequestProfilePage*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sent);
}

auto FRequestProfilePage::getUserListFinished(cocos2d::CCArray* p0, UserListType p1) -> decltype(getUserListFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, UserListType>::func(&FRequestProfilePage::getUserListFinished), this);
	using FunctionType = decltype(getUserListFinished(p0, p1))(*)(FRequestProfilePage*, cocos2d::CCArray*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x210c80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FRequestProfilePage::getUserListFailed(UserListType p0, GJErrorCode p1) -> decltype(getUserListFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<UserListType, GJErrorCode>::func(&FRequestProfilePage::getUserListFailed), this);
	using FunctionType = decltype(getUserListFailed(p0, p1))(*)(FRequestProfilePage*, UserListType, GJErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x210d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FRequestProfilePage::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&FRequestProfilePage::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(FRequestProfilePage*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FRequestProfilePage::deleteSelected() -> decltype(deleteSelected()) {
	using FunctionType = decltype(deleteSelected())(*)(FRequestProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x211400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FRequestProfilePage::init(bool sent) -> decltype(init(sent)) {
	using FunctionType = decltype(init(sent))(*)(FRequestProfilePage*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20f420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sent);
}

auto FRequestProfilePage::isCorrect(char const* key) -> decltype(isCorrect(key)) {
	using FunctionType = decltype(isCorrect(key))(*)(FRequestProfilePage*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2121b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto FRequestProfilePage::loadPage(int page) -> decltype(loadPage(page)) {
	using FunctionType = decltype(loadPage(page))(*)(FRequestProfilePage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2122f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto FRequestProfilePage::onDeleteSelected(cocos2d::CCObject* sender) -> decltype(onDeleteSelected(sender)) {
	using FunctionType = decltype(onDeleteSelected(sender))(*)(FRequestProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x210fe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FRequestProfilePage::onMarkRead(cocos2d::CCObject* sender) -> decltype(onMarkRead(sender)) {
	using FunctionType = decltype(onMarkRead(sender))(*)(FRequestProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2116b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FRequestProfilePage::onSelectMode(cocos2d::CCObject* sender) -> decltype(onSelectMode(sender)) {
	using FunctionType = decltype(onSelectMode(sender))(*)(FRequestProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x211a20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FRequestProfilePage::selectedCount() -> decltype(selectedCount()) {
	using FunctionType = decltype(selectedCount())(*)(FRequestProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2102f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FRequestProfilePage::setupCommentsBrowser(cocos2d::CCArray* scores) -> decltype(setupCommentsBrowser(scores)) {
	using FunctionType = decltype(setupCommentsBrowser(scores))(*)(FRequestProfilePage*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x212a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, scores);
}

auto FRequestProfilePage::untoggleAll() -> decltype(untoggleAll()) {
	using FunctionType = decltype(untoggleAll())(*)(FRequestProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x211e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FRequestProfilePage::updateModeButtons() -> decltype(updateModeButtons()) {
	using FunctionType = decltype(updateModeButtons())(*)(FRequestProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x211b40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FRequestProfilePage::updateSelectUI() -> decltype(updateSelectUI()) {
	using FunctionType = decltype(updateSelectUI())(*)(FRequestProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2103a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
