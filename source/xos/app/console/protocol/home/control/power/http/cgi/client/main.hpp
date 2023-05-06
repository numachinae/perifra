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
///   Date: 2/8/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_HTTP_CGI_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_HTTP_CGI_CLIENT_MAIN_HPP

#include "xos/app/console/protocol/home/control/power/http/cgi/client/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace home {
namespace control {
namespace power {
namespace http {
namespace cgi {
namespace client {

//// class maint
template 
<class TExtends = xos::app::console::protocol::home::control::power::http::cgi::client::main_optt<>,  class TImplements = typename TExtends::implements>

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
      response_was_output_(false) {
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

    /// ...console_gateway_run
    virtual int power_on_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& power_on_request = this->power_on_request();
        string_t &request = this->request(), &response = this->response();

        request.assign(power_on_request);
        response.assign(request);
        set_response_was_output(false);
        if (!(err = this->all_sockets_connect_run(argc, argv, env))) {
        }
        if (!(response_was_output())) {
            if (!(err = this->all_output_response_run(response, argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int power_off_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& power_off_request = this->power_off_request();
        string_t &request = this->request(), &response = this->response();

        request.assign(power_off_request);
        response.assign(request);
        set_response_was_output(false);
        if (!(err = this->all_sockets_connect_run(argc, argv, env))) {
        }
        if (!(response_was_output())) {
            if (!(err = this->all_output_response_run(response, argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int power_state_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& power_state_request = this->power_state_request();
        string_t &request = this->request(), &response = this->response();

        request.assign(power_state_request);
        response.assign(request);
        set_response_was_output(false);
        if (!(err = this->all_sockets_connect_run(argc, argv, env))) {
        }
        if (!(response_was_output())) {
            if (!(err = this->all_output_response_run(response, argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int system_info_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& system_info_request = this->system_info_request();
        string_t &request = this->request(), &response = this->response();

        request.assign(system_info_request);
        response.assign(request);
        set_response_was_output(false);
        if (!(err = this->all_sockets_connect_run(argc, argv, env))) {
        }
        if (!(response_was_output())) {
            if (!(err = this->all_output_response_run(response, argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int system_restart_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& system_restart_request = this->system_restart_request();
        string_t &request = this->request(), &response = this->response();

        request.assign(system_restart_request);
        response.assign(request);
        set_response_was_output(false);
        if (!(err = this->all_sockets_connect_run(argc, argv, env))) {
        }
        if (!(response_was_output())) {
            if (!(err = this->all_output_response_run(response, argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int system_start_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& system_start_request = this->system_start_request();
        string_t &request = this->request(), &response = this->response();

        request.assign(system_start_request);
        response.assign(request);
        set_response_was_output(false);
        if (!(err = this->all_sockets_connect_run(argc, argv, env))) {
        }
        if (!(response_was_output())) {
            if (!(err = this->all_output_response_run(response, argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int system_stop_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& system_stop_request = this->system_stop_request();
        string_t &request = this->request(), &response = this->response();

        request.assign(system_stop_request);
        response.assign(request);
        set_response_was_output(false);
        if (!(err = this->all_sockets_connect_run(argc, argv, env))) {
        }
        if (!(response_was_output())) {
            if (!(err = this->all_output_response_run(response, argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int action_console_gateway_run(const string_t& action, int argc, char_t** argv, char_t** env) {
        int err = 0;
        int unequal = 0;
        const string_t& power_on_option = this->power_on_option();

        if (!(unequal = power_on_option.compare(action))) {
            err = power_on_console_gateway_run(argc, argv, env);
        } else {
            const string_t& power_off_option = this->power_off_option();
    
            if (!(unequal = power_off_option.compare(action))) {
                err = power_off_console_gateway_run(argc, argv, env);
            } else {
                const string_t& power_state_option = this->power_state_option();
        
                if (!(unequal = power_state_option.compare(action))) {
                    err = power_state_console_gateway_run(argc, argv, env);
                } else {
                    const string_t& system_info_option = this->system_info_option();
            
                    if (!(unequal = system_info_option.compare(action))) {
                        err = system_info_console_gateway_run(argc, argv, env);
                    } else {
                        const string_t& system_restart_option = this->system_restart_option();
                
                        if (!(unequal = system_restart_option.compare(action))) {
                            err = system_restart_console_gateway_run(argc, argv, env);
                        } else {
                            const string_t& system_start_option = this->system_start_option();

                            if (!(unequal = system_start_option.compare(action))) {
                                err = system_start_console_gateway_run(argc, argv, env);
                            } else {
                                const string_t& system_stop_option = this->system_stop_option();

                                if (!(unequal = system_stop_option.compare(action))) {
                                    err = system_stop_console_gateway_run(argc, argv, env);
                                } else {
                                    err = this->all_console_gateway_out_run(argc, argv, env);
                                }
                            }
                        }
                    }
                }
            }
        }
        return err;
    }
    virtual int console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& action_form_field_name = this->action_form_field_name();
        const string_t& host_form_field_name = this->host_form_field_name();
        const string_t& port_form_field_name = this->port_form_field_name();
        const char_t* chars = 0;
        
        if ((chars = this->first_query_or_form_field_named_chars(host_form_field_name))) {
            const string_t host(chars);
            this->set_connect_host(host);
        } else {
        }
        if ((chars = this->first_query_or_form_field_named_chars(port_form_field_name))) {
            const string_t port(chars);
            this->set_connect_port(port.to_unsigned());
        } else {
        }
        if ((chars = this->first_query_or_form_field_named_chars(action_form_field_name))) {
            const string_t action(chars);
            err = action_console_gateway_run(action, argc, argv, env);
        } else {
            err = this->all_console_gateway_out_run(argc, argv, env);
        }
        return err;
    }

    /// ...output_response_run
    virtual int output_response_run(const string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::output_response_run(response, argc, argv, env))) {
            set_response_was_output(true);
        }
        return err;
    }

    /// ...response_was_output
    virtual bool& set_response_was_output(const bool& to) {
        bool& response_was_output = this->response_was_output();
        response_was_output = to;
        return response_was_output;
    }
    virtual bool& response_was_output() const {
        return (bool&) response_was_output_;
    }
    
protected:
    bool response_was_output_;
}; /// class maint 
typedef maint<> main;

} /// namespace client 
} /// namespace cgi 
} /// namespace http 
} /// namespace power 
} /// namespace control 
} /// namespace home 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_HTTP_CGI_CLIENT_MAIN_HPP
