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
#   File: rppowercgicatch.pro
#
# Author: $author$
#   Date: 5/3/2023
#
# os specific QtCreator project .pro file for numachinae framework perifra executable rppowercgicatch
########################################################################
# Depends: libjson;rostra;nadir;fila;crono;rete;stara;cifra;talas
#
# Debug: perifra/build/os/QtCreator/Debug/bin/rppowercgicatch
# Release: perifra/build/os/QtCreator/Release/bin/rppowercgicatch
# Profile: perifra/build/os/QtCreator/Profile/bin/rppowercgicatch
#
include(../../../../../build/QtCreator/perifra.pri)
include(../../../../QtCreator/perifra.pri)
include(../../perifra.pri)
include(../../../../QtCreator/app/rppowercgicatch/rppowercgicatch.pri)

TARGET = $${rppowercgicatch_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${rppowercgicatch_INCLUDEPATH} \

# DEFINES
#
DEFINES += \
$${rppowercgicatch_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${rppowercgicatch_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${rppowercgicatch_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${rppowercgicatch_HEADERS} \
$${rppowercgicatch_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${rppowercgicatch_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${rppowercgicatch_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${rppowercgicatch_LIBS} \
$${FRAMEWORKS} \

########################################################################
