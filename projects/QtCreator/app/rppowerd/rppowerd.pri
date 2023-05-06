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
#   File: rppowerd.pri
#
# Author: $author$
#   Date: 5/2/2023
#
# generic QtCreator project file for numachinae framework perifra executable rppowerd
########################################################################

########################################################################
# rppowerd

# rppowerd TARGET
#
rppowerd_TARGET = rppowerd

# rppowerd INCLUDEPATH
#
rppowerd_INCLUDEPATH += \
$${perifra_INCLUDEPATH} \

# rppowerd DEFINES
#
rppowerd_DEFINES += \
$${perifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \
RASPBERRYPIOS \

########################################################################
# rppowerd OBJECTIVE_HEADERS
#
#rppowerd_OBJECTIVE_HEADERS += \
#$${PERIFRA_SRC}/xos/app/console/rppowerd/main.hh \

# rppowerd OBJECTIVE_SOURCES
#
#rppowerd_OBJECTIVE_SOURCES += \
#$${PERIFRA_SRC}/xos/app/console/rppowerd/main.mm \

########################################################################
# rppowerd HEADERS
#
rppowerd_HEADERS += \
$${PERIFRA_SRC}/xos/pio/implement.hpp \
$${PERIFRA_SRC}/xos/pio/extend.hpp \
$${PERIFRA_SRC}/xos/pio/raspberrypi/raspberrypios/pigpio/pio.hpp \
$${PERIFRA_SRC}/xos/pio/os/os.hpp \
$${PERIFRA_SRC}/xos/pio/pios.hpp \
\
$${PERIFRA_SRC}/xos/app/console/pio/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/pio/main.hpp \
$${PERIFRA_SRC}/xos/app/console/pio/onoff/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/pio/onoff/main.hpp \
\
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/client/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/server/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/server/main.hpp \
\
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/server/pio/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/server/pio/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/sockets/server/pio/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/sockets/server/pio/main.hpp \

# rppowerd SOURCES
#
rppowerd_SOURCES += \
$${PERIFRA_SRC}/xos/pio/implement.cpp \
$${PERIFRA_SRC}/xos/pio/extend.cpp \
$${PERIFRA_SRC}/xos/pio/raspberrypi/raspberrypios/pigpio/pio.cpp \
$${PERIFRA_SRC}/xos/pio/os/os.cpp \
$${PERIFRA_SRC}/xos/pio/pios.cpp \
\
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/sockets/server/pio/main_opt.cpp \
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/sockets/server/pio/main.cpp \

########################################################################
# rppowerd FRAMEWORKS
#
rppowerd_FRAMEWORKS += \
$${perifra_pigpio_FRAMEWORKS} \

# rppowerd LIBS
#
rppowerd_LIBS += \
$${perifra_pigpio_LIBS} \

########################################################################
# NO Qt
QT -= gui core
