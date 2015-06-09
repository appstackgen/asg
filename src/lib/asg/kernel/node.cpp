/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include "node.h"

#include <asg/kernel/node_id_factory.h>
#include <asg/kernel/node_name.h>

namespace asg {

node::node(const std::string &name)
    : abstract_node(), m_id(node_id_factory::create_id()), m_name(node_name(name))
{
}

void node::impl_print_on(std::ostream &strm) const
{
    strm << name() << " [" << id() << "]";
}

}
