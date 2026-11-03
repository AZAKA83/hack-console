#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/VirtualRowSource.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_virtualRowCount
		#define GEODE_STATICS_virtualRowCount
		GEODE_AS_STATIC_FUNCTION(virtualRowCount) 
	#endif

	#ifndef GEODE_STATICS_virtualRowHeight
		#define GEODE_STATICS_virtualRowHeight
		GEODE_AS_STATIC_FUNCTION(virtualRowHeight) 
	#endif

	#ifndef GEODE_STATICS_mountVirtualRow
		#define GEODE_STATICS_mountVirtualRow
		GEODE_AS_STATIC_FUNCTION(mountVirtualRow) 
	#endif

	#ifndef GEODE_STATICS_unmountVirtualRow
		#define GEODE_STATICS_unmountVirtualRow
		GEODE_AS_STATIC_FUNCTION(unmountVirtualRow) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_virtualRowCount
		#define GEODE_CONCEPT_CHECK_virtualRowCount
		GEODE_CONCEPT_FUNCTION_CHECK(virtualRowCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_virtualRowHeight
		#define GEODE_CONCEPT_CHECK_virtualRowHeight
		GEODE_CONCEPT_FUNCTION_CHECK(virtualRowHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mountVirtualRow
		#define GEODE_CONCEPT_CHECK_mountVirtualRow
		GEODE_CONCEPT_FUNCTION_CHECK(mountVirtualRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unmountVirtualRow
		#define GEODE_CONCEPT_CHECK_unmountVirtualRow
		GEODE_CONCEPT_FUNCTION_CHECK(unmountVirtualRow) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, VirtualRowSource> : ModifyBase<ModifyDerive<Der, VirtualRowSource>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, VirtualRowSource>>;
		using ModifyBase<ModifyDerive<Der, VirtualRowSource>>::ModifyBase;
		using Base = VirtualRowSource;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(VirtualRowSource, virtualRowCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(VirtualRowSource, virtualRowHeight, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(VirtualRowSource, mountVirtualRow, int, cocos2d::CCNode*, cocos2d::CCMenu*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f5c0, Thiscall, VirtualRowSource, unmountVirtualRow, int, cocos2d::CCNode*)
		}
	};
}
