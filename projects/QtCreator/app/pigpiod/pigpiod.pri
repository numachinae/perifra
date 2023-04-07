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
#   File: pigpiod.pri
#
# Author: $author$
#   Date: 4/6/2023
#
# generic QtCreator project file for numachinae framework perifra executable pigpiod
########################################################################

########################################################################
# pigpiod

# pigpiod TARGET
#
pigpiod_TARGET = pigpiod

# pigpiod INCLUDEPATH
#
pigpiod_INCLUDEPATH += \
$${perifra_INCLUDEPATH} \

# pigpiod DEFINES
#
pigpiod_DEFINES += \
$${perifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \
RASPBERRYPIOS \

########################################################################
# pigpiod OBJECTIVE_HEADERS
#
#pigpiod_OBJECTIVE_HEADERS += \
#$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/base/main.hh \

# pigpiod OBJECTIVE_SOURCES
#
#pigpiod_OBJECTIVE_SOURCES += \
#$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/base/main.mm \

########################################################################
# pigpiod HEADERS
#
pigpiod_HEADERS += \
$${RETE_SRC}/xos/app/console/protocol/network/sockets/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/network/sockets/server/main.hpp \
\
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/server/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/server/main.hpp \
\
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/network/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/network/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/network/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/network/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/network/server/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/network/server/main.hpp \
\
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pio/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pio/base/main.hpp \
\
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/server/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/server/main.hpp \
\
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/network/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/network/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/network/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/network/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/network/server/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/network/server/main.hpp \
\
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/network/sockets/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/network/sockets/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/network/sockets/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/network/sockets/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/network/sockets/server/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/network/sockets/server/main.hpp \

# pigpiod SOURCES
#
pigpiod_SOURCES += \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/network/sockets/server/main_opt.cpp \
$${PERIFRA_SRC}/xos/app/console/protocol/perifra/control/pigpio/network/sockets/server/main.cpp \

########################################################################
# pigpiod FRAMEWORKS
#
pigpiod_FRAMEWORKS += \
$${perifra_pigpio_FRAMEWORKS} \

# pigpiod LIBS
#
pigpiod_LIBS += \
$${perifra_pigpio_LIBS} \

########################################################################
# NO Qt
QT -= gui core
