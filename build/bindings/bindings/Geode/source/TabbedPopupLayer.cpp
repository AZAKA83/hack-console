
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/TabbedPopupLayer.hpp>

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

auto TabbedPopupLayer::pageChanged() -> decltype(pageChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TabbedPopupLayer::pageChanged), this);
	using FunctionType = decltype(pageChanged())(*)(TabbedPopupLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66d090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TabbedPopupLayer::showTab(int tab) -> decltype(showTab(tab)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&TabbedPopupLayer::showTab), this);
	using FunctionType = decltype(showTab(tab))(*)(TabbedPopupLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66cc10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tab);
}

auto TabbedPopupLayer::addCloseButton() -> decltype(addCloseButton()) {
	using FunctionType = decltype(addCloseButton())(*)(TabbedPopupLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66c2a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto TabbedPopupLayer::addTab(std::string const& name, char const* icon) -> decltype(addTab(name, icon)) {
	using FunctionType = decltype(addTab(name, icon))(*)(TabbedPopupLayer*, std::string const&, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66c3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, name, icon);
}

auto TabbedPopupLayer::createTabButtons() -> decltype(createTabButtons()) {
	using FunctionType = decltype(createTabButtons())(*)(TabbedPopupLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66c5b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto TabbedPopupLayer::createTabButtons(float p0, float p1, float p2, float p3, float p4, float p5) -> decltype(createTabButtons(p0, p1, p2, p3, p4, p5)) {
	using FunctionType = decltype(createTabButtons(p0, p1, p2, p3, p4, p5))(*)(TabbedPopupLayer*, float, float, float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66c650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5);
}

auto TabbedPopupLayer::onTab(cocos2d::CCObject* sender) -> decltype(onTab(sender)) {
	using FunctionType = decltype(onTab(sender))(*)(TabbedPopupLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66cfa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto TabbedPopupLayer::onTabPage(cocos2d::CCObject* sender) -> decltype(onTabPage(sender)) {
	using FunctionType = decltype(onTabPage(sender))(*)(TabbedPopupLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66cfe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto TabbedPopupLayer::refreshPageButtons() -> decltype(refreshPageButtons()) {
	using FunctionType = decltype(refreshPageButtons())(*)(TabbedPopupLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66ced0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
