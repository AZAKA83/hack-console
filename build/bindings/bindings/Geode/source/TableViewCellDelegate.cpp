
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>

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

auto TableViewCellDelegate::getSelectedCellCustomIdx() -> decltype(getSelectedCellCustomIdx()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TableViewCellDelegate::getSelectedCellCustomIdx), this);
	using FunctionType = decltype(getSelectedCellCustomIdx())(*)(TableViewCellDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x98e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TableViewCellDelegate::allowsCustomSFXActions() -> decltype(allowsCustomSFXActions()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TableViewCellDelegate::allowsCustomSFXActions), this);
	using FunctionType = decltype(allowsCustomSFXActions())(*)(TableViewCellDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TableViewCellDelegate::isCustomIDSelected(int p0) -> decltype(isCustomIDSelected(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&TableViewCellDelegate::isCustomIDSelected), this);
	using FunctionType = decltype(isCustomIDSelected(p0))(*)(TableViewCellDelegate*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto TableViewCellDelegate::inCustomSFXTree() -> decltype(inCustomSFXTree()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TableViewCellDelegate::inCustomSFXTree), this);
	using FunctionType = decltype(inCustomSFXTree())(*)(TableViewCellDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TableViewCellDelegate::showsSFXInfoButton() -> decltype(showsSFXInfoButton()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TableViewCellDelegate::showsSFXInfoButton), this);
	using FunctionType = decltype(showsSFXInfoButton())(*)(TableViewCellDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
