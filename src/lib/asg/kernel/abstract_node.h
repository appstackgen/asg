/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <algorithm>

#include <asg/kernel/node_id.h>
#include <asg/kernel/node_name.h>

namespace asg {

class abstract_node;

using abstract_node_sptr = std::shared_ptr<abstract_node>;

using abstract_node_sptr_vec = std::vector<abstract_node_sptr>;
using abstract_node_sptr_it = abstract_node_sptr_vec::iterator;

class abstract_node
{
public:
    virtual ~abstract_node();

    template<typename t>
    t* parent_as() const {
        return dynamic_cast<t*>(parent());
    }

    template<typename child_t>
    std::shared_ptr<child_t> create_child(const string& name="") {
        auto c = std::make_shared<child_t>(this, name);
        impl_register_child(c);
        return c;
    }


    template<typename child_t=abstract_node>
    std::vector<std::shared_ptr<child_t>> children() {
        std::vector<std::shared_ptr<child_t>> buf;

        auto it = first_child();

        while(it != last_child()) {
            auto c = std::dynamic_pointer_cast<child_t>(*it);

            if (c) {
                buf.push_back(c);
            }

            it++;
        }

        return buf;
    }

    template<typename child_t=abstract_node>
    std::shared_ptr<abstract_node> child(const string& name) {
        auto candidates = children<child_t>();

        auto it = std::find_if(begin(candidates), end(candidates), [=](std::shared_ptr<child_t> cand) { return (cand->name() == name); });

        if (end(candidates) != it) {
            return *it;
        }

        return std::shared_ptr<child_t>();
    }

    size child_count() const { return impl_child_count(); }
    abstract_node* parent() const { return impl_parent(); }

    void delete_child(abstract_node_sptr n) { assert(this == n->parent()); impl_delete_child(n); }

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
    virtual void impl_register_child(abstract_node_sptr n) = 0;
    virtual void impl_delete_child(abstract_node_sptr n) = 0;

    virtual void impl_print_on(std::ostream& strm) const = 0;

    virtual abstract_node_sptr_it first_child() = 0;
    virtual abstract_node_sptr_it last_child() = 0;
};

}
