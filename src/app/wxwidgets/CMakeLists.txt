# -*- Mode:cmake -*-

####################################################################################################
#                                                                                                  #
# Copyright (C) 2016 University of Hull                                                            #
#                                                                                                  #
####################################################################################################

cma_print_current_directory()

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(wxWidgets REQUIRED COMPONENTS core base)
find_package(HUGH      REQUIRED COMPONENTS support)

include_directories(SYSTEM ${wxWidgets_INCLUDE_DIRS})
include_directories(SYSTEM ${HUGH_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../common)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

foreach(def ${wxWidgets_DEFINITIONS})
  add_definitions(-D${def})
endforeach()

add_definitions(-DHUGH_WXWIDGETS_TRACE)
#add_definitions(-DHUGH_WXWIDGETS_TRACE_LOGFILE)

set(SRC)
list(APPEND SRC application.cpp)
list(APPEND SRC window.cpp)

set(LIBS)
list(APPEND LIBS ${HUGH_LIBRARIES})
list(APPEND LIBS ${wxWidgets_LIBRARIES})

cma_setup_library(wxwidgets SOURCES ${SRC} DEPENDENCIES ${LIBS} STATIC NOINSTALL)

list(APPEND LIBS wxwidgets)
list(APPEND LIBS common)

cma_setup_application(wxwidgets01 SOURCES 01.cpp DEPENDENCIES ${LIBS})
