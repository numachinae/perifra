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
#   File: libpigpio.pro
#
# Author: $author$
#   Date: 4/12/2023
#
# os specific QtCreator project .pro file for numachinae framework perifra executable libpigpio
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;cifra;talas
#
# Debug: perifra/build/os/QtCreator/Debug/bin/libpigpio
# Release: perifra/build/os/QtCreator/Release/bin/libpigpio
# Profile: perifra/build/os/QtCreator/Profile/bin/libpigpio
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/libpigpio/libpigpio.pri)

TARGET = $${libpigpio_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libpigpio_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${libpigpio_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libpigpio_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${libpigpio_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libpigpio_HEADERS} \
$${libpigpio_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${libpigpio_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${libpigpio_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${libpigpio_LIBS} \
$${FRAMEWORKS} \

########################################################################
