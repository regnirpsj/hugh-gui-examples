// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/sdl/01.cpp                                                             */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <SDL2/SDL.h>  // SDL_*
#include <cstdlib>     // EXIT_*
#include <stdexcept>   // std::runtime_error
#include <sstream>     // std::ostringstream

// includes, project

#include <logfile.hpp> // hugh::support::scoped_redirect_guard

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

int
main(int /* argc */, char* argv[])
{
#if defined(HUGH_SDL_TRACE_LOGFILE)
  hugh::support::scoped_redirect_guard const srg(argv[0]);
#endif
  
  TRACE("main");
  
  signed result(EXIT_SUCCESS);

  try {
    TRACE("main: try-scope");    

    if (0 != SDL_Init(SDL_INIT_VIDEO)) {
      std::ostringstream ostr;

      ostr << "SDL_Init error: " << SDL_GetError();
      
      throw std::runtime_error(ostr.str());
    }

    SDL_Window* win(SDL_CreateWindow(argv[0], 100, 100, 640, 480, SDL_WINDOW_SHOWN));

    if (!win) {
      std::ostringstream ostr;

      ostr << "SDL_CreateWindow error: " << SDL_GetError();
      
      throw std::runtime_error(ostr.str());
    }

    SDL_Surface* sfc(SDL_GetWindowSurface(win));

    if (!sfc) {
      std::ostringstream ostr;

      ostr << "SDL_GetWindowSurface error: " << SDL_GetError();
      
      throw std::runtime_error(ostr.str());
    }
    
    SDL_FillRect           (sfc, NULL, SDL_MapRGB(sfc->format, 0xFF, 0xFF, 0xFF));
    SDL_UpdateWindowSurface(win);
    
    SDL_Delay              (5000);
    
    SDL_DestroyWindow      (win);
    
    // throw std::runtime_error("deliberate exception");
  }

  catch (std::exception const& ex) {
    TRACE("main: catch-std::exception-scope (" + std::string(ex.what()) + ")");

    result = EXIT_FAILURE;
  }

  catch (...) {
    TRACE("main: catch-all-scope");
    
    result = EXIT_FAILURE;
  }

  SDL_Quit();
  
  return result;
}
