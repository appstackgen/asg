/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include "project_factory.h"

#include <asg/modeling/project.h>

#include <asg/relational_model/model.h>
#include <asg/relational_model/data_type.h>

#include "project_config.h"

namespace asg {
namespace relational_model {

modeling::project_sptr project_factory::create(const string &name)
{
    project_factory fac;
    return fac.create_project(name);
}

project_factory::project_factory()
{
}

modeling::project_sptr project_factory::create_project(const string &name)
{
    auto proj = modeling::project::create(name);

    auto rm = proj->create_child<relational_model::model>("relational_model");

    init_data_types(rm);

    return proj;
}

void project_factory::init_data_types(model_sptr rm)
{
    test::data_type_names_t dtc;

    for (auto n : dtc.default_type_names) {
        rm->create_data_type<data_type>(n);
    }
}

}
}
