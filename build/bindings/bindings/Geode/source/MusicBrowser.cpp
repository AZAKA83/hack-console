
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MusicBrowser.hpp>

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

MusicBrowser::~MusicBrowser() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(MusicBrowser*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x479ee0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) MusicBrowser(geode::CutoffConstructor, sizeof(MusicBrowser));
		geode::DestructorLock::addLock(this);
	}
}

auto MusicBrowser::create(int songID, GJSongType songType) -> decltype(create(songID, songType)) {
	using FunctionType = decltype(create(songID, songType))(*)(int, GJSongType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47a140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songID, songType);
}

auto MusicBrowser::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&MusicBrowser::update), this);
	using FunctionType = decltype(update(dt))(*)(MusicBrowser*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47baf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto MusicBrowser::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MusicBrowser::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MusicBrowser::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MusicBrowser::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MusicBrowser::musicActionFinished(GJMusicAction action) -> decltype(musicActionFinished(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&MusicBrowser::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(action))(*)(MusicBrowser*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47c860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto MusicBrowser::musicActionFailed(GJMusicAction action) -> decltype(musicActionFailed(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&MusicBrowser::musicActionFailed), this);
	using FunctionType = decltype(musicActionFailed(action))(*)(MusicBrowser*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47c900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto MusicBrowser::sliderEnded(Slider* slider) -> decltype(sliderEnded(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&MusicBrowser::sliderEnded), this);
	using FunctionType = decltype(sliderEnded(slider))(*)(MusicBrowser*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47c160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto MusicBrowser::cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent) -> decltype(cellPerformedAction(cell, listType, action, parent)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&MusicBrowser::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(cell, listType, action, parent))(*)(MusicBrowser*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47d2d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, cell, listType, action, parent);
}

auto MusicBrowser::getSelectedCellIdx() -> decltype(getSelectedCellIdx()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MusicBrowser::getSelectedCellIdx), this);
	using FunctionType = decltype(getSelectedCellIdx())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47d470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MusicBrowser::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&MusicBrowser::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(MusicBrowser*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47df90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto MusicBrowser::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&MusicBrowser::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(MusicBrowser*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47d780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MusicBrowser::sortSelectClosed(SelectSFXSortLayer* p0) -> decltype(sortSelectClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<SelectSFXSortLayer*>::func(&MusicBrowser::sortSelectClosed), this);
	using FunctionType = decltype(sortSelectClosed(p0))(*)(MusicBrowser*, SelectSFXSortLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47df40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MusicBrowser::init(int songID, GJSongType songType) -> decltype(init(songID, songType)) {
	using FunctionType = decltype(init(songID, songType))(*)(MusicBrowser*, int, GJSongType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47a340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, songID, songType);
}

auto MusicBrowser::onArtistFilters(cocos2d::CCObject* sender) -> decltype(onArtistFilters(sender)) {
	using FunctionType = decltype(onArtistFilters(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47db80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onChangelog(cocos2d::CCObject* sender) -> decltype(onChangelog(sender)) {
	using FunctionType = decltype(onChangelog(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47dc60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onClearSearchText(cocos2d::CCObject* sender) -> decltype(onClearSearchText(sender)) {
	using FunctionType = decltype(onClearSearchText(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47d740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47dff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onPage(cocos2d::CCObject* sender) -> decltype(onPage(sender)) {
	using FunctionType = decltype(onPage(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47d480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onPlaybackControl(cocos2d::CCObject* sender) -> decltype(onPlaybackControl(sender)) {
	using FunctionType = decltype(onPlaybackControl(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47c100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onSorting(cocos2d::CCObject* sender) -> decltype(onSorting(sender)) {
	using FunctionType = decltype(onSorting(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47dee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onTagFilters(cocos2d::CCObject* sender) -> decltype(onTagFilters(sender)) {
	using FunctionType = decltype(onTagFilters(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47d940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onToggleSearch(cocos2d::CCObject* sender) -> decltype(onToggleSearch(sender)) {
	using FunctionType = decltype(onToggleSearch(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47d530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onToggleView(cocos2d::CCObject* sender) -> decltype(onToggleView(sender)) {
	using FunctionType = decltype(onToggleView(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47d190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onUpdateLibrary(cocos2d::CCObject* sender) -> decltype(onUpdateLibrary(sender)) {
	using FunctionType = decltype(onUpdateLibrary(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47c280, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::setupList(MusicSearchResult* result) -> decltype(setupList(result)) {
	using FunctionType = decltype(setupList(result))(*)(MusicBrowser*, MusicSearchResult*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47ca30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, result);
}

auto MusicBrowser::setupMusicBrowser() -> decltype(setupMusicBrowser()) {
	using FunctionType = decltype(setupMusicBrowser())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47c380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicBrowser::setupSongControls() -> decltype(setupSongControls()) {
	using FunctionType = decltype(setupSongControls())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47be00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicBrowser::trySetupMusicBrowser() -> decltype(trySetupMusicBrowser()) {
	using FunctionType = decltype(trySetupMusicBrowser())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47c300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
