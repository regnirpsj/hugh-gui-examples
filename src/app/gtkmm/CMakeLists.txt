# -*- Mode:cmake -*-

####################################################################################################
#                                                                                                  #
# Copyright (C) 2016 University of Hull                                                            #
#                                                                                                  #
####################################################################################################

cma_print_current_directory()

find_package(PkgConfig)

pkg_check_modules(GTKMM gtkmm-3.0)

#include_directories(SYSTEM ${GTKMM_INCLUDE_DIRS})

#set(SRC)
#list(APPEND SRC main01.cpp)

#add_executable(main01 main01.cpp)
#target_link_libraries(main01 ${GTKMM_LIBRARIES})
