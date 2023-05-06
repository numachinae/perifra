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
///   Date: 1/4/2023, 1/25/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_HPP

#include "xos/app/console/protocol/client/main.hpp"
#include "xos/app/console/protocol/server/main.hpp"
#include "xos/app/console/protocol/base/main.hpp"

#ifdef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OPTARG_REQUEST "request"
#else /// def XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPT_HPP
#ifdef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OPTARG_REQUEST "response"
#else /// def XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OPTARG_REQUEST ""
#endif /// def XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPT_HPP
#endif /// def XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPT_HPP

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPT "on"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTUSE "power on " \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OPTARG_REQUEST
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTVAL_S "N"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTVAL_C 'N'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPT "off"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTUSE "power off " \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OPTARG_REQUEST
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTVAL_S "F"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTVAL_C 'F'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPT "state"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG_ON "on"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG_OFF "off"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG_STATE "state"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG \
    "[{ " XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG_ON \
    " | " XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG_OFF \
    " | " XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG_STATE " }]"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTUSE \
    "power " XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG_ON \
    " / " XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG_OFF \
    " / " XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG_STATE " " \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OPTARG_REQUEST
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTVAL_S "S::"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTVAL_C 'S'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPT "info"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTARG "[siring]"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTUSE "system info " \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OPTARG_REQUEST
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTVAL_S "I::"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTVAL_C 'I'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPT "restart"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTUSE "system restart " \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OPTARG_REQUEST
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTVAL_S "R"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTVAL_C 'R'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPT "stop"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTUSE "system stop " \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OPTARG_REQUEST
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTVAL_S "T"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTVAL_C 'T'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#ifdef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPT_HPP
/// client
/// ...
/// ...
/// client
#else /// def XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPT_HPP
#ifdef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPT_HPP
/// server
/// ...
/// ...
/// server
#else /// def XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPT_HPP
/// base
/// ...
/// ...
/// base
#endif /// def XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPT_HPP
#endif /// def XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPT_HPP

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_CHARS_EXTEND \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \

