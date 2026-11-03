#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class BulkCommentKey {
public:
    static constexpr auto CLASS_NAME = "BulkCommentKey";
    CommentType m_type;
    int m_commentID;
    int m_parentID;
};
