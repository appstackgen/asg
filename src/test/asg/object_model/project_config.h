/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/kernel/types.h>

namespace asg {
namespace object_model {
namespace test {
struct data_type_names_t {
    const string bool_type_name { "boolean" };

    const string_vec default_type_names { bool_type_name };
};
}
}
}
