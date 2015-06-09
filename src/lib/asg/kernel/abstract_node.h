/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/kernel/node_id.h>
#include <asg/kernel/node_name.h>

namespace asg {

class abstract_node
{
public:
    virtual ~abstract_node();

    size child_count() const { return impl_child_count(); }
    abstract_node* parent() const { return impl_parent(); }
    void register_child(abstract_node* n) { assert(this != n); impl_register_child(n); }

    node_id id() const { return impl_id(); }
    node_name name() const { return impl_name(); }

    bool has_id() const { return id().is_valid(); }
    bool has_name() const { return name().is_valid(); }
    bool has_parent() const { return (nullptr != parent()); }

    void print_on(std::ostream& strm) const { impl_print_on(strm); }

protected:
    abstract_node();

    virtual size impl_child_count() const = 0;
    virtual abstract_node* impl_parent() const = 0;
    virtual node_id impl_id() const = 0;
    virtual node_name impl_name() const = 0;
    virtual void impl_register_child(abstract_node* n) = 0;

    virtual void impl_print_on(std::ostream& strm) const = 0;
};

}
