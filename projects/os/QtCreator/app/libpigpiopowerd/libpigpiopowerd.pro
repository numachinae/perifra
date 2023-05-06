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
#   File: libpigpiopowerd.pro
#
# Author: $author$
#   Date: 5/3/2023
#
# os specific QtCreator project .pro file for numachinae framework perifra executable libpigpiopowerd
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;cifra;talas
#
# Debug: perifra/build/os/QtCreator/Debug/bin/libpigpiopowerd
# Release: perifra/build/os/QtCreator/Release/bin/libpigpiopowerd
# Profile: perifra/build/os/QtCreator/Profile/bin/libpigpiopowerd
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/libpigpiopowerd/libpigpiopowerd.pri)

TARGET = $${libpigpiopowerd_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libpigpiopowerd_INCLUDEPATH} \

# DEFINES
#
DEFINES += \
$${libpigpiopowerd_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libpigpiopowerd_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${libpigpiopowerd_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libpigpiopowerd_HEADERS} \
$${libpigpiopowerd_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${libpigpiopowerd_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${libpigpiopowerd_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${libpigpiopowerd_LIBS} \
$${FRAMEWORKS} \

########################################################################
