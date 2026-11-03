#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AccountReviewCard.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, AccountReviewCard> : ModifyBase<ModifyDerive<Der, AccountReviewCard>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AccountReviewCard>>;
		using ModifyBase<ModifyDerive<Der, AccountReviewCard>>::ModifyBase;
		using Base = AccountReviewCard;
        using Derived = Der;
		void apply() override {

		}
	};
}
