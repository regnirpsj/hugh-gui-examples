# -*- Mode:cmake -*-

####################################################################################################
#                                                                                                  #
# Copyright (C) 2016 University of Hull                                                            #
#                                                                                                  #
####################################################################################################

cma_print_current_directory()

find_package(PkgConfig)

pkg_check_modules(SDL sdl2)

if(NOT SDL_FOUND)
  return()
endif()

find_package(HUGH REQUIRED COMPONENTS support)

include_directories(SYSTEM ${SDL_INCLUDE_DIR})
include_directories(SYSTEM ${HUGH_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../common)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_definitions(-DHUGH_SDL_TRACE)
#add_definitions(-DHUGH_SDL_TRACE_LOGFILE)

set(SRC)
list(APPEND SRC application.cpp)
list(APPEND SRC window.cpp)

set(LIBS)
list(APPEND LIBS ${HUGH_LIBRARIES})
list(APPEND LIBS ${SDL_LIBRARIES})

cma_setup_library(sdl_wrap SOURCES ${SRC} DEPENDENCIES ${LIBS} STATIC NOINSTALL)

list(APPEND LIBS sdl_wrap)
list(APPEND LIBS common)

cma_setup_application(sdl01 SOURCES 01.cpp DEPENDENCIES ${LIBS})
cma_setup_application(sdl02 SOURCES 02.cpp DEPENDENCIES ${LIBS})
