
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetFolderPopup.hpp>

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

SetFolderPopup::~SetFolderPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetFolderPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x399ac0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetFolderPopup(geode::CutoffConstructor, sizeof(SetFolderPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SetFolderPopup::create(int value, bool isCreated, std::string title) -> decltype(create(value, isCreated, title)) {
	using FunctionType = decltype(create(value, isCreated, title))(*)(int, bool, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a6670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value, isCreated, title);
}

auto SetFolderPopup::valueChanged() -> decltype(valueChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetFolderPopup::valueChanged), this);
	using FunctionType = decltype(valueChanged())(*)(SetFolderPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a6a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetFolderPopup::setTextPopupClosed(SetTextPopup* popup, std::string text) -> decltype(setTextPopupClosed(popup, text)) {
	auto self = addresser::thunkAdjust(Resolve<SetTextPopup*, std::string>::func(&SetFolderPopup::setTextPopupClosed), this);
	using FunctionType = decltype(setTextPopupClosed(popup, text))(*)(SetFolderPopup*, SetTextPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a6dc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup, text);
}

auto SetFolderPopup::init(int value, bool isCreated, std::string title) -> decltype(init(value, isCreated, title)) {
	using FunctionType = decltype(init(value, isCreated, title))(*)(SetFolderPopup*, int, bool, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a67b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, isCreated, title);
}

auto SetFolderPopup::onSetFolderName(cocos2d::CCObject* sender) -> decltype(onSetFolderName(sender)) {
	using FunctionType = decltype(onSetFolderName(sender))(*)(SetFolderPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a6ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
