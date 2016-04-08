# -*- Mode:cmake -*-

####################################################################################################
#                                                                                                  #
# Copyright (C) 2016 University of Hull                                                            #
#                                                                                                  #
####################################################################################################

cma_print_current_directory()

find_package(Boost ${BOOST_MINIMUM_VERSION} REQUIRED COMPONENTS filesystem system)
find_package(HUGH                           REQUIRED COMPONENTS support)

include_directories(SYSTEM ${Boost_INCLUDE_DIR})
include_directories(SYSTEM ${HUGH_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#add_definitions(-DHUGH_ALL_TRACE)

set(SRC)
list(APPEND SRC logfile.cpp)

set(LIBS)
list(APPEND LIBS ${HUGH_LIBRARIES})
list(APPEND LIBS ${Boost_LIBRARIES})

cma_setup_library(common SOURCES ${SRC} DEPENDENCIES ${LIBS} STATIC)
