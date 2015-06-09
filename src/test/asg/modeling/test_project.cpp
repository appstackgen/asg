/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include <gtest/gtest.h>

#include <asg/modeling/project.h>

using namespace asg;
using namespace asg::modeling;

TEST(test_modeling, test_project_ctor) {
    auto p = project::create("a project");

    ASSERT_EQ(node_name("a project"), p->name());
}
