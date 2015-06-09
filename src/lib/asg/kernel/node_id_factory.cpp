/*
 * Copyright (c) 2015, Johannes Lochmann - johannes.lochmann@gmail.com
 *
 * All rights reserved.
 */

#include "node_id_factory.h"

namespace asg {

unsigned long long node_id_factory::m_last_id { 0 };

node_id_factory::~node_id_factory()
{
}

node_id node_id_factory::create_id()
{
    return node_id(++m_last_id);
}

node_id_factory::node_id_factory()
{
}

}

