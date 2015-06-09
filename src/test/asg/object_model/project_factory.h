/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/modeling/project.h>

#include "project_config.h"

namespace asg {
namespace object_model {

class model;

using model_sptr = std::shared_ptr<model>;

namespace test {

class project_factory
{
public:
    static asg::modeling::project_sptr create_project(const string& name);

protected:
    project_factory();

    asg::modeling::project_sptr impl_create_project(const string& name);

private:
    void init_data_types(model_sptr om);
};

}
}
}
