/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include "node_name.h"

namespace asg {

node_name::node_name(const std::string &val)
    : m_val(val)
{
}

void node_name::print_on(std::ostream &strm) const
{
    strm << value();
}

}

std::ostream &operator<<(std::ostream &strm, const asg::node_name &val)
{
    val.print_on(strm);
    return strm;
}
