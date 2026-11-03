
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GDFileWriter.hpp>

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

auto GDFileWriter::writeAtomic(std::string const& path, std::string const& data) -> decltype(writeAtomic(path, data)) {
	using FunctionType = decltype(writeAtomic(path, data))(*)(std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(path, data);
}
