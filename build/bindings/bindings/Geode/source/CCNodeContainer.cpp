
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CCNodeContainer.hpp>

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

CCNodeContainer::~CCNodeContainer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CCNodeContainer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x353030, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CCNodeContainer(geode::CutoffConstructor, sizeof(CCNodeContainer));
		geode::DestructorLock::addLock(this);
	}
}

auto CCNodeContainer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCNodeContainer::init), this);
	using FunctionType = decltype(init())(*)(CCNodeContainer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8b060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCNodeContainer::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCNodeContainer::visit), this);
	using FunctionType = decltype(visit())(*)(CCNodeContainer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x353070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
