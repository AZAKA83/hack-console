
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SFXSearchResult.hpp>

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

SFXSearchResult::~SFXSearchResult() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SFXSearchResult*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x480ef0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SFXSearchResult(geode::CutoffConstructor, sizeof(SFXSearchResult));
		geode::DestructorLock::addLock(this);
	}
}

auto SFXSearchResult::create(int folderID) -> decltype(create(folderID)) {
	using FunctionType = decltype(create(folderID))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49ad50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(folderID);
}

auto SFXSearchResult::updateObjects(AudioSortType type) -> decltype(updateObjects(type)) {
	auto self = addresser::thunkAdjust(Resolve<AudioSortType>::func(&SFXSearchResult::updateObjects), this);
	using FunctionType = decltype(updateObjects(type))(*)(SFXSearchResult*, AudioSortType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49ae70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type);
}
