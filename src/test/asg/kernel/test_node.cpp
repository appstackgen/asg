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
    ASSERT_FALSE(n.has_parent());
}

TEST(test_kernel, test_named_node) {
    node n("a name");

    ASSERT_TRUE(n.has_name());
    ASSERT_EQ(node_name("a name"), n.name());
}

TEST(test_kernel, test_node_hierarchy) {
    node root;

    auto child_1 = root.create_child<node>();
    auto child_2 = root.create_child<node>();

    ASSERT_TRUE(child_1->has_parent());
    ASSERT_TRUE(child_1->parent() == &root);
    ASSERT_TRUE(child_2->parent() == child_1->parent());
    ASSERT_EQ(2, root.child_count());

    root.delete_child(child_2);

    ASSERT_EQ(1, root.child_count());
    ASSERT_EQ(1, root.children<node>().size());

    ASSERT_EQ(&root, child_1->parent_as<node>());
}
