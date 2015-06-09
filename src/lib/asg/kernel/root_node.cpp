/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include "root_node.h"

namespace asg {

std::shared_ptr<root_node> root_node::create_node(const string &name)
{
    return std::make_shared<root_node>(name);
}

root_node::root_node(const string &name)
    : node(name)
{
}

}
