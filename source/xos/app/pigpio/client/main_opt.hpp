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
///   Date: 3/25/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_PIGPIO_CLIENT_MAIN_OPT_HPP
#define XOS_APP_PIGPIO_CLIENT_MAIN_OPT_HPP

#include "xos/app/pigpio/base/main.hpp"
#include "xos/app/rete/client/main.hpp"

#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPT "power-on"
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTARG_RESULT 0
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTARG ""
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTUSE ""
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTVAL_S "n"
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTVAL_C 'n'
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTION \
   {XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPT, \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTARG_REQUIRED, \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTARG_RESULT, \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTVAL_C}, \

#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPT "power-off"
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTARG_RESULT 0
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTARG ""
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTUSE ""
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTVAL_S "f"
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTVAL_C 'f'
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTION \
   {XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPT, \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTARG_REQUIRED, \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTARG_RESULT, \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTVAL_C}, \

#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPT "power-state"
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTARG_RESULT 0
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTARG ""
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTUSE ""
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTVAL_S "w"
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTVAL_C 'w'
#define XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTION \
   {XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPT, \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTARG_REQUIRED, \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTARG_RESULT, \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTVAL_C}, \

#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPT "active-high"
#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTARG_RESULT 0
#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTARG ""
#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTUSE ""
#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTVAL_S "1"
#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTVAL_C '1'
#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTION \
   {XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPT, \
    XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTARG_REQUIRED, \
    XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTARG_RESULT, \
    XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTVAL_C}, \

#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPT "active-low"
#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTARG_RESULT 0
#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTARG ""
#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTUSE ""
#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTVAL_S "0"
#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTVAL_C '0'
#define XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTION \
   {XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPT, \
    XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTARG_REQUIRED, \
    XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTARG_RESULT, \
    XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_PIGPIO_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTVAL_S \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTVAL_S \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTVAL_S \
    XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTVAL_S \
    XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTVAL_S \

#define XOS_APP_PIGPIO_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTION \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTION \
    XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTION \
    XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTION \
    XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTION \
 
///////////////////////////////////////////////////////////////////////
#define XOS_APP_PIGPIO_CLIENT_MAIN_OPTIONS_CHARS \
   XOS_APP_PIGPIO_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_RETE_CLIENT_MAIN_OPTIONS_CHARS \

#define XOS_APP_PIGPIO_CLIENT_MAIN_OPTIONS_OPTIONS \
   XOS_APP_PIGPIO_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_RETE_CLIENT_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_PIGPIO_CLIENT_MAIN_ARGS 0
#define XOS_APP_PIGPIO_CLIENT_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace pigpio {
namespace client {

/// class main_optt
template 
<class TMain = xos::app::protocol::network::sockets::client::maint<>,
 class TExtends = xos::app::pigpio::base::maint
 <TMain, xos::app::pigpio::base::main_optt
 <TMain, xos::app::rete::client::maint<TMain> > >,  class TImplements = typename TExtends::implements>

class main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::main_t main_t;
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

    /// on...power_on_option...
    virtual int on_set_power_on_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_power_on_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_power_on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_power_on_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_power_on_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* power_on_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTUSE;
        optarg = XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTARG;
        return chars;
    }

    /// on...power_off_option...
    virtual int on_set_power_off_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_power_off_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_power_off_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_power_off_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_power_off_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* power_off_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTUSE;
        optarg = XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTARG;
        return chars;
    }

    /// on...power_state_option...
    virtual int on_set_power_state_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_power_state_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_power_state_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_power_state_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_power_state_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* power_state_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTUSE;
        optarg = XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTARG;
        return chars;
    }

    /// on...active_high_option...
    virtual int on_set_active_high_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_active_high_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_active_high_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_active_high_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_active_high_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* active_high_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTUSE;
        optarg = XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTARG;
        return chars;
    }

    /// on...active_low_option...
    virtual int on_set_active_low_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_active_low_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_active_low_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_active_low_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_active_low_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* active_low_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTUSE;
        optarg = XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTARG;
        return chars;
    }

    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTVAL_C:
            err = this->on_power_on_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTVAL_C:
            err = this->on_power_off_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTVAL_C:
            err = this->on_power_state_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTVAL_C:
            err = this->on_active_high_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTVAL_C:
            err = this->on_active_low_option(optval, optarg, optname, optind, argc, argv, env);
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

        case XOS_APP_PIGPIO_CLIENT_MAIN_POWER_ON_OPTVAL_C:
            chars = this->power_on_option_usage(optarg, longopt);
            break;
        case XOS_APP_PIGPIO_CLIENT_MAIN_POWER_OFF_OPTVAL_C:
            chars = this->power_off_option_usage(optarg, longopt);
            break;
        case XOS_APP_PIGPIO_CLIENT_MAIN_POWER_STATE_OPTVAL_C:
            chars = this->power_state_option_usage(optarg, longopt);
            break;

        case XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_HIGH_OPTVAL_C:
            chars = this->active_high_option_usage(optarg, longopt);
            break;
        case XOS_APP_PIGPIO_CLIENT_MAIN_ACTIVE_LOW_OPTVAL_C:
            chars = this->active_low_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }

    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_PIGPIO_CLIENT_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_PIGPIO_CLIENT_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_PIGPIO_CLIENT_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_PIGPIO_CLIENT_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace client 
} /// namespace pigpio 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_PIGPIO_CLIENT_MAIN_OPT_HPP
