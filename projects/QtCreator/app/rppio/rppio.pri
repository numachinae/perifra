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
#   File: rppio.pri
#
# Author: $author$
#   Date: 4/13/2023
#
# generic QtCreator project file for numachinae framework perifra executable rppio
########################################################################

########################################################################
# rppio

# rppio TARGET
#
rppio_TARGET = rppio

# rppio INCLUDEPATH
#
rppio_INCLUDEPATH += \
$${perifra_INCLUDEPATH} \

# rppio DEFINES
#
rppio_DEFINES += \
$${perifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \
RASPBERRYPIOS \

########################################################################
# rppio OBJECTIVE_HEADERS
#
#rppio_OBJECTIVE_HEADERS += \
#$${PERIFRA_SRC}/xos/app/console/rppio/main.hh \

# rppio OBJECTIVE_SOURCES
#
#rppio_OBJECTIVE_SOURCES += \
#$${PERIFRA_SRC}/xos/app/console/rppio/main.mm \

########################################################################
# rppio HEADERS
#
rppio_HEADERS += \
$${PERIFRA_SRC}/xos/pio/implement.hpp \
$${PERIFRA_SRC}/xos/pio/extend.hpp \
$${PERIFRA_SRC}/xos/pio/raspberrypi/raspberrypios/pigpio/pio.hpp \
$${PERIFRA_SRC}/xos/pio/os/os.hpp \
$${PERIFRA_SRC}/xos/pio/pios.hpp \
\
$${PERIFRA_SRC}/xos/app/console/pio/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/pio/main.hpp \

# rppio SOURCES
#
rppio_SOURCES += \
$${PERIFRA_SRC}/xos/pio/implement.cpp \
$${PERIFRA_SRC}/xos/pio/extend.cpp \
$${PERIFRA_SRC}/xos/pio/raspberrypi/raspberrypios/pigpio/pio.cpp \
$${PERIFRA_SRC}/xos/pio/os/os.cpp \
$${PERIFRA_SRC}/xos/pio/pios.cpp \
\
$${PERIFRA_SRC}/xos/app/console/pio/main_opt.cpp \
$${PERIFRA_SRC}/xos/app/console/pio/main.cpp \

########################################################################
# rppio FRAMEWORKS
#
rppio_FRAMEWORKS += \
$${perifra_pigpio_FRAMEWORKS} \

# rppio LIBS
#
rppio_LIBS += \
$${perifra_pigpio_LIBS} \

########################################################################
# NO Qt
QT -= gui core
