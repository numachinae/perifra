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
#ifndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_MAIN_HPP
#define XOS_LIB_PROTOCOL_PIGPIO_CLIENT_MAIN_HPP

#include "xos/app/protocol/pigpio/client/main.hpp"
#include "xos/lib/version.hpp"

namespace xos {
namespace lib {
namespace protocol {
namespace pigpio {
namespace client {

/// class version
class version {
public:
    /// which 
    static const xos::lib::version& which();
}; /// class version 

/// class maint
template 
<class TExtends = xos::app::protocol::pigpio::client::maint<>,  class TImplements = typename TExtends::implements>

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
      argc_(0), arg_(0), en_(0),
      arg_chars_(&arg_), en_chars_(&en_),
      argv_(&arg_chars_), env_(&en_chars_) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint &copy) {
        throw exception(exception_unexpected);
    }
public:

    /// ...Restart / ...Stop
    int gpioRestart () {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->all_gpioRestart_run(argc_, argv_, env_)...");
        if (!(err = this->all_gpioRestart_run(argc_, argv_, env_))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->all_gpioRestart_run(argc_, argv_, env_)");
        }
        return err;
    }
    int gpioStop () {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->all_gpioStop_run(argc_, argv_, env_)...");
        if (!(err = this->all_gpioStop_run(argc_, argv_, env_))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->all_gpioStop_run(argc_, argv_, env_)");
        }
        return err;
    }

    /// ...Read / ...Write
    int gpioRead (unsigned gpio) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->all_gpioRead_run(gpio, argc_, argv_, env_)...");
        if (!(err = this->all_gpioRead_run(gpio, argc_, argv_, env_))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->all_gpioRead_run(gpio, argc_, argv_, env_)");
        }
        return err;
    }
    int gpioWrite(unsigned gpio, unsigned level) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->all_gpioWrite_run(gpio, level, argc_, argv_, env_)...");
        if (!(err = this->all_gpioWrite_run(gpio, level, argc_, argv_, env_))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->all_gpioWrite_run(gpio, level, argc_, argv_, env_)");
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

protected:
    int argc_;
    char_t arg_, en_, *arg_chars_, *en_chars_, **argv_, **env_;
}; /// class maint 
typedef maint<> main;

} /// namespace client 
} /// namespace pigpio 
} /// namespace protocol 
} /// namespace lib 
} /// namespace xos 

#endif /// ndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_MAIN_HPP
