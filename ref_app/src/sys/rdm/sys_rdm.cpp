///////////////////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2013.
//  Distributed under the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt
//  or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <mcal_port.h>
#include <mcal_rdm.h>
#include <util/monitor/util_single_pin_debug_monitor.h>

namespace sys
{
  namespace rdm
  {
    void task_init();
    void task_func();
  }
}

namespace
{
  typedef util::single_pin_debug_monitor<mcal::rdm::port_rdm_type> rdm_debug_monitor_type;

  rdm_debug_monitor_type rdm_debug_monitor;
}

void sys::rdm::task_init()
{
}

void sys::rdm::task_func()
{
  rdm_debug_monitor.driver_task();

  rdm_debug_monitor.protocol_task<mcal::rdm::address_type,
                                  mcal::rdm::address_offset>();
}
