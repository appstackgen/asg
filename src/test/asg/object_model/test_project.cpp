/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include <gtest/gtest.h>

#include "project_factory.h"

#include <asg/modeling/project.h>

#include <asg/object_model/model.h>

using namespace asg;
using namespace asg::object_model;

TEST(test_object_model, test_factory) {
    auto proj = test::project_factory::create_project("test_project");

    ASSERT_TRUE(proj->has_id());
    ASSERT_TRUE(proj->has_name());

    for (auto om : proj->children<model>()) {
        ASSERT_EQ(proj.get(), om->project());
    }
}
