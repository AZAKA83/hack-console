
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CCLightStrip.hpp>

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

CCLightStrip::~CCLightStrip() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CCLightStrip*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x47080, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CCLightStrip(geode::CutoffConstructor, sizeof(CCLightStrip));
		geode::DestructorLock::addLock(this);
	}
}

auto CCLightStrip::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCLightStrip::draw), this);
	using FunctionType = decltype(draw())(*)(CCLightStrip*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x479a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCLightStrip::updateTweenAction(float value, char const* keyword) -> decltype(updateTweenAction(value, keyword)) {
	auto self = addresser::thunkAdjust(Resolve<float, char const*>::func(&CCLightStrip::updateTweenAction), this);
	using FunctionType = decltype(updateTweenAction(value, keyword))(*)(CCLightStrip*, float, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47b60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, value, keyword);
}
