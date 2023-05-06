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
#   File: libpigpio.pri
#
# Author: $author$
#   Date: 4/12/2023
#
# generic QtCreator project file for numachinae framework perifra executable libpigpio
########################################################################

########################################################################
# libpigpio

# libpigpio TARGET
#
libpigpio_TARGET = libpigpio

# libpigpio INCLUDEPATH
#
libpigpio_INCLUDEPATH += \
$${perifra_INCLUDEPATH} \

# libpigpio DEFINES
#
libpigpio_DEFINES += \
$${perifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# libpigpio OBJECTIVE_HEADERS
#
#libpigpio_OBJECTIVE_HEADERS += \
#$${PERIFRA_SRC}/xos/app/lib/pigpio/client/main.hh \

# libpigpio OBJECTIVE_SOURCES
#
#libpigpio_OBJECTIVE_SOURCES += \
#$${PERIFRA_SRC}/xos/app/lib/pigpio/client/main.mm \

########################################################################
# libpigpio HEADERS
#
libpigpio_HEADERS += \
$${PERIFRA_SRC}/xos/app/protocol/pigpio/base/main.hpp \
$${PERIFRA_SRC}/xos/app/protocol/pigpio/client/main.hpp \
\
$${PERIFRA_SRC}/xos/app/lib/pigpio/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/lib/pigpio/base/main.hpp \
$${PERIFRA_SRC}/xos/app/lib/pigpio/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/lib/pigpio/client/main.hpp \

# libpigpio SOURCES
#
libpigpio_SOURCES += \
$${PERIFRA_SRC}/xos/app/lib/pigpio/client/main_opt.cpp \
$${PERIFRA_SRC}/xos/app/lib/pigpio/client/main.cpp \

########################################################################
# libpigpio FRAMEWORKS
#
libpigpio_FRAMEWORKS += \
$${perifra_FRAMEWORKS} \

# libpigpio LIBS
#
libpigpio_LIBS += \
$${perifra_LIBS} \

########################################################################
# NO Qt
QT -= gui core
