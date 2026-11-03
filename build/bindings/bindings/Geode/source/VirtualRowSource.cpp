
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/VirtualRowSource.hpp>

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

auto VirtualRowSource::virtualRowCount() -> decltype(virtualRowCount()) {
	throw std::runtime_error("VirtualRowSource::virtualRowCount not implemented");
}

auto VirtualRowSource::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	throw std::runtime_error("VirtualRowSource::virtualRowHeight not implemented");
}

auto VirtualRowSource::mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2) -> decltype(mountVirtualRow(p0, p1, p2)) {
	throw std::runtime_error("VirtualRowSource::mountVirtualRow not implemented");
}

auto VirtualRowSource::unmountVirtualRow(int p0, cocos2d::CCNode* p1) -> decltype(unmountVirtualRow(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*>::func(&VirtualRowSource::unmountVirtualRow), this);
	using FunctionType = decltype(unmountVirtualRow(p0, p1))(*)(VirtualRowSource*, int, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f5c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
