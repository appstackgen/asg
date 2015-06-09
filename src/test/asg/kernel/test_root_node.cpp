/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include <gtest/gtest.h>

#include <asg/kernel/root_node.h>

using namespace asg;

TEST(test_kernel, test_root_node) {
    auto root = root_node::create_node("root");

    ASSERT_EQ(node_name("root"), root->name());
}
