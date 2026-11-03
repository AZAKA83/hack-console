
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CCSpritePart.hpp>

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

CCSpritePart::CCSpritePart() : CCSpritePart(geode::CutoffConstructor, sizeof(CCSpritePart)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	CCSpritePart::~CCSpritePart();

	using FunctionType = void(*)(CCSpritePart*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49580, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

CCSpritePart::~CCSpritePart() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CCSpritePart*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x495f0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CCSpritePart(geode::CutoffConstructor, sizeof(CCSpritePart));
		geode::DestructorLock::addLock(this);
	}
}

auto CCSpritePart::setVisible(bool visible) -> decltype(setVisible(visible)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&CCSpritePart::setVisible), this);
	using FunctionType = decltype(setVisible(visible))(*)(CCSpritePart*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a7c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, visible);
}

auto CCSpritePart::frameChanged(std::string frame) -> decltype(frameChanged(frame)) {
	using FunctionType = decltype(frameChanged(frame))(*)(CCSpritePart*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}
