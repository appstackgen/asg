/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include <gtest/gtest.h>

#include <asg/kernel/node_name.h>

using namespace asg;

TEST(test_kernel, test_empty_node_name) {
    node_name empty_name;

    ASSERT_FALSE(empty_name.is_valid());
    ASSERT_EQ("", empty_name.value());
}

TEST(test_kernel, test_node_name) {
    node_name name("foo");

    ASSERT_TRUE(name.is_valid());
    ASSERT_EQ("foo", name.value());
}
