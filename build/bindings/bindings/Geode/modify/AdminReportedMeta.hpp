#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdminReportedMeta.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, AdminReportedMeta> : ModifyBase<ModifyDerive<Der, AdminReportedMeta>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdminReportedMeta>>;
		using ModifyBase<ModifyDerive<Der, AdminReportedMeta>>::ModifyBase;
		using Base = AdminReportedMeta;
        using Derived = Der;
		void apply() override {

		}
	};
}
