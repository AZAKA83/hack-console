
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/PurchaseItemPopup.hpp>

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

PurchaseItemPopup::~PurchaseItemPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(PurchaseItemPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3af700, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) PurchaseItemPopup(geode::CutoffConstructor, sizeof(PurchaseItemPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto PurchaseItemPopup::create(GJStoreItem* item) -> decltype(create(item)) {
	using FunctionType = decltype(create(item))(*)(GJStoreItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b4f40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(item);
}

auto PurchaseItemPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PurchaseItemPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(PurchaseItemPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PurchaseItemPopup::init(GJStoreItem* item) -> decltype(init(item)) {
	using FunctionType = decltype(init(item))(*)(PurchaseItemPopup*, GJStoreItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b5040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, item);
}

auto PurchaseItemPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(PurchaseItemPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PurchaseItemPopup::onPurchase(cocos2d::CCObject* sender) -> decltype(onPurchase(sender)) {
	using FunctionType = decltype(onPurchase(sender))(*)(PurchaseItemPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b5ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
