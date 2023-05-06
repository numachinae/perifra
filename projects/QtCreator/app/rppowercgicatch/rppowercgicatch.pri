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
#   File: rppowercgicatch.pri
#
# Author: $author$
#   Date: 5/3/2023
#
# generic QtCreator project file for numachinae framework perifra executable rppowercgicatch
########################################################################

########################################################################
# rppowercgicatch

# rppowercgicatch TARGET
#
rppowercgicatch_TARGET = rppowercgicatch

# rppowercgicatch INCLUDEPATH
#
rppowercgicatch_INCLUDEPATH += \
$${perifra_INCLUDEPATH} \

# rppowercgicatch DEFINES
#
rppowercgicatch_DEFINES += \
$${perifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# rppowercgicatch OBJECTIVE_HEADERS
#
#rppowercgicatch_OBJECTIVE_HEADERS += \
#$${PERIFRA_SRC}/xos/app/console/rppowercgicatch/main.hh \

# rppowercgicatch OBJECTIVE_SOURCES
#
#rppowercgicatch_OBJECTIVE_SOURCES += \
#$${PERIFRA_SRC}/xos/app/console/rppowercgicatch/main.mm \

########################################################################
# rppowercgicatch HEADERS
#
rppowercgicatch_HEADERS += \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/catcher/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/catcher/main.hpp \

# rppowercgicatch SOURCES
#
rppowercgicatch_SOURCES += \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/catcher/main_opt.cpp \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/catcher/main.cpp \

########################################################################
# rppowercgicatch FRAMEWORKS
#
rppowercgicatch_FRAMEWORKS += \
$${perifra_FRAMEWORKS} \

# rppowercgicatch LIBS
#
rppowercgicatch_LIBS += \
$${perifra_LIBS} \

########################################################################
# NO Qt
QT -= gui core
