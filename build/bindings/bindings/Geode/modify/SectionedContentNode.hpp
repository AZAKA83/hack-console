#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SectionedContentNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addChild
		#define GEODE_STATICS_addChild
		GEODE_AS_STATIC_FUNCTION(addChild) 
	#endif

	#ifndef GEODE_STATICS_removeAllChildrenWithCleanup
		#define GEODE_STATICS_removeAllChildrenWithCleanup
		GEODE_AS_STATIC_FUNCTION(removeAllChildrenWithCleanup) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_addChild
		#define GEODE_CONCEPT_CHECK_addChild
		GEODE_CONCEPT_FUNCTION_CHECK(addChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllChildrenWithCleanup
		#define GEODE_CONCEPT_CHECK_removeAllChildrenWithCleanup
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllChildrenWithCleanup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SectionedContentNode> : ModifyBase<ModifyDerive<Der, SectionedContentNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SectionedContentNode>>;
		using ModifyBase<ModifyDerive<Der, SectionedContentNode>>::ModifyBase;
		using Base = SectionedContentNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x80dc0, Thiscall, SectionedContentNode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80c80, Thiscall, SectionedContentNode, addChild, cocos2d::CCNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80ca0, Thiscall, SectionedContentNode, removeAllChildrenWithCleanup, bool)
		}
	};
}
