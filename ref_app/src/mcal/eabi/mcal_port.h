///////////////////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2007 - 2013.
//  Distributed under the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt
//  or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef _MCAL_PORT_2012_06_27_H_
  #define _MCAL_PORT_2012_06_27_H_

  #include <cstdint>
  #include <mcal_reg_access.h>

  namespace mcal
  {
    namespace port
    {
      typedef void config_type;
      void init(const config_type*);

      template<typename addr_type,
               typename reg_type,
               const addr_type port,
               const reg_type bpos>
      class port_pin
      {
      public:
        static void set_direction_output()
        {
          // Read the value of the port direction register.
          // Clear all the port pin control bits in the new register value.
          // Set the port pin control bits for output, push-pull, 50MHz in the new register value.
          reg_type new_pdir_value = mcal::reg::access<addr_type, reg_type, pdir>::reg_get();
          new_pdir_value &= reg_type(~(reg_type(0xFUL) << pdir_shift_offset));
          new_pdir_value |= (reg_type(0x3UL) << pdir_shift_offset);

          // Set the port for digital output.
          mcal::reg::access<addr_type, reg_type, pdir>::reg_set(new_pdir_value);
        }

        static void set_direction_input()
        {
          // Read the value of the port direction register.
          // Clear all the port pin control bits in the new register value.
          // Set the port pin control bits for input in the new register value.
          reg_type new_pdir_value = mcal::reg::access<addr_type, reg_type, pdir>::reg_get();
          new_pdir_value &= reg_type(~(reg_type(0xFUL) << pdir_shift_offset));
          new_pdir_value |= (reg_type(0x4UL) << pdir_shift_offset);

          // Set the port for digital input.
          mcal::reg::access<addr_type, reg_type, pdir>::reg_set(new_pdir_value);
        }

        static void set_pin_high()
        {
          // Set the port output value to high.
          mcal::reg::access<addr_type, reg_type, port, bpos>::bit_set();
        }

        static void set_pin_low()
        {
          // Set the port output value to low.
          mcal::reg::access<addr_type, reg_type, port, bpos>::bit_clr();
        }

        static bool read_input_value()
        {
          // Read the port input value.
          return mcal::reg::access<addr_type, reg_type, pinp, bpos>::bit_get();
        }

        static void toggle_pin()
        {
          // Toggle the port output value.
          mcal::reg::access<addr_type, reg_type, port, bpos>::bit_not();
        }

      private:
        static constexpr addr_type pdir = addr_type(port - addr_type((bpos >= 8U) ? 8U : 12U));
        static constexpr addr_type pinp = addr_type(port - 4U);

        static constexpr reg_type pdir_shift_offset = reg_type((bpos - reg_type((bpos >= 8U) ? 8U : 0U)) * 4U);
      };
    }
  }

#endif // _MCAL_PORT_2012_06_27_H_
