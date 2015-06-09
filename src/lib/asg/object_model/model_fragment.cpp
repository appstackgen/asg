/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include "model_fragment.h"

#include <asg/object_model/model.h>

namespace asg {
namespace object_model {

object_model::model *model_fragment::model() const
{
    return parent_as<parent_node_t>();
}

}
}
