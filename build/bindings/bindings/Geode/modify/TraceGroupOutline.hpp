#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TraceGroupOutline.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, TraceGroupOutline> : ModifyBase<ModifyDerive<Der, TraceGroupOutline>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TraceGroupOutline>>;
		using ModifyBase<ModifyDerive<Der, TraceGroupOutline>>::ModifyBase;
		using Base = TraceGroupOutline;
        using Derived = Der;
		void apply() override {

		}
	};
}
