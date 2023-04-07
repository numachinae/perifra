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
///   File: pigpio.cpp
///
/// Author: $author$
///   Date: 12/29/2022
///////////////////////////////////////////////////////////////////////
#include "xos/platform/os/raspberrypi/raspberrypios/pigpio.hpp"
#include "xos/platform/os/raspberrypi/raspberrypios/pigpio.c"

namespace xos {
namespace platform {
namespace os {
namespace raspberrypi {
namespace raspberrypios {

} /// namespace raspberrypios
} /// namespace raspberrypi
} /// namespace os
} /// namespace platform
} /// namespace xos

/// ...Initialise / ...Terminate
int gpioInitialise(void) {
    int err = 0;
    LOGGER_LOG_INFO("(void)...");
    return err;
}
void gpioTerminate(void) {
    LOGGER_LOG_INFO("(void)...");
}

/// ...Mode
int gpioGetMode(unsigned gpio) {
    int err = 0;
    LOGGER_LOG_INFO("(unsigned gpio = " << gpio << ")...");
    return err;
}
int gpioSetMode(unsigned gpio, unsigned mode) {
    int err = 0;
    LOGGER_LOG_INFO("(unsigned gpio = " << gpio << ", unsigned mode = " << mode << ")...");
    return err;
}

/// ...Read / ...Write
int gpioRead(unsigned gpio) {
    int err = -1;
    LOGGER_LOG_INFO("(unsigned gpio = " << gpio << ")...");
    return err;
}
int gpioWrite(unsigned gpio, unsigned level) {
    int err = 0;
    LOGGER_LOG_INFO("(unsigned gpio = " << gpio << ", unsigned level = " << level << ")...");
    return err;
}