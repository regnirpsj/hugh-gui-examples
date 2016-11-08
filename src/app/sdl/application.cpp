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

#include <sstream>   // std::ostringstream
#include <stdexcept> // std::logic_error

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
    application::application(int a, char* b[])
      : command_line_(b, b+a)
    {
      TRACE("hugh::sdl::application::application");

      if (0 != ::SDL_Init(SDL_INIT_EVERYTHING)) {
        std::ostringstream ostr;
        
        ostr << "SDL_Init error: " << SDL_GetError();
      
        throw std::runtime_error(ostr.str());
      }
    }

    /* virtual */
    application::~application()
    {
      TRACE("hugh::sdl::application::~application");

      ::SDL_Quit();
    }    

    /* virtual */ void
    application::run()
    {
      TRACE("hugh::sdl::application::run");

      throw std::logic_error("pure virtual function 'hugh::sdl::application::run' called");
    }
    
  } // namespace sdl {
  
} // namespace hugh {
