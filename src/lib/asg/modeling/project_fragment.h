/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/kernel/node.h>


namespace asg {
namespace modeling {

class project;

class project_fragment : public asg::node
{
public:
    using parent_node_t = project;

    project_fragment(abstract_node* p, const string& name="");

    parent_node_t* project() const;
};

}
}
