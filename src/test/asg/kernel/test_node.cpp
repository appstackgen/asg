/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include <gtest/gtest.h>

#include <asg/kernel/node.h>

using namespace asg;

TEST(test_kernel, test_node) {
    node n;

    ASSERT_TRUE(n.has_id());
    ASSERT_FALSE(n.has_name());
}

TEST(test_kernel, test_named_node) {
    node n("a name");

    ASSERT_TRUE(n.has_name());
    ASSERT_EQ(node_name("a name"), n.name());
}
