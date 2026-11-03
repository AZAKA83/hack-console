
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AutoBackupPopup.hpp>

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

AutoBackupPopup::~AutoBackupPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AutoBackupPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xc9870, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AutoBackupPopup(geode::CutoffConstructor, sizeof(AutoBackupPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto AutoBackupPopup::create(int p0) -> decltype(create(p0)) {
	using FunctionType = decltype(create(p0))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc9650, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto AutoBackupPopup::requestPage(int p0) -> decltype(requestPage(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AutoBackupPopup::requestPage), this);
	using FunctionType = decltype(requestPage(p0))(*)(AutoBackupPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AutoBackupPopup::clearPageContent() -> decltype(clearPageContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AutoBackupPopup::clearPageContent), this);
	using FunctionType = decltype(clearPageContent())(*)(AutoBackupPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcabc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AutoBackupPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&AutoBackupPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(AutoBackupPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcca80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto AutoBackupPopup::backupsChanged() -> decltype(backupsChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AutoBackupPopup::backupsChanged), this);
	using FunctionType = decltype(backupsChanged())(*)(AutoBackupPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xca850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AutoBackupPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&AutoBackupPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(AutoBackupPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xca880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AutoBackupPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&AutoBackupPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(AutoBackupPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcc350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AutoBackupPopup::buildRows() -> decltype(buildRows()) {
	using FunctionType = decltype(buildRows())(*)(AutoBackupPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcabe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AutoBackupPopup::init(int p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(AutoBackupPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc9910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto AutoBackupPopup::onClearSearch(cocos2d::CCObject* sender) -> decltype(onClearSearch(sender)) {
	using FunctionType = decltype(onClearSearch(sender))(*)(AutoBackupPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcab80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AutoBackupPopup::onDelete(cocos2d::CCObject* sender) -> decltype(onDelete(sender)) {
	using FunctionType = decltype(onDelete(sender))(*)(AutoBackupPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcbe50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AutoBackupPopup::onDeleteSelected(cocos2d::CCObject* sender) -> decltype(onDeleteSelected(sender)) {
	using FunctionType = decltype(onDeleteSelected(sender))(*)(AutoBackupPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcc750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AutoBackupPopup::onRestore(cocos2d::CCObject* sender) -> decltype(onRestore(sender)) {
	using FunctionType = decltype(onRestore(sender))(*)(AutoBackupPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcb880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AutoBackupPopup::onSelectAll(cocos2d::CCObject* sender) -> decltype(onSelectAll(sender)) {
	using FunctionType = decltype(onSelectAll(sender))(*)(AutoBackupPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcc5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AutoBackupPopup::onSettings(cocos2d::CCObject* sender) -> decltype(onSettings(sender)) {
	using FunctionType = decltype(onSettings(sender))(*)(AutoBackupPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xccad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AutoBackupPopup::onToggleRow(cocos2d::CCObject* sender) -> decltype(onToggleRow(sender)) {
	using FunctionType = decltype(onToggleRow(sender))(*)(AutoBackupPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xcc500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
