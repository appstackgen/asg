/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include "node.h"

#include <asg/kernel/node_id_factory.h>
#include <asg/kernel/node_name.h>

#include <algorithm>

namespace asg {

node::node(const std::string &name)
    : abstract_node(), m_parent(nullptr), m_id(node_id_factory::create_id()), m_name(node_name(name))
{
}

node::node(abstract_node *p, const std::string &name)
    : abstract_node(), m_parent(p), m_id(node_id_factory::create_id()), m_name(node_name(name))
{
    assert(nullptr != p);
    assert(this != p);
}

void node::impl_print_on(std::ostream &strm) const
{
    strm << name() << " [" << id() << "]";
}

void node::impl_register_child(abstract_node_sptr n)
{
    assert(n->parent() == this);
    m_children.push_back((n));
}

void node::impl_delete_child(abstract_node_sptr n)
{
    auto it = std::find_if(begin(m_children), end(m_children), [=](std::shared_ptr<abstract_node> cand) { return (cand == n); });

    assert(end(m_children) != it);

    m_children.erase(it);
}

}
