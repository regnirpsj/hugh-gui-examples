// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/sdl/03.cpp                                                             */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <cstdlib>         // EXIT_*
#include <memory>          // std::unique_ptr<>
#include <stdexcept>       // std::runtime_error
#include <sstream>         // std::ostringstream

// includes, project

#include <logfile.hpp>     // hugh::support::scoped_redirect_guard
#include <application.hpp> // hugh::sdl::application
#include <window.hpp>      // hugh::sdl::window

#if defined(HUGH_SDL_TRACE)
#  define HUGH_USE_TRACE
#endif
#include <hugh/support/trace.hpp>

// internal unnamed namespace

namespace {
  
  // types, internal (class, enum, struct, union, typedef)

  class application : public hugh::sdl::application {

  public:

    explicit application(int a, char* b[])
      : hugh::sdl::application(a, b),
        window_               (nullptr)
    {
      TRACE("<unnamed>::application::application");
    }

    virtual void run()
    {
      TRACE("<unnamed>::application::run");

      window_.reset(new hugh::sdl::window(command_line_[0], 100, 100, 640, 480, SDL_WINDOW_SHOWN));
      
      ::SDL_Delay(2500);

      // throw std::runtime_error("deliberate exception");

      ::SDL_Delay(2500);
    }

  private:

    std::unique_ptr<hugh::sdl::window> window_;
    
  };
  
  // variables, internal
  
  // functions, internal

} // namespace {

int
main(int argc, char* argv[])
{
#if defined(HUGH_SDL_TRACE_LOGFILE)
  hugh::support::scoped_redirect_guard const srg(argv[0]);
#endif
  
  TRACE("main");
  
  signed                                  result(EXIT_SUCCESS);
  std::unique_ptr<hugh::sdl::application> app   (nullptr);
  
  try {
    TRACE("main: try-scope");    

    app.reset(new application(argc, argv));    

    app->run();
  }

  catch (std::exception const& ex) {
    TRACE("main: catch-std::exception-scope (" + std::string(ex.what()) + ")");

    result = EXIT_FAILURE;
  }

  catch (...) {
    TRACE("main: catch-all-scope");
    
    result = EXIT_FAILURE;
  }
  
  return result;
}
