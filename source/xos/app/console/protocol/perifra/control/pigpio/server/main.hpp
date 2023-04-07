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
#ifndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_SERVER_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_SERVER_MAIN_HPP

#include "xos/app/console/protocol/perifra/control/pigpio/server/main_opt.hpp"
#include "xos/io/format/json/libjson/to_node.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace perifra {
namespace control {
namespace pigpio {
namespace server {

//// class maint
template 
<class TExtends = xos::app::console::protocol::perifra::control::pigpio::server::main_optt<>,  
 class TJSonEvents = io::format::json::node_events, class TImplements = typename TExtends::implements>

class maint: virtual public TJSonEvents, virtual public TImplements, public TExtends {
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
      json_events_(*this), 
      pigpio_("pigpio"), 
      gpioRead_("gpioRead"), gpioWrite_("gpioWrite"), gpioSetMode_("gpioSetMode"), 
      gpio_("gpio"), level_("level"), unknown_("unknown"),
      pigpio_gpio_begin_("{\"pigpio\":{\"gpioLevel\":{\"gpio\":\""), 
      pigpio_level_begin_("\"},{\"level\":\""), pigpio_level_end_("\"}}}") {
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

    /// ...prepare_response_to_json_request_run
    int (derives::*prepare_response_to_json_request_run_)
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env);
    virtual int prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (prepare_response_to_json_request_run_) {
            if (!(err = (this->*prepare_response_to_json_request_run_)(response, request_node, argc, argv, env))) {
            } else {
            }
        } else {
            if (!(err = default_prepare_response_to_json_request_run(response, request_node, argc, argv, env))) {
            } else {
            }
        }
        return err;
    }
    virtual int default_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        io::format::json::node_events& events = this->json_events();

