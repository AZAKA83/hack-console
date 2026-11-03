
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorSoundConfigInfoLayer.hpp>

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

EditorSoundConfigInfoLayer::~EditorSoundConfigInfoLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EditorSoundConfigInfoLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x191db0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EditorSoundConfigInfoLayer(geode::CutoffConstructor, sizeof(EditorSoundConfigInfoLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto EditorSoundConfigInfoLayer::create(GJEditorSoundConfig* p0, EditorSoundInfoKind p1, EditorSoundBrowserLayer* p2) -> decltype(create(p0, p1, p2)) {
	using FunctionType = decltype(create(p0, p1, p2))(*)(GJEditorSoundConfig*, EditorSoundInfoKind, EditorSoundBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x191b80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto EditorSoundConfigInfoLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSoundConfigInfoLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorSoundConfigInfoLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSoundConfigInfoLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorSoundConfigInfoLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSoundConfigInfoLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194fe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorSoundConfigInfoLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSoundConfigInfoLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x195030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorSoundConfigInfoLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&EditorSoundConfigInfoLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1989c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto EditorSoundConfigInfoLayer::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&EditorSoundConfigInfoLayer::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(EditorSoundConfigInfoLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x196cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundConfigInfoLayer::adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2) -> decltype(adminActionConfirmed(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, std::vector<int> const&, std::string const&>::func(&EditorSoundConfigInfoLayer::adminActionConfirmed), this);
	using FunctionType = decltype(adminActionConfirmed(p0, p1, p2))(*)(EditorSoundConfigInfoLayer*, int, std::vector<int> const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x197d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto EditorSoundConfigInfoLayer::downloadEditorSoundFinished(GJEditorSoundConfig* p0) -> decltype(downloadEditorSoundFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJEditorSoundConfig*>::func(&EditorSoundConfigInfoLayer::downloadEditorSoundFinished), this);
	using FunctionType = decltype(downloadEditorSoundFinished(p0))(*)(EditorSoundConfigInfoLayer*, GJEditorSoundConfig*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x198ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundConfigInfoLayer::downloadEditorSoundFailed(int p0, int p1) -> decltype(downloadEditorSoundFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&EditorSoundConfigInfoLayer::downloadEditorSoundFailed), this);
	using FunctionType = decltype(downloadEditorSoundFailed(p0, p1))(*)(EditorSoundConfigInfoLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x198de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::deleteEditorSoundFinished(int p0) -> decltype(deleteEditorSoundFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&EditorSoundConfigInfoLayer::deleteEditorSoundFinished), this);
	using FunctionType = decltype(deleteEditorSoundFinished(p0))(*)(EditorSoundConfigInfoLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x198f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundConfigInfoLayer::deleteEditorSoundFailed(int p0, int p1) -> decltype(deleteEditorSoundFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&EditorSoundConfigInfoLayer::deleteEditorSoundFailed), this);
	using FunctionType = decltype(deleteEditorSoundFailed(p0, p1))(*)(EditorSoundConfigInfoLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x199160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&EditorSoundConfigInfoLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(EditorSoundConfigInfoLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x197d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::likedItem(LikeItemType p0, int p1, bool p2) -> decltype(likedItem(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<LikeItemType, int, bool>::func(&EditorSoundConfigInfoLayer::likedItem), this);
	using FunctionType = decltype(likedItem(p0, p1, p2))(*)(EditorSoundConfigInfoLayer*, LikeItemType, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x196da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto EditorSoundConfigInfoLayer::soundPackDescSaved(std::string const& p0, std::string const& p1) -> decltype(soundPackDescSaved(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&, std::string const&>::func(&EditorSoundConfigInfoLayer::soundPackDescSaved), this);
	using FunctionType = decltype(soundPackDescSaved(p0, p1))(*)(EditorSoundConfigInfoLayer*, std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x195eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::uploadActionFinished(int p0, int p1) -> decltype(uploadActionFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&EditorSoundConfigInfoLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(p0, p1))(*)(EditorSoundConfigInfoLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1961d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::uploadActionFailed(int p0, int p1) -> decltype(uploadActionFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&EditorSoundConfigInfoLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(p0, p1))(*)(EditorSoundConfigInfoLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1963c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundConfigInfoLayer::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&EditorSoundConfigInfoLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(EditorSoundConfigInfoLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1964a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundConfigInfoLayer::musicActionFinished(GJMusicAction p0) -> decltype(musicActionFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&EditorSoundConfigInfoLayer::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(p0))(*)(EditorSoundConfigInfoLayer*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x196bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundConfigInfoLayer::musicActionFailed(GJMusicAction p0) -> decltype(musicActionFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&EditorSoundConfigInfoLayer::musicActionFailed), this);
	using FunctionType = decltype(musicActionFailed(p0))(*)(EditorSoundConfigInfoLayer*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x196bf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundConfigInfoLayer::applyConfig(bool p0, bool p1) -> decltype(applyConfig(p0, p1)) {
	using FunctionType = decltype(applyConfig(p0, p1))(*)(EditorSoundConfigInfoLayer*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x197140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto EditorSoundConfigInfoLayer::buildSummary() -> decltype(buildSummary()) {
	using FunctionType = decltype(buildSummary())(*)(EditorSoundConfigInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSoundConfigInfoLayer::downloadMissingSFX() -> decltype(downloadMissingSFX()) {
	using FunctionType = decltype(downloadMissingSFX())(*)(EditorSoundConfigInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x196a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSoundConfigInfoLayer::init(GJEditorSoundConfig* p0, EditorSoundInfoKind p1, EditorSoundBrowserLayer* p2) -> decltype(init(p0, p1, p2)) {
	using FunctionType = decltype(init(p0, p1, p2))(*)(EditorSoundConfigInfoLayer*, GJEditorSoundConfig*, EditorSoundInfoKind, EditorSoundBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1920b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto EditorSoundConfigInfoLayer::isOwner() -> decltype(isOwner()) {
	using FunctionType = decltype(isOwner())(*)(EditorSoundConfigInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x196160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSoundConfigInfoLayer::onDeleteServer(cocos2d::CCObject* sender) -> decltype(onDeleteServer(sender)) {
	using FunctionType = decltype(onDeleteServer(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x197ac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::onDescription(cocos2d::CCObject* sender) -> decltype(onDescription(sender)) {
	using FunctionType = decltype(onDescription(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x195c20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::onDownloadSFX(cocos2d::CCObject* sender) -> decltype(onDownloadSFX(sender)) {
	using FunctionType = decltype(onDownloadSFX(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1967a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::onDuplicate(cocos2d::CCObject* sender) -> decltype(onDuplicate(sender)) {
	using FunctionType = decltype(onDuplicate(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1955e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::onFavorite(cocos2d::CCObject* sender) -> decltype(onFavorite(sender)) {
	using FunctionType = decltype(onFavorite(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1950c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x195b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::onLike(cocos2d::CCObject* sender) -> decltype(onLike(sender)) {
	using FunctionType = decltype(onLike(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1959d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::onLoad(cocos2d::CCObject* sender) -> decltype(onLoad(sender)) {
	using FunctionType = decltype(onLoad(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x196ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::onLocalDelete(cocos2d::CCObject* sender) -> decltype(onLocalDelete(sender)) {
	using FunctionType = decltype(onLocalDelete(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x195420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::onMerge(cocos2d::CCObject* sender) -> decltype(onMerge(sender)) {
	using FunctionType = decltype(onMerge(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x197000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::onOverwrite(cocos2d::CCObject* sender) -> decltype(onOverwrite(sender)) {
	using FunctionType = decltype(onOverwrite(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1976d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::onShowDescription(cocos2d::CCObject* sender) -> decltype(onShowDescription(sender)) {
	using FunctionType = decltype(onShowDescription(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x195c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::onUpdate(cocos2d::CCObject* sender) -> decltype(onUpdate(sender)) {
	using FunctionType = decltype(onUpdate(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1950b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::onUpload(cocos2d::CCObject* sender) -> decltype(onUpload(sender)) {
	using FunctionType = decltype(onUpload(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x197800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(EditorSoundConfigInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1964f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigInfoLayer::refreshActionButtons() -> decltype(refreshActionButtons()) {
	using FunctionType = decltype(refreshActionButtons())(*)(EditorSoundConfigInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x195710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSoundConfigInfoLayer::refreshLikeState() -> decltype(refreshLikeState()) {
	using FunctionType = decltype(refreshLikeState())(*)(EditorSoundConfigInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSoundConfigInfoLayer::startDownload() -> decltype(startDownload()) {
	using FunctionType = decltype(startDownload())(*)(EditorSoundConfigInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
