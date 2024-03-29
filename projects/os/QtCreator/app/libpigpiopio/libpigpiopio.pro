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
#   File: libpigpiopio.pro
#
# Author: $author$
#   Date: 5/3/2023
#
# os specific QtCreator project .pro file for numachinae framework perifra executable libpigpiopio
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;cifra;talas
#
# Debug: perifra/build/os/QtCreator/Debug/bin/libpigpiopio
# Release: perifra/build/os/QtCreator/Release/bin/libpigpiopio
# Profile: perifra/build/os/QtCreator/Profile/bin/libpigpiopio
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/libpigpiopio/libpigpiopio.pri)

TARGET = $${libpigpiopio_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libpigpiopio_INCLUDEPATH} \

# DEFINES
#
DEFINES += \
$${libpigpiopio_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libpigpiopio_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${libpigpiopio_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libpigpiopio_HEADERS} \
$${libpigpiopio_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${libpigpiopio_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${libpigpiopio_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${libpigpiopio_LIBS} \
$${FRAMEWORKS} \

########################################################################
