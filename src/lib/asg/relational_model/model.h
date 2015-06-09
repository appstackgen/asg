/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/modeling/project_fragment.h>

namespace asg {
namespace relational_model {

class data_type;

using data_type_sptr = std::shared_ptr<data_type>;

using data_type_sptr_vec = std::vector<data_type_sptr>;

class model : public asg::modeling::project_fragment
{
public:
    using modeling::project_fragment::project_fragment;

    template<typename t=data_type>
    std::shared_ptr<t> create_data_type(const string& n) {
        return create_child<t>(n);
    }

    template<typename t=data_type>
    std::vector<std::shared_ptr<t>> data_types() {
        return children<t>();
    }
};

}
}
