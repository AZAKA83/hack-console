
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJRewardObject.hpp>

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

GJRewardObject::~GJRewardObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJRewardObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x14e8e0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJRewardObject(geode::CutoffConstructor, sizeof(GJRewardObject));
		geode::DestructorLock::addLock(this);
	}
}

auto GJRewardObject::create(SpecialRewardItem type, int total, int itemID) -> decltype(create(type, total, itemID)) {
	using FunctionType = decltype(create(type, total, itemID))(*)(SpecialRewardItem, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f8a20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, total, itemID);
}

auto GJRewardObject::createItemUnlock(UnlockType type, int id) -> decltype(createItemUnlock(type, id)) {
	using FunctionType = decltype(createItemUnlock(type, id))(*)(UnlockType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f89b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, id);
}

auto GJRewardObject::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJRewardObject::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJRewardObject*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f8a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}
