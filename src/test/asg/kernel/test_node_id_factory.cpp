/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include <gtest/gtest.h>

#include <asg/kernel/node_id_factory.h>

using namespace asg;

TEST(test_kernel, test_node_id_factory) {
    auto id = node_id_factory::create_id();

    ASSERT_TRUE(id.is_valid());
}
