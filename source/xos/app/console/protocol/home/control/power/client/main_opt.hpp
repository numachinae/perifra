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
///   Date: 1/4/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPT_HPP

#include "xos/app/console/protocol/home/control/power/base/main.hpp"
#include "xos/app/console/protocol/client/main.hpp"

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTVAL_S \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace home {
namespace control {
namespace power {
namespace client {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::home::control::power::base::maint
 <xos::app::console::protocol::home::control::power::base::main_optt
 <xos::app::console::protocol::client::maint
 <xos::app::console::protocol::client::main_optt<> > > >,  class TImplements = typename TExtends::implements>

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
    main_optt(): run_(0) {
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

    /// on...request_option...
    virtual int on_request_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = this->set_output_request_run(argc, argv, env))) {
            if (!(err = this->output_request_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    /// on...response_option...
    virtual int on_response_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = this->set_output_response_run(argc, argv, env))) {
            if (!(err = this->output_response_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    /// on...response_option...
    virtual int on_response_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = this->set_process_response_run(argc, argv, env))) {
            if (!(err = this->process_response_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }

    /// on...power_on_option...
    virtual int on_set_power_on_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_request(this->power_on_request());
        return err;
    }
    virtual int on_power_on_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_request_option_set(optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }

    /// on...power_off_option...
    virtual int on_set_power_off_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_request(this->power_off_request());
        return err;
    }
    virtual int on_power_off_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_request_option_set(optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }

    /// on...power_state_option...
    virtual int on_get_power_state_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_request(this->power_state_request());
        return err;
    }
    virtual int on_power_state_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_request_option_set(optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }

    /// on...system_info_option...
    virtual int on_get_system_info_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_request(this->system_info_request());
        return err;
    }
    virtual int on_system_info_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_request_option_set(optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }

    /// on...system_restart_option...
    virtual int on_set_system_restart_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_request(this->system_restart_request());
        return err;
    }
    virtual int on_system_restart_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_request_option_set(optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }

    /// on...system_stop_option...
    virtual int on_set_system_stop_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_request(this->system_stop_request());
        return err;
    }
    virtual int on_system_stop_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_request_option_set(optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }

    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    
    /// option_usage
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }

    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace client 
} /// namespace power 
} /// namespace control 
} /// namespace home 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPT_HPP
