/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/kernel/node.h>

namespace asg {
namespace relational_model {

class model;

class model_fragment : public asg::node
{
public:
    using parent_node_t = model;

    using asg::node::node;

    parent_node_t* model() const;
};

}
}
