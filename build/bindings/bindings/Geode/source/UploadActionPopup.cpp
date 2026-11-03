
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/UploadActionPopup.hpp>

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

UploadActionPopup::~UploadActionPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(UploadActionPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0ce0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) UploadActionPopup(geode::CutoffConstructor, sizeof(UploadActionPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto UploadActionPopup::create(UploadPopupDelegate* delegate, std::string str) -> decltype(create(delegate, str)) {
	using FunctionType = decltype(create(delegate, str))(*)(UploadPopupDelegate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0d60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(delegate, str);
}

auto UploadActionPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&UploadActionPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a1540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto UploadActionPopup::init(UploadPopupDelegate* delegate, std::string str) -> decltype(init(delegate, str)) {
	using FunctionType = decltype(init(delegate, str))(*)(UploadActionPopup*, UploadPopupDelegate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, delegate, str);
}

auto UploadActionPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(UploadActionPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a1460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto UploadActionPopup::showFailMessage(std::string message) -> decltype(showFailMessage(message)) {
	using FunctionType = decltype(showFailMessage(message))(*)(UploadActionPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a1360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, message);
}

auto UploadActionPopup::showSuccessMessage(std::string message) -> decltype(showSuccessMessage(message)) {
	using FunctionType = decltype(showSuccessMessage(message))(*)(UploadActionPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a1250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, message);
}
