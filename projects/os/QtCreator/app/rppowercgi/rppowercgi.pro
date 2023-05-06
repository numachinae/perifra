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
#   File: rppowercgi.pro
#
# Author: $author$
#   Date: 5/3/2023
#
# os specific QtCreator project .pro file for numachinae framework perifra executable rppowercgi
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;cifra;talas
#
# Debug: perifra/build/os/QtCreator/Debug/bin/rppowercgi
# Release: perifra/build/os/QtCreator/Release/bin/rppowercgi
# Profile: perifra/build/os/QtCreator/Profile/bin/rppowercgi
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/rppowercgi/rppowercgi.pri)

TARGET = $${rppowercgi_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${rppowercgi_INCLUDEPATH} \

# DEFINES
#
DEFINES += \
$${rppowercgi_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${rppowercgi_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${rppowercgi_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${rppowercgi_HEADERS} \
$${rppowercgi_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${rppowercgi_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${rppowercgi_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${rppowercgi_LIBS} \
$${FRAMEWORKS} \

########################################################################
