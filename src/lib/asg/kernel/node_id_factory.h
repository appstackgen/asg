/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#pragma once

#include <asg/kernel/node_id.h>

namespace asg {

class node_id_factory
{
public:
    virtual ~node_id_factory();

    static node_id create_id();

protected:
    node_id_factory();

private:
    static unsigned long long m_last_id;
};

}