        LOGGER_IS_LOGGED_INFO("events.on_begin_root_node(request_node)...");
        events.on_begin_root_node(request_node);
        LOGGER_IS_LOGGED_INFO("request_node.to(events)...");
        request_node.to(events);
        LOGGER_IS_LOGGED_INFO("...request_node.to(events)");
        events.on_end_root_node(request_node);
        LOGGER_IS_LOGGED_INFO("...events.on_end_root_node(request_node)");
        return err;
    }
    virtual int before_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = unset_after_prepare_response_to_json_request_run(request_node))) {
        }
        return err;
    }
    int (derives::*after_prepare_response_to_json_request_run_)
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env);
    virtual int after_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (after_prepare_response_to_json_request_run_) {
            if (!(err = (this->*after_prepare_response_to_json_request_run_)(response, request_node, argc, argv, env))) {
            } else {
            }
        } else {
            if (!(err = default_after_prepare_response_to_json_request_run(response, request_node, argc, argv, env))) {
            } else {
            }
        }
        return err;
    }
    virtual int default_after_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_after_prepare_response_to_json_request_run(const io::format::json::node& request_node) {
        int err = 0;
        after_prepare_response_to_json_request_run_ = 0;
        return err;
    }
    virtual int set_pio_pin_value_after_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_set_pio_pin_value_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_set_pio_pin_value_after_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        /*/
        if (!(err = this->before_pio_pin_run(argc, argv, env))) {
        } else {
        }
        /*/
        return err;
    }
    virtual int after_set_pio_pin_value_after_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        /*/
        if (!(err = this->after_pio_pin_run(argc, argv, env))) {
        } else {
        }
        /*/
        return err;
    }
    virtual int all_set_pio_pin_value_after_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_pio_pin_value_after_prepare_response_to_json_request_run(response, request_node, argc, argv, env))) {
            int err2 = 0;
            err = set_pio_pin_value_after_prepare_response_to_json_request_run(response, request_node, argc, argv, env);
            if ((err2 = after_set_pio_pin_value_after_prepare_response_to_json_request_run(response, request_node, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_set_pio_pin_value_after_prepare_response_to_json_request_run(const io::format::json::node& request_node) {
        int err = 0;
        after_prepare_response_to_json_request_run_ = &derives::all_set_pio_pin_value_after_prepare_response_to_json_request_run;
        return err;
    }
    virtual int get_pio_pin_value_after_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_get_pio_pin_value_run(argc, argv, env))) {
            const string_t& pigpio_gpio_begin = this->pigpio_gpio_begin();
            const string_t& pigpio_level_begin = this->pigpio_level_begin();
            const string_t& pigpio_level_end = this->pigpio_level_end();
            unsigned pio_pin_number = this->pio_pin(), 
                     pio_pin_value = this->pio_value();
            const unsigned_to_string pio_pin_number_string(pio_pin_number);
            const string_t pio_pin_value_string
                           ((((uint8_t)-1) != pio_pin_value)
                            ?(unsigned_to_string(pio_pin_value))
                            :(this->unknown()));

            response.assign(pigpio_gpio_begin);
            response.append(pio_pin_number_string);
            response.append(pigpio_level_begin);
            response.append(pio_pin_value_string);
            response.append(pigpio_level_end);
        } else {
        }
        return err;
    }
    virtual int before_get_pio_pin_value_after_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        /*/
        if (!(err = this->before_pio_pin_run(argc, argv, env))) {
        } else {
        }
        /*/
        return err;
    }
    virtual int after_get_pio_pin_value_after_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        /*/
        if (!(err = this->after_pio_pin_run(argc, argv, env))) {
        } else {
        }
        /*/
        return err;
    }
    virtual int all_get_pio_pin_value_after_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_get_pio_pin_value_after_prepare_response_to_json_request_run(response, request_node, argc, argv, env))) {
            int err2 = 0;
            err = get_pio_pin_value_after_prepare_response_to_json_request_run(response, request_node, argc, argv, env);
            if ((err2 = after_get_pio_pin_value_after_prepare_response_to_json_request_run(response, request_node, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_get_pio_pin_value_after_prepare_response_to_json_request_run(const io::format::json::node& request_node) {
        int err = 0;
        after_prepare_response_to_json_request_run_ = &derives::all_get_pio_pin_value_after_prepare_response_to_json_request_run;
        return err;
    }
    virtual int set_pio_pin_mode_after_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_set_pio_pin_mode_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int before_set_pio_pin_mode_after_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        /*/
        if (!(err = this->before_pio_pin_run(argc, argv, env))) {
        } else {
        }
        /*/
        return err;
    }
    virtual int after_set_pio_pin_mode_after_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        /*/
        if (!(err = this->after_pio_pin_run(argc, argv, env))) {
        } else {
        }
        /*/
        return err;
    }
    virtual int all_set_pio_pin_mode_after_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_pio_pin_mode_after_prepare_response_to_json_request_run(response, request_node, argc, argv, env))) {
            int err2 = 0;
            err = set_pio_pin_mode_after_prepare_response_to_json_request_run(response, request_node, argc, argv, env);
            if ((err2 = after_set_pio_pin_mode_after_prepare_response_to_json_request_run(response, request_node, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_set_pio_pin_mode_after_prepare_response_to_json_request_run(const io::format::json::node& request_node) {
        int err = 0;
        after_prepare_response_to_json_request_run_ = &derives::all_set_pio_pin_mode_after_prepare_response_to_json_request_run;
        return err;
    }
    virtual int all_prepare_response_to_json_request_run
    (string_t& response, const io::format::json::node& request_node, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_json_request_run(response, request_node, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_json_request_run(response, request_node, argc, argv, env);
            if ((err2 = after_prepare_response_to_json_request_run(response, request_node, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...prepare_response_to_unknown_request...
    virtual int default_prepare_response_to_unknown_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t request_length = 0;
        const char_t* request_chars = 0;

        if ((request_chars = request.has_chars(request_length))) {
            char_string from(request_chars, request_length);
            io::format::json::libjson::to_node to_node;
            io::format::json::node node;

            LOGGER_IS_LOGGED_INFO("to_node.to(node, from)...");
            to_node.to(node, from);
            LOGGER_IS_LOGGED_INFO("...to_node.to(node, from)");
            LOGGER_IS_LOGGED_INFO("all_prepare_response_to_json_request_run(response, node, argc, argv, env)...");
            if (!(err = all_prepare_response_to_json_request_run(response, node, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...all_prepare_response_to_json_request_run(response, node, argc, argv, env)");
            }
        }
        return err;
    }

    /// ...json_events
    virtual io::format::json::node_events& json_events() const {
        return (io::format::json::node_events&) json_events_;
    }

    /// ...on...root...    
    virtual io::format::json::node_events& on_begin_root_node(const io::format::json::node& node) {
        io::format::json::node_events* forwarded_to = 0;
        LOGGER_IS_LOGGED_INFO("in...");
        if ((forwarded_to = this->forwarded_to(this))) {
            LOGGER_IS_LOGGED_INFO("forwarded_to->on_begin_root_node(node)...");
            forwarded_to->on_begin_root_node(node);
            LOGGER_IS_LOGGED_INFO("...forwarded_to->on_begin_root_node(node)");
        } else {
        }
        LOGGER_IS_LOGGED_INFO("out...");
        return *this;
    }
    virtual io::format::json::node_events& on_end_root_node(const io::format::json::node& node) {
        io::format::json::node_events* forwarded_to = 0;
        LOGGER_IS_LOGGED_INFO("in...");
        if ((forwarded_to = this->forwarded_to(this))) {
            LOGGER_IS_LOGGED_INFO("forwarded_to->on_end_root_node(node)...");
            forwarded_to->on_end_root_node(node);
            LOGGER_IS_LOGGED_INFO("...forwarded_to->on_end_root_node(node)");
        } else {
        }
        LOGGER_IS_LOGGED_INFO("out...");
        return *this;
    }
    
    /// ...on...named...    
    int (derives::*on_begin_named_node_)(const io::format::json::node& node);
    virtual io::format::json::node_events& on_begin_named_node(const io::format::json::node& node) {
        io::format::json::node_events* forwarded_to = 0;
        LOGGER_IS_LOGGED_INFO("in...");
        if ((forwarded_to = this->forwarded_to(this))) {
            LOGGER_IS_LOGGED_INFO("forwarded_to->on_begin_named_node(node)...");
            forwarded_to->on_begin_named_node(node);
            LOGGER_IS_LOGGED_INFO("...forwarded_to->on_begin_named_node(node)");
        } else {
            int err = 0;
            if (on_begin_named_node_) {
                if (!(err = (this->*on_begin_named_node_)(node))) {
                } else {
                }
            } else {
                if (!(err = default_on_begin_named_node(node))) {
                } else {
                }
            }
        }
        LOGGER_IS_LOGGED_INFO("out...");
        return *this;
    }
    int (derives::*on_end_named_node_)(const io::format::json::node& node);
    virtual io::format::json::node_events& on_end_named_node(const io::format::json::node& node) {
        io::format::json::node_events* forwarded_to = 0;
        LOGGER_IS_LOGGED_INFO("in...");
        if ((forwarded_to = this->forwarded_to(this))) {
            LOGGER_IS_LOGGED_INFO("forwarded_to->on_end_named_node(node)...");
            forwarded_to->on_end_named_node(node);
            LOGGER_IS_LOGGED_INFO("...forwarded_to->on_end_named_node(node)");
        } else {
            int err = 0;
            if (on_end_named_node_) {
                if (!(err = (this->*on_end_named_node_)(node))) {
                } else {
                }
            } else {
                if (!(err = default_on_end_named_node(node))) {
                } else {
                }
            }
        }
        LOGGER_IS_LOGGED_INFO("out...");
        return *this;
    }
    virtual int default_on_begin_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t node_string = node.get_string();
        const string_t& pigpio = this->pigpio();

        LOGGER_IS_LOGGED_INFO("!(unequal = pigpio.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = pigpio.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = pigpio.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("set_on_begin_pigpio_named_node(node)...");
            if (!(err = set_on_begin_pigpio_named_node(node))) {
                LOGGER_IS_LOGGED_INFO("set_on_end_pigpio_named_node(node...");
                if (!(err = set_on_end_pigpio_named_node(node))) {
                }
            }
        }
        return err;
    }
    virtual int default_on_end_named_node(const io::format::json::node& node) {
        int err = 0;
        return err;
    }
    virtual int unset_on_begin_named_node(const io::format::json::node& node) {
        int err = 0;
        on_begin_named_node_ = 0;
        return err;
    }
    virtual int unset_on_end_named_node(const io::format::json::node& node) {
        int err = 0;
        on_end_named_node_ = 0;
        return err;
    }

    /// ...pigpio_named...
    virtual int on_begin_pigpio_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t node_string = node.get_string();
        const string_t& gpioWrite = this->gpioWrite();

        LOGGER_IS_LOGGED_INFO("!(unequal = gpioWrite.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = gpioWrite.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = gpioWrite.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("set_on_begin_gpioWrite_named_node(node)...");
            if (!(err = set_on_begin_gpioWrite_named_node(node))) {
                LOGGER_IS_LOGGED_INFO("set_on_end_gpioWrite_named_node(node...");
                if (!(err = set_on_end_gpioWrite_named_node(node))) {
                }
            }
        } else {
            const string_t& gpioRead = this->gpioRead();
    
            LOGGER_IS_LOGGED_INFO("!(unequal = gpioRead.compare(node_string = \"" << node_string << "\"))...");
            if (!(unequal = gpioRead.compare(node_string))) {
                LOGGER_IS_LOGGED_INFO("...!(unequal = gpioRead.compare(node_string = \"" << node_string << "\"))");
                LOGGER_IS_LOGGED_INFO("set_on_begin_gpioRead_named_node(node)...");
                if (!(err = set_on_begin_gpioRead_named_node(node))) {
                    LOGGER_IS_LOGGED_INFO("set_on_end_gpioRead_named_node(node...");
                    if (!(err = set_on_end_gpioRead_named_node(node))) {
                    }
                }
            } else {
                const string_t& gpioSetMode = this->gpioSetMode();
        
                LOGGER_IS_LOGGED_INFO("!(unequal = gpioSetMode.compare(node_string = \"" << node_string << "\"))...");
                if (!(unequal = gpioSetMode.compare(node_string))) {
                    LOGGER_IS_LOGGED_INFO("...!(unequal = gpioSetMode.compare(node_string = \"" << node_string << "\"))");
                    LOGGER_IS_LOGGED_INFO("set_on_begin_gpioSetMode_named_node(node)...");
                    if (!(err = set_on_begin_gpioSetMode_named_node(node))) {
                        LOGGER_IS_LOGGED_INFO("set_on_end_gpioSetMode_named_node(node...");
                        if (!(err = set_on_end_gpioSetMode_named_node(node))) {
                        }
                    }
                } else {
                }
            }
        }
        return err;
    }
    virtual int on_end_pigpio_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t node_string = node.get_string();
        const string_t& pigpio = this->pigpio();

        LOGGER_IS_LOGGED_INFO("!(unequal = pigpio.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = pigpio.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = pigpio.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("unset_on_end_named_node(node)...");
            if (!(err = unset_on_end_named_node(node))) {
                LOGGER_IS_LOGGED_INFO("unset_on_begin_named_node(node)...");
                if (!(err = unset_on_begin_named_node(node))) {
                }
            }
        }
        return err;
    }
    virtual int set_on_begin_pigpio_named_node(const io::format::json::node& node) {
        int err = 0;
        on_begin_named_node_ = &derives::on_begin_pigpio_named_node;
        return err;
    }
    virtual int set_on_end_pigpio_named_node(const io::format::json::node& node) {
        int err = 0;
        on_end_named_node_ = &derives::on_end_pigpio_named_node;
        return err;
    }

    /// ...gpioRead_named...
    virtual int on_begin_gpioRead_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t node_string = node.get_string();
        const string_t& gpio = this->gpio();

        LOGGER_IS_LOGGED_INFO("!(unequal = gpio.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = gpio.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = gpio.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("set_on_begin_gpioRead_gpio_named_node(node)...");
            if (!(err = set_on_begin_gpioRead_gpio_named_node(node))) {
                LOGGER_IS_LOGGED_INFO("set_on_end_gpioRead_gpio_named_node(node)...");
                if (!(err = set_on_end_gpioRead_gpio_named_node(node))) {
                    LOGGER_IS_LOGGED_INFO("set_on_pio_pin_number_node(node)...");
                    if (!(err = set_on_pio_pin_number_node(node))) {
                        LOGGER_IS_LOGGED_INFO("sset_on_pio_pin_string_node(node)...");
                        if (!(err = set_on_pio_pin_string_node(node))) {
                        }
                    }
                }
            }
        } else {
        }
        return err;
    }
    virtual int on_end_gpioRead_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t node_string = node.get_string();
        const string_t& gpioRead = this->gpioRead();

        LOGGER_IS_LOGGED_INFO("!(unequal = gpioRead.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = gpioRead.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = gpioRead.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("set_on_end_pigpio_named_node(node)...");
            if (!(err = set_on_end_pigpio_named_node(node))) {
                LOGGER_IS_LOGGED_INFO("set_on_begin_pigpio_named_node(node)...");
                if (!(err = set_on_begin_pigpio_named_node(node))) {
                }
            }
        }
        return err;
    }
    virtual int set_on_begin_gpioRead_named_node(const io::format::json::node& node) {
        int err = 0;
        on_begin_named_node_ = &derives::on_begin_gpioRead_named_node;
        return err;
    }
    virtual int set_on_end_gpioRead_named_node(const io::format::json::node& node) {
        int err = 0;
        on_end_named_node_ = &derives::on_end_gpioRead_named_node;
        return err;
    }

    /// ...gpioWrite_named...
    virtual int on_begin_gpioWrite_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t node_string = node.get_string();
        const string_t& gpio = this->gpio();

        LOGGER_IS_LOGGED_INFO("!(unequal = gpio.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = gpio.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = gpio.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("set_on_begin_gpioWrite_gpio_named_node(node)...");
            if (!(err = set_on_begin_gpioWrite_gpio_named_node(node))) {
                LOGGER_IS_LOGGED_INFO("set_on_end_gpioWrite_gpio_named_node(node)...");
                if (!(err = set_on_end_gpioWrite_gpio_named_node(node))) {
                    LOGGER_IS_LOGGED_INFO("set_on_pio_pin_number_node(node)...");
                    if (!(err = set_on_pio_pin_number_node(node))) {
                        LOGGER_IS_LOGGED_INFO("sset_on_pio_pin_string_node(node)...");
                        if (!(err = set_on_pio_pin_string_node(node))) {
                        }
                    }
                }
            }
        } else {
            const io::format::json::node::string_t node_string = node.get_string();
            const string_t& level = this->level();
    
            LOGGER_IS_LOGGED_INFO("!(unequal = level.compare(node_string = \"" << node_string << "\"))...");
            if (!(unequal = level.compare(node_string))) {
                LOGGER_IS_LOGGED_INFO("...!(unequal = level.compare(node_string = \"" << node_string << "\"))");
                LOGGER_IS_LOGGED_INFO("set_on_begin_gpioWrite_level_named_node(node)...");
                if (!(err = set_on_begin_gpioWrite_level_named_node(node))) {
                    LOGGER_IS_LOGGED_INFO("set_on_end_gpioWrite_level_named_node(node)...");
                    if (!(err = set_on_end_gpioWrite_level_named_node(node))) {
                        LOGGER_IS_LOGGED_INFO("set_on_pio_level_number_node(node)...");
                        if (!(err = set_on_pio_level_number_node(node))) {
                            LOGGER_IS_LOGGED_INFO("set_on_pio_level_string_node(node)...");
                            if (!(err = set_on_pio_level_string_node(node))) {
                            }
                        }
                    }
                }
            } else {
            }
        }
        return err;
    }
    virtual int on_end_gpioWrite_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t node_string = node.get_string();
        const string_t& gpioWrite = this->gpioWrite();

        LOGGER_IS_LOGGED_INFO("!(unequal = gpioWrite.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = gpioWrite.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = gpioWrite.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("set_on_end_pigpio_named_node(node)...");
            if (!(err = set_on_end_pigpio_named_node(node))) {
                LOGGER_IS_LOGGED_INFO("set_on_begin_pigpio_named_node(node)...");
                if (!(err = set_on_begin_pigpio_named_node(node))) {
                }
            }
        }
        return err;
    }
    virtual int set_on_begin_gpioWrite_named_node(const io::format::json::node& node) {
        int err = 0;
        on_begin_named_node_ = &derives::on_begin_gpioWrite_named_node;
        return err;
    }
    virtual int set_on_end_gpioWrite_named_node(const io::format::json::node& node) {
        int err = 0;
        on_end_named_node_ = &derives::on_end_gpioWrite_named_node;
        return err;
    }

    /// ...gpioRead_gpio_named...
    virtual int on_begin_gpioRead_gpio_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        return err;
    }
    virtual int on_end_gpioRead_gpio_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t node_string = node.get_string();
        const string_t& gpio = this->gpio();

        LOGGER_IS_LOGGED_INFO("!(unequal = gpio.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = gpio.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = gpio.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("set_on_end_gpioRead_named_node(node)...");
            if (!(err = set_on_end_gpioRead_named_node(node))) {
                LOGGER_IS_LOGGED_INFO("set_on_begin_gpioRead_named_node(node)...");
                if (!(err = set_on_begin_gpioRead_named_node(node))) {
                    LOGGER_IS_LOGGED_INFO("unset_on_number_node(node)...");
                    if (!(err = unset_on_number_node(node))) {
                        LOGGER_IS_LOGGED_INFO("unset_on_string_node(node)...");
                        if (!(err = unset_on_string_node(node))) {
                            LOGGER_IS_LOGGED_INFO("set_get_pio_pin_value_after_prepare_response_to_json_request_run(node)...");
                            if (!(err = set_get_pio_pin_value_after_prepare_response_to_json_request_run(node))) {
                            }
                        }
                    }
                }
            }
        } else {
        }
        return err;
    }
    virtual int set_on_begin_gpioRead_gpio_named_node(const io::format::json::node& node) {
        int err = 0;
        on_begin_named_node_ = &derives::on_begin_gpioRead_gpio_named_node;
        return err;
    }
    virtual int set_on_end_gpioRead_gpio_named_node(const io::format::json::node& node) {
        int err = 0;
        on_end_named_node_ = &derives::on_end_gpioRead_gpio_named_node;
        return err;
    }

    /// ...gpioWrite_gpio_named...
    virtual int on_begin_gpioWrite_gpio_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        return err;
    }
    virtual int on_end_gpioWrite_gpio_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t node_string = node.get_string();
        const string_t& gpio = this->gpio();

        LOGGER_IS_LOGGED_INFO("!(unequal = gpio.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = gpio.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = gpio.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("set_on_end_gpioWrite_named_node(node)...");
            if (!(err = set_on_end_gpioWrite_named_node(node))) {
                LOGGER_IS_LOGGED_INFO("set_on_begin_gpioWrite_named_node(node)...");
                if (!(err = set_on_begin_gpioWrite_named_node(node))) {
                    LOGGER_IS_LOGGED_INFO("unset_on_number_node(node)...");
                    if (!(err = unset_on_number_node(node))) {
                        LOGGER_IS_LOGGED_INFO("unset_on_string_node(node)...");
                        if (!(err = unset_on_string_node(node))) {
                        }
                    }
                }
            }
        } else {
        }
        return err;
    }
    virtual int set_on_begin_gpioWrite_gpio_named_node(const io::format::json::node& node) {
        int err = 0;
        on_begin_named_node_ = &derives::on_begin_gpioWrite_gpio_named_node;
        return err;
    }
    virtual int set_on_end_gpioWrite_gpio_named_node(const io::format::json::node& node) {
        int err = 0;
        on_end_named_node_ = &derives::on_end_gpioWrite_gpio_named_node;
        return err;
    }

    /// ...gpioWrite_level_named...
    virtual int on_begin_gpioWrite_level_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        return err;
    }
    virtual int on_end_gpioWrite_level_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t node_string = node.get_string();
        const string_t& level = this->level();

        LOGGER_IS_LOGGED_INFO("!(unequal = level.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = level.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = level.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("set_on_end_gpioWrite_named_node(node)...");
            if (!(err = set_on_end_gpioWrite_named_node(node))) {
                LOGGER_IS_LOGGED_INFO("set_on_begin_gpioWrite_named_node(node)...");
                if (!(err = set_on_begin_gpioWrite_named_node(node))) {
                    LOGGER_IS_LOGGED_INFO("unset_on_number_node(node)...");
                    if (!(err = unset_on_number_node(node))) {
                        LOGGER_IS_LOGGED_INFO("unset_on_string_node(node)...");
                        if (!(err = unset_on_string_node(node))) {
                            LOGGER_IS_LOGGED_INFO("set_set_pio_pin_value_after_prepare_response_to_json_request_run(node)...");
                            if (!(err = set_set_pio_pin_value_after_prepare_response_to_json_request_run(node))) {
                            }
                        }
                    }
                }
            }
        } else {
        }
        return err;
    }
    virtual int set_on_begin_gpioWrite_level_named_node(const io::format::json::node& node) {
        int err = 0;
        on_begin_named_node_ = &derives::on_begin_gpioWrite_level_named_node;
        return err;
    }
    virtual int set_on_end_gpioWrite_level_named_node(const io::format::json::node& node) {
        int err = 0;
        on_end_named_node_ = &derives::on_end_gpioWrite_level_named_node;
        return err;
    }

    /// ...gpioSetMode_named...
    virtual int on_begin_gpioSetMode_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t node_string = node.get_string();
        const string_t& gpio = this->gpio();

        LOGGER_IS_LOGGED_INFO("!(unequal = gpio.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = gpio.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = gpio.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("set_on_begin_gpioSetMode_gpio_named_node(node)...");
            if (!(err = set_on_begin_gpioSetMode_gpio_named_node(node))) {
                LOGGER_IS_LOGGED_INFO("set_on_end_gpioSetMode_gpio_named_node(node)...");
                if (!(err = set_on_end_gpioSetMode_gpio_named_node(node))) {
                    LOGGER_IS_LOGGED_INFO("set_on_pio_pin_number_node(node)...");
                    if (!(err = set_on_pio_pin_number_node(node))) {
                        LOGGER_IS_LOGGED_INFO("sset_on_pio_pin_string_node(node)...");
                        if (!(err = set_on_pio_pin_string_node(node))) {
                        }
                    }
                }
            }
        } else {
            const io::format::json::node::string_t node_string = node.get_string();
            const string_t& level = this->level();
    
            LOGGER_IS_LOGGED_INFO("!(unequal = level.compare(node_string = \"" << node_string << "\"))...");
            if (!(unequal = level.compare(node_string))) {
                LOGGER_IS_LOGGED_INFO("...!(unequal = level.compare(node_string = \"" << node_string << "\"))");
                LOGGER_IS_LOGGED_INFO("set_on_begin_gpioSetMode_level_named_node(node)...");
                if (!(err = set_on_begin_gpioSetMode_level_named_node(node))) {
                    LOGGER_IS_LOGGED_INFO("set_on_end_gpioSetMode_level_named_node(node)...");
                    if (!(err = set_on_end_gpioSetMode_level_named_node(node))) {
                        LOGGER_IS_LOGGED_INFO("set_on_pio_level_number_node(node)...");
                        if (!(err = set_on_pio_level_number_node(node))) {
                            LOGGER_IS_LOGGED_INFO("set_on_pio_level_string_node(node)...");
                            if (!(err = set_on_pio_level_string_node(node))) {
                            }
                        }
                    }
                }
            } else {
            }
        }
        return err;
    }
    virtual int on_end_gpioSetMode_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t node_string = node.get_string();
        const string_t& gpioSetMode = this->gpioSetMode();

        LOGGER_IS_LOGGED_INFO("!(unequal = gpioSetMode.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = gpioSetMode.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = gpioSetMode.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("set_on_end_pigpio_named_node(node)...");
            if (!(err = set_on_end_pigpio_named_node(node))) {
                LOGGER_IS_LOGGED_INFO("set_on_begin_pigpio_named_node(node)...");
                if (!(err = set_on_begin_pigpio_named_node(node))) {
                }
            }
        }
        return err;
    }
    virtual int set_on_begin_gpioSetMode_named_node(const io::format::json::node& node) {
        int err = 0;
        on_begin_named_node_ = &derives::on_begin_gpioSetMode_named_node;
        return err;
    }
    virtual int set_on_end_gpioSetMode_named_node(const io::format::json::node& node) {
        int err = 0;
        on_end_named_node_ = &derives::on_end_gpioSetMode_named_node;
        return err;
    }

    /// ...gpioSetMode_gpio_named...
    virtual int on_begin_gpioSetMode_gpio_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        return err;
    }
    virtual int on_end_gpioSetMode_gpio_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t node_string = node.get_string();
        const string_t& gpio = this->gpio();

        LOGGER_IS_LOGGED_INFO("!(unequal = gpio.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = gpio.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = gpio.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("set_on_end_gpioSetMode_named_node(node)...");
            if (!(err = set_on_end_gpioSetMode_named_node(node))) {
                LOGGER_IS_LOGGED_INFO("set_on_begin_gpioSetMode_named_node(node)...");
                if (!(err = set_on_begin_gpioSetMode_named_node(node))) {
                    LOGGER_IS_LOGGED_INFO("unset_on_number_node(node)...");
                    if (!(err = unset_on_number_node(node))) {
                        LOGGER_IS_LOGGED_INFO("unset_on_string_node(node)...");
                        if (!(err = unset_on_string_node(node))) {
                        }
                    }
                }
            }
        } else {
        }
        return err;
    }
    virtual int set_on_begin_gpioSetMode_gpio_named_node(const io::format::json::node& node) {
        int err = 0;
        on_begin_named_node_ = &derives::on_begin_gpioSetMode_gpio_named_node;
        return err;
    }
    virtual int set_on_end_gpioSetMode_gpio_named_node(const io::format::json::node& node) {
        int err = 0;
        on_end_named_node_ = &derives::on_end_gpioSetMode_gpio_named_node;
        return err;
    }

    /// ...gpioSetMode_level_named...
    virtual int on_begin_gpioSetMode_level_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        return err;
    }
    virtual int on_end_gpioSetMode_level_named_node(const io::format::json::node& node) {
        int err = 0;
        int unequal = 0;
        const io::format::json::node::string_t node_string = node.get_string();
        const string_t& level = this->level();

        LOGGER_IS_LOGGED_INFO("!(unequal = level.compare(node_string = \"" << node_string << "\"))...");
        if (!(unequal = level.compare(node_string))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = level.compare(node_string = \"" << node_string << "\"))");
            LOGGER_IS_LOGGED_INFO("set_on_end_gpioSetMode_named_node(node)...");
            if (!(err = set_on_end_gpioSetMode_named_node(node))) {
                LOGGER_IS_LOGGED_INFO("set_on_begin_gpioSetMode_named_node(node)...");
                if (!(err = set_on_begin_gpioSetMode_named_node(node))) {
                    LOGGER_IS_LOGGED_INFO("unset_on_number_node(node)...");
                    if (!(err = unset_on_number_node(node))) {
                        LOGGER_IS_LOGGED_INFO("unset_on_string_node(node)...");
                        if (!(err = unset_on_string_node(node))) {
                            LOGGER_IS_LOGGED_INFO("set_set_pio_pin_value_after_prepare_response_to_json_request_run(node)...");
                            if (!(err = set_set_pio_pin_mode_after_prepare_response_to_json_request_run(node))) {
                            }
                        }
                    }
                }
            }
        } else {
        }
        return err;
    }
    virtual int set_on_begin_gpioSetMode_level_named_node(const io::format::json::node& node) {
        int err = 0;
        on_begin_named_node_ = &derives::on_begin_gpioSetMode_level_named_node;
        return err;
    }
    virtual int set_on_end_gpioSetMode_level_named_node(const io::format::json::node& node) {
        int err = 0;
        on_end_named_node_ = &derives::on_end_gpioSetMode_level_named_node;
        return err;
    }

    /// ...on...object...    
    virtual io::format::json::node_events& on_begin_object_node(const io::format::json::node& node) {
        io::format::json::node_events* forwarded_to = 0;
        LOGGER_IS_LOGGED_INFO("in...");
        if ((forwarded_to = this->forwarded_to(this))) {
            LOGGER_IS_LOGGED_INFO("forwarded_to->on_begin_object_node(node)...");
            forwarded_to->on_begin_object_node(node);
            LOGGER_IS_LOGGED_INFO("...forwarded_to->on_begin_object_node(node)");
        } else {
        }
        LOGGER_IS_LOGGED_INFO("out...");
        return *this;
    }
    virtual io::format::json::node_events& on_end_object_node(const io::format::json::node& node) {
        io::format::json::node_events* forwarded_to = 0;
        LOGGER_IS_LOGGED_INFO("in...");
        if ((forwarded_to = this->forwarded_to(this))) {
            LOGGER_IS_LOGGED_INFO("forwarded_to->on_end_object_node(node)...");
            forwarded_to->on_end_object_node(node);
            LOGGER_IS_LOGGED_INFO("...forwarded_to->on_end_object_node(node)");
        } else {
        }
        LOGGER_IS_LOGGED_INFO("out...");
        return *this;
    }

    /// ...on...array...    
    virtual io::format::json::node_events& on_begin_array_node(const io::format::json::node& node) {
        io::format::json::node_events* forwarded_to = 0;
        LOGGER_IS_LOGGED_INFO("in...");
        if ((forwarded_to = this->forwarded_to(this))) {
            LOGGER_IS_LOGGED_INFO("forwarded_to->on_begin_array_node(node)...");
            forwarded_to->on_begin_array_node(node);
            LOGGER_IS_LOGGED_INFO("...forwarded_to->on_begin_array_node(node)");
        } else {
        }
        LOGGER_IS_LOGGED_INFO("out...");
        return *this;
    }
    virtual io::format::json::node_events& on_end_array_node(const io::format::json::node& node) {
        io::format::json::node_events* forwarded_to = 0;
        LOGGER_IS_LOGGED_INFO("in...");
        if ((forwarded_to = this->forwarded_to(this))) {
            LOGGER_IS_LOGGED_INFO("forwarded_to->on_end_array_node(node)...");
            forwarded_to->on_end_array_node(node);
            LOGGER_IS_LOGGED_INFO("...forwarded_to->on_end_array_node(node)");
        } else {
        }
        LOGGER_IS_LOGGED_INFO("out...");
        return *this;
    }

    /// ...on...string...    
    int (derives::*on_string_node_)(const io::format::json::node& node);
    virtual int default_on_string_node(const io::format::json::node& node) {
        int err = 0;
        return err;
    }
    virtual int unset_on_string_node(const io::format::json::node& node) {
        int err = 0;
        on_string_node_ = 0;
        return err;
    }
    virtual int on_pio_pin_string_node(const io::format::json::node& node) {
        int err = 0;
        if (!(err = on_pio_pin_number_node(node))) {
        } else {
        }
        return err;
    }
    virtual int set_on_pio_pin_string_node(const io::format::json::node& node) {
        int err = 0;
        on_string_node_ = &derives::on_pio_pin_string_node;
        return err;
    }
    virtual int on_pio_level_string_node(const io::format::json::node& node) {
        int err = 0;
        if (!(err = on_pio_level_number_node(node))) {
        } else {
        }
        return err;
    }
    virtual int set_on_pio_level_string_node(const io::format::json::node& node) {
        int err = 0;
        on_string_node_ = &derives::on_pio_level_string_node;
        return err;
    }
    virtual io::format::json::node_events& on_string_node(const io::format::json::node& node) {
        io::format::json::node_events* forwarded_to = 0;
        LOGGER_IS_LOGGED_INFO("in...");
        if ((forwarded_to = this->forwarded_to(this))) {
            LOGGER_IS_LOGGED_INFO("forwarded_to->on_string_node(node)...");
            forwarded_to->on_string_node(node);
            LOGGER_IS_LOGGED_INFO("...forwarded_to->on_string_node(node)");
        } else {
            int err = 0;
            if (on_string_node_) {
                if (!(err = (this->*on_string_node_)(node))) {
                } else {
                }
            } else {
                if (!(err = default_on_string_node(node))) {
                } else {
                }
            }
        }
        LOGGER_IS_LOGGED_INFO("out...");
        return *this;
    }

    /// ...on...number...    
    int (derives::*on_number_node_)(const io::format::json::node& node);
    virtual int default_on_number_node(const io::format::json::node& node) {
        int err = 0;
        return err;
    }
    virtual int unset_on_number_node(const io::format::json::node& node) {
        int err = 0;
        on_number_node_ = 0;
        return err;
    }
    virtual int on_pio_pin_number_node(const io::format::json::node& node) {
        int err = 0;
        const io::format::json::node::string_t& node_string = node.get_string();
        const io::format::json::node::char_t* chars = 0;
        size_t length = 0;
        if ((chars = node_string.has_chars(length))) {
            unsigned pio_pin = node_string.to_unsigned();

            LOGGER_IS_LOGGED_INFO("this->set_pio_pin(pio_pin = " << pio_pin << ")...");
            this->set_pio_pin(pio_pin);
            LOGGER_IS_LOGGED_INFO("...this->set_pio_pin(pio_pin = " << pio_pin << ")");
        }
        return err;
    }
    virtual int set_on_pio_pin_number_node(const io::format::json::node& node) {
        int err = 0;
        on_number_node_ = &derives::on_pio_pin_number_node;
        return err;
    }
    virtual int on_pio_level_number_node(const io::format::json::node& node) {
        int err = 0;
        const io::format::json::node::string_t& node_string = node.get_string();
        const io::format::json::node::char_t* chars = 0;
        size_t length = 0;
        if ((chars = node_string.has_chars(length))) {
            unsigned pio_value = node_string.to_unsigned();

            LOGGER_IS_LOGGED_INFO("this->set_pio_value(pio_value = " << pio_value << ")...");
            this->set_pio_value(pio_value);
            LOGGER_IS_LOGGED_INFO("...this->set_pio_value(pio_value = " << pio_value << ")");
        }
        return err;
    }
    virtual int set_on_pio_level_number_node(const io::format::json::node& node) {
        int err = 0;
        on_number_node_ = &derives::on_pio_level_number_node;
        return err;
    }
    virtual io::format::json::node_events& on_number_node(const io::format::json::node& node) {
        io::format::json::node_events* forwarded_to = 0;
        LOGGER_IS_LOGGED_INFO("in...");
        if ((forwarded_to = this->forwarded_to(this))) {
            LOGGER_IS_LOGGED_INFO("forwarded_to->on_number_node(node)...");
            forwarded_to->on_number_node(node);
            LOGGER_IS_LOGGED_INFO("...forwarded_to->on_number_node(node)");
        } else {
            int err = 0;
            if (on_number_node_) {
                if (!(err = (this->*on_number_node_)(node))) {
                } else {
                }
            } else {
                if (!(err = default_on_number_node(node))) {
                } else {
                }
            }
        }
        LOGGER_IS_LOGGED_INFO("out...");
        return *this;
    }

    /// ...on...boolean...    
    virtual io::format::json::node_events& on_boolean_node(const io::format::json::node& node) {
        io::format::json::node_events* forwarded_to = 0;
        LOGGER_IS_LOGGED_INFO("in...");
        if ((forwarded_to = this->forwarded_to(this))) {
            LOGGER_IS_LOGGED_INFO("forwarded_to->on_boolean_node(node)...");
            forwarded_to->on_boolean_node(node);
            LOGGER_IS_LOGGED_INFO("...forwarded_to->on_boolean_node(node)");
        } else {
        }
        LOGGER_IS_LOGGED_INFO("out...");
        return *this;
    }

    /// ...on...null...    
    virtual io::format::json::node_events& on_null_node(const io::format::json::node& node) {
        io::format::json::node_events* forwarded_to = 0;
        LOGGER_IS_LOGGED_INFO("in...");
        if ((forwarded_to = this->forwarded_to(this))) {
            LOGGER_IS_LOGGED_INFO("forwarded_to->on_null_node(node)...");
            forwarded_to->on_null_node(node);
            LOGGER_IS_LOGGED_INFO("...forwarded_to->on_null_node(node)");
        } else {
        }
        LOGGER_IS_LOGGED_INFO("out...");
        return *this;
    }

    /// ...gpio...
    virtual string_t& pigpio() const {
        return (string_t&) pigpio_;
    }
    virtual string_t& gpioRead() const {
        return (string_t&) gpioRead_;
    }
    virtual string_t& gpioWrite() const {
        return (string_t&) gpioWrite_;
    }
    virtual string_t& gpioSetMode() const {
        return (string_t&) gpioSetMode_;
    }
    virtual string_t& gpio() const {
        return (string_t&) gpio_;
    }
    virtual string_t& level() const {
        return (string_t&) level_;
    }
    virtual string_t& unknown() const {
        return (string_t&) unknown_;
    }
    virtual string_t& pigpio_gpio_begin() const {
        return (string_t&) pigpio_gpio_begin_;
    }
    virtual string_t& pigpio_level_begin() const {
        return (string_t&) pigpio_level_begin_;
    }
    virtual string_t& pigpio_level_end() const {
        return (string_t&) pigpio_level_end_;
    }

protected:
    io::format::json::extended::node_events json_events_;
    string_t pigpio_, gpioRead_, gpioWrite_, gpioSetMode_, gpio_, level_, unknown_, 
             pigpio_gpio_begin_, pigpio_level_begin_, pigpio_level_end_;
}; /// class maint 
typedef maint<> main;

} /// namespace server 
} /// namespace pigpio 
} /// namespace control 
} /// namespace perifra 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_SERVER_MAIN_HPP
