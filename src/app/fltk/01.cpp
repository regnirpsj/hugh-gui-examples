// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/fltk/01.cpp                                                            */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <cstdlib>   // EXIT_*
#include <memory>    // std::unique_ptr<>
#include <stdexcept> // std::runtime_error

// includes, project

#include <application.hpp> // hugh::fltk::application
#include <logfile.hpp>     // hugh::support::scoped_redirect_guard
#include <window.hpp>      // hugh::fltk::window

#if defined(HUGH_FLTK_TRACE)
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
main(int argc, char* argv[])
{
#if defined(HUGH_FLTK_TRACE_LOGFILE)
  hugh::support::scoped_redirect_guard const srg(argv[0]);
#endif
  
  TRACE("main");
  
  signed result(EXIT_SUCCESS);

  std::unique_ptr<Fl_Window> win(nullptr);
  
  try {
    TRACE("main: try-scope");
  
    {
      TRACE("main: create");

      win.reset(new hugh::fltk::window(argv[0]));
    }
  
    {
      TRACE("main: config");
    }
    
    {
      TRACE("main: exec");
      
      win->show(argc, argv);
      
      result = Fl::run();
    }
    
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
  
  return result;
}
