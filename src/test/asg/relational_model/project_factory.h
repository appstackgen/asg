/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/modeling/project.h>

#include <asg/relational_model/model.h>

namespace asg {
namespace relational_model {

class model;

using model_sptr = std::shared_ptr<model>;

class project_factory
{
public:
    static modeling::project_sptr create(const string& name);

protected:
    project_factory();

    modeling::project_sptr create_project(const string& name);

private:
    void init_data_types(model_sptr rm);
};

}
}
