/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include "node_id.h"

namespace asg {

node_id::node_id(const unsigned long long &val)
    : m_val(val)
{
}

unsigned long long node_id::value() const
{
    return m_val;
}

node_id::~node_id()
{
}

void node_id::print_on(std::ostream &strm) const
{
    strm << value();
}

bool node_id::is_valid() const
{
    return (value() > 0);
}

}


std::ostream &operator<<(std::ostream &strm, const asg::node_id &id)
{
    id.print_on(strm);
    return strm;
}
