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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 2/9/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_OPT_HPP

#include "xos/app/console/protocol/home/control/power/network/base/main.hpp"

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_ACCEPT_HOST "*"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_ACCEPT_PORT 8080

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_CONNECT_HOST "localhost"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_CONNECT_PORT \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_ACCEPT_PORT

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_RELAY_HOST \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_CONNECT_HOST
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_RELAY_PORT \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_ACCEPT_PORT

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_ACCEPT_HOST_OPTARG "[{ * | name | ddd.ddd.ddd.ddd | ...}[:{ 0..2^16-1 }]]"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_CONNECT_HOST_OPTARG "[{ name | ddd.ddd.ddd.ddd | ...}[:{ 0..2^16-1 }]]"

//////////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HOST_OPT "host"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HOST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HOST_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HOST_OPTARG \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_CONNECT_HOST_OPTARG
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HOST_OPTUSE "Hostname or address"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HOST_OPTVAL_S "o::"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HOST_OPTVAL_C 'o'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HOST_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HOST_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HOST_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HOST_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HOST_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_PORT_OPT "port"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_PORT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_PORT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_PORT_OPTARG "[{ 0..2^16-1 }]"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_PORT_OPTUSE "Port number"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_PORT_OPTVAL_S "p::"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_PORT_OPTVAL_C 'p'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_PORT_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_PORT_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_PORT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_PORT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_PORT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_HOST_OPT "relay-host"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_HOST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_HOST_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_HOST_OPTARG \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_CONNECT_HOST_OPTARG
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_HOST_OPTUSE "Relay hostname or address"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_HOST_OPTVAL_S "O::"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_HOST_OPTVAL_C 'O'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_HOST_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_HOST_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_HOST_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_HOST_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_HOST_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_PORT_OPT "relay-port"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_PORT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_PORT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_PORT_OPTARG \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_PORT_OPTARG
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_PORT_OPTUSE "Relay port number"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_PORT_OPTVAL_S "P::"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_PORT_OPTVAL_C 'P'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_PORT_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_PORT_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_PORT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_PORT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_RELAY_PORT_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace home {
namespace control {
namespace power {
namespace network {
namespace sockets {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::home::control::power::network::base::maint
 <xos::app::console::protocol::home::control::power::network::base::main_optt<> >,  class TImplements = typename TExtends::implements>

class main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    main_optt()
    : run_(0),

      host_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_CONNECT_HOST), 
      relay_host_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_RELAY_HOST),

      port_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_CONNECT_PORT), 
      relay_port_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_RELAY_PORT) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt &copy) {
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

    /// ...sockets_run
    int (derives::*sockets_run_)(int argc, char_t** argv, char_t** env);
    virtual int sockets_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((sockets_run_)) {
            err = (this->*sockets_run_)(argc, argv, env);
        } else {
            err = this->default_sockets_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_sockets_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_connect_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_sockets_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_sockets_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_sockets_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_sockets_run(argc, argv, env))) {
            int err2 = 0;
            err = sockets_run(argc, argv, env);
            if ((err2 = after_sockets_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...sockets_connect_run
    virtual int sockets_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_sockets_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_sockets_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = set_connect_run(argc, argv, env))) {
            if (!(err = connect_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int after_sockets_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = unset_connect_run(argc, argv, env))) {
            if (!(err = connect_run_unset(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int all_sockets_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_sockets_connect_run(argc, argv, env))) {
            int err2 = 0;
            err = sockets_connect_run(argc, argv, env);
            if ((err2 = after_sockets_connect_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...connect_run
    virtual int connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_connect_run(argc, argv, env))) {
            int err2 = 0;
            err = connect_run(argc, argv, env);
            if ((err2 = after_connect_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        sockets_run_ = &derives::all_connect_run;
        return err;
    }
    virtual int connect_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        sockets_run_ = 0;
        return err;
    }
    virtual int connect_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...host...
    virtual string_t& set_host(const string_t& to) {
        string_t& host = this->host();
        const char_t* chars = to.has_chars();
        if ((chars)) host.assign(to);
        else host.clear();
        return host;
    }
    virtual const string_t& get_host() const {
        return this->host();
    }
    virtual string_t& host() const {
        return (string_t&)host_;
    }
    virtual string_t& set_relay_host(const string_t& to) {
        string_t& relay_host = this->relay_host();
        const char_t* chars = to.has_chars();
        if ((chars)) relay_host.assign(to);
        else relay_host.clear();
        return relay_host;
    }
    virtual const string_t& get_relay_host() const {
        return this->relay_host();
    }
    virtual string_t& relay_host() const {
        return (string_t&)relay_host_;
    }

    /// ...port...
    virtual short& set_port(const short& to) {
        short& port = this->port();
        port = to;
        return port;
    }
    virtual const short& get_port() const {
        return this->port();
    }
    virtual short& port() const {
        return (short&)port_;
    }
    virtual short& set_relay_port(const short& to) {
        short& relay_port = this->relay_port();
        relay_port = to;
        return relay_port;
    }
    virtual const short& get_relay_port() const {
        return this->relay_port();
    }
    virtual short& relay_port() const {
        return (short& )relay_port_;
    }

protected:
    string_t host_, relay_host_;
    short port_, relay_port_;
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace sockets 
} /// namespace network 
} /// namespace power 
} /// namespace control 
} /// namespace home 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_OPT_HPP
