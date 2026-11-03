
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ControllerInputNode.hpp>

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

ControllerInputNode::~ControllerInputNode() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ControllerInputNode*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x448080, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ControllerInputNode(geode::CutoffConstructor, sizeof(ControllerInputNode));
		geode::DestructorLock::addLock(this);
	}
}

auto ControllerInputNode::init(InputCaptureDelegate* p0, cocos2d::CCSize const& p1) -> decltype(init(p0, p1)) {
	using FunctionType = decltype(init(p0, p1))(*)(ControllerInputNode*, InputCaptureDelegate*, cocos2d::CCSize const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x447b60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}
