// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/gtkmm/01.cpp                                                           */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <cstdlib>   // EXIT_*
#include <memory>    // std::unique_ptr<>
#include <stdexcept> // std::runtime_error

// includes, project

#include <application.hpp> // hugh::gtkmm::application
#include <window.hpp>      // hugh::gtkmm::window

#define HUGH_USE_TRACE
#undef HUGH_USE_TRACE
#include <hugh/support/trace.hpp>
#include <logfile.hpp>

// internal unnamed namespace

namespace {
  
  // types, internal (class, enum, struct, union, typedef)
  
  // variables, internal

  
  // functions, internal

} // namespace {

int
main(int argc, char* argv[])
{
#if defined(HUGH_ALL_TRACE)
  hugh::support::scoped_redirect_guard const srg(argv[0]);
#endif
  
  TRACE("main");
  
  signed result(EXIT_SUCCESS);

  try {
    TRACE("main: try-scope");
    
    std::unique_ptr<Gtk::Application> app(nullptr);
    std::unique_ptr<Gtk::Window>      win(nullptr);
  
    {
      TRACE("main: create");
    
      app.reset(new hugh::gtkmm::application(argc, argv));
      win.reset(new hugh::gtkmm::window);
    }
  
    {
      TRACE("main: config");
      
      win->set_default_size(500, 500);
    }
    
    {
      TRACE("main: exec");
    
      result = app->run(*win);
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
