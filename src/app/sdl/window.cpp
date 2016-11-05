// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/sdl/window.cpp                                                         */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "window.hpp"

// includes, system

#include <sstream> // std::ostringstream

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
    window::window(std::string const& a, unsigned b, unsigned c, unsigned d, unsigned e, unsigned f)
      : window_(::SDL_CreateWindow(a.c_str(), b, c, d, e, f))
    {
      TRACE("hugh::sdl::window::window");
      
      if (!window_) {
        std::ostringstream ostr;

        ostr << "SDL_CreateWindow error: " << SDL_GetError();
      
        throw std::runtime_error(ostr.str());
      }

      SDL_Surface* surface(SDL_GetWindowSurface(window_));

      if (!surface) {
        std::ostringstream ostr;

        ostr << "SDL_GetWindowSurface error: " << SDL_GetError();
      
        throw std::runtime_error(ostr.str());
      }
    
      SDL_FillRect           (surface, NULL, SDL_MapRGB(surface->format, 0xFF, 0xFF, 0xFF));
      SDL_UpdateWindowSurface(window_);
    }

    /* virtual */
    window::~window()
    {
      TRACE("hugh::sdl::window::~window");

      ::SDL_DestroyWindow(window_);
    }

  } // namespace sdl {
  
} // namespace hugh {
