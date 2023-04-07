///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2022 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: pio.cpp
///
/// Author: $author$
///   Date: 12/30/2022
///////////////////////////////////////////////////////////////////////
#include "xos/pio/raspberrypi/raspberrypios/pigpio/pio.hpp"

#if !defined(XOS_PIO_RASPBERRYPI_RASPBERRYPIOS_PIGPIO_PIO_INSTANCE)
///#define XOS_PIO_RASPBERRYPI_RASPBERRYPIOS_PIGPIO_PIO_INSTANCE
#endif /// !defined(XOS_PIO_RASPBERRYPI_RASPBERRYPIOS_PIGPIO_PIO_INSTANCE)

namespace xos {
namespace pio {
namespace raspberrypi {
namespace raspberrypios {
namespace pigpio {

///  Class: piot
#if defined(XOS_PIO_RASPBERRYPI_RASPBERRYPIOS_PIGPIO_PIO_INSTANCE)
static pio the_pio;
#endif /// defined(XOS_PIO_RASPBERRYPI_RASPBERRYPIOS_PIGPIO_PIO_INSTANCE)


} /// namespace pigpio
} /// namespace raspberrypios
} /// namespace raspberrypi
} /// namespace pio
} /// namespace xos
