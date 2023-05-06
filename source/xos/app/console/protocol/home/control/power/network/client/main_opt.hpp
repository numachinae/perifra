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
///   Date: 2/8/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_OPT_HPP

#include "xos/app/console/protocol/home/control/power/network/sockets/main.hpp"
#include "xos/app/console/protocol/home/control/power/client/main.hpp"

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_ON_OPT "power-on"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_ON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_ON_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_ON_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_ON_OPTUSE "turn power on"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_ON_OPTVAL_S "N"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_ON_OPTVAL_C 'N'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_ON_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_ON_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_ON_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_ON_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_ON_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_OFF_OPT "power-off"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_OFF_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_OFF_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_OFF_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_OFF_OPTUSE "turn power off"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_OFF_OPTVAL_S "F"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_OFF_OPTVAL_C 'F'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_OFF_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_OFF_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_OFF_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_OFF_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_OFF_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_STATE_OPT "power-state"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_STATE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_STATE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_STATE_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_STATE_OPTUSE "get power state"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_STATE_OPTVAL_S "S"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_STATE_OPTVAL_C 'S'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_STATE_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_STATE_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_STATE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_STATE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_STATE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPT "system-info"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTUSE "get system info"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTVAL_S "I"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTVAL_C 'I'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPT "system-restart"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTUSE "restart system"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTVAL_S "R"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTVAL_C 'R'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_START_OPT "system-start"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTUSE "start system"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTVAL_S "R"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTVAL_C 'R'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_START_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_START_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPT "system-stop"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTUSE "stop system"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTVAL_S "T"
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTVAL_C 'T'
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPTVAL_C}, \

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace home {
namespace control {
namespace power {
namespace network {
namespace client {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::home::control::power::network::sockets::maint
 <xos::app::console::protocol::home::control::power::network::sockets::main_optt<> >,  class TImplements = typename TExtends::implements>

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

      power_on_option_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_ON_OPT),
      power_off_option_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_OFF_OPT),
      power_state_option_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_POWER_STATE_OPT),
    
      system_info_option_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_INFO_OPT),
      system_restart_option_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_RESTART_OPT),
      system_start_option_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_START_OPT),
      system_stop_option_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_SYSTEM_STOP_OPT) {
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

    /// ...power...uoption...
    virtual string_t& set_power_on_option(const string_t& to) {
        string_t& power_on_option = this->power_on_option();
        power_on_option.assign(to);
        return power_on_option;
    }
    virtual string_t& power_on_option() const {
        return (string_t&) power_on_option_;
    }
    virtual string_t& set_power_off_option(const string_t& to) {
        string_t& power_off_option = this->power_off_option();
        power_off_option.assign(to);
        return power_off_option;
    }
    virtual string_t& power_off_option() const {
        return (string_t&) power_off_option_;
    }
    virtual string_t& set_power_state_option(const string_t& to) {
        string_t& power_state_option = this->power_state_option();
        power_state_option.assign(to);
        return power_state_option;
    }
    virtual string_t& power_state_option() const {
        return (string_t&) power_state_option_;
    }

    /// ...system...uoption...
    virtual string_t& set_system_info_option(const string_t& to) {
        string_t& system_info_option = this->system_info_option();
        system_info_option.assign(to);
        return system_info_option;
    }
    virtual string_t& system_info_option() const {
        return (string_t&) system_info_option_;
    }
    virtual string_t& set_system_restart_option(const string_t& to) {
        string_t& system_restart_option = this->system_restart_option();
        system_restart_option.assign(to);
        return system_restart_option;
    }
    virtual string_t& system_restart_option() const {
        return (string_t&) system_restart_option_;
    }
    virtual string_t& set_system_start_option(const string_t& to) {
        string_t& system_start_option = this->system_start_option();
        system_start_option.assign(to);
        return system_start_option;
    }
    virtual string_t& system_start_option() const {
        return (string_t&) system_start_option_;
    }
    virtual string_t& set_system_stop_option(const string_t& to) {
        string_t& system_stop_option = this->system_stop_option();
        system_stop_option.assign(to);
        return system_stop_option;
    }
    virtual string_t& system_stop_option() const {
        return (string_t&) system_stop_option_;
    }

protected:
    string_t power_on_option_, power_off_option_, power_state_option_,
             system_info_option_, system_restart_option_, system_start_option_, system_stop_option_;
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace client 
} /// namespace network 
} /// namespace power 
} /// namespace control 
} /// namespace home 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_CLIENT_MAIN_OPT_HPP
