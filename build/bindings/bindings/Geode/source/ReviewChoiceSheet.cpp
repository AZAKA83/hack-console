
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ReviewChoiceSheet.hpp>

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

ReviewChoiceSheet::~ReviewChoiceSheet() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ReviewChoiceSheet*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x60ac50, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ReviewChoiceSheet(geode::CutoffConstructor, sizeof(ReviewChoiceSheet));
		geode::DestructorLock::addLock(this);
	}
}

auto ReviewChoiceSheet::create(ReviewChoiceDelegate* p0, int p1, char const* p2, std::string const& p3, std::vector<std::string> const& p4, std::vector<char const*> const& p5, bool p6, char const* p7) -> decltype(create(p0, p1, p2, p3, p4, p5, p6, p7)) {
	using FunctionType = decltype(create(p0, p1, p2, p3, p4, p5, p6, p7))(*)(ReviewChoiceDelegate*, int, char const*, std::string const&, std::vector<std::string> const&, std::vector<char const*> const&, bool, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xae200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5, p6, p7);
}

auto ReviewChoiceSheet::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ReviewChoiceSheet::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ReviewChoiceSheet*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ReviewChoiceSheet::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&ReviewChoiceSheet::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(ReviewChoiceSheet*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xaed70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto ReviewChoiceSheet::init(ReviewChoiceDelegate* p0, int p1, char const* p2, std::string const& p3, std::vector<std::string> const& p4, std::vector<char const*> const& p5, bool p6, char const* p7) -> decltype(init(p0, p1, p2, p3, p4, p5, p6, p7)) {
	using FunctionType = decltype(init(p0, p1, p2, p3, p4, p5, p6, p7))(*)(ReviewChoiceSheet*, ReviewChoiceDelegate*, int, char const*, std::string const&, std::vector<std::string> const&, std::vector<char const*> const&, bool, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xae380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6, p7);
}

auto ReviewChoiceSheet::onChoice(cocos2d::CCObject* sender) -> decltype(onChoice(sender)) {
	using FunctionType = decltype(onChoice(sender))(*)(ReviewChoiceSheet*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xaeb30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
