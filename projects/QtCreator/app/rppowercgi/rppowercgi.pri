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
#   File: rppowercgi.pri
#
# Author: $author$
#   Date: 5/3/2023
#
# generic QtCreator project file for numachinae framework perifra executable rppowercgi
########################################################################

########################################################################
# rppowercgi

# rppowercgi TARGET
#
rppowercgi_TARGET = rppowercgi

# rppowercgi INCLUDEPATH
#
rppowercgi_INCLUDEPATH += \
$${perifra_INCLUDEPATH} \

# rppowercgi DEFINES
#
rppowercgi_DEFINES += \
$${perifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# rppowercgi OBJECTIVE_HEADERS
#
#rppowercgi_OBJECTIVE_HEADERS += \
#$${PERIFRA_SRC}/xos/app/console/rppowercgi/main.hh \

# rppowercgi OBJECTIVE_SOURCES
#
#rppowercgi_OBJECTIVE_SOURCES += \
#$${PERIFRA_SRC}/xos/app/console/rppowercgi/main.mm \

########################################################################
# rppowercgi HEADERS
#
rppowercgi_HEADERS += \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/main.hpp \
\
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/http/cgi/base/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/http/cgi/base/main.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/http/cgi/client/main_opt.hpp \
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/http/cgi/client/main.hpp \

# rppowercgi SOURCES
#
rppowercgi_SOURCES += \
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/http/cgi/client/main_opt.cpp \
$${PERIFRA_SRC}/xos/app/console/protocol/home/control/power/http/cgi/client/main.cpp \

########################################################################
# rppowercgi FRAMEWORKS
#
rppowercgi_FRAMEWORKS += \
$${perifra_FRAMEWORKS} \

# rppowercgi LIBS
#
rppowercgi_LIBS += \
$${perifra_LIBS} \

########################################################################
# NO Qt
QT -= gui core
