# -*- Mode:cmake -*-

####################################################################################################
#                                                                                                  #
# Copyright (C) 2016 University of Hull                                                            #
#                                                                                                  #
####################################################################################################

cma_print_current_directory()

set(FLTK_SKIP_OPENGL TRUE)
set(FLTK_SKIP_FORMS  TRUE)
set(FLTK_SKIP_IMAGES TRUE)
set(FLTK_SKIP_FLUID  TRUE)

find_package(FLTK)

if(NOT FLTK_FOUND)
  return()
endif()

find_package(HUGH REQUIRED COMPONENTS support)

include_directories(SYSTEM ${FLTK_INCLUDE_DIR})
include_directories(SYSTEM ${HUGH_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../common)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#add_definitions(-DHUGH_FLTK_TRACE)
#add_definitions(-DHUGH_FLTK_TRACE_LOGFILE)

set(SRC)
list(APPEND SRC application.cpp)
list(APPEND SRC window.cpp)

set(LIBS)
list(APPEND LIBS ${HUGH_LIBRARIES})
list(APPEND LIBS ${FLTK_BASE_LIBRARY})

cma_setup_library(fltk_wrap SOURCES ${SRC} DEPENDENCIES ${LIBS} STATIC NOINSTALL)

list(APPEND LIBS fltk_wrap)
list(APPEND LIBS common)

cma_setup_application(fltk01 SOURCES 01.cpp DEPENDENCIES ${LIBS})
