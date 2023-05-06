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
///   Date: 3/28/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_MAIN_HPP
#define XOS_LIB_PROTOCOL_PIGPIO_CLIENT_MAIN_HPP

#include "xos/app/protocol/pigpio/client/main.hpp"
#include "xos/lib/version.hpp"

namespace xos {
namespace lib {
namespace protocol {
namespace pigpio {
namespace client {

/// class version
class version {
public:
    /// which 
    static const xos::lib::version& which();
}; /// class version 

/// class maint
template 
<class TExtends = xos::app::protocol::pigpio::client::maint<>,  class TImplements = typename TExtends::implements>

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
      argc_(0), arg_(0), en_(0),
      arg_chars_(&arg_), en_chars_(&en_),
      argv_(&arg_chars_), env_(&en_chars_),
      gpioRead_level_(0) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint &copy) {
        throw exception(exception_unexpected);
    }
public:

    /// ...Restart / ...Stop
    int gpioRestart () {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->all_gpioRestart_run(argc_, argv_, env_)...");
        if (!(err = this->all_gpioRestart_run(argc_, argv_, env_))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->all_gpioRestart_run(argc_, argv_, env_)");
        }
        return err;
    }
    int gpioStart () {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->all_gpioStart_run(argc_, argv_, env_)...");
        if (!(err = this->all_gpioStart_run(argc_, argv_, env_))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->all_gpioStart_run(argc_, argv_, env_)");
        }
        return err;
    }
    int gpioStop () {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->all_gpioStop_run(argc_, argv_, env_)...");
        if (!(err = this->all_gpioStop_run(argc_, argv_, env_))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->all_gpioStop_run(argc_, argv_, env_)");
        }
        return err;
    }

