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
