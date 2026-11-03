#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DTStatSeg.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, DTStatSeg> : ModifyBase<ModifyDerive<Der, DTStatSeg>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DTStatSeg>>;
		using ModifyBase<ModifyDerive<Der, DTStatSeg>>::ModifyBase;
		using Base = DTStatSeg;
        using Derived = Der;
		void apply() override {

		}
	};
}
