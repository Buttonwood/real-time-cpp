///////////////////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2007 - 2013.
//  Distributed under the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt
//  or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef _MCAL_REG_2010_04_10_H_
  #define _MCAL_REG_2010_04_10_H_

  #include <cstdint>

  namespace mcal
  {
    namespace reg
    {
      // System registers.
      constexpr std::uint32_t scb_vtor  = static_cast<std::uint32_t>(0xE000ED08UL);   // 32-bit register.
      constexpr std::uint32_t aircr     = static_cast<std::uint32_t>(0xE000ED0CUL);   // 32-bit register. SCB application interrupt / reset control.

      // Interrupt registers.
      constexpr std::uint32_t rcc_cr    = static_cast<std::uint32_t>(0x40021000UL);   // 32-bit register.
      constexpr std::uint32_t rcc_cfgr  = static_cast<std::uint32_t>(0x40021004UL);   // 32-bit register.
      constexpr std::uint32_t rcc_cir   = static_cast<std::uint32_t>(0x40021008UL);   // 32-bit register.
      constexpr std::uint32_t rcc_cfgr2 = static_cast<std::uint32_t>(0x4002102CUL);   // 32-bit register.

      // Port registers.
      constexpr std::uint32_t gpioa_crl = static_cast<std::uint32_t>(0x40010800UL);   // 32-bit register.
      constexpr std::uint32_t gpioa_crh = static_cast<std::uint32_t>(0x40010804UL);   // 32-bit register.
      constexpr std::uint32_t gpioa_idr = static_cast<std::uint32_t>(0x40010808UL);   // 32-bit register.
      constexpr std::uint32_t gpioa_odr = static_cast<std::uint32_t>(0x4001080CUL);   // 32-bit register.
      constexpr std::uint32_t gpioc_crl = static_cast<std::uint32_t>(0x40011000UL);   // 32-bit register.
      constexpr std::uint32_t gpioc_crh = static_cast<std::uint32_t>(0x40011004UL);   // 32-bit register.
      constexpr std::uint32_t gpioc_idr = static_cast<std::uint32_t>(0x40011008UL);   // 32-bit register.
      constexpr std::uint32_t gpioc_odr = static_cast<std::uint32_t>(0x4001100CUL);   // 32-bit register.

      // Timer registers.
      constexpr std::uint32_t tim4_cr1   = static_cast<std::uint32_t>(0x40000800UL);  // 16-bit register.
      constexpr std::uint32_t tim4_cr2   = static_cast<std::uint32_t>(0x40000804UL);  // 16-bit register.
      constexpr std::uint32_t tim4_smcr  = static_cast<std::uint32_t>(0x40000808UL);  // 16-bit register.
      constexpr std::uint32_t tim4_dier  = static_cast<std::uint32_t>(0x4000080CUL);  // 16-bit register.
      constexpr std::uint32_t tim4_sr    = static_cast<std::uint32_t>(0x40000810UL);  // 16-bit register.
      constexpr std::uint32_t tim4_egr   = static_cast<std::uint32_t>(0x40000814UL);  // 16-bit register.
      constexpr std::uint32_t tim4_ccmr1 = static_cast<std::uint32_t>(0x40000818UL);  // 16-bit register.
      constexpr std::uint32_t tim4_ccmr2 = static_cast<std::uint32_t>(0x4000081CUL);  // 16-bit register.
      constexpr std::uint32_t tim4_ccer  = static_cast<std::uint32_t>(0x40000820UL);  // 16-bit register.
      constexpr std::uint32_t tim4_cnt   = static_cast<std::uint32_t>(0x40000824UL);  // 16-bit register.
      constexpr std::uint32_t tim4_psc   = static_cast<std::uint32_t>(0x40000828UL);  // 16-bit register.
      constexpr std::uint32_t tim4_arr   = static_cast<std::uint32_t>(0x4000082CUL);  // 16-bit register.
      constexpr std::uint32_t tim4_rcr   = static_cast<std::uint32_t>(0x40000830UL);  // 16-bit register.

      // Power management registers.
      constexpr std::uint32_t rcc_apbenr  = static_cast<std::uint32_t>(0x40021014UL); // 32-bit register.
      constexpr std::uint32_t rcc_apb2enr = static_cast<std::uint32_t>(0x40021018UL); // 32-bit register.
      constexpr std::uint32_t rcc_apb1enr = static_cast<std::uint32_t>(0x4002101CUL); // 32-bit register.
    }
  }
#endif // _MCAL_REG_2010_04_10_H_
