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
///   Date: 2/9/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HPP

#include "xos/app/console/protocol/home/control/power/network/sockets/main_opt.hpp"

#include "xos/network/sockets/os/interfaces.hpp"
#include "xos/network/sockets/os/interface.hpp"
#include "xos/network/sockets/interface.hpp"
#include "xos/network/sockets/reader.hpp"
#include "xos/network/sockets/writer.hpp"

#include "xos/network/sockets/ip/v4/endpoint.hpp"
#include "xos/network/sockets/ip/v4/tcp/transport.hpp"
#include "xos/network/sockets/ip/v4/udp/transport.hpp"

#if !defined(WINSOCK_1)
#include "xos/network/sockets/ip/v6/endpoint.hpp"
#include "xos/network/sockets/ip/v6/tcp/transport.hpp"
#include "xos/network/sockets/ip/v6/udp/transport.hpp"
#else /// !defined(WINSOCK_1)
#endif /// !defined(WINSOCK_1)

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace home {
namespace control {
namespace power {
namespace network {
namespace sockets {

//// class maint
template 
<class TExtends = xos::app::console::protocol::home::control::power::network::sockets::main_optt<>,  class TImplements = typename TExtends::implements>

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

      accept_one_(false), accept_restart_(false), accept_stop_(false), 
      cr_endof_message_("\r"), lf_endof_message_("\n"), 
      crlf_endof_message_("\r\n"), crlf2_endof_message_("\r\n\r\n"),
            
      accept_host_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_ACCEPT_HOST), 
      connect_host_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_CONNECT_HOST),

      accept_port_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_ACCEPT_PORT), 
      connect_port_(XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_CONNECT_PORT) {
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

    /// ...sockets_run
    virtual int before_sockets_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        xos::network::sockets::os::interfaces sockets;
        LOGGER_IS_LOGGED_INFO("sockets.startup()...");
        if (!(sockets.startup())) {
            LOGGER_IS_LOGGED_ERROR("...failed on sockets.startup()");
            err = 1;
        } else {
            LOGGER_IS_LOGGED_INFO("...sockets.startup()");
        }
        return err;
    }
    virtual int after_sockets_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        xos::network::sockets::os::interfaces sockets;
        LOGGER_IS_LOGGED_INFO("sockets.cleanup()...");
        if (!(sockets.cleanup())) {
            LOGGER_IS_LOGGED_ERROR("...failed on sockets.cleanup()");
            err = 1;
        } else {
            LOGGER_IS_LOGGED_INFO("...sockets.cleanup()");
        }
        return err;
    }

    /// ...connect_run
    virtual int connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const xos::network::sockets::sockstring_t& host = this->connect_host();
        const xos::network::sockets::sockport_t& port = this->connect_port();
        xos::network::sockets::endpoint& ep = this->connect_ep();
        xos::network::sockets::transport& tp = this->connect_tp();
        xos::network::sockets::interface &cn = this->connect_iface();

        LOGGER_IS_LOGGED_INFO("ep.attach(host = \"" << host.chars() << "\", port = " << unsigned_to_string(port).chars() << ")...");
        if (!(ep.attach(host, port))) {
            LOGGER_IS_LOGGED_ERROR("...failed on ep.attach(host = \"" << host.chars() << "\", port = " << unsigned_to_string(port).chars() << ")...");
        } else {
            LOGGER_IS_LOGGED_INFO("...ep.attach(host = \"" << host.chars() << "\", port = " << unsigned_to_string(port).chars() << ")");

            LOGGER_IS_LOGGED_INFO("cn.open(tp)...");
            if (!(cn.open(tp))) {
                LOGGER_IS_LOGGED_ERROR("...failed on ");
            } else {
                LOGGER_IS_LOGGED_INFO("...cn.open(tp)");
                
                LOGGER_IS_LOGGED_INFO("cn.connect(ep)...");
                if (!(cn.connect(ep))) {
                    LOGGER_IS_LOGGED_ERROR("...failed on ");
                } else {
                    LOGGER_IS_LOGGED_INFO("...cn.connect(ep)");
                    
                    if (!(err = this->all_connect_run(cn, argc, argv, env))) {
                    }
                }
                LOGGER_IS_LOGGED_INFO("cn.close()...");
                cn.close();
            }
            LOGGER_IS_LOGGED_INFO("ep.detach()...");
            ep.detach();
        }
        return err;
    }
    virtual int connect_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_send_request_run(cn, argc, argv, env))) {
            if (!(err = all_recv_response_run(cn, argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int before_connect_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_connect_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_connect_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_connect_run(cn, argc, argv, env))) {
            int err2 = 0;
            err = connect_run(cn, argc, argv, env);
            if ((err2 = after_connect_run(cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...request..
    /// ...
    /// ...send_request_run
    virtual int send_request_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t& request = this->request();
        if (!(err = all_send_request_run(cn, request, argc, argv, env))) {
        }
        return err;
    }
    virtual int before_send_request_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_send_request_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_send_request_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_send_request_run(cn, argc, argv, env))) {
            int err2 = 0;
            err = send_request_run(cn, argc, argv, env);
            if ((err2 = after_send_request_run(cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...send_request_run
    virtual int send_request_run(xos::network::sockets::interface& cn, string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = send(cn, request, argc, argv, env))) {
        }
        return err;
    }
    virtual int before_send_request_run(xos::network::sockets::interface& cn, string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_prepare_crlf2_message_to_send_run(request, argc, argv, env))) {
        }
        return err;
    }
    virtual int after_send_request_run(xos::network::sockets::interface& cn, string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_send_request_run(xos::network::sockets::interface& cn, string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_send_request_run(cn, request, argc, argv, env))) {
            int err2 = 0;
            err = send_request_run(cn, request, argc, argv, env);
            if ((err2 = after_send_request_run(cn, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...recv_request_run
    virtual int recv_request_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t& request = this->request();
        if (!(err = all_recv_request_run(request, cn, argc, argv, env))) {
            if (!(err = all_process_request_run(request, cn, argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int before_recv_request_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_recv_request_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_recv_request_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_recv_request_run(cn, argc, argv, env))) {
            int err2 = 0;
            err = recv_request_run(cn, argc, argv, env);
            if ((err2 = after_recv_request_run(cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...recv_request_run
    virtual int recv_request_run(string_t& request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        char_t c = 0;

        request.clear();
        if (!(err = recv_crlf2(request, c, cn, argc, argv, env))) {
        }
        return err;
    }
    virtual int before_recv_request_run(string_t& request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_recv_request_run(string_t& request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_process_crlf2_message_received_run(request, argc, argv, env))) {
        }
        return err;
    }
    virtual int all_recv_request_run(string_t& request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_recv_request_run(request, cn, argc, argv, env))) {
            int err2 = 0;
            err = recv_request_run(request, cn, argc, argv, env);
            if ((err2 = after_recv_request_run(request, cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_request_run
    virtual int process_request_run(string_t& request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_process_request_run(request, argc, argv, env))) {
        }
        return err;
    }
    virtual int before_process_request_run(string_t& request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_run(string_t& request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_run(string_t& request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_process_request_run(request, cn, argc, argv, env))) {
            int err2 = 0;
            err = process_request_run(request, cn, argc, argv, env);
            if ((err2 = after_process_request_run(request, cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_request_run
    virtual int process_request_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t& response = this->response();
        if (!(err = err = all_prepare_response_to_request_run(response, request, argc, argv, env))) {
            if (!(err = err = all_output_response_run(response, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int before_process_request_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_process_request_run(request, argc, argv, env))) {
            int err2 = 0;
            err = process_request_run(request, argc, argv, env);
            if ((err2 = after_process_request_run(request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...
    /// ...request...

    /// ...response...
    /// ...
    /// ...send_response_run
    virtual int send_response_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t& response = this->response();
        if (!(err = all_send_response_run(cn, response, argc, argv, env))) {
        }
        return err;
    }
    virtual int before_send_response_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_send_response_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_send_response_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_send_response_run(cn, argc, argv, env))) {
            int err2 = 0;
            err = send_response_run(cn, argc, argv, env);
            if ((err2 = after_send_response_run(cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...send_response_run
    virtual int send_response_run(xos::network::sockets::interface& cn, string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = send(cn, response, argc, argv, env))) {
        }
        return err;
    }
    virtual int before_send_response_run(xos::network::sockets::interface& cn, string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_prepare_crlf2_message_to_send_run(response, argc, argv, env))) {
        }
        return err;
    }
    virtual int after_send_response_run(xos::network::sockets::interface& cn, string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_send_response_run(xos::network::sockets::interface& cn, string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_send_response_run(cn, response, argc, argv, env))) {
            int err2 = 0;
            err = send_response_run(cn, response, argc, argv, env);
            if ((err2 = after_send_response_run(cn, response, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...recv_response_run
    virtual int recv_response_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t& response = this->response();
        if (!(err = all_recv_response_run(response, cn, argc, argv, env))) {
            if (!(err = all_process_response_run(response, cn, argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int before_recv_response_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_recv_response_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_recv_response_run(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_recv_response_run(cn, argc, argv, env))) {
            int err2 = 0;
            err = recv_response_run(cn, argc, argv, env);
            if ((err2 = after_recv_response_run(cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...recv_response_run
    virtual int recv_response_run(string_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        char_t c = 0;

        response.clear();
        if (!(err = recv_crlf2(response, c, cn, argc, argv, env))) {
        }
        return err;
    }
    virtual int before_recv_response_run(string_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_recv_response_run(string_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_process_crlf2_message_received_run(response, argc, argv, env))) {
        }
        return err;
    }
    virtual int all_recv_response_run(string_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_recv_response_run(response, cn, argc, argv, env))) {
            int err2 = 0;
            err = recv_response_run(response, cn, argc, argv, env);
            if ((err2 = after_recv_response_run(response, cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_response_run
    virtual int process_response_run(string_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_process_response_run(response, argc, argv, env))) {
        }
        return err;
    }
    virtual int before_process_response_run(string_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response_run(string_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response_run(string_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_process_response_run(response, cn, argc, argv, env))) {
            int err2 = 0;
            err = process_response_run(response, cn, argc, argv, env);
            if ((err2 = after_process_response_run(response, cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_response_run
    virtual int process_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = err = all_output_response_run(response, argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_process_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_process_response_run(response, argc, argv, env))) {
            int err2 = 0;
            err = process_response_run(response, argc, argv, env);
            if ((err2 = after_process_response_run(response, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...prepare_response_to_request_run
    virtual int prepare_response_to_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        response.assign(request);
        return err;
    }
    virtual int before_prepare_response_to_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...output_response_run
    virtual int output_response_run(const string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_output_message_run(response, argc, argv, env))) {
        }
        return err;
    }
    virtual int before_output_response_run(const string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_response_run(const string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_response_run(const string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_response_run(response, argc, argv, env))) {
            int err2 = 0;
            err = output_response_run(response, argc, argv, env);
            if ((err2 = after_output_response_run(response, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...
    /// ...response...

    /// ...message...
    /// ...
    /// ...output_message_run
    virtual int output_message_run(const string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        this->outln(message);
        return err;
    }
    virtual int before_output_message_run(const string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_message_run(const string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_message_run(const string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_message_run(message, argc, argv, env))) {
            int err2 = 0;
            err = output_message_run(message, argc, argv, env);
            if ((err2 = after_output_message_run(message, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...prepare_crlf2_message_to_send_run
    virtual int prepare_crlf2_message_to_send_run(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& crlf2_endof_message = this->crlf2_endof_message();
        message.append(crlf2_endof_message);
        return err;
    }
    virtual int before_prepare_crlf2_message_to_send_run(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_crlf2_message_to_send_run(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_crlf2_message_to_send_run(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_crlf2_message_to_send_run(message, argc, argv, env))) {
            int err2 = 0;
            err = prepare_crlf2_message_to_send_run(message, argc, argv, env);
            if ((err2 = after_prepare_crlf2_message_to_send_run(message, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_crlf2_message_received_run
    virtual int process_crlf2_message_received_run(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& crlf2_endof_message = this->crlf2_endof_message();
        size_t crlf2_endof_message_length = crlf2_endof_message.length(), message_length = message.length();

        if ((message_length > crlf2_endof_message_length)) {
            const char_t* message_chars = message.chars();
            string_t endof_message(message_chars + (message_length - crlf2_endof_message_length));
            int unequal = 0;
            
            LOGGER_IS_LOGGED_INFO("!(unequal = crlf2_endof_message.compare(endof_message = \"" << endof_message << "\"))...");
            if (!(unequal = crlf2_endof_message.compare(endof_message))) {
                string_t process_message(message_chars, message_length - crlf2_endof_message_length);
                
                LOGGER_IS_LOGGED_INFO("...!(" << unequal << " = crlf2_endof_message.compare(endof_message = \"" << endof_message << "\"))");
                message.assign(process_message);
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on !(" << unequal << " = crlf2_endof_message.compare(endof_message = \"" << endof_message << "\"))");                
            }

        }
        return err;
    }
    virtual int before_process_crlf2_message_received_run(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_crlf2_message_received_run(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_crlf2_message_received_run(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_process_crlf2_message_received_run(message, argc, argv, env))) {
            int err2 = 0;
            err = process_crlf2_message_received_run(message, argc, argv, env);
            if ((err2 = after_process_crlf2_message_received_run(message, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...
    /// ...message..
    
    /// send
    /// ...
    /// send...
    /// ...
    virtual int send(xos::network::sockets::interface& cn, const string_t& s, int argc, char_t** argv, char_t**env) {
        int err = 0;
        size_t length = 0;
        const char_t *chars = 0;

        if ((chars = s.has_chars(length))) {
            cn.send(chars, length);
        }
        return err;
    }
    /// send_lf...
    /// ...<lf>
    virtual int send_lf(xos::network::sockets::interface& cn, const string_t& s, int argc, char_t** argv, char_t**env) {
        string_t lf_s(s);
        int err = 0;
        size_t length = 0;
        const char_t *chars = 0;

        lf_s.appendlf();
        if ((chars = lf_s.has_chars(length))) {
            cn.send(chars, length);
        }
        return err;
    }
    /// send_cr...
    /// ...<cr>
    virtual int send_cr(xos::network::sockets::interface& cn, const string_t& s, int argc, char_t** argv, char_t**env) {
        string_t cr_s(s);
        int err = 0;
        size_t length = 0;
        const char_t *chars = 0;

        cr_s.appendcr();
        if ((chars = cr_s.has_chars(length))) {
            cn.send(chars, length);
        }
        return err;
    }
    /// ...<cr><lf>
    virtual int send_crlf(xos::network::sockets::interface& cn, const string_t& s, int argc, char_t** argv, char_t**env) {
        string_t cr_s(s);
        int err = 0;
        size_t length = 0;
        const char_t *chars = 0;

        cr_s.appendcr();
        cr_s.appendlf();
        if ((chars = cr_s.has_chars(length))) {
            cn.send(chars, length);
        }
        return err;
    }
    /// ...<cr><lf><cr><lf>
    virtual int send_crlf2(xos::network::sockets::interface& cn, const string_t& s, int argc, char_t** argv, char_t**env) {
        string_t cr_s(s);
        int err = 0;
        size_t length = 0;
        const char_t *chars = 0;

        cr_s.appendcr();
        cr_s.appendlf();
        cr_s.appendcr();
        cr_s.appendlf();
        if ((chars = cr_s.has_chars(length))) {
            cn.send(chars, length);
        }
        return err;
    }
    /// ...
    /// send
    ///

    /// recv
    /// ...
    /// recv_before_lf...
    /// ...<lf>
    virtual int recv_before_lf(string_t& r, char_t& c, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        ssize_t amount = 0;
        while (0 < (amount = cn.recv(&c, 1))) {
            switch (c) {
            case '\n':
                return err = 0;
            default:
                r.append(&c, 1);
            }
        }
        return err;
    }
    /// recv_lf...
    /// ...<lf>
    virtual int recv_lf(string_t& r, char_t& c, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        ssize_t amount = 0;
        while (0 < (amount = cn.recv(&c, 1))) {
            r.append(&c, 1);
            switch (c) {
            case '\n':
                return err = 0;
            }
        }
        return err;
    }
    /// recv_before_cr...
    /// ...<cr>
    virtual int recv_before_cr(string_t& r, char_t& c, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        ssize_t amount = 0;
        while (0 < (amount = cn.recv(&c, 1))) {
            switch (c) {
            case '\r':
                return err = 0;
            default:
                r.append(&c, 1);
            }
        }
        return err;
    }
    /// recv_cr...
    /// ...<cr>
    virtual int recv_cr(string_t& r, char_t& c, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        ssize_t amount = 0;
        while (0 < (amount = cn.recv(&c, 1))) {
            r.append(&c, 1);
            switch (c) {
            case '\r':
                return err = 0;
            }
        }
        return err;
    }
    /// ...<cr><lf>
    virtual int recv_crlf(string_t& r, char_t& c, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        ssize_t amount = 0;
        enum { ch, cr } s = ch;
        while (0 < (amount = cn.recv(&c, 1))) {
            r.append(&c, 1);
            switch (c) {
            case '\r':
                switch (s) {
                case ch:
                case cr:
                    s = cr;
                    break;
                default:
                    LOGGER_IS_LOGGED_ERROR("...unexpected s = " << int_to_string(s));
                    return err = 1;
                }
                break;
            case '\n':
                switch (s) {
                case ch:
                    s = ch;
                    break;
                case cr:
                    return err = 0;
                default:
                    LOGGER_IS_LOGGED_ERROR("...unexpected s = " << int_to_string(s));
                    return err = 1;
                }
                break;
            default:
                s = ch;
                break;
            }
        }
        return err;
    }
    /// ...<cr><lf><cr><lf>
    virtual int on_recv_crlf2(string_t& r, char_t& c, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int recv_crlf2(string_t& r, char_t& c, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        ssize_t amount = 0;
        enum { ch, cr, lf, lfcr } s = ch;

        while (0 < (amount = cn.recv(&c, 1))) {
            r.append(&c, 1);
            switch (c) {
            case '\r':
                switch (s) {
                case ch:
                case cr:
                    s = cr;
                    break;
                case lf:
                    s = lfcr;
                    break;
                case lfcr:
                    s = cr;
                    break;
                default:
                    LOGGER_IS_LOGGED_ERROR("...unexpected s = " << int_to_string(s));
                    return err = 1;
                }
                break;
            case '\n':
                switch (s) {
                case ch:
                case lf:
                    s = ch;
                    break;
                case cr:
                    s = lf;
                    break;
                case lfcr:
                    err = on_recv_crlf2(r, c, cn, argc, argv, env);
                    return err;
                default:
                    LOGGER_IS_LOGGED_ERROR("...unexpected s = " << int_to_string(s));
                    return err = 1;
                }
                break;
            default:
                s = ch;
                break;
            }
        }
        return err;
    }
    /// <d>[1..n]...[1..n] | <cr><lf><cr><lf>
    virtual int recv_sizeof_sized_crlf2(size_t size_of, string_t& r, char_t& c, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        ssize_t amount = 0;
        size_t size = 0;

        for (size_t remain = size_of; remain; --remain) {
            if  (1 > (amount = cn.recv(&c, 1))) {
                return err;
            }
            r.append(&c, 1);
            size = (size << 8) | ((uint8_t)c);
        }
        err = recv_sized_crlf2(size, r, c, cn, argc, argv, env);
        return err;
    }
    /// ...[1..n] | <cr><lf><cr><lf>
    virtual int recv_sized_crlf2(size_t size, string_t& r, char_t& c, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        ssize_t amount = 0;
        enum { ch, cr, lf, lfcr } s = ch;
        for (; size; --size) {
            if (1 > (amount = cn.recv(&c, 1))) {
                break;
            } else {
                r.append(&c, 1);
                switch (c) {
                case '\r':
                    switch (s) {
                    case ch:
                        s = cr;
                        break;
                    case cr:
                        s = cr;
                        break;
                    case lf:
                        s = lfcr;
                        break;
                    case lfcr:
                        s = cr;
                        break;
                    default:
                        LOGGER_IS_LOGGED_ERROR("...unexpected s = " << int_to_string(s));
                        return err = 1;
                    }
                    break;
                case '\n':
                    switch (s) {
                    case ch:
                        s = ch;
                        break;
                    case cr:
                        s = lf;
                        break;
                    case lf:
                        s = ch;
                        break;
                    case lfcr:
                        return err = 0;
                        break;
                    default:
                        LOGGER_IS_LOGGED_ERROR("...unexpected s = " << int_to_string(s));
                        return err = 1;
                    }
                    break;
                default:
                    s = ch;
                    break;
                }
            }
        }
        return err;
    }
    /// ...
    /// recv
    /// 

    /// ...accept_one
    virtual bool& set_accept_one(const bool& to) {
        bool& accept_one = this->accept_one();
        accept_one = to;
        return accept_one;
    }
    virtual const bool& get_accept_one() const {
        return this->accept_one();
    }
    virtual bool& accept_one() const {
        bool& accept_one = (bool&)accept_one_;
        return accept_one;
    }

    /// ...accept_restart
    virtual bool& set_accept_restart(const bool& to) {
        bool& accept_restart = this->accept_restart();
        accept_restart = to;
        return accept_restart;
    }
    virtual const bool& get_accept_restart() const {
        return this->accept_restart();
    }
    virtual bool& accept_restart() const {
        bool& accept_restart = (bool&)accept_restart_;
        return accept_restart;
    }

    /// ...accept_stop
    virtual bool& set_accept_stop(const bool& to) {
        bool& accept_stop = this->accept_stop();
        accept_stop = to;
        return accept_stop;
    }
    virtual const bool& get_accept_stop() const {
        return this->accept_stop();
    }
    virtual bool& accept_stop() const {
        bool& accept_stop = (bool&)accept_stop_;
        return accept_stop;
    }

    /// ...endof_message...
    virtual const char_t* cr_endof_message_chars(size_t& length) const {
        string_t& message = this->cr_endof_message();
        const char_t* message_chars = 0;
        message_chars = message.has_chars(length);
        return message_chars;
    }
    virtual const char_t* cr_endof_message_chars() const {
        string_t& message = this->cr_endof_message();
        const char_t* message_chars = 0;
        message_chars = message.has_chars();
        return message_chars;
    }
    virtual string_t& cr_endof_message() const {
        string_t& message = (string_t&)cr_endof_message_;
        return message;
    }

    /// ...endof_message...
    virtual const char_t* lf_endof_message_chars(size_t& length) const {
        string_t& message = this->lf_endof_message();
        const char_t* message_chars = 0;
        message_chars = message.has_chars(length);
        return message_chars;
    }
    virtual const char_t* lf_endof_message_chars() const {
        string_t& message = this->lf_endof_message();
        const char_t* message_chars = 0;
        message_chars = message.has_chars();
        return message_chars;
    }
    virtual string_t& lf_endof_message() const {
        string_t& message = (string_t&)lf_endof_message_;
        return message;
    }

    /// ...endof_message...
    virtual const char_t* crlf_endof_message_chars(size_t& length) const {
        string_t& message = this->crlf_endof_message();
        const char_t* message_chars = 0;
        message_chars = message.has_chars(length);
        return message_chars;
    }
    virtual const char_t* crlf_endof_message_chars() const {
        string_t& message = this->crlf_endof_message();
        const char_t* message_chars = 0;
        message_chars = message.has_chars();
        return message_chars;
    }
    virtual string_t& crlf_endof_message() const {
        string_t& message = (string_t&)crlf_endof_message_;
        return message;
    }

    /// ...endof_message...
    virtual const char_t* crlf2_endof_message_chars(size_t& length) const {
        string_t& message = this->crlf2_endof_message();
        const char_t* message_chars = 0;
        message_chars = message.has_chars(length);
        return message_chars;
    }
    virtual const char_t* crlf2_endof_message_chars() const {
        string_t& message = this->crlf2_endof_message();
        const char_t* message_chars = 0;
        message_chars = message.has_chars();
        return message_chars;
    }
    virtual string_t& crlf2_endof_message() const {
        string_t& message = (string_t&)crlf2_endof_message_;
        return message;
    }

    /// host / port
    virtual string_t& set_host(const string_t& to) {
        this->set_accept_host(to);
        this->set_connect_host(to);
        return this->host();
    }
    virtual string_t& set_host(const char_t* to) {
        this->set_accept_host(to);
        this->set_connect_host(to);
        return this->host();
    }
    virtual string_t& host() const {
        return this->connect_host();
    }
    virtual short& set_port(const short& to) {
        this->set_accept_port(to);
        this->set_connect_port(to);
        return this->port();
    }
    virtual short& port() const {
        return this->connect_port();
    }

    /// ...accept_host / ...accept_port
    virtual string_t& set_accept_host(const string_t& to) {
        const char_t* chars = to.has_chars();
        return set_accept_host(chars);
    }
    virtual string_t& set_accept_host(const char_t* to) {
        string_t& accept_host = this->accept_host();
        if ((to)) accept_host.assign(to);
        else accept_host.clear();
        return accept_host;
    }
    virtual const string_t& get_accept_host() const {
        return this->accept_host();
    }
    virtual string_t& accept_host() const {
        return (string_t&)accept_host_;
    }
    virtual short& set_accept_port(const short& to) {
        short& accept_port = this->accept_port();
        accept_port = to;
        return accept_port;
    }
    virtual const short& get_accept_port() const {
        return this->accept_port();
    }
    virtual short& accept_port() const {
        return (short&)accept_port_;
    }

    /// ...connect_host / ...connect_port
    virtual string_t& set_connect_host(const string_t& to) {
        const char_t* chars = to.has_chars();
        return set_connect_host(chars);
    }
    virtual string_t& set_connect_host(const char_t* to) {
        string_t& connect_host = this->connect_host();
        if ((to)) connect_host.assign(to);
        else connect_host.clear();
        return connect_host;
    }
    virtual const string_t& get_connect_host() const {
        return this->connect_host();
    }
    virtual string_t& connect_host() const {
        return (string_t&)connect_host_;
    }
    virtual short& set_connect_port(const short& to) {
        short& connect_port = this->connect_port();
        connect_port = to;
        return connect_port;
    }
    virtual const short& get_connect_port() const {
        return this->connect_port();
    }
    virtual short& connect_port() const {
        return (short&)connect_port_;
    }

    /// ...iface...
    virtual xos::network::sockets::os::interface& accept_os_iface() const {
        return (xos::network::sockets::os::interface&)accept_os_iface_;
    }
    virtual xos::network::sockets::os::interface& connect_os_iface() const {
        return (xos::network::sockets::os::interface&)connect_os_iface_;
    }
    virtual xos::network::sockets::os::interface& relay_os_iface() const {
        return (xos::network::sockets::os::interface&)relay_os_iface_;
    }
    virtual xos::network::sockets::interface& accept_iface() const {
        return (xos::network::sockets::interface&)accept_os_iface();
    }
    virtual xos::network::sockets::interface& connect_iface() const {
        return (xos::network::sockets::interface&)connect_os_iface();
    }
    virtual xos::network::sockets::interface& relay_iface() const {
        return (xos::network::sockets::interface&)relay_os_iface();
    }

    /// ...addr...
    virtual xos::network::sockets::sockaddr_t& accept_addr() const {
        return (xos::network::sockets::sockaddr_t&)accept_addr_;
    }
    virtual xos::network::sockets::socklen_t& accept_addrlen() const {
        return (xos::network::sockets::socklen_t&)accept_addrlen_;
    }
    virtual xos::network::sockets::sockaddr_t& connect_addr() const {
        return (xos::network::sockets::sockaddr_t&)connect_addr_;
    }
    virtual xos::network::sockets::socklen_t& connect_addrlen() const {
        return (xos::network::sockets::socklen_t&)connect_addrlen_;
    }
    virtual xos::network::sockets::sockaddr_t& relay_addr() const {
        return (xos::network::sockets::sockaddr_t&)relay_addr_;
    }
    virtual xos::network::sockets::socklen_t& relay_addrlen() const {
        return (xos::network::sockets::socklen_t&)relay_addrlen_;
    }

    /// ...connect_ep...
    xos::network::sockets::endpoint& (derives::*connect_ep_)() const;
    virtual xos::network::sockets::endpoint& connect_ep() const {
        if ((this->connect_ep_)) {
            return (this->*connect_ep_)();
        }
        return this->default_connect_ep();
    }
    virtual xos::network::sockets::endpoint& default_connect_ep() const {
        return this->connect_ip_v4_ep();
    }
    virtual xos::network::sockets::endpoint& connect_ip_v4_ep() const {
        return this->ip_v4_ep();
    }
#if !defined(WINSOCK_1)
    virtual xos::network::sockets::endpoint& connect_ip_v6_ep() const {
        return this->ip_v6_ep();
    }
#else /// !defined(WINSOCK_1)
#endif /// !defined(WINSOCK_1)

    /// ...tp
    xos::network::sockets::transport& (derives::*connect_tp_)() const;
    virtual xos::network::sockets::transport& connect_tp() const {
        if ((this->connect_tp_)) {
            return (this->*connect_tp_)();
        }
        return this->default_connect_tp();
    }
    virtual xos::network::sockets::transport& default_connect_tp() const {
        return this->connect_ip_v4_tcp_tp();
    }
    virtual xos::network::sockets::transport& connect_ip_v4_tcp_tp() const {
        return this->ip_v4_tcp_tp();
    }
#if !defined(WINSOCK_1)
    virtual xos::network::sockets::transport& connect_ip_v6_tcp_tp() const {
        return this->ip_v6_tcp_tp();
    }
#else /// !defined(WINSOCK_1)
#endif /// !defined(WINSOCK_1)

    /// ...ep...
    xos::network::sockets::endpoint& (derives::*ep_)() const;
    virtual xos::network::sockets::endpoint& ep() const {
        if ((this->ep_)) {
            return (this->*ep_)();
        }
        return this->default_ep();
    }
    virtual xos::network::sockets::endpoint& default_ep() const {
        return this->ip_v4_ep();
    }
    virtual xos::network::sockets::endpoint& ip_v4_ep() const {
        return (xos::network::sockets::endpoint&)ip_v4_ep_;
    }
#if !defined(WINSOCK_1)
    virtual xos::network::sockets::endpoint& ip_v6_ep() const {
        return (xos::network::sockets::endpoint&)ip_v6_ep_;
    }
#else /// !defined(WINSOCK_1)
#endif /// !defined(WINSOCK_1)

    /// ...tp...
    xos::network::sockets::transport& (derives::*tp_)() const;
    virtual xos::network::sockets::transport& tp() const {
        if ((this->tp_)) {
            return (this->*tp_)();
        }
        return this->default_tp();
    }
    virtual xos::network::sockets::transport& default_tp() const {
        return this->ip_v4_tcp_tp();
    }
    virtual xos::network::sockets::transport& ip_v4_tcp_tp() const {
        return (xos::network::sockets::transport&)ip_v4_tcp_tp_;
    }
    virtual xos::network::sockets::transport& ip_v4_udp_tp() const {
        return (xos::network::sockets::transport&)ip_v4_udp_tp_;
    }
#if !defined(WINSOCK_1)
    virtual xos::network::sockets::transport& ip_v6_tcp_tp() const {
        return (xos::network::sockets::transport&)ip_v6_tcp_tp_;
    }
    virtual xos::network::sockets::transport& ip_v6_udp_tp() const {
        return (xos::network::sockets::transport&)ip_v6_udp_tp_;
    }
#else /// !defined(WINSOCK_1)
#endif /// !defined(WINSOCK_1)

protected:
    bool accept_one_, accept_restart_, accept_stop_;
    string_t cr_endof_message_, lf_endof_message_, 
             crlf_endof_message_, crlf2_endof_message_;

    string_t accept_host_, connect_host_;
    short accept_port_, connect_port_;

    xos::network::sockets::os::interface accept_os_iface_, connect_os_iface_, relay_os_iface_;
 
    xos::network::sockets::interface accept_iface_, connect_iface_, relay_iface_;

    xos::network::sockets::sockaddr_t accept_addr_, connect_addr_, relay_addr_;
    xos::network::sockets::socklen_t accept_addrlen_, connect_addrlen_, relay_addrlen_;

    xos::network::sockets::ip::v4::endpoint ip_v4_ep_;
    xos::network::sockets::ip::v4::tcp::transport ip_v4_tcp_tp_;
    xos::network::sockets::ip::v4::udp::transport ip_v4_udp_tp_;

#if !defined(WINSOCK_1)
    xos::network::sockets::ip::v6::endpoint ip_v6_ep_;
    xos::network::sockets::ip::v6::tcp::transport ip_v6_tcp_tp_;
    xos::network::sockets::ip::v6::udp::transport ip_v6_udp_tp_;
#else /// !defined(WINSOCK_1)
#endif /// !defined(WINSOCK_1)
}; /// class maint 
typedef maint<> main;

} /// namespace sockets 
} /// namespace network 
} /// namespace power 
} /// namespace control 
} /// namespace home 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_HOME_CONTROL_POWER_NETWORK_SOCKETS_MAIN_HPP
