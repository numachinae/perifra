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
///   Date: 3/25/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_PIGPIO_BASE_MAIN_HPP
#define XOS_APP_PIGPIO_BASE_MAIN_HPP

#include "xos/app/pigpio/base/main_opt.hpp"

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_NETWORK_SOCKETS_PORT 8484

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_NETWORK_SOCKETS_ACCEPT_PORT \
     XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_NETWORK_SOCKETS_PORT

#define XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_NETWORK_SOCKETS_CONNECT_PORT \
     XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_NETWORK_SOCKETS_PORT

namespace xos {
namespace app {
namespace pigpio {
namespace base {

/// class maint
template 
<class TMain = xos::app::protocol::network::sockets::base::maint<>,
 class TExtends = xos::app::pigpio::base::main_optt<TMain>,  class TImplements = typename TExtends::implements>

class maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::main_t main_t;
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
      accept_port_(XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_NETWORK_SOCKETS_ACCEPT_PORT), 
      connect_port_(XOS_APP_CONSOLE_PROTOCOL_PERIFRA_CONTROL_PIGPIO_NETWORK_SOCKETS_CONNECT_PORT) {
        main_t& main = this->main();
        main.set_accept_port(accept_port_);
        main.set_connect_port(connect_port_);
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

    /// ...port...
    virtual short& accept_port() const {
        return (short&)accept_port_;
    }
    virtual short& connect_port() const {
        return (short&)connect_port_;
    }

protected:
    short accept_port_, connect_port_;    
}; /// class maint 
typedef maint<> main;

} /// namespace base 
} /// namespace pigpio 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_PIGPIO_BASE_MAIN_HPP
