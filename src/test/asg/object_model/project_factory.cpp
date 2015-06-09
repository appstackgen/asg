/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include "project_factory.h"

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

    return p;
}

}
}
}
