
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/DeathHistogram.hpp>

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

DeathHistogram::~DeathHistogram() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(DeathHistogram*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x1107a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) DeathHistogram(geode::CutoffConstructor, sizeof(DeathHistogram));
		geode::DestructorLock::addLock(this);
	}
}

auto DeathHistogram::rebuildAxis(char const* p0, int p1, float p2, float p3, char const* p4) -> decltype(rebuildAxis(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(rebuildAxis(p0, p1, p2, p3, p4))(*)(DeathHistogram*, char const*, int, float, float, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x111610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto DeathHistogram::setAttemptLine(std::vector<int> const& p0, std::vector<int> const& p1, cocos2d::ccColor3B p2, int p3, cocos2d::ccColor3B p4, bool p5) -> decltype(setAttemptLine(p0, p1, p2, p3, p4, p5)) {
	using FunctionType = decltype(setAttemptLine(p0, p1, p2, p3, p4, p5))(*)(DeathHistogram*, std::vector<int> const&, std::vector<int> const&, cocos2d::ccColor3B, int, cocos2d::ccColor3B, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x112eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5);
}

auto DeathHistogram::setData(std::vector<int> const& p0, int p1, bool p2, bool p3, bool p4) -> decltype(setData(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(setData(p0, p1, p2, p3, p4))(*)(DeathHistogram*, std::vector<int> const&, int, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x111dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto DeathHistogram::setProgression(std::vector<int> const& p0, std::vector<int> const& p1, std::vector<int> const& p2) -> decltype(setProgression(p0, p1, p2)) {
	using FunctionType = decltype(setProgression(p0, p1, p2))(*)(DeathHistogram*, std::vector<int> const&, std::vector<int> const&, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DeathHistogram::setSurvival(std::vector<int> const& p0, bool p1, bool p2, int p3) -> decltype(setSurvival(p0, p1, p2, p3)) {
	using FunctionType = decltype(setSurvival(p0, p1, p2, p3))(*)(DeathHistogram*, std::vector<int> const&, bool, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1126a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}
