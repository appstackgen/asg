/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/kernel/node.h>

namespace asg {
namespace object_model {

class model;

class model_fragment : public node
{
public:
    using parent_node_t = model;

    using node::node;

    object_model::model* model() const;
};

}
}
