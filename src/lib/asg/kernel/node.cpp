/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include "node.h"

#include <asg/kernel/node_id_factory.h>

namespace asg {

node::node()
    : abstract_node(), m_id(node_id_factory::create_id())
{
}

void node::impl_print_on(std::ostream &strm) const
{
    strm << id();
}

}
