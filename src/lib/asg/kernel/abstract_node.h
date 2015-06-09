/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/kernel/node_id.h>

namespace asg {

class abstract_node
{
public:
    virtual ~abstract_node();

    node_id id() const { return impl_id(); }

    bool has_id() const { return id().is_valid(); }

    void print_on(std::ostream& strm) const { impl_print_on(strm); }

protected:
    abstract_node();

    virtual node_id impl_id() const = 0;
    virtual void impl_print_on(std::ostream& strm) const = 0;
};

}
