/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include "project_factory.h"

#include <asg/modeling/project.h>

#include <asg/object_model/model.h>
#include <asg/object_model/data_type.h>

namespace asg {
namespace object_model {
namespace test {

modeling::project_sptr project_factory::create_project(const string &name)
{
    project_factory fac;

    return fac.impl_create_project(name);
}

project_factory::project_factory()
{
}

modeling::project_sptr project_factory::impl_create_project(const string &name)
{
    auto p = modeling::project::create(name);

    auto om = p->create_child<model>("an_object_model");

    init_data_types(om);

    return p;
}

void project_factory::init_data_types(model_sptr om)
{
    test::data_type_names_t dtn_config;

    for (auto dtn : dtn_config.default_type_names) {
        om->create_data_type<data_type>(dtn);
    }
}

}
}
}
