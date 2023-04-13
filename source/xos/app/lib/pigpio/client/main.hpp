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
///   Date: 3/27/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_LIB_PIGPIO_CLIENT_MAIN_HPP
#define XOS_APP_LIB_PIGPIO_CLIENT_MAIN_HPP

#include "xos/app/lib/pigpio/client/main_opt.hpp"

#define XOS_APP_LIB_PIGPIO_DEFAULT_PIGPIO_GPIO 17
#define XOS_APP_LIB_PIGPIO_DEFAULT_PIGPIO_LEVEL 1
#define XOS_APP_LIB_PIGPIO_DEFAULT_PIGPIO_MODE 1

namespace xos {
namespace app {
namespace lib {
namespace pigpio {
namespace client {

/// class maint
template 
<class TMain = xos::app::protocol::pigpio::client::maint<>,
 class TExtends = xos::app::lib::pigpio::client::main_optt<TMain>,  class TImplements = typename TExtends::implements>

class maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::main_t main_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint()
    : run_(0), 
      pigpio_gpio_(XOS_APP_LIB_PIGPIO_DEFAULT_PIGPIO_GPIO), 
      pigpio_level_(XOS_APP_LIB_PIGPIO_DEFAULT_PIGPIO_LEVEL), 
      pigpio_mode_(XOS_APP_LIB_PIGPIO_DEFAULT_PIGPIO_MODE) {
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

    /// ...set_pio_pin_value_run
    virtual int before_set_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        main_t& main = this->main();
        uint8_t& pigpio_gpio = this->pigpio_gpio();
        uint8_t& pigpio_level = this->pigpio_level();
        if (!(err = main.all_gpioWrite_run(pigpio_gpio, pigpio_level, argc, argv, env))) {
        } else {
        }
        return err;
    }

    /// ...output_pio_pin_value_run
    virtual int output_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        main_t& main = this->main();
        uint8_t& pigpio_gpio = this->pigpio_gpio();
        if (!(err = main.all_gpioRead_run(pigpio_gpio, argc, argv, env))) {
        } else {
        }
        return err;
    }

    /// ...output_pio_pin_number_run
    virtual int output_pio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        uint8_t& pigpio_gpio = this->pigpio_gpio();
        unsigned_to_string pio_pin_number(pigpio_gpio);
        this->outln(pio_pin_number);
        return err;
    }

    /// ...output_pio_pin_mode_run
    virtual int output_pio_pin_mode_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        uint8_t& pigpio_mode = this->pigpio_mode();
        unsigned_to_string pio_pin_mode(pigpio_mode);
        this->outln(pio_pin_mode);
        return err;
    }

    /// on...pin_value_option...
    virtual int on_set_pio_pin_value_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            uint8_t pigpio_level = ((uint8_t)arg.to_unsigned());
            set_pigpio_level(pigpio_level);
        } else {
        }
        return err;
    }

    /// on...pin_number_option...
    virtual int on_set_pio_pin_number_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            uint8_t pigpio_gpio = ((uint8_t)arg.to_unsigned());
            set_pigpio_gpio(pigpio_gpio);
        } else {
        }
        return err;
    }

    /// ...restart_run
    virtual int restart_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        main_t& main = this->main();
        if (!(err = main.all_gpioRestart_run(argc, argv, env))) {
        } else {
        }
        return err;
    }

    /// ...stop_run
    virtual int stop_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        main_t& main = this->main();
        if (!(err = main.all_gpioStop_run(argc, argv, env))) {
        } else {
        }
        return err;
    }

    /// ...pigpio...
    virtual uint8_t& set_pigpio_gpio(const uint8_t& to) {
        uint8_t& pigpio_gpio = this->pigpio_gpio();
        pigpio_gpio = to;
        return pigpio_gpio;
    }
    virtual uint8_t& pigpio_gpio() const {
        return (uint8_t&) pigpio_gpio_;
    }
    virtual uint8_t& set_pigpio_level(const uint8_t& to) {
        uint8_t& pigpio_level = this->pigpio_level();
        pigpio_level = to;
        return pigpio_level;
    }
    virtual uint8_t& pigpio_level() const {
        return (uint8_t&) pigpio_level_;
    }
    virtual uint8_t& set_pigpio_mode(const uint8_t& to) {
        uint8_t& pigpio_mode = this->pigpio_mode();
        pigpio_mode = to;
        return pigpio_mode;
    }
    virtual uint8_t& pigpio_mode() const {
        return (uint8_t&) pigpio_mode_;
    }
    
protected:
    uint8_t pigpio_gpio_, pigpio_level_, pigpio_mode_;
}; /// class maint 
typedef maint<> main;

} /// namespace client 
} /// namespace pigpio 
} /// namespace lib 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_LIB_PIGPIO_CLIENT_MAIN_HPP
