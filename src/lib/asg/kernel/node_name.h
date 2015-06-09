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

    void print_on(std::ostream& strm) const;

    bool operator !=(const node_name& o) const { return (o.m_val != m_val); }
    bool operator ==(const node_name& o) const { return (o.m_val == m_val); }

private:
    std::string m_val { "" };
};

}

std::ostream& operator<<(std::ostream& strm, const asg::node_name& val);