    /// ...Read / ...Write
    int gpioRead (unsigned gpio) {
        int err = 0;
        int &gpioRead_level = this->gpioRead_level();

        gpioRead_level = -1;
        LOGGER_IS_LOGGED_INFO("...gpioRead_level = " << -1 << "");
        LOGGER_IS_LOGGED_INFO("this->all_gpioRead_run(gpio, argc_, argv_, env_)...");
        if (!(err = this->all_gpioRead_run(gpio, argc_, argv_, env_))) {
            const string_t& gpioRead_response = this->gpioRead_response();
            const char_t *gpioRead_response_chars = 0; size_t gpioRead_response_length = 0;

            LOGGER_IS_LOGGED_INFO("..." << err << " = this->all_gpioRead_run(gpio, argc_, argv_, env_)");
            LOGGER_IS_LOGGED_INFO("gpioRead_response.has_chars(gpioRead_response_length)...");
            if ((gpioRead_response_chars = gpioRead_response.has_chars(gpioRead_response_length))) {
                const string_t& begin_gpioRead_response = this->begin_gpioRead_response();
                const char_t *begin_gpioRead_response_chars = 0; size_t begin_gpioRead_response_length = 0;

                LOGGER_IS_LOGGED_INFO("...\"" << gpioRead_response_chars << "\" = gpioRead_response.has_chars(" << gpioRead_response_length << ")");
                LOGGER_IS_LOGGED_INFO("begin_gpioRead_response.has_chars(begin_gpioRead_response_length)...");
                if ((begin_gpioRead_response_chars = begin_gpioRead_response.has_chars(begin_gpioRead_response_length))) {
                    const string_t& middle_gpioRead_response = this->middle_gpioRead_response();
                    size_t middle_gpioRead_response_index = gpioRead_response_length - begin_gpioRead_response_length;
                    const char_t *middle_gpioRead_response_chars = 0; size_t middle_gpioRead_response_length = 0;

                    LOGGER_IS_LOGGED_INFO("...\"" << begin_gpioRead_response_chars << "\" = begin_gpioRead_response.has_chars(" << begin_gpioRead_response_length << ")");
                    LOGGER_IS_LOGGED_INFO("middle_gpioRead_response.has_chars(middle_gpioRead_response_length)...");
                    if ((middle_gpioRead_response_chars = middle_gpioRead_response.has_chars(middle_gpioRead_response_length))) {
                        const string_t& end_gpioRead_response = this->end_gpioRead_response();
                        const char_t *end_gpioRead_response_chars = 0; size_t end_gpioRead_response_length = 0;

                        LOGGER_IS_LOGGED_INFO("...\"" << middle_gpioRead_response_chars << "\" = middle_gpioRead_response.has_chars(" << middle_gpioRead_response_length << ")");
                        LOGGER_IS_LOGGED_INFO("end_gpioRead_response.has_chars(end_gpioRead_response_length)...");
                        if ((end_gpioRead_response_chars = end_gpioRead_response.has_chars(end_gpioRead_response_length))) {
                            int unequal = 0;
                            size_t end_gpioRead_response_index = gpioRead_response_length - end_gpioRead_response_length;
                            string_t gpioRead_response_part(gpioRead_response_chars, begin_gpioRead_response_length);

                            LOGGER_IS_LOGGED_INFO("...\"" << end_gpioRead_response_chars << "\" = end_gpioRead_response.has_chars(" << end_gpioRead_response_length << ")");
                            LOGGER_IS_LOGGED_INFO("(!(unequal = begin_gpioRead_response.compare(" << gpioRead_response_part << ")))...");
                            if (!(unequal = begin_gpioRead_response.compare(gpioRead_response_part))) {

                                LOGGER_IS_LOGGED_INFO("...(!(unequal = begin_gpioRead_response.compare(" << gpioRead_response_part << ")))");
                                gpioRead_response_part.assign(gpioRead_response_chars + end_gpioRead_response_index, end_gpioRead_response_length);
                                LOGGER_IS_LOGGED_INFO("(!(unequal = end_gpioRead_response.compare(" << gpioRead_response_part << ")))...");
                                if (!(unequal = end_gpioRead_response.compare(gpioRead_response_part))) {
                                    size_t index_length = end_gpioRead_response_index - middle_gpioRead_response_length;

                                    LOGGER_IS_LOGGED_INFO("...(!(unequal = end_gpioRead_response.compare(" << gpioRead_response_part << ")))");
                                    for (size_t index = middle_gpioRead_response_index; index < index_length; ++index) {

                                        gpioRead_response_part.assign(gpioRead_response_chars + index, middle_gpioRead_response_length);
                                        LOGGER_IS_LOGGED_INFO("(!(unequal = middle_gpioRead_response.compare(" << gpioRead_response_part << ")))...");
                                        if (!(unequal = middle_gpioRead_response.compare(gpioRead_response_part))) {
                                            size_t gpioRead_response_level_chars_length = 0,
                                                   gpioRead_response_level_index = index + middle_gpioRead_response_length,
                                                   gpioRead_response_level_length = gpioRead_response_length - index - end_gpioRead_response_length;
                                            string_t gpioRead_response_level
                                            (gpioRead_response_chars + gpioRead_response_level_index, gpioRead_response_level_length);

                                            LOGGER_IS_LOGGED_INFO("...(!(unequal = middle_gpioRead_response.compare(" << gpioRead_response_part << ")))");
                                            LOGGER_IS_LOGGED_INFO("...gpioRead_response_level = \"" << gpioRead_response_level << "\"");
                                            LOGGER_IS_LOGGED_INFO("pioRead_response_level.has_chars(gpioRead_response_level_chars_length)...");
                                            if ((gpioRead_response_level.has_chars(gpioRead_response_level_chars_length))) {
                                                unsigned level = gpioRead_response_level.to_unsigned();

                                                LOGGER_IS_LOGGED_INFO("...pioRead_response_level.has_chars(" << gpioRead_response_level_chars_length << ")");
                                                gpioRead_level = (int)level;
                                                LOGGER_IS_LOGGED_INFO("...gpioRead_level = (int)" << level << "");
                                            }
                                            break;
                                        } else {
                                        }
                                    }
                                } else {
                                }
                            } else {
                            }
                        } else {
                        }
                    } else {
                    }
                } else {
                }
            } else {
            }
        }
        return err;
    }
    int gpioWrite(unsigned gpio, unsigned level) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("this->all_gpioWrite_run(gpio, level, argc_, argv_, env_)...");
        if (!(err = this->all_gpioWrite_run(gpio, level, argc_, argv_, env_))) {
            LOGGER_IS_LOGGED_INFO("..." << err << " = this->all_gpioWrite_run(gpio, level, argc_, argv_, env_)");
        }
        return err;
    }

    /// gpioRead_level
    virtual int& gpioRead_level() const {
        return (int&) gpioRead_level_;
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

protected:
    int argc_;
    char_t arg_, en_, *arg_chars_, *en_chars_, **argv_, **env_;
    int gpioRead_level_;
}; /// class maint 
typedef maint<> main;

} /// namespace client 
} /// namespace pigpio 
} /// namespace protocol 
} /// namespace lib 
} /// namespace xos 

#endif /// ndef XOS_LIB_PROTOCOL_PIGPIO_CLIENT_MAIN_HPP
