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
///   Date: 2/16/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_HPP

#include "xos/app/console/protocol/perifra/control/pigpio/client/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace perifra {
namespace control {
namespace pigpio {
namespace client {

//// class maint
template 
<class TExtends = xos::app::console::protocol::perifra::control::pigpio::client::main_optt<>,  class TImplements = typename TExtends::implements>

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
    maint()
    : run_(0), 
      
      begin_gpioWrite_request_("{\"pigpio\":{\"gpioWrite\":[{\"gpio\":\""), 
      middle_gpioWrite_request_("\"},{\"level\":\""), 
      end_gpioWrite_request_("\"}]}}"),
      
      begin_gpioRead_request_("{\"pigpio\":{\"gpioRead\":[{\"gpio\":\""), 
      middle_gpioRead_request_(""), 
      end_gpioRead_request_("\"}]}}"),

      gpioRestart_request_("restart"), 
      gpioStop_request_("stop"), 

      set_pin_value_pin_(17), get_pin_value_pin_(22), 
      set_pin_value_(1), pin_value_(0) {
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

    /// ...set_pio_pin_value_run_set
    virtual int set_pio_pin_value_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t& begin_gpioWrite_request = this->begin_gpioWrite_request();
        string_t& middle_gpioWrite_request = this->middle_gpioWrite_request();
        string_t& end_gpioWrite_request = this->end_gpioWrite_request();
        string_t& gpio_request = this->gpio_request();
        unsigned& gpio = this->set_pin_value_pin();
        unsigned& level = this->set_pin_value();

        gpio_request.assign(begin_gpioWrite_request);
        gpio_request.append_unsigned(gpio);
        gpio_request.append(middle_gpioWrite_request);
        gpio_request.append_unsigned(level);
        gpio_request.append(end_gpioWrite_request);
        this->set_request(gpio_request);
        return err;
    }

    /// ...get_pio_pin_value_run_set
    virtual int get_pio_pin_value_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t& begin_gpioRead_request = this->begin_gpioRead_request();
        string_t& middle_gpioRead_request = this->middle_gpioRead_request();
        string_t& end_gpioRead_request = this->end_gpioRead_request();
        string_t& gpio_request = this->gpio_request();
        unsigned& gpio = this->get_pin_value_pin();

        gpio_request.assign(begin_gpioRead_request);
        gpio_request.append_unsigned(gpio);
        gpio_request.append(middle_gpioRead_request);
        gpio_request.append(end_gpioRead_request);
        this->set_request(gpio_request);
        return err;
    }

    /// ...output_pio_pin_number_run
    virtual int output_pio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        unsigned_to_string pin(get_pin_value_pin());
        this->outln(pin);
        return err;
    }

    /// on_set_pin_value_option
    virtual int on_set_pin_value_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            unsigned value = arg.to_unsigned();
            set_pin_value() = value;
        } else {
        }
        return err;
    }

    /// on_set_pin_number_option
    virtual int on_set_pin_number_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            unsigned pin = arg.to_unsigned();
            get_pin_value_pin() = set_pin_value_pin() = pin;
        } else {
        }
        return err;
    }

    /// on...restart_option...
    virtual int on_set_restart_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        string_t& gpioRestart_request = this->gpioRestart_request();
        string_t& gpio_request = this->gpio_request();

        gpio_request.assign(gpioRestart_request);
        this->set_request(gpio_request);
        return err;
    }

    /// on...stop_option...
    virtual int on_set_stop_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        string_t& gpioStop_request = this->gpioStop_request();
        string_t& gpio_request = this->gpio_request();

        gpio_request.assign(gpioStop_request);
        this->set_request(gpio_request);
        return err;
    }

    /// ...gpio...request
    virtual string_t& begin_gpioWrite_request() const {
        return (string_t&)begin_gpioWrite_request_;
    }
    virtual string_t& middle_gpioWrite_request() const {
        return (string_t&)middle_gpioWrite_request_;
    }
    virtual string_t& end_gpioWrite_request() const {
        return (string_t&)end_gpioWrite_request_;
    }
    virtual string_t& begin_gpioRead_request() const {
        return (string_t&)begin_gpioRead_request_;
    }
    virtual string_t& middle_gpioRead_request() const {
        return (string_t&)middle_gpioRead_request_;
    }
    virtual string_t& end_gpioRead_request() const {
        return (string_t&)end_gpioRead_request_;
    }
    virtual string_t& gpioRestart_request() const {
        return (string_t&)gpioRestart_request_;
    }
    virtual string_t& gpioStop_request() const {
        return (string_t&)gpioStop_request_;
    }
    virtual string_t& gpio_request() const {
        return (string_t&)gpio_request_;
    }

    /// ...pin_value...
    virtual unsigned& set_pin_value_pin() const {
        return (unsigned&) set_pin_value_pin_;
    }
    virtual unsigned& get_pin_value_pin() const {
        return (unsigned&) get_pin_value_pin_;
    }
    virtual unsigned& set_pin_value() const {
        return (unsigned&) set_pin_value_;
    }
    virtual unsigned& pin_value() const {
        return (unsigned&) pin_value_;
    }

protected:
    string_t begin_gpioWrite_request_, middle_gpioWrite_request_, end_gpioWrite_request_, 
             begin_gpioRead_request_, middle_gpioRead_request_, end_gpioRead_request_, 
             gpioRestart_request_, gpioStop_request_, gpio_request_;
    unsigned set_pin_value_pin_, get_pin_value_pin_, set_pin_value_, pin_value_;
}; /// class maint 
typedef maint<> main;

} /// namespace client 
} /// namespace pigpio 
} /// namespace control 
} /// namespace perifra 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_HPP
