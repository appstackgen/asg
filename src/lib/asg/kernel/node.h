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

protected:
    node_id impl_id() const override { return m_id; }
    node_name impl_name() const override { return m_name; }
    void impl_print_on(std::ostream &strm) const override;

private:
    node_id m_id;
    node_name m_name;
};

}

