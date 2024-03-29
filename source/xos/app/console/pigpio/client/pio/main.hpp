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
///   File: main.hpp
///
/// Author: $author$
///   Date: 3/28/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PIGPIO_CLIENT_PIO_MAIN_HPP
#define XOS_APP_CONSOLE_PIGPIO_CLIENT_PIO_MAIN_HPP

#include "xos/app/console/pigpio/client/pio/main_opt.hpp"
#include "xos/app/console/pigpio/client/pio/main.h"
#include "xos/pio/raspberrypi/raspberrypios/pigpio/pio.hpp"

namespace xos {
namespace app {
namespace console {
namespace pigpio {
namespace client {
namespace pio {

/// class maint
template 
<class TExtends = xos::app::console::pigpio::client::pio::main_optt<>,  class TImplements = typename TExtends::implements>

class maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint(): run_(0) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint &copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef typename extends::pio_t pio_t;
    typedef xos::pio::raspberrypi::raspberrypios::pigpio::pio pigpio_pio_t;

    /// run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// on...restart_option...
    virtual int on_set_restart_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        gpioRestart();
        return err;
    }
    /// on...start_option...
    virtual int on_set_start_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        gpioStart();
        return err;
    }
    /// on...stop_option...
    virtual int on_set_stop_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        gpioStop();
        return err;
    }

    /// ...pigpio_host_option
    virtual int on_set_pigpio_host_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        const char_t *host = 0;
        if ((optarg) && ((host = optarg)[0])) {
            gpioSetHost(host);
        } else {
        }
        return err;
    }
    /// ...pigpio_port_option
    virtual int on_set_pigpio_port_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        const char_t *port = 0;
        if ((optarg) && ((port = optarg)[0])) {
            string_t port_string(port);
            short portno = (short)port_string.to_signed();
            if (0 < (portno)) {
                gpioSetPort(portno);
            }
        } else {
        }
        return err;
    }

    /// ...pio
    virtual pio_t& pio() const {
        return (pio_t&)pio_;
    }

protected:
    pigpio_pio_t pio_;
}; /// class maint 
typedef maint<> main;

} /// namespace pio 
} /// namespace client 
} /// namespace pigpio 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PIGPIO_CLIENT_PIO_MAIN_HPP
