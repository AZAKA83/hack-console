
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelBrowserLayer.hpp>

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

LevelBrowserLayer::LevelBrowserLayer() : LevelBrowserLayer(geode::CutoffConstructor, sizeof(LevelBrowserLayer)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	LevelBrowserLayer::~LevelBrowserLayer();

	using FunctionType = void(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e1b10, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

LevelBrowserLayer::~LevelBrowserLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelBrowserLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3e1d20, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelBrowserLayer(geode::CutoffConstructor, sizeof(LevelBrowserLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelBrowserLayer::create(GJSearchObject* object) -> decltype(create(object)) {
	using FunctionType = decltype(create(object))(*)(GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e1f90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object);
}

auto LevelBrowserLayer::scene(GJSearchObject* object) -> decltype(scene(object)) {
	using FunctionType = decltype(scene(object))(*)(GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e1f40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object);
}

auto LevelBrowserLayer::onEnter() -> decltype(onEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBrowserLayer::onEnter), this);
	using FunctionType = decltype(onEnter())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3eaa60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBrowserLayer::onEnterTransitionDidFinish() -> decltype(onEnterTransitionDidFinish()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBrowserLayer::onEnterTransitionDidFinish), this);
	using FunctionType = decltype(onEnterTransitionDidFinish())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3533a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBrowserLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBrowserLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3eb5d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBrowserLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBrowserLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBrowserLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&LevelBrowserLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(LevelBrowserLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6d00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto LevelBrowserLayer::loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type) -> decltype(loadLevelsFinished(levels, key, type)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*, int>::func(&LevelBrowserLayer::loadLevelsFinished), this);
	using FunctionType = decltype(loadLevelsFinished(levels, key, type))(*)(LevelBrowserLayer*, cocos2d::CCArray*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, levels, key, type);
}

auto LevelBrowserLayer::loadLevelsFailed(char const* key, int type) -> decltype(loadLevelsFailed(key, type)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, int>::func(&LevelBrowserLayer::loadLevelsFailed), this);
	using FunctionType = decltype(loadLevelsFailed(key, type))(*)(LevelBrowserLayer*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, type);
}

