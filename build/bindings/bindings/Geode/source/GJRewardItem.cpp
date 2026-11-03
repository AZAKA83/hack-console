
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJRewardItem.hpp>

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

GJRewardItem::~GJRewardItem() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJRewardItem*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x2d67a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJRewardItem(geode::CutoffConstructor, sizeof(GJRewardItem));
		geode::DestructorLock::addLock(this);
	}
}

auto GJRewardItem::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f8b20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJRewardItem::create(int chestID, int timeRemaining, std::string rewardStr) -> decltype(create(chestID, timeRemaining, rewardStr)) {
	using FunctionType = decltype(create(chestID, timeRemaining, rewardStr))(*)(int, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f8e60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(chestID, timeRemaining, rewardStr);
}

auto GJRewardItem::createSpecial(GJRewardType rewardType, int orbs, int diamonds, SpecialRewardItem specialType1, int specialCount1, SpecialRewardItem specialType2, int specialCount2, int unlockType, int itemID) -> decltype(createSpecial(rewardType, orbs, diamonds, specialType1, specialCount1, specialType2, specialCount2, unlockType, itemID)) {
	using FunctionType = decltype(createSpecial(rewardType, orbs, diamonds, specialType1, specialCount1, specialType2, specialCount2, unlockType, itemID))(*)(GJRewardType, int, int, SpecialRewardItem, int, SpecialRewardItem, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f8c70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(rewardType, orbs, diamonds, specialType1, specialCount1, specialType2, specialCount2, unlockType, itemID);
}

auto GJRewardItem::createWithObject(GJRewardType type, GJRewardObject* object) -> decltype(createWithObject(type, object)) {
	using FunctionType = decltype(createWithObject(type, object))(*)(GJRewardType, GJRewardObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f8b60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, object);
}

auto GJRewardItem::createWithObjects(GJRewardType type, cocos2d::CCArray* objects) -> decltype(createWithObjects(type, objects)) {
	using FunctionType = decltype(createWithObjects(type, objects))(*)(GJRewardType, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f8bf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, objects);
}

auto GJRewardItem::rewardItemToStat(SpecialRewardItem rewardItem) -> decltype(rewardItemToStat(rewardItem)) {
	using FunctionType = decltype(rewardItemToStat(rewardItem))(*)(SpecialRewardItem);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f9190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(rewardItem);
}

auto GJRewardItem::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJRewardItem::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJRewardItem*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f9620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GJRewardItem::init(int chestID, int timeRemaining, std::string rewardStr) -> decltype(init(chestID, timeRemaining, rewardStr)) {
	using FunctionType = decltype(init(chestID, timeRemaining, rewardStr))(*)(GJRewardItem*, int, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f8f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, chestID, timeRemaining, rewardStr);
}
