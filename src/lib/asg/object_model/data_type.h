/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/object_model/model_fragment.h>

namespace asg {
namespace object_model {

class model;

class data_type : public model_fragment
{
public:
    using model_fragment::model_fragment;
};

}
}
