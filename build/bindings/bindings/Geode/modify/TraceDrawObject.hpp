#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TraceDrawObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, TraceDrawObject> : ModifyBase<ModifyDerive<Der, TraceDrawObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TraceDrawObject>>;
		using ModifyBase<ModifyDerive<Der, TraceDrawObject>>::ModifyBase;
		using Base = TraceDrawObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
