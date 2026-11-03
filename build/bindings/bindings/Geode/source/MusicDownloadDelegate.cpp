
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>

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

auto MusicDownloadDelegate::newsImageDownloaded(std::string p0) -> decltype(newsImageDownloaded(p0)) {
	auto self = addresser::thunkAdjust(Resolve<std::string>::func(&MusicDownloadDelegate::newsImageDownloaded), this);
	using FunctionType = decltype(newsImageDownloaded(p0))(*)(MusicDownloadDelegate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x98e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MusicDownloadDelegate::newsImageFailed(std::string p0) -> decltype(newsImageFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<std::string>::func(&MusicDownloadDelegate::newsImageFailed), this);
	using FunctionType = decltype(newsImageFailed(p0))(*)(MusicDownloadDelegate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x98e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
