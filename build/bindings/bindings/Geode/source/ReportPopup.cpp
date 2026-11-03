
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ReportPopup.hpp>

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

ReportPopup::~ReportPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ReportPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xbe590, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ReportPopup(geode::CutoffConstructor, sizeof(ReportPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto ReportPopup::create(ReportPopupConfig const& p0) -> decltype(create(p0)) {
	using FunctionType = decltype(create(p0))(*)(ReportPopupConfig const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbf0a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto ReportPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ReportPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ReportPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ReportPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&ReportPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(ReportPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto ReportPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&ReportPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(ReportPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc1e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ReportPopup::buildReasonRows(std::vector<int> const& p0, cocos2d::CCMenu* p1, cocos2d::CCNode* p2, cocos2d::CCObject* p3, cocos2d::SEL_MenuHandler p4, float p5, float p6, float p7, float p8, float p9, float p10, std::vector<CCMenuItemToggler*>& p11, int p12, float p13) -> decltype(buildReasonRows(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13)) {
	using FunctionType = decltype(buildReasonRows(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13))(*)(ReportPopup*, std::vector<int> const&, cocos2d::CCMenu*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler, float, float, float, float, float, float, std::vector<CCMenuItemToggler*>&, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbec10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
}

auto ReportPopup::contentTypeName(int p0) -> decltype(contentTypeName(p0)) {
	using FunctionType = decltype(contentTypeName(p0))(*)(ReportPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbe9c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto ReportPopup::init(ReportPopupConfig const& p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(ReportPopup*, ReportPopupConfig const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc07f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto ReportPopup::onSubmit(cocos2d::CCObject* sender) -> decltype(onSubmit(sender)) {
	using FunctionType = decltype(onSubmit(sender))(*)(ReportPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc1460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ReportPopup::surfaceName(int p0) -> decltype(surfaceName(p0)) {
	using FunctionType = decltype(surfaceName(p0))(*)(ReportPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbeb80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
