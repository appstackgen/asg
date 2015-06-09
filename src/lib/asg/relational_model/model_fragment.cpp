/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include "model_fragment.h"

#include <asg/relational_model/model.h>

namespace asg {
namespace relational_model {

model_fragment::parent_node_t *model_fragment::model() const
{
    return parent_as<parent_node_t>();
}

}
}
