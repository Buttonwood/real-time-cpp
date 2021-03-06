///////////////////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2007 - 2013.
//  Distributed under the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt
//  or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef _MCAL_REG_2010_04_10_H_
  #define _MCAL_REG_2010_04_10_H_

  #include <util/utility/util_type.h>

  namespace mcal
  {
    namespace reg
    {
      constexpr std::uint8_t sfr_offset = 0x20U;

      // Bit-position values.
      constexpr std::uint8_t bval0  = 1U;
      constexpr std::uint8_t bval1  = 1U << 1U;
      constexpr std::uint8_t bval2  = 1U << 2U;
      constexpr std::uint8_t bval3  = 1U << 3U;
      constexpr std::uint8_t bval4  = 1U << 4U;
      constexpr std::uint8_t bval5  = 1U << 5U;
      constexpr std::uint8_t bval6  = 1U << 6U;
      constexpr std::uint8_t bval7  = 1U << 7U;

      // Port registers
      constexpr std::uint8_t ddrb   = 0x04U + sfr_offset;
      constexpr std::uint8_t portb  = 0x05U + sfr_offset;
      constexpr std::uint8_t ddrc   = 0x07U + sfr_offset;
      constexpr std::uint8_t portc  = 0x08U + sfr_offset;
      constexpr std::uint8_t ddrd   = 0x0AU + sfr_offset;
      constexpr std::uint8_t portd  = 0x0BU + sfr_offset;
      constexpr std::uint8_t ddre   = 0x0DU + sfr_offset;
      constexpr std::uint8_t porte  = 0x0EU + sfr_offset;

      // Timer registers
      constexpr std::uint8_t tifr0  = 0x15U + sfr_offset;
      constexpr std::uint8_t tccr0a = 0x24U + sfr_offset;
      constexpr std::uint8_t tccr0b = 0x25U + sfr_offset;
      constexpr std::uint8_t tcnt0  = 0x26U + sfr_offset;
      constexpr std::uint8_t ocr0a  = 0x27U + sfr_offset;
      constexpr std::uint8_t timsk0 = 0x6EU;

      // SPI(TM) registers.
      constexpr std::uint8_t spcr = 0x2CU + sfr_offset;
      constexpr std::uint8_t spsr = 0x2DU + sfr_offset;
      constexpr std::uint8_t spdr = 0x2EU + sfr_offset;
    }
  }
#endif // _MCAL_REG_2010_04_10_H_
