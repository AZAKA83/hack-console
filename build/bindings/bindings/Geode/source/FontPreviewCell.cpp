
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FontPreviewCell.hpp>

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

FontPreviewCell::~FontPreviewCell() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(FontPreviewCell*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x89d10, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) FontPreviewCell(geode::CutoffConstructor, sizeof(FontPreviewCell));
		geode::DestructorLock::addLock(this);
	}
}

auto FontPreviewCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FontPreviewCell::init), this);
	using FunctionType = decltype(init())(*)(FontPreviewCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ff70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FontPreviewCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FontPreviewCell::draw), this);
	using FunctionType = decltype(draw())(*)(FontPreviewCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58dd60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FontPreviewCell::loadFromIndex(int p0, int p1) -> decltype(loadFromIndex(p0, p1)) {
	using FunctionType = decltype(loadFromIndex(p0, p1))(*)(FontPreviewCell*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58d9c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}
