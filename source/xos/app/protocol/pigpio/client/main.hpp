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
#ifndef XOS_APP_PROTOCOL_PIGPIO_CLIENT_MAIN_HPP
#define XOS_APP_PROTOCOL_PIGPIO_CLIENT_MAIN_HPP

#include "xos/app/protocol/pigpio/base/main.hpp"
#include "xos/app/protocol/network/sockets/client/main.hpp"

namespace xos {
namespace app {
namespace protocol {
namespace pigpio {
namespace client {

/// class maint
template 
<class TExtends = xos::app::protocol::pigpio::base::maint
 <xos::app::protocol::network::sockets::client::maint<> >,  class TImplements = typename TExtends::implements>

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
      gpioStop_request_("stop") {
    }
    virtual ~maint() {
    }
private:
    maint(const maint &copy) {
        throw exception(exception_unexpected);
    }
public:
    /// ...gpioWrite_run
    virtual int gpioWrite_run(const uint8_t& gpio, const uint8_t& level, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_gpioWrite_run(const uint8_t& gpio, const uint8_t& level, int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t& begin_gpioWrite_request = this->begin_gpioWrite_request();
        string_t& middle_gpioWrite_request = this->middle_gpioWrite_request();
        string_t& end_gpioWrite_request = this->end_gpioWrite_request();
        string_t& gpio_request = this->gpio_request();
        
        gpio_request.assign(begin_gpioWrite_request);
        gpio_request.append_unsigned(gpio);
        gpio_request.append(middle_gpioWrite_request);
        gpio_request.append_unsigned(level);
        gpio_request.append(end_gpioWrite_request);
        this->set_request(gpio_request);
        if (!(err = this->set_connect_run(argc, argv, env))) {
            if (!(err = this->connect_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int after_gpioWrite_run(const uint8_t& gpio, const uint8_t& level, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gpioWrite_run(const uint8_t& gpio, const uint8_t& level, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gpioWrite_run(gpio, level, argc, argv, env))) {
            int err2 = 0;
            err = gpioWrite_run(gpio, level, argc, argv, env);
            if ((err2 = after_gpioWrite_run(gpio, level, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...gpioRead_run
    virtual int gpioRead_run(const uint8_t& gpio, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_gpioRead_run(const uint8_t& gpio, int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t& begin_gpioRead_request = this->begin_gpioRead_request();
        string_t& middle_gpioRead_request = this->middle_gpioRead_request();
        string_t& end_gpioRead_request = this->end_gpioRead_request();
        string_t& gpio_request = this->gpio_request();
        
        gpio_request.assign(begin_gpioRead_request);
        gpio_request.append_unsigned(gpio);
        gpio_request.append(middle_gpioRead_request);
        gpio_request.append(end_gpioRead_request);
        this->set_request(gpio_request);
        if (!(err = this->set_connect_run(argc, argv, env))) {
            if (!(err = this->connect_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int after_gpioRead_run(const uint8_t& gpio, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gpioRead_run(const uint8_t& gpio, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gpioRead_run(gpio, argc, argv, env))) {
            int err2 = 0;
            err = gpioRead_run(gpio, argc, argv, env);
            if ((err2 = after_gpioRead_run(gpio, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...gpioRestart_run
    virtual int gpioRestart_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_gpioRestart_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t& gpioRestart_request = this->gpioRestart_request();
        string_t& gpio_request = this->gpio_request();
        
        gpio_request.assign(gpioRestart_request);
        this->set_request(gpio_request);
        if (!(err = this->set_connect_run(argc, argv, env))) {
            if (!(err = this->connect_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int after_gpioRestart_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gpioRestart_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gpioRestart_run(argc, argv, env))) {
            int err2 = 0;
            err = gpioRestart_run(argc, argv, env);
            if ((err2 = after_gpioRestart_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...gpioStop_run
    virtual int gpioStop_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_gpioStop_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t& gpioStop_request = this->gpioStop_request();
        string_t& gpio_request = this->gpio_request();
        
        gpio_request.assign(gpioStop_request);
        this->set_request(gpio_request);
        if (!(err = this->set_connect_run(argc, argv, env))) {
            if (!(err = this->connect_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int after_gpioStop_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gpioStop_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gpioStop_run(argc, argv, env))) {
            int err2 = 0;
            err = gpioStop_run(argc, argv, env);
            if ((err2 = after_gpioStop_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
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
    
protected:
    string_t begin_gpioWrite_request_, middle_gpioWrite_request_, end_gpioWrite_request_, 
             begin_gpioRead_request_, middle_gpioRead_request_, end_gpioRead_request_, 
             gpioRestart_request_, gpioStop_request_, gpio_request_;
}; /// class maint 
typedef maint<> main;

} /// namespace client 
} /// namespace pigpio 
} /// namespace protocol 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_PROTOCOL_PIGPIO_CLIENT_MAIN_HPP
