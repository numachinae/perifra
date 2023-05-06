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
#   File: libpigpiopio.pri
#
# Author: $author$
#   Date: 5/3/2023
#
# generic QtCreator project file for numachinae framework perifra executable libpigpiopio
########################################################################

########################################################################
# libpigpiopio

# libpigpiopio TARGET
#
libpigpiopio_TARGET = libpigpiopio

# libpigpiopio INCLUDEPATH
#
libpigpiopio_INCLUDEPATH += \
$${perifra_INCLUDEPATH} \

# libpigpiopio DEFINES
#
libpigpiopio_DEFINES += \
$${perifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# libpigpiopio OBJECTIVE_HEADERS
#
#libpigpiopio_OBJECTIVE_HEADERS += \
#$${PERIFRA_SRC}/xos/app/console/libpigpiopio/main.hh \

# libpigpiopio OBJECTIVE_SOURCES
#
#libpigpiopio_OBJECTIVE_SOURCES += \
#$${PERIFRA_SRC}/xos/app/console/libpigpiopio/main.mm \

########################################################################
# libpigpiopio HEADERS
#
libpigpiopio_HEADERS += \
$${PERIFRA_SRC}/xos/app/console/pigpio/client/pio/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/pigpio/client/pio/main.hpp \
$${PERIFRA_SRC}/xos/app/console/pigpio/client/pio/main.h \

# libpigpiopio SOURCES
#
libpigpiopio_SOURCES += \
$${PERIFRA_SRC}/xos/app/console/pigpio/client/pio/main_opt.cpp \
$${PERIFRA_SRC}/xos/app/console/pigpio/client/pio/main.cpp \

########################################################################
# libpigpiopio FRAMEWORKS
#
libpigpiopio_FRAMEWORKS += \
$${perifra_pigpioc_FRAMEWORKS} \

# libpigpiopio LIBS
#
libpigpiopio_LIBS += \
$${perifra_pigpioc_LIBS} \

########################################################################
# NO Qt
QT -= gui core
