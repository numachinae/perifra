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
#   File: ponoff.pro
#
# Author: $author$
#   Date: 4/12/2023
#
# os specific QtCreator project .pro file for numachinae framework perifra executable ponoff
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;cifra;talas
#
# Debug: perifra/build/os/QtCreator/Debug/bin/ponoff
# Release: perifra/build/os/QtCreator/Release/bin/ponoff
# Profile: perifra/build/os/QtCreator/Profile/bin/ponoff
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/ponoff/ponoff.pri)

TARGET = $${ponoff_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${ponoff_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${ponoff_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${ponoff_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${ponoff_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${ponoff_HEADERS} \
$${ponoff_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${ponoff_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${ponoff_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${ponoff_LIBS} \
$${FRAMEWORKS} \

########################################################################
