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
///   Date: 2/16/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_OPT_HPP

#include "xos/app/console/protocol/perifra/control/pigpio/base/main.hpp"

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPT "restart"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTUSE "restart pio server"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTVAL_S "R"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTVAL_C 'R'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPT "stop"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTUSE "stop pio server"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTVAL_S "S"
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTVAL_C 'S'
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIO_BASE_MAIN_PIN_VALUE_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIO_BASE_MAIN_PIN_NUMBER_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTVAL_S \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIO_BASE_MAIN_PIN_VALUE_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIO_BASE_MAIN_PIN_NUMBER_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_BASE_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_BASE_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace perifra {
namespace control {
namespace pigpio {
namespace client {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::perifra::control::pigpio::base::maint
 <xos::app::console::protocol::perifra::control::pigpio::base::main_optt
 <xos::app::console::protocol::perifra::control::client::maint
 <xos::app::console::protocol::perifra::control::client::main_optt
 <xos::app::console::protocol::perifra::control::base::maint
 <xos::app::console::protocol::perifra::control::base::main_optt
 <xos::app::console::protocol::client::maint
 <xos::app::console::protocol::client::main_optt
 <xos::app::console::protocol::base::maint
 <xos::app::console::protocol::base::main_optt<> > > > > > > > > >,  class TImplements = typename TExtends::implements>

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

    /// ...set_pio_pin_value_run
    virtual int set_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_output_request_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_set_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_pio_pin_value_run(argc, argv, env))) {
            int err2 = 0;
            err = set_pio_pin_value_run(argc, argv, env);
            if ((err2 = after_set_pio_pin_value_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_set_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_set_pio_pin_value_run;
        return err;
    }
    virtual int set_pio_pin_value_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_set_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int set_pio_pin_value_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...get_pio_pin_value_run
    virtual int get_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_output_request_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_get_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_get_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_get_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_get_pio_pin_value_run(argc, argv, env))) {
            int err2 = 0;
            err = get_pio_pin_value_run(argc, argv, env);
            if ((err2 = after_get_pio_pin_value_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_get_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_get_pio_pin_value_run;
        return err;
    }
    virtual int get_pio_pin_value_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_get_pio_pin_value_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int get_pio_pin_value_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...output_pio_pin_number_run
    virtual int output_pio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_pio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_pio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_pio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_pio_pin_number_run(argc, argv, env))) {
            int err2 = 0;
            err = output_pio_pin_number_run(argc, argv, env);
            if ((err2 = after_output_pio_pin_number_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_pio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_pio_pin_number_run;
        return err;
    }
    virtual int output_pio_pin_number_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_pio_pin_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_pio_pin_number_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// on...pin_value_option...
    virtual int on_get_pin_value_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_pin_value_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_get_pio_pin_value_run(argc, argv, env))) {
            if (!(err = get_pio_pin_value_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_set_pin_value_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_pin_value_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_set_pio_pin_value_run(argc, argv, env))) {
                if (!(err = set_pio_pin_value_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_pin_value_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_pin_value_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_pin_value_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_pin_value_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_pin_value_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* pin_value_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIO_BASE_MAIN_PIN_VALUE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIO_BASE_MAIN_PIN_VALUE_OPTARG;
        return chars;
    }

    /// on...pin_number_option...
    virtual int on_get_pin_number_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_pin_number_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_output_pio_pin_number_run(argc, argv, env))) {
            if (!(err = output_pio_pin_number_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_set_pin_number_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_pin_number_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_output_pio_pin_number_run(argc, argv, env))) {
                if (!(err = output_pio_pin_number_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_pin_number_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_pin_number_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_pin_number_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_pin_number_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_pin_number_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* pin_number_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIO_BASE_MAIN_PIN_NUMBER_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIO_BASE_MAIN_PIN_NUMBER_OPTARG;
        return chars;
    }

    /// on...restart_option...
    virtual int on_set_restart_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_restart_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_restart_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_restart_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_restart_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* restart_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTARG;
        return chars;
    }

    /// on...stop_option...
    virtual int on_set_stop_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_stop_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_stop_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_stop_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_stop_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* stop_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTARG;
        return chars;
    }

    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIO_BASE_MAIN_PIN_VALUE_OPTVAL_C:
            err = this->on_pin_value_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIO_BASE_MAIN_PIN_NUMBER_OPTVAL_C:
            err = this->on_pin_number_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTVAL_C:
            err = this->on_restart_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTVAL_C:
            err = this->on_stop_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    
    /// option_usage
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIO_BASE_MAIN_PIN_VALUE_OPTVAL_C:
            chars = this->pin_value_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIO_BASE_MAIN_PIN_NUMBER_OPTVAL_C:
            chars = this->pin_number_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_RESTART_OPTVAL_C:
            chars = this->restart_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_STOP_OPTVAL_C:
            chars = this->stop_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }

    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace client 
} /// namespace pigpio 
} /// namespace control 
} /// namespace perifra 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_CLIENT_MAIN_OPT_HPP
