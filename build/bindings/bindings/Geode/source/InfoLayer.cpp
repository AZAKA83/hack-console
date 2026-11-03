
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/InfoLayer.hpp>

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

InfoLayer::~InfoLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(InfoLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3cd910, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) InfoLayer(geode::CutoffConstructor, sizeof(InfoLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto InfoLayer::create(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2, GJEditorSoundConfig* p3) -> decltype(create(p0, p1, p2, p3)) {
	using FunctionType = decltype(create(p0, p1, p2, p3))(*)(GJGameLevel*, GJUserScore*, GJLevelList*, GJEditorSoundConfig*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cdb00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto InfoLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::show), this);
	using FunctionType = decltype(show())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::loadCommentsFinished(cocos2d::CCArray* comments, char const* key) -> decltype(loadCommentsFinished(comments, key)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*>::func(&InfoLayer::loadCommentsFinished), this);
	using FunctionType = decltype(loadCommentsFinished(comments, key))(*)(InfoLayer*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, comments, key);
}

auto InfoLayer::loadCommentsFailed(char const* key) -> decltype(loadCommentsFailed(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&InfoLayer::loadCommentsFailed), this);
	using FunctionType = decltype(loadCommentsFailed(key))(*)(InfoLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto InfoLayer::setupPageInfo(std::string info, char const* key) -> decltype(setupPageInfo(info, key)) {
	auto self = addresser::thunkAdjust(Resolve<std::string, char const*>::func(&InfoLayer::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(info, key))(*)(InfoLayer*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, info, key);
}

auto InfoLayer::commentUploadFinished(int parentID) -> decltype(commentUploadFinished(parentID)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&InfoLayer::commentUploadFinished), this);
	using FunctionType = decltype(commentUploadFinished(parentID))(*)(InfoLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, parentID);
}

auto InfoLayer::commentUploadFailed(int parentID, CommentError errorType) -> decltype(commentUploadFailed(parentID, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, CommentError>::func(&InfoLayer::commentUploadFailed), this);
	using FunctionType = decltype(commentUploadFailed(parentID, errorType))(*)(InfoLayer*, int, CommentError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, parentID, errorType);
}

auto InfoLayer::updateUserScoreFinished() -> decltype(updateUserScoreFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::updateUserScoreFinished), this);
	using FunctionType = decltype(updateUserScoreFinished())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&InfoLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(InfoLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto InfoLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&InfoLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(InfoLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto InfoLayer::adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2) -> decltype(adminActionConfirmed(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, std::vector<int> const&, std::string const&>::func(&InfoLayer::adminActionConfirmed), this);
	using FunctionType = decltype(adminActionConfirmed(p0, p1, p2))(*)(InfoLayer*, int, std::vector<int> const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto InfoLayer::bulkCommentDeleteFinished(int p0) -> decltype(bulkCommentDeleteFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&InfoLayer::bulkCommentDeleteFinished), this);
	using FunctionType = decltype(bulkCommentDeleteFinished(p0))(*)(InfoLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto InfoLayer::bulkCommentDeleteFailed() -> decltype(bulkCommentDeleteFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::bulkCommentDeleteFailed), this);
	using FunctionType = decltype(bulkCommentDeleteFailed())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::confirmReport(cocos2d::CCObject* sender) -> decltype(confirmReport(sender)) {
	using FunctionType = decltype(confirmReport(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d04a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::getSpriteButton(char const* frame, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, cocos2d::CCPoint position) -> decltype(getSpriteButton(frame, selector, menu, scale, position)) {
	using FunctionType = decltype(getSpriteButton(frame, selector, menu, scale, position))(*)(InfoLayer*, char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cffc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame, selector, menu, scale, position);
}

auto InfoLayer::init(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2, GJEditorSoundConfig* p3) -> decltype(init(p0, p1, p2, p3)) {
	using FunctionType = decltype(init(p0, p1, p2, p3))(*)(InfoLayer*, GJGameLevel*, GJUserScore*, GJLevelList*, GJEditorSoundConfig*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cdd50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto InfoLayer::isCorrect(char const* key) -> decltype(isCorrect(key)) {
	using FunctionType = decltype(isCorrect(key))(*)(InfoLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto InfoLayer::loadPage(int page, bool noSetup) -> decltype(loadPage(page, noSetup)) {
	using FunctionType = decltype(loadPage(page, noSetup))(*)(InfoLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page, noSetup);
}

auto InfoLayer::onBulkDelete(cocos2d::CCObject* sender) -> decltype(onBulkDelete(sender)) {
	using FunctionType = decltype(onBulkDelete(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onBulkSelectAll(cocos2d::CCObject* sender) -> decltype(onBulkSelectAll(sender)) {
	using FunctionType = decltype(onBulkSelectAll(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onComment(cocos2d::CCObject* sender) -> decltype(onComment(sender)) {
	using FunctionType = decltype(onComment(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onCommentCellToggled(cocos2d::CCObject* sender) -> decltype(onCommentCellToggled(sender)) {
	using FunctionType = decltype(onCommentCellToggled(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2f80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onCopyLevelID(cocos2d::CCObject* sender) -> decltype(onCopyLevelID(sender)) {
	using FunctionType = decltype(onCopyLevelID(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x162080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onGetComments(cocos2d::CCObject* sender) -> decltype(onGetComments(sender)) {
	using FunctionType = decltype(onGetComments(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0cf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onLevelInfo(cocos2d::CCObject* sender) -> decltype(onLevelInfo(sender)) {
	using FunctionType = decltype(onLevelInfo(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0d00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onMore(cocos2d::CCObject* sender) -> decltype(onMore(sender)) {
	using FunctionType = decltype(onMore(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onOriginal(cocos2d::CCObject* sender) -> decltype(onOriginal(sender)) {
	using FunctionType = decltype(onOriginal(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d06c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onRefreshComments(cocos2d::CCObject* sender) -> decltype(onRefreshComments(sender)) {
	using FunctionType = decltype(onRefreshComments(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::refreshUserTitle() -> decltype(refreshUserTitle()) {
	using FunctionType = decltype(refreshUserTitle())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2c40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::reloadWindow() -> decltype(reloadWindow()) {
	using FunctionType = decltype(reloadWindow())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::setupBulkUI() -> decltype(setupBulkUI()) {
	using FunctionType = decltype(setupBulkUI())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d33b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::setupCommentsBrowser(cocos2d::CCArray* comments) -> decltype(setupCommentsBrowser(comments)) {
	using FunctionType = decltype(setupCommentsBrowser(comments))(*)(InfoLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1af0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, comments);
}

auto InfoLayer::setupLevelInfo() -> decltype(setupLevelInfo()) {
	using FunctionType = decltype(setupLevelInfo())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::toggleCommentMode(cocos2d::CCObject* sender) -> decltype(toggleCommentMode(sender)) {
	using FunctionType = decltype(toggleCommentMode(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d29b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::toggleExtendedMode(cocos2d::CCObject* sender) -> decltype(toggleExtendedMode(sender)) {
	using FunctionType = decltype(toggleExtendedMode(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::toggleModRoom(cocos2d::CCObject* p0) -> decltype(toggleModRoom(p0)) {
	using FunctionType = decltype(toggleModRoom(p0))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2d30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto InfoLayer::toggleSmallCommentMode(cocos2d::CCObject* sender) -> decltype(toggleSmallCommentMode(sender)) {
	using FunctionType = decltype(toggleSmallCommentMode(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d25b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::updateCommentModeButtons() -> decltype(updateCommentModeButtons()) {
	using FunctionType = decltype(updateCommentModeButtons())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
