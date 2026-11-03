#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GDFileWriter.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_writeAtomic
		#define GEODE_STATICS_writeAtomic
		GEODE_AS_STATIC_FUNCTION(writeAtomic) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_writeAtomic
		#define GEODE_CONCEPT_CHECK_writeAtomic
		GEODE_CONCEPT_FUNCTION_CHECK(writeAtomic) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GDFileWriter> : ModifyBase<ModifyDerive<Der, GDFileWriter>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GDFileWriter>>;
		using ModifyBase<ModifyDerive<Der, GDFileWriter>>::ModifyBase;
		using Base = GDFileWriter;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x73820, Default, GDFileWriter, writeAtomic, std::string const&, std::string const&)
		}
	};
}
