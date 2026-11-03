
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/UpdateAccountSettingsPopup.hpp>

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

auto UpdateAccountSettingsPopup::create(GJAccountSettingsLayer* p0, int p1, int p2, int p3, int p4, int p5, std::string p6, std::string p7, std::string p8, std::string p9, std::string p10, std::string p11, std::string p12) -> decltype(create(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12)) {
	using FunctionType = decltype(create(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12))(*)(GJAccountSettingsLayer*, int, int, int, int, int, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a00d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
}

auto UpdateAccountSettingsPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&UpdateAccountSettingsPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(UpdateAccountSettingsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto UpdateAccountSettingsPopup::updateSettingsFinished() -> decltype(updateSettingsFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&UpdateAccountSettingsPopup::updateSettingsFinished), this);
	using FunctionType = decltype(updateSettingsFinished())(*)(UpdateAccountSettingsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto UpdateAccountSettingsPopup::updateSettingsFailed() -> decltype(updateSettingsFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&UpdateAccountSettingsPopup::updateSettingsFailed), this);
	using FunctionType = decltype(updateSettingsFailed())(*)(UpdateAccountSettingsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto UpdateAccountSettingsPopup::init(GJAccountSettingsLayer* p0, int p1, int p2, int p3, int p4, int p5, std::string p6, std::string p7, std::string p8, std::string p9, std::string p10, std::string p11, std::string p12) -> decltype(init(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12)) {
	using FunctionType = decltype(init(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12))(*)(UpdateAccountSettingsPopup*, GJAccountSettingsLayer*, int, int, int, int, int, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a03e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
}

auto UpdateAccountSettingsPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(UpdateAccountSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
