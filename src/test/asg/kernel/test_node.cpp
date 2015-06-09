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
}
