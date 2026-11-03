#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, cocos2d::ParticleStruct> : ModifyBase<ModifyDerive<Der, cocos2d::ParticleStruct>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::ParticleStruct>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::ParticleStruct>>::ModifyBase;
		using Base = cocos2d::ParticleStruct;
        using Derived = Der;
		void apply() override {

		}
	};
}
