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
#include <memory>      // std::unique_ptr<>
#include <stdexcept>   // std::runtime_error
#include <sstream>     // std::ostringstream

// includes, project

#include <logfile.hpp> // hugh::support::scoped_redirect_guard
#include <window.hpp>

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
  
  signed                             result(EXIT_SUCCESS);
  std::unique_ptr<hugh::sdl::window> win   (nullptr);
  
  try {
    TRACE("main: try-scope");    

    if (0 != SDL_Init(SDL_INIT_VIDEO)) {
      std::ostringstream ostr;

      ostr << "SDL_Init error: " << SDL_GetError();
      
      throw std::runtime_error(ostr.str());
    }

    win.reset(new hugh::sdl::window(argv[0], 100, 100, 640, 480, SDL_WINDOW_SHOWN));
    
    SDL_Delay(5000);
    
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