auto LevelBrowserLayer::setupPageInfo(std::string info, char const* key) -> decltype(setupPageInfo(info, key)) {
	auto self = addresser::thunkAdjust(Resolve<std::string, char const*>::func(&LevelBrowserLayer::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(info, key))(*)(LevelBrowserLayer*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e61b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, info, key);
}

auto LevelBrowserLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&LevelBrowserLayer::onBack), this);
	using FunctionType = decltype(onBack(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto LevelBrowserLayer::shareCommentClosed(std::string text, ShareCommentLayer* layer) -> decltype(shareCommentClosed(text, layer)) {
	auto self = addresser::thunkAdjust(Resolve<std::string, ShareCommentLayer*>::func(&LevelBrowserLayer::shareCommentClosed), this);
	using FunctionType = decltype(shareCommentClosed(text, layer))(*)(LevelBrowserLayer*, std::string, ShareCommentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, text, layer);
}

auto LevelBrowserLayer::setTextPopupClosed(SetTextPopup* popup, std::string text) -> decltype(setTextPopupClosed(popup, text)) {
	auto self = addresser::thunkAdjust(Resolve<SetTextPopup*, std::string>::func(&LevelBrowserLayer::setTextPopupClosed), this);
	using FunctionType = decltype(setTextPopupClosed(popup, text))(*)(LevelBrowserLayer*, SetTextPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e9100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, text);
}

auto LevelBrowserLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&LevelBrowserLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(LevelBrowserLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ea2a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto LevelBrowserLayer::setIDPopupClosed(SetIDPopup* popup, int value) -> decltype(setIDPopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<SetIDPopup*, int>::func(&LevelBrowserLayer::setIDPopupClosed), this);
	using FunctionType = decltype(setIDPopupClosed(popup, value))(*)(LevelBrowserLayer*, SetIDPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e66b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto LevelBrowserLayer::updateResultArray(cocos2d::CCArray* results) -> decltype(updateResultArray(results)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*>::func(&LevelBrowserLayer::updateResultArray), this);
	using FunctionType = decltype(updateResultArray(results))(*)(LevelBrowserLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e1cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, results);
}

auto LevelBrowserLayer::cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent) -> decltype(cellPerformedAction(cell, listType, action, parent)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&LevelBrowserLayer::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(cell, listType, action, parent))(*)(LevelBrowserLayer*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3eab00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, cell, listType, action, parent);
}

auto LevelBrowserLayer::claimRecallChest(LevelCell* p0) -> decltype(claimRecallChest(p0)) {
	using FunctionType = decltype(claimRecallChest(p0))(*)(LevelBrowserLayer*, LevelCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3eb250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto LevelBrowserLayer::deleteSelected() -> decltype(deleteSelected()) {
	using FunctionType = decltype(deleteSelected())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e9e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelBrowserLayer::getSearchTitle() -> decltype(getSearchTitle()) {
	using FunctionType = decltype(getSearchTitle())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e5750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelBrowserLayer::init(GJSearchObject* object) -> decltype(init(object)) {
	using FunctionType = decltype(init(object))(*)(LevelBrowserLayer*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e2000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto LevelBrowserLayer::isCorrect(char const* key) -> decltype(isCorrect(key)) {
	using FunctionType = decltype(isCorrect(key))(*)(LevelBrowserLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e4090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto LevelBrowserLayer::loadPage(GJSearchObject* object) -> decltype(loadPage(object)) {
	using FunctionType = decltype(loadPage(object))(*)(LevelBrowserLayer*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e4290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto LevelBrowserLayer::onClearSearch(cocos2d::CCObject* sender) -> decltype(onClearSearch(sender)) {
	using FunctionType = decltype(onClearSearch(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onDeleteAll(cocos2d::CCObject* sender) -> decltype(onDeleteAll(sender)) {
	using FunctionType = decltype(onDeleteAll(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e87b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onFavorites(cocos2d::CCObject* sender) -> decltype(onFavorites(sender)) {
	using FunctionType = decltype(onFavorites(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e85f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onGoToFolder(cocos2d::CCObject* sender) -> decltype(onGoToFolder(sender)) {
	using FunctionType = decltype(onGoToFolder(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e65f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onGoToLastPage(cocos2d::CCObject* sender) -> decltype(onGoToLastPage(sender)) {
	using FunctionType = decltype(onGoToLastPage(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onGoToPage(cocos2d::CCObject* sender) -> decltype(onGoToPage(sender)) {
	using FunctionType = decltype(onGoToPage(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e64d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onImportLevels(cocos2d::CCObject* sender) -> decltype(onImportLevels(sender)) {
	using FunctionType = decltype(onImportLevels(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e9ae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onLocalMode(cocos2d::CCObject* sender) -> decltype(onLocalMode(sender)) {
	using FunctionType = decltype(onLocalMode(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onMyOnlineLevels(cocos2d::CCObject* sender) -> decltype(onMyOnlineLevels(sender)) {
	using FunctionType = decltype(onMyOnlineLevels(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onNew(cocos2d::CCObject* sender) -> decltype(onNew(sender)) {
	using FunctionType = decltype(onNew(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e7d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onProcessSelected(cocos2d::CCObject* sender) -> decltype(onProcessSelected(sender)) {
	using FunctionType = decltype(onProcessSelected(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e9560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onRefresh(cocos2d::CCObject* sender) -> decltype(onRefresh(sender)) {
	using FunctionType = decltype(onRefresh(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onRemoveAllFavorites(cocos2d::CCObject* sender) -> decltype(onRemoveAllFavorites(sender)) {
	using FunctionType = decltype(onRemoveAllFavorites(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onSaved(cocos2d::CCObject* sender) -> decltype(onSaved(sender)) {
	using FunctionType = decltype(onSaved(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e86d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onSavedMode(cocos2d::CCObject* sender) -> decltype(onSavedMode(sender)) {
	using FunctionType = decltype(onSavedMode(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onSearch(cocos2d::CCObject* sender) -> decltype(onSearch(sender)) {
	using FunctionType = decltype(onSearch(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::setupLevelBrowser(cocos2d::CCArray* items) -> decltype(setupLevelBrowser(items)) {
	using FunctionType = decltype(setupLevelBrowser(items))(*)(LevelBrowserLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e5440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, items);
}

auto LevelBrowserLayer::show() -> decltype(show()) {
	using FunctionType = decltype(show())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3eb640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelBrowserLayer::showExportResult(int p0) -> decltype(showExportResult(p0)) {
	using FunctionType = decltype(showExportResult(p0))(*)(LevelBrowserLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e97c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto LevelBrowserLayer::showImportResult(int p0) -> decltype(showImportResult(p0)) {
	using FunctionType = decltype(showImportResult(p0))(*)(LevelBrowserLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e9b20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto LevelBrowserLayer::updatePageLabel() -> decltype(updatePageLabel()) {
	using FunctionType = decltype(updatePageLabel())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e6a20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
