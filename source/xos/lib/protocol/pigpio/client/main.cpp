//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2023 $organization$
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
///   File: main.cpp
///
/// Author: $author$
///   Date: 3/28/2023
//////////////////////////////////////////////////////////////////////////
#include "xos/lib/protocol/pigpio/client/main.hpp"
#include "xos/app/protocol/pigpio/client/main.cpp"
#include "xos/app/console/pigpio/client/pio/main.h"
#include "xos/platform/os/raspberrypi/raspberrypios/pigpio.h"

#ifndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_NAME
#define XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_NAME "libpigpioc"
#endif /// ndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_NAME 

#ifndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_MAJOR
#define XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_MAJOR 0
#endif /// ndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_MAJOR 

#ifndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_MINOR
#define XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_MINOR 0
#endif /// ndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_MINOR 

#ifndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_RELEASE
#define XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_RELEASE 0
#endif /// ndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_RELEASE 

#ifndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_PREFIX
/// #define XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_PREFIX build 
#endif /// ndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_PREFIX 

#ifndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_DATE
#define XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_DATE 3/28/2023
#endif /// ndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_DATE 

#ifndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD
#ifndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_PREFIX
#define  XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD  XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_DATE
#else /// ndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_PREFIX 
#define  XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD  XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_PREFIX-XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_DATE
#endif /// ndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_PREFIX 
#endif /// ndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD 

#ifndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_CHARS
#define XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_CHARS XOS_2CHARS(XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD)
#endif /// ndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_CHARS 

#ifndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_MAIN_INSTANCE
#define XOS_LIB_PROTOCOL_PIGPIO_CLIENT_MAIN_INSTANCE 
#else /// ndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_MAIN_INSTANCE 
#endif /// ndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_MAIN_INSTANCE 

namespace xos {
namespace lib {
namespace protocol {
namespace pigpio {
namespace client {

namespace which {
/// class versiont
template <class TExtends = lib::extended::version, class TImplements = typename TExtends::implements>
class exported versiont: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef versiont derives;

    /// constructor / destructor 
    versiont(const versiont& copy): extends(copy) {
    }
    versiont(): extends
    (XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_NAME, 
     XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_MAJOR, XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_MINOR, 
     XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_RELEASE, XOS_LIB_PROTOCOL_PIGPIO_CLIENT_VERSION_BUILD_CHARS) {
    }
    virtual ~versiont() {
    }
}; /// class versiont 
typedef versiont<> version;
} /// namespace which 

/// class version
const xos::lib::version &version::which() {
    static const xos::lib::protocol::pigpio::client::which::version version;
    return version;
}

/// class 
#ifdef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_MAIN_INSTANCE
static main the_main;
#endif /// def XOS_LIB_PROTOCOL_PIGPIO_CLIENT_MAIN_INSTANCE 

} /// namespace client 
} /// namespace pigpio 
} /// namespace protocol 
} /// namespace lib 
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
int gpioRead (unsigned gpio) {
    int err = 0;
    LOGGER_LOG_INFO("xos::lib::protocol::pigpio::client::the_main.gpioRead(unsigned gpio = " << gpio << ")...");
    if (!(err = xos::lib::protocol::pigpio::client::the_main.gpioRead(gpio))) {
        LOGGER_LOG_INFO("..." << err <<" = xos::lib::protocol::pigpio::client::the_main.gpioRead(unsigned gpio = " << gpio << ")");
    } else {
    }
    return err;
}
int gpioWrite(unsigned gpio, unsigned level) {
    int err = 0;
    LOGGER_LOG_INFO("xos::lib::protocol::pigpio::client::the_main.gpioWrite(unsigned gpio = " << gpio << ", unsigned level = " << level << ")...");
    if (!(err = xos::lib::protocol::pigpio::client::the_main.gpioWrite(gpio, level))) {
        LOGGER_LOG_INFO("..." << err <<" = xos::lib::protocol::pigpio::client::the_main.gpioWrite(unsigned gpio = " << gpio << ", unsigned level = " << level << ")");
    } else {
    }
    return err;
}

/// ...Restart / ...Stop
int gpioRestart() {
    int err = 0;
    LOGGER_LOG_INFO("xos::lib::protocol::pigpio::client::the_main.gpioRestart()...");
    if (!(err = xos::lib::protocol::pigpio::client::the_main.gpioRestart())) {
        LOGGER_LOG_INFO("..." << err <<" = xos::lib::protocol::pigpio::client::the_main.gpioRestart()");
    } else {
    }
    return err;
}
int gpioStop() {
    int err = 0;
    LOGGER_LOG_INFO("xos::lib::protocol::pigpio::client::the_main.gpioStop()...");
    if (!(err = xos::lib::protocol::pigpio::client::the_main.gpioStop())) {
        LOGGER_LOG_INFO("..." << err <<" = xos::lib::protocol::pigpio::client::the_main.gpioStop()");
    } else {
    }
    return err;
}


/// ...Host / ...Port
int gpioSetHost(const char* to) {
    int err = 0;
    LOGGER_LOG_INFO("xos::lib::protocol::pigpio::client::the_main.set_host(to = " << to << ")...");
    xos::lib::protocol::pigpio::client::the_main.set_host(to);
    LOGGER_LOG_INFO("...xos::lib::protocol::pigpio::client::the_main.set_host(to = " << to << ")");
    return err;
}
int gpioSetPort(short to) {
    int err = 0;
    LOGGER_LOG_INFO("xos::lib::protocol::pigpio::client::the_main.set_port(to = " << to << ")...");
    xos::lib::protocol::pigpio::client::the_main.set_port(to);
    LOGGER_LOG_INFO("...xos::lib::protocol::pigpio::client::the_main.set_port(to = " << to << ")");
    return err;
}
