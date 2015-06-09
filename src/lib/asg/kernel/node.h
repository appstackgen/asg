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
    node();

protected:
    node_id impl_id() const override { return m_id; }
    void impl_print_on(std::ostream &strm) const override;

private:
    node_id m_id;
};

}

