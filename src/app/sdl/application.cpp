// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/sdl/application.cpp                                                    */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "application.hpp"

// includes, system

//#include <>

// includes, project

//#include <>

#if defined(HUGH_SDL_TRACE)
#  define HUGH_USE_TRACE
#endif
#include <hugh/support/trace.hpp>

// internal unnamed namespace

namespace {
  
  // types, internal (class, enum, struct, union, typedef)

  // variables, internal
  
  // functions, internal

} // namespace {

namespace hugh {

  namespace sdl {
    
    // variables, exported
  
    // functions, exported
    
    /* explicit */
    application::application(int, char* [])
    {
      TRACE("hugh::sdl::application::application");
    }

    /* virtual */
    application::~application()
    {
      TRACE("hugh::sdl::application::~application");
    }    

  } // namespace sdl {
  
} // namespace hugh {
