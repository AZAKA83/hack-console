
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GauntletNode.hpp>

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

GauntletNode::~GauntletNode() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GauntletNode*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x301220, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GauntletNode(geode::CutoffConstructor, sizeof(GauntletNode));
		geode::DestructorLock::addLock(this);
	}
}

auto GauntletNode::frameForType(GauntletType type) -> decltype(frameForType(type)) {
	using FunctionType = decltype(frameForType(type))(*)(GauntletType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302f30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GauntletNode::nameForType(GauntletType type) -> decltype(nameForType(type)) {
	using FunctionType = decltype(nameForType(type))(*)(GauntletType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3042b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GauntletNode::generateNode() -> decltype(generateNode()) {
	using FunctionType = decltype(generateNode())(*)(GauntletNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x301280, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GauntletNode::onClaimReward() -> decltype(onClaimReward()) {
	using FunctionType = decltype(onClaimReward())(*)(GauntletNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
