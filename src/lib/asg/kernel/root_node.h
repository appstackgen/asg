/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/kernel/node.h>

namespace asg {

class root_node : public node
{
public:
    static std::shared_ptr<root_node> create_node(const string& name);

    explicit root_node(const string& name = "");
};

}
