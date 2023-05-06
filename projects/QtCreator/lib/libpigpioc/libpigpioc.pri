########################################################################
# Copyright (c) 1988-2023 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: libpigpioc.pri
#
# Author: $author$
#   Date: 4/12/2023
#
# generic QtCreator project file for numachinae framework perifra static library libpigpioc
########################################################################

########################################################################
# libpigpioc
XOS_LIB_PIGPIOC_VERSION_BUILD_DATE = 4/12/2023 #$$system(~/bin/utility/tdate)

# libpigpioc TARGET
#
libpigpioc_TARGET = pigpioc
libpigpioc_TEMPLATE = lib
libpigpioc_CONFIG += staticlib

# libpigpioc INCLUDEPATH
#
libpigpioc_INCLUDEPATH += \
$${perifra_INCLUDEPATH} \

# libpigpioc DEFINES
#
libpigpioc_DEFINES += \
$${perifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_LIB_PIGPIOC_VERSION_BUILD_DATE=$${XOS_LIB_PIGPIOC_VERSION_BUILD_DATE} \

########################################################################
# libpigpioc OBJECTIVE_HEADERS
#
#libpigpioc_OBJECTIVE_HEADERS += \
#$${PERIFRA_SRC}/xos/lib/protocol/pigpio/client/main.hh \

# libpigpioc OBJECTIVE_SOURCES
#
#libpigpioc_OBJECTIVE_SOURCES += \
#$${PERIFRA_SRC}/xos/lib/protocol/pigpio/client/main.mm \

########################################################################
# libpigpioc HEADERS
#
libpigpioc_HEADERS += \
$${RETE_SRC}/xos/app/protocol/network/sockets/base/main.hpp \
$${RETE_SRC}/xos/app/protocol/network/sockets/client/main.hpp \
\
$${PERIFRA_SRC}/xos/app/protocol/pigpio/base/main.hpp \
$${PERIFRA_SRC}/xos/app/protocol/pigpio/client/main.hpp \
\
$${PERIFRA_SRC}/xos/lib/protocol/pigpio/client/main.hpp \

# libpigpioc SOURCES
#
libpigpioc_SOURCES += \
$${PERIFRA_SRC}/xos/lib/protocol/pigpio/client/main.cpp \

########################################################################
