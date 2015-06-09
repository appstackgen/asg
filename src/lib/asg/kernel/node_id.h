/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <ostream>

namespace asg {

class node_id
{
public:
    node_id(const unsigned long long& val=0);

    unsigned long long value() const;

    virtual ~node_id();

    void print_on(std::ostream& strm) const;

    bool is_valid() const;

private:
    unsigned long long m_val { 0 };
};

}

std::ostream& operator<<(std::ostream& strm, const asg::node_id& id);
