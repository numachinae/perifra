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
///   File: pio.hpp
///
/// Author: $author$
///   Date: 12/30/2022, 1/8/2023
///////////////////////////////////////////////////////////////////////
#ifndef XOS_PIO_RASPBERRYPI_RASPBERRYPIOS_PIGPIO_PIO_HPP
#define XOS_PIO_RASPBERRYPI_RASPBERRYPIOS_PIGPIO_PIO_HPP

#include "xos/pio/extend.hpp"

#if defined(RASPBERRYPIOS) && !defined(APPLEOS)
#include <pigpio.h>
#else /// defined(RASPBERRYPIOS) && !defined(APPLEOS)
#include "xos/platform/os/raspberrypi/raspberrypios/pigpio.h"
#endif /// defined(RASPBERRYPIOS) && !defined(APPLEOS)

namespace xos {
namespace pio {
namespace raspberrypi {
namespace raspberrypios {
namespace pigpio {

/// class piot
template <class TExtends = xos::pio::extend, class TImplements = typename TExtends::implements>
class exported piot: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef piot derives; 
    
    /// constructors / destructor
    piot(const piot& copy): extends(copy) {
    }
    piot() {
    }
    virtual ~piot() {
    }

    /// ...value
    virtual int8_t set_value(uint8_t of, uint8_t to) {
        int8_t value = 0;
        int err = 0;
        if (!(err = set_mode(of, PI_OUTPUT))) {
            LOGGER_IS_LOGGED_INFO("(err = gpioWrite(" << of << ", " << to << "))...");
            if ((err = gpioWrite(of, to))) {
                LOGGER_IS_LOGGED_ERROR("...failed on (" << err << " = gpioWrite(" << of << ", " << to << "))...");
            } else {
                LOGGER_IS_LOGGED_INFO("...(" << err << " = gpioWrite(" << of << ", " << to << "))...");
            }
        } else {
        }
        return value;
    }
    virtual int8_t get_value(uint8_t of) {
        int8_t value = 0;
        int err = 0;
        if (!(err = set_mode(of, PI_INPUT))) {
            LOGGER_IS_LOGGED_INFO("(err = gpioRead(" << of << "))...");
            if (0 > (err = gpioRead(of))) {
                LOGGER_IS_LOGGED_ERROR("...failed on (" << err << " = gpioRead(" << of << "))");
                value = ((int8_t)-1);
            } else {
                LOGGER_IS_LOGGED_INFO("...(" << err << " = gpioRead(" << of << "))");
                value = ((int8_t)err);
            }
        }
        return value;
    }
    virtual const char_t* value_name(uint8_t of) {
        const char_t* value_name_chars = 0;
        LOGGER_IS_LOGGED_INFO("(uint8_t of = " << of << ") ...");
        return value_name_chars;
    }
    
    /// ...mode
    virtual int8_t set_mode(uint8_t of, uint8_t to) {
        int8_t mode = 0;
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(err = gpioSetMode(" << of << ", " << to << "))...");
        if ((err = gpioSetMode(of, to))) {
            LOGGER_IS_LOGGED_ERROR("...failed on (" << err << " = gpioSetMode(" << of << ", " << to << "))");
        } else {
            LOGGER_IS_LOGGED_INFO("...(" << err << " = gpioSetMode(" << of << ", " << to << "))");
        }
        return mode;
    }
    virtual int8_t get_mode(uint8_t of) {
        int8_t mode = 0;
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(err = gpioGetMode(" << of << "))...");
        if (0 > (err = gpioGetMode(of))) {
            LOGGER_IS_LOGGED_ERROR("...failed on (" << err << " = gpioGetMode(" << of << "))");
        } else {
            LOGGER_IS_LOGGED_INFO("...(" << err << " = gpioGetMode(" << of << "))");
            mode = ((int8_t)err);
        }
        return mode;
    }
    virtual const char_t* mode_name(uint8_t of) {
        const char_t* mode_name_chars = 0;
        LOGGER_IS_LOGGED_INFO("(uint8_t of = " << of << ") ...");
        return mode_name_chars;
    }
    
    /// ...initialize / ...finalize
    virtual initialize_status untimed_initialize() {
        initialize_status status = initialize_success;
        int err = 0;
        LOGGER_IS_LOGGED_INFO("(err = gpioInitialise())...");
        if (0 > (err = gpioInitialise())) {
            LOGGER_IS_LOGGED_ERROR("...failed on (" << err << " = gpioInitialise())");
            status = initialize_failed;
        } else {
            LOGGER_IS_LOGGED_INFO("...(" << err << " = gpioInitialise())");
        }
        return status;
    }
    virtual finalize_status untimed_finalize() {
        initialize_status status = finalize_success;
        LOGGER_IS_LOGGED_INFO("(gpioTerminate())...");
        gpioTerminate();
        LOGGER_IS_LOGGED_INFO("(...gpioTerminate())");
        return status;
    }

}; /// class piot
typedef piot<> pio;

} /// namespace pigpio
} /// namespace raspberrypios
} /// namespace raspberrypi
} /// namespace pio
} /// namespace xos

#endif /// ndef XOS_PIO_RASPBERRYPI_RASPBERRYPIOS_PIGPIO_PIO_HPP
