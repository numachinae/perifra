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
#ifndef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPT_HPP

#include "xos/app/console/protocol/home/control/power/base/main.hpp"
#include "xos/app/console/protocol/server/main.hpp"

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTVAL_S \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_ON_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_POWER_OFF_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_INFO_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_RESTART_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPT_SYSTEM_STOP_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_BASE_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace home {
namespace control {
namespace power {
namespace server {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::home::control::power::base::maint
 <xos::app::console::protocol::home::control::power::base::main_optt
 <xos::app::console::protocol::server::maint
 <xos::app::console::protocol::server::main_optt
 <xos::app::console::protocol::base::maint
 <xos::app::console::protocol::base::main_optt<> > > > > >,  class TImplements = typename TExtends::implements>

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

    typedef const string_t const_string_t; 

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


    ///////////////////////////////////////////////////////////////////////
    /// request
    /// ...
    /// ...prepare_response_to_power_on_request_run
    virtual int prepare_response_to_power_on_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        bool is_on = false;
        const_string_t &power_unknown_response = this->power_unknown_response();

        response.assign(power_unknown_response);
        if (!(err = this->all_set_power_state_on_run(is_on, argc, argv, env))) {
            const_string_t &power_on_response = this->power_on_response();

            if ((is_on)) {
                response.assign(power_on_response);
            }
        } else {
        }
        return err;
    }
    virtual int before_prepare_response_to_power_on_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_power_on_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_power_on_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_power_on_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_power_on_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_power_on_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...prepare_response_to_power_off_request_run
    virtual int prepare_response_to_power_off_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        bool is_off = false;
        const_string_t &power_unknown_response = this->power_unknown_response();

        response.assign(power_unknown_response);
        if (!(err = this->all_set_power_state_off_run(is_off, argc, argv, env))) {
            const_string_t &power_off_response = this->power_off_response();

            if ((is_off)) {
                response.assign(power_off_response);
            }
        } else {
        }
        return err;
    }
    virtual int before_prepare_response_to_power_off_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_power_off_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_power_off_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_power_off_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_power_off_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_power_off_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...prepare_response_to_power_state_request_run
    virtual int prepare_response_to_power_state_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        bool is_on = false;
        const_string_t &power_unknown_response = this->power_unknown_response();

        response.assign(power_unknown_response);
        if (!(err = this->all_get_power_state_on_run(is_on, argc, argv, env))) {
            const_string_t &power_on_response = this->power_on_response();

            if ((is_on)) {
                response.assign(power_on_response);
            } else {
                bool is_off = false;

                if (!(err = this->all_get_power_state_off_run(is_off, argc, argv, env))) {
                    const_string_t &power_off_response = this->power_off_response();
        
                    if ((is_off)) {
                        response.assign(power_off_response);
                    }
                } else {
                }
            }
        } else {
        }
        return err;
    }
    virtual int before_prepare_response_to_power_state_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_power_state_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_power_state_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_power_state_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_power_state_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_power_state_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...prepare_response_to_system_info_request_run
    virtual int prepare_response_to_system_info_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        bool is_true = false;
        const_string_t &system_info_unknown_response = this->system_info_unknown_response();

        response.assign(system_info_unknown_response);
        if (!(err = this->all_get_system_info_run(is_true, argc, argv, env))) {
            const_string_t &system_info_response = this->system_info_response();

            if ((is_true)) {
                response.assign(system_info_response);
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int before_prepare_response_to_system_info_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_system_info_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_system_info_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_system_info_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_system_info_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_system_info_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...prepare_response_to_system_restart_request_run
    virtual int prepare_response_to_system_restart_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        bool is_true = false;
        const_string_t &system_state_unknown_response = this->system_state_unknown_response();

        response.assign(system_state_unknown_response);
        if (!(err = this->all_set_system_restart_run(is_true, argc, argv, env))) {
            const_string_t &system_restart_response = this->system_restart_response();

            if ((is_true)) {
                response.assign(system_restart_response);
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int before_prepare_response_to_system_restart_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_system_restart_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_system_restart_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_system_restart_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_system_restart_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_system_restart_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...prepare_response_to_system_start_request_run
    virtual int prepare_response_to_system_start_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        bool is_true = false;
        const_string_t &system_state_unknown_response = this->system_state_unknown_response();

        response.assign(system_state_unknown_response);
        if (!(err = this->all_set_system_restart_run(is_true, argc, argv, env))) {
            const_string_t &system_start_response = this->system_start_response();

            if ((is_true)) {
                response.assign(system_start_response);
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int before_prepare_response_to_system_start_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_system_start_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_system_start_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_system_start_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_system_start_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_system_start_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...prepare_response_to_system_stop_request_run
    virtual int prepare_response_to_system_stop_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        bool is_true = false;
        const_string_t &system_state_unknown_response = this->system_state_unknown_response();

        response.assign(system_state_unknown_response);
        if (!(err = this->all_set_system_stop_run(is_true, argc, argv, env))) {
            const_string_t &system_stop_response = this->system_stop_response();

            if ((is_true)) {
                response.assign(system_stop_response);
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int before_prepare_response_to_system_stop_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_system_stop_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_system_stop_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_system_stop_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_system_stop_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_system_stop_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...prepare_response_to_power_request_run
    virtual int prepare_response_to_power_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0, unequal = 0;
        const_string_t &unknown_response = this->unknown_response(),
                       &power_on_request = this->power_on_request(),
                       &power_off_request = this->power_off_request(),
                       &power_state_request = this->power_state_request(),
                       &system_info_request = this->system_info_request(),
                       &system_restart_request = this->system_restart_request(),
                       &system_start_request = this->system_start_request(),
                       &system_stop_request = this->system_stop_request();

        if (!(unequal = power_on_request.compare(request))) {
            if (!(err = all_prepare_response_to_power_on_request_run(response, request, argc, argv, env))) {
            } else {
            }
        } else {
            if (!(unequal = power_off_request.compare(request))) {
                if (!(err = all_prepare_response_to_power_off_request_run(response, request, argc, argv, env))) {
                } else {
                }
            } else {
                if (!(unequal = power_state_request.compare(request))) {
                    if (!(err = all_prepare_response_to_power_state_request_run(response, request, argc, argv, env))) {
                    } else {
                    }
                } else {
                    if (!(unequal = system_info_request.compare(request))) {
                        if (!(err = all_prepare_response_to_system_info_request_run(response, request, argc, argv, env))) {
                        } else {
                        }
                    } else {
                        if (!(unequal = system_restart_request.compare(request))) {
                            if (!(err = all_prepare_response_to_system_restart_request_run(response, request, argc, argv, env))) {
                            } else {
                            }
                        } else {
                            if (!(unequal = system_start_request.compare(request))) {
                                if (!(err = all_prepare_response_to_system_start_request_run(response, request, argc, argv, env))) {
                                } else {
                                }
                            } else {
                                if (!(unequal = system_stop_request.compare(request))) {
                                    if (!(err = all_prepare_response_to_system_stop_request_run(response, request, argc, argv, env))) {
                                    } else {
                                    }
                                } else {
                                    response.assign(unknown_response);
                                }
                            }
                        }
                    }
                }
            }
        }
        return err;
    }
    virtual int before_prepare_response_to_power_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_power_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_power_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_power_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_power_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_power_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...prepare_response_to_request...
    virtual int default_prepare_response_to_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_prepare_response_to_power_request_run(response, request, argc, argv, env))) {
        }
        return err;
    }
    /// on...request_option...
    virtual int on_request_option_get
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
    /// on...request_option...
    virtual int on_request_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = this->set_process_request_run(argc, argv, env))) {
            if (!(err = this->process_request_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    /// ...
    /// request
    ///////////////////////////////////////////////////////////////////////


    ///////////////////////////////////////////////////////////////////////
    /// response
    /// ...
    /// on...response_option...
    virtual int on_response_option_set
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

    /// on...power_on_option...
    virtual int on_set_power_on_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_response(this->power_on_response());
        return err;
    }
    virtual int on_power_on_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_response_option_set(optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }

    /// on...power_off_option...
    virtual int on_set_power_off_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_response(this->power_off_response());
        return err;
    }
    virtual int on_power_off_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_response_option_set(optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    
    /// on...system_info_option...
    virtual int on_get_system_info_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_response(this->system_info_response());
        return err;
    }
    virtual int on_system_info_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_response_option_set(optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    
    /// on...system_restart_option...
    virtual int on_set_system_restart_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_response(this->system_restart_response());
        return err;
    }
    virtual int on_system_restart_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_response_option_set(optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    
    /// on...system_stop_option...
    virtual int on_set_system_stop_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_response(this->system_stop_response());
        return err;
    }
    virtual int on_system_stop_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_response_option_set(optarg, optind, argc, argv, env))) {
        } else {
        }
        return err;
    }
    /// ...
    /// response
    ///////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////
    /// ...option...
    /// ...
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
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
    /// ...
    /// ...option...
    ///////////////////////////////////////////////////////////////////////

protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace server 
} /// namespace power 
} /// namespace control 
} /// namespace home 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_SERVER_MAIN_OPT_HPP
