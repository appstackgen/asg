/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/kernel/types.h>

namespace asg {

class node_name
{
public:
    explicit node_name(const std::string& val="");

    std::string value() const { return m_val; }

    bool is_valid() const { return (!value().empty()); }

private:
    std::string m_val { "" };
};

}
