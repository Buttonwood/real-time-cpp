#ifndef _MCAL_SPI_2012_05_24_H_
  #define _MCAL_SPI_2012_05_24_H_

  #include <util/utility/util_type.h>
  #include <util/utility/util_communication.h>

  namespace mcal
  {
    namespace spi
    {
      typedef void config_type;

      inline void init(const config_type*) { }

      class spi_communication : public util::communication
      {
      public:
        spi_communication();
        virtual ~spi_communication() { }

        virtual bool send(const std::uint8_t byte_to_send);
        virtual bool send(const data_type& data_to_send);
        virtual bool recv(std::uint8_t& byte_to_recv);
        virtual bool recv(data_type& data_to_recv);
        virtual std::size_t recv_ready() const;
        virtual bool idle(void) const;
      };

      extern spi_communication the_spi;
    }
  }

#endif // _MCAL_SPI_2012_05_24_H_