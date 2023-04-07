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
#ifndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_NETWORK_SOCKETS_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_NETWORK_SOCKETS_CLIENT_MAIN_HPP

#include "xos/app/console/protocol/perifra/control/pigpio/network/sockets/client/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace perifra {
namespace control {
namespace pigpio {
namespace network {
namespace sockets {
namespace client {

//// class maint
template 
<class TExtends = xos::app::console::protocol::perifra::control::pigpio::network::sockets::client::main_optt<>,  class TImplements = typename TExtends::implements>

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

    /// send_request_run_set
    virtual int send_request_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::send_request_run_set(argc, argv, env))) {
            if (!(err = this->unset_connect_run(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    /// send_response_run_set
    virtual int send_response_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::send_response_run_set(argc, argv, env))) {
            if (!(err = this->unset_connect_run(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }

    /// ...set_pio_pin_value_run_set
    virtual int set_pio_pin_value_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::set_pio_pin_value_run_set(argc, argv, env))) {
            if (!(err = this->set_connect_run(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }

    /// ...get_pio_pin_value_run_set
    virtual int get_pio_pin_value_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::get_pio_pin_value_run_set(argc, argv, env))) {
            if (!(err = this->set_connect_run(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }

    /// on...restart_option...
    virtual int on_restart_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = extends::on_restart_option_set(optarg, optind, argc, argv, env))) {
            if (!(err = this->set_connect_run(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }

    /// on...stop_option...
    virtual int on_stop_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = extends::on_stop_option_set(optarg, optind, argc, argv, env))) {
            if (!(err = this->set_connect_run(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }

protected:
}; /// class maint 
typedef maint<> main;

} /// namespace client 
} /// namespace sockets 
} /// namespace network 
} /// namespace pigpio 
} /// namespace control 
} /// namespace perifra 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_NETWORK_SOCKETS_CLIENT_MAIN_HPP
