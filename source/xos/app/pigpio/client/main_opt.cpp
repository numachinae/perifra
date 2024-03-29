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
///   File: main_opt.cpp
///
/// Author: $author$
///   Date: 3/25/2023
//////////////////////////////////////////////////////////////////////////
#include "xos/app/pigpio/client/main_opt.hpp"
#include "xos/app/rete/client/main_opt.cpp"

#ifndef XOS_APP_PIGPIO_CLIENT_MAIN_OPT_INSTANCE
/// #define XOS_APP_PIGPIO_CLIENT_MAIN_OPT_INSTANCE 
#else /// ndef XOS_APP_PIGPIO_CLIENT_MAIN_OPT_INSTANCE 
#endif /// ndef XOS_APP_PIGPIO_CLIENT_MAIN_OPT_INSTANCE 

namespace xos {
namespace app {
namespace pigpio {
namespace client {

/// class 
#ifdef XOS_APP_PIGPIO_CLIENT_MAIN_OPT_INSTANCE
static main_opt the_main_opt;
#endif /// def XOS_APP_PIGPIO_CLIENT_MAIN_OPT_INSTANCE 

} /// namespace client 
} /// namespace pigpio 
} /// namespace app 
} /// namespace xos 
