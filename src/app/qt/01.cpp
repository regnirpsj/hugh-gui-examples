// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/qt/01.cpp                                                              */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <cstdlib>   // EXIT_*
#include <memory>    // std::unique_ptr<>
#include <stdexcept> // std::runtime_error

// includes, project

#include <application.hpp> // hugh::qt::application
#include <logfile.hpp>     // hugh::support::scoped_redirect_guard
#include <window.hpp>      // hugh::qt::window

#if defined(HUGH_QT_TRACE)
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
#if defined(HUGH_QT_TRACE_LOGFILE)
  hugh::support::scoped_redirect_guard const srg(argv[0]);
#endif
  
  TRACE("main");
  
  signed result(EXIT_SUCCESS);

  try {
    TRACE("main: try-scope");
    
    std::unique_ptr<QApplication> app(nullptr);
    std::unique_ptr<QWidget>      win(nullptr);
  
    {
      TRACE("main: create");
    
      app.reset(new hugh::qt::application(argc, argv));
      win.reset(new hugh::qt::window);
    }
  
    {
      TRACE("main: config");
      
      win->resize(500, 500);
    }
    
    {
      TRACE("main: exec");

      win->show();
      
      result = app->exec();
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
