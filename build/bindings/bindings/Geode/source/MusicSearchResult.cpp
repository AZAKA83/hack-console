
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MusicSearchResult.hpp>

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

MusicSearchResult::MusicSearchResult() : MusicSearchResult(geode::CutoffConstructor, sizeof(MusicSearchResult)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	MusicSearchResult::~MusicSearchResult();

	using FunctionType = void(*)(MusicSearchResult*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480db0, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

MusicSearchResult::~MusicSearchResult() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(MusicSearchResult*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4979d0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) MusicSearchResult(geode::CutoffConstructor, sizeof(MusicSearchResult));
		geode::DestructorLock::addLock(this);
	}
}

auto MusicSearchResult::updateObjects(AudioSortType type) -> decltype(updateObjects(type)) {
	auto self = addresser::thunkAdjust(Resolve<AudioSortType>::func(&MusicSearchResult::updateObjects), this);
	using FunctionType = decltype(updateObjects(type))(*)(MusicSearchResult*, AudioSortType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x498950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type);
}

auto MusicSearchResult::stateChanged(OptionsObject* object) -> decltype(stateChanged(object)) {
	auto self = addresser::thunkAdjust(Resolve<OptionsObject*>::func(&MusicSearchResult::stateChanged), this);
	using FunctionType = decltype(stateChanged(object))(*)(MusicSearchResult*, OptionsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x498930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto MusicSearchResult::applyTagFilters(cocos2d::CCArray* objects) -> decltype(applyTagFilters(objects)) {
	throw std::runtime_error("MusicSearchResult::applyTagFilters not implemented");
}
