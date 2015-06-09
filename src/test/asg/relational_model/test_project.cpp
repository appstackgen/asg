/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include <gtest/gtest.h>

#include "project_factory.h"

using namespace asg;
using namespace asg::relational_model;

TEST(test_relational_model, test_factory) {
    auto proj = project_factory::create("test_relational_model");

}
