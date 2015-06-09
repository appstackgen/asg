/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/modeling/project_fragment.h>

namespace asg {
namespace object_model {

class data_type;

using data_type_sptr = std::shared_ptr<data_type>;

using data_type_sptr_vec = std::vector<data_type_sptr>;

using data_type_sptr_vec_it = data_type_sptr_vec::iterator;
using data_type_sptr_vec_cit = data_type_sptr_vec::const_iterator;

class model : public modeling::project_fragment
{
public:
    using modeling::project_fragment::project_fragment;

    template<typename t=data_type>
    std::shared_ptr<t> create_data_type(const string& name) {
        return create_child<t>(name);
    }

    template<typename t=data_type>
    std::shared_ptr<t> data_type(const string& name) {
        return child<t>(name);
    }

};

}
}
