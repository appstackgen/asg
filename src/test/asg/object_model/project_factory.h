/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/modeling/project.h>

namespace asg {
namespace object_model {
namespace test {

class project_factory
{
public:
    static asg::modeling::project_sptr create_project(const string& name);

protected:
    project_factory();

    asg::modeling::project_sptr impl_create_project(const string& name);
};

}
}
}
