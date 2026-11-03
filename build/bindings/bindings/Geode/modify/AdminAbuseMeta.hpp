#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdminAbuseMeta.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, AdminAbuseMeta> : ModifyBase<ModifyDerive<Der, AdminAbuseMeta>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdminAbuseMeta>>;
		using ModifyBase<ModifyDerive<Der, AdminAbuseMeta>>::ModifyBase;
		using Base = AdminAbuseMeta;
        using Derived = Der;
		void apply() override {

		}
	};
}
