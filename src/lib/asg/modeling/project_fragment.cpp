/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include "project_fragment.h"

#include <asg/modeling/project.h>

namespace asg {
namespace modeling {

project_fragment::project_fragment(project_fragment::parent_node_t *p, const string &name)
    : node(p, name)
{
}

project_fragment::parent_node_t *project_fragment::project() const
{
    return parent_as<project_fragment::parent_node_t>();
}

}
}
