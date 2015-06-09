/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/kernel/abstract_node.h>

namespace asg {

class node : public abstract_node
{
public:
    explicit node(const std::string& name="");
    explicit node(abstract_node* p, const std::string& name="");

protected:
    abstract_node* impl_parent() const override { return m_parent; }
    node_id impl_id() const override { return m_id; }
    node_name impl_name() const override { return m_name; }
    size impl_child_count() const override { return m_children.size(); }

    void impl_print_on(std::ostream &strm) const override;
    void impl_register_child(abstract_node *n) override;

private:
    abstract_node* m_parent { nullptr };
    node_id m_id;
    node_name m_name;
    std::vector<abstract_node*> m_children;
};

}