///////////////////////////////////////////////////////////////////////
#ifdef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPT_HPP
/// client
/// ...
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_CLIENT_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_CLIENT_MAIN_OPTIONS_OPTIONS \
/// ...
/// client
#else /// def XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPT_HPP
#ifdef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPT_HPP
/// server
/// ...
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_SERVER_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_SERVER_MAIN_OPTIONS_OPTIONS \
/// ...
/// server
#else /// def XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPT_HPP
/// base
/// ...
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPTIONS_OPTIONS \
/// ...
/// base
#endif /// def XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPT_HPP
#endif /// def XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_CLIENT_MAIN_OPT_HPP

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace home {
namespace control {
namespace power {
namespace base {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::base::maint<>,  class TImplements = typename TExtends::implements>

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

    /// ...get_system_info_run
    virtual int get_system_info_run(bool& is_true, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_get_system_info_run(bool& is_true, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_get_system_info_run(bool& is_true, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_get_system_info_run(bool& is_true, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_get_system_info_run(is_true, argc, argv, env))) {
            int err2 = 0;
            err = get_system_info_run(is_true, argc, argv, env);
            if ((err2 = after_get_system_info_run(is_true, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_system_restart_run
    virtual int set_system_restart_run(bool& is_true, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_system_restart_run(bool& is_true, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_system_restart_run(bool& is_true, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_system_restart_run(bool& is_true, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_system_restart_run(is_true, argc, argv, env))) {
            int err2 = 0;
            err = set_system_restart_run(is_true, argc, argv, env);
            if ((err2 = after_set_system_restart_run(is_true, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_system_stop_run
    virtual int set_system_stop_run(bool& is_true, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_system_stop_run(bool& is_true, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_system_stop_run(bool& is_true, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_system_stop_run(bool& is_true, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_system_stop_run(is_true, argc, argv, env))) {
            int err2 = 0;
            err = set_system_stop_run(is_true, argc, argv, env);
            if ((err2 = after_set_system_stop_run(is_true, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_power_state_on_run
    virtual int set_power_state_on_run(bool& is_on, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_power_state_on_run(bool& is_on, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_power_state_on_run(bool& is_on, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_power_state_on_run(bool& is_on, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_power_state_on_run(is_on, argc, argv, env))) {
            int err2 = 0;
            err = set_power_state_on_run(is_on, argc, argv, env);
            if ((err2 = after_set_power_state_on_run(is_on, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_power_state_off_run
    virtual int set_power_state_off_run(bool& is_off, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_power_state_off_run(bool& is_off, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_power_state_off_run(bool& is_off, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_power_state_off_run(bool& is_off, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_power_state_off_run(is_off, argc, argv, env))) {
            int err2 = 0;
            err = set_power_state_off_run(is_off, argc, argv, env);
            if ((err2 = after_set_power_state_off_run(is_off, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...get_power_state_on_run
    virtual int get_power_state_on_run(bool& is_on, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_get_power_state_on_run(bool& is_on, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_get_power_state_on_run(bool& is_on, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_get_power_state_on_run(bool& is_on, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_get_power_state_on_run(is_on, argc, argv, env))) {
            int err2 = 0;
            err = get_power_state_on_run(is_on, argc, argv, env);
            if ((err2 = after_get_power_state_on_run(is_on, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...get_power_state_off_run
    virtual int get_power_state_off_run(bool& is_off, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_get_power_state_off_run(bool& is_off, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_get_power_state_off_run(bool& is_off, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_get_power_state_off_run(bool& is_off, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_get_power_state_off_run(is_off, argc, argv, env))) {
            int err2 = 0;
            err = get_power_state_off_run(is_off, argc, argv, env);
            if ((err2 = after_get_power_state_off_run(is_off, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...power_on_run
    virtual int power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_power_on_run(argc, argv, env))) {
            int err2 = 0;
            err = power_on_run(argc, argv, env);
            if ((err2 = after_power_on_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_power_on_run;
        return err;
    }
    virtual int power_on_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_power_on_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int power_on_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...power_off_run
    virtual int power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_power_off_run(argc, argv, env))) {
            int err2 = 0;
            err = power_off_run(argc, argv, env);
            if ((err2 = after_power_off_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_power_off_run;
        return err;
    }
    virtual int power_off_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_power_off_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int power_off_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...power_state_run
    virtual int power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_power_state_run(argc, argv, env))) {
            int err2 = 0;
            err = power_state_run(argc, argv, env);
            if ((err2 = after_power_state_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_power_state_run;
        return err;
    }
    virtual int power_state_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_power_state_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int power_state_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
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
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTARG;
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
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTARG;
        return chars;
    }

    /// on...power_state_option...
    virtual int on_get_power_state_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_power_state_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_set_power_state_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_power_state_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_power_state_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_power_state_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_power_state_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_power_state_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_power_state_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* power_state_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTARG;
        return chars;
    }

    /// on...system_info_option...
    virtual int on_get_system_info_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_system_info_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_set_system_info_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_system_info_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_system_info_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_system_info_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_system_info_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_system_info_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_system_info_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* system_info_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTARG;
        return chars;
    }

    /// on...system_restart_option...
    virtual int on_set_system_restart_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_system_restart_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_system_restart_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_system_restart_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_system_restart_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* system_restart_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTARG;
        return chars;
    }

    /// on...system_stop_option...
    virtual int on_set_system_stop_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_system_stop_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_system_stop_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_system_stop_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_system_stop_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* system_stop_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTARG;
        return chars;
    }

    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTVAL_C:
            err = this->on_power_on_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTVAL_C:
            err = this->on_power_off_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTVAL_C:
            err = this->on_power_state_option(optval, optarg, optname, optind, argc, argv, env);
            break;
            
        case XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTVAL_C:
            err = this->on_system_info_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTVAL_C:
            err = this->on_system_restart_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTVAL_C:
            err = this->on_system_stop_option(optval, optarg, optname, optind, argc, argv, env);
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

        case XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTVAL_C:
            chars = this->power_on_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTVAL_C:
            chars = this->power_off_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_STATE_OPTVAL_C:
            chars = this->power_state_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTVAL_C:
            chars = this->system_info_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTVAL_C:
            chars = this->system_restart_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTVAL_C:
            chars = this->system_stop_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }

    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace base 
} /// namespace power 
} /// namespace control 
} /// namespace home 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_HPP
