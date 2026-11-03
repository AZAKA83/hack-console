
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorSoundBrowserLayer.hpp>

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

EditorSoundBrowserLayer::~EditorSoundBrowserLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EditorSoundBrowserLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x18d880, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EditorSoundBrowserLayer(geode::CutoffConstructor, sizeof(EditorSoundBrowserLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto EditorSoundBrowserLayer::create(std::string p0, EditorSoundsLayer* p1) -> decltype(create(p0, p1)) {
	using FunctionType = decltype(create(p0, p1))(*)(std::string, EditorSoundsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18da30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto EditorSoundBrowserLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorSoundBrowserLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(EditorSoundBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorSoundBrowserLayer::rebuildContent() -> decltype(rebuildContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorSoundBrowserLayer::rebuildContent), this);
	using FunctionType = decltype(rebuildContent())(*)(EditorSoundBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1903f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorSoundBrowserLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&EditorSoundBrowserLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(EditorSoundBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18ee00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto EditorSoundBrowserLayer::setTextPopupClosed(SetTextPopup* p0, std::string p1) -> decltype(setTextPopupClosed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<SetTextPopup*, std::string>::func(&EditorSoundBrowserLayer::setTextPopupClosed), this);
	using FunctionType = decltype(setTextPopupClosed(p0, p1))(*)(EditorSoundBrowserLayer*, SetTextPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x190080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundBrowserLayer::loadEditorSoundsFinished(cocos2d::CCArray* p0, char const* p1) -> decltype(loadEditorSoundsFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*>::func(&EditorSoundBrowserLayer::loadEditorSoundsFinished), this);
	using FunctionType = decltype(loadEditorSoundsFinished(p0, p1))(*)(EditorSoundBrowserLayer*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x190400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSoundBrowserLayer::loadEditorSoundsFailed(char const* p0) -> decltype(loadEditorSoundsFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&EditorSoundBrowserLayer::loadEditorSoundsFailed), this);
	using FunctionType = decltype(loadEditorSoundsFailed(p0))(*)(EditorSoundBrowserLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1904b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundBrowserLayer::onConfigViewClicked(GJEditorSoundConfig* p0) -> decltype(onConfigViewClicked(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJEditorSoundConfig*>::func(&EditorSoundBrowserLayer::onConfigViewClicked), this);
	using FunctionType = decltype(onConfigViewClicked(p0))(*)(EditorSoundBrowserLayer*, GJEditorSoundConfig*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x190560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundBrowserLayer::cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3) -> decltype(cellPerformedAction(p0, p1, p2, p3)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&EditorSoundBrowserLayer::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(p0, p1, p2, p3))(*)(EditorSoundBrowserLayer*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2, p3);
}

auto EditorSoundBrowserLayer::getSelectedCellIdx() -> decltype(getSelectedCellIdx()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorSoundBrowserLayer::getSelectedCellIdx), this);
	using FunctionType = decltype(getSelectedCellIdx())(*)(EditorSoundBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x98e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorSoundBrowserLayer::init(std::string p0, EditorSoundsLayer* p1) -> decltype(init(p0, p1)) {
	using FunctionType = decltype(init(p0, p1))(*)(EditorSoundBrowserLayer*, std::string, EditorSoundsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18dc50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto EditorSoundBrowserLayer::layoutCells(cocos2d::CCArray* p0, char const* p1) -> decltype(layoutCells(p0, p1)) {
	using FunctionType = decltype(layoutCells(p0, p1))(*)(EditorSoundBrowserLayer*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18f9c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto EditorSoundBrowserLayer::loadCurrentPage(bool p0, bool p1) -> decltype(loadCurrentPage(p0, p1)) {
	using FunctionType = decltype(loadCurrentPage(p0, p1))(*)(EditorSoundBrowserLayer*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18f2b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto EditorSoundBrowserLayer::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(EditorSoundBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18fe70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundBrowserLayer::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(EditorSoundBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18fe50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundBrowserLayer::onRefresh(cocos2d::CCObject* sender) -> decltype(onRefresh(sender)) {
	using FunctionType = decltype(onRefresh(sender))(*)(EditorSoundBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1903e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundBrowserLayer::onSaveActive(cocos2d::CCObject* sender) -> decltype(onSaveActive(sender)) {
	using FunctionType = decltype(onSaveActive(sender))(*)(EditorSoundBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18fee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundBrowserLayer::onSelectMode(cocos2d::CCObject* sender) -> decltype(onSelectMode(sender)) {
	using FunctionType = decltype(onSelectMode(sender))(*)(EditorSoundBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18f070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundBrowserLayer::setMode(EditorSoundBrowseMode p0) -> decltype(setMode(p0)) {
	using FunctionType = decltype(setMode(p0))(*)(EditorSoundBrowserLayer*, EditorSoundBrowseMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18ef50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto EditorSoundBrowserLayer::updatePageLabel() -> decltype(updatePageLabel()) {
	using FunctionType = decltype(updatePageLabel())(*)(EditorSoundBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18fbe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
