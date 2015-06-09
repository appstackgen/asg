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
    : abstract_node(), m_parent(nullptr), m_id(node_id_factory::create_id()), m_name(node_name(name))
{
}

node::node(abstract_node *p, const std::string &name)
    : abstract_node(), m_parent(p), m_id(node_id_factory::create_id()), m_name(node_name(name))
{
    assert(nullptr != p);
    p->register_child(this);
}

void node::impl_print_on(std::ostream &strm) const
{
    strm << name() << " [" << id() << "]";
}

void node::impl_register_child(abstract_node *n)
{
    assert(n->parent() == this);
    m_children.push_back(n);
}

}
