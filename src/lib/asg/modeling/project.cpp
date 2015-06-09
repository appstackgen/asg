/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include "project.h"

namespace asg {
namespace modeling {

project_sptr project::create(const string &name)
{
    return std::make_shared<project>(name);
}

project::project(const string &name)
    : root_node(name)
{
}

}
}
