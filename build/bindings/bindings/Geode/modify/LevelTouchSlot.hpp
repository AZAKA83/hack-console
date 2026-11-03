#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelTouchSlot.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, LevelTouchSlot> : ModifyBase<ModifyDerive<Der, LevelTouchSlot>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelTouchSlot>>;
		using ModifyBase<ModifyDerive<Der, LevelTouchSlot>>::ModifyBase;
		using Base = LevelTouchSlot;
        using Derived = Der;
		void apply() override {

		}
	};
}
