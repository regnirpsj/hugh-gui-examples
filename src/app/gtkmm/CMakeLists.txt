# -*- Mode:cmake -*-

####################################################################################################
#                                                                                                  #
# Copyright (C) 2016 University of Hull                                                            #
#                                                                                                  #
####################################################################################################

cma_print_current_directory()

find_package(PkgConfig)

pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)

find_package(HUGH REQUIRED COMPONENTS support)

include_directories(SYSTEM ${GTKMM_INCLUDE_DIRS})
include_directories(SYSTEM ${HUGH_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../common)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#add_definitions(-DHUGH_GTKMM_TRACE)
#add_definitions(-DHUGH_GTKMM_TRACE_LOGFILE)

set(SRC)
list(APPEND SRC application.cpp)
list(APPEND SRC window.cpp)

set(LIBS)
list(APPEND LIBS ${HUGH_LIBRARIES})
list(APPEND LIBS ${GTKMM_LIBRARIES})

cma_setup_library(gtkmm SOURCES ${SRC} DEPENDENCIES ${LIBS} STATIC NOINSTALL)

list(APPEND LIBS gtkmm)
list(APPEND LIBS common)

cma_setup_application(gtkmm01 SOURCES 01.cpp DEPENDENCIES ${LIBS})
