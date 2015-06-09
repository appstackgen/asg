/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/kernel/root_node.h>

namespace asg {
namespace modeling {

class project;

using project_sptr = std::shared_ptr<project>;

class project : public root_node
{
public:
    static project_sptr create(const string& name);

    explicit project(const string& name);
};

}
}
