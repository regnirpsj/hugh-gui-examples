# -*- Mode:cmake -*-

####################################################################################################
#                                                                                                  #
# Copyright (C) 2016 University of Hull                                                            #
#                                                                                                  #
####################################################################################################

cma_print_current_directory()

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets REQUIRED)
find_package(HUGH       REQUIRED COMPONENTS support)

include_directories(SYSTEM ${Qt5Widgets_INCLUDES})
include_directories(SYSTEM ${HUGH_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../common)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_definitions(${Qt5Widgets_DEFINITIONS})
#add_definitions(-DHUGH_QT_TRACE)
#add_definitions(-DHUGH_QT_TRACE_LOGFILE)

set(SRC)
list(APPEND SRC application.cpp)
list(APPEND SRC window.cpp)

set(LIBS)
list(APPEND LIBS ${HUGH_LIBRARIES})
list(APPEND LIBS ${Qt5Widgets_LIBRARIES})

cma_setup_library(qt SOURCES ${SRC} DEPENDENCIES ${LIBS} STATIC NOINSTALL)

list(APPEND LIBS qt)
list(APPEND LIBS common)
list(APPEND LIBS Qt5::Widgets)

cma_setup_application(qt01 SOURCES 01.cpp DEPENDENCIES ${LIBS})