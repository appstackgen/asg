/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include <gtest/gtest.h>

#include <asg/kernel/node_id.h>

using namespace asg;

TEST(test_kernel, test_node_id_ctor) {
    node_id id;

    ASSERT_FALSE(id.is_valid());
}

TEST(test_kernel, test_valid_node_id) {
    node_id id(1);

    ASSERT_EQ(1, id.value());
    ASSERT_TRUE(id.is_valid());
}
