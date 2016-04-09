// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/wxwidgets/application.cpp                                              */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "application.hpp"

// includes, system

//#include <>

// includes, project

#include <window.hpp>

#if defined(HUGH_WXWIDGETS_TRACE)
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

  namespace wxwidgets {
    
    // variables, exported
  
    // functions, exported
    
    /* explicit */
    application::application()
      : inherited()
    {
      TRACE("hugh::wxwidgets::application::application");
    }

    /* virtual */
    application::~application()
    {
      TRACE("hugh::wxwidgets::application::~application");
    }

    /* virtual */ bool
    application::OnInit()
    {
      wxFrame *frame(new window(argv[0].ToStdString()));
      
      frame->Show(true);
      
      SetTopWindow(frame);

      return true;
    }
    
  } // namespace wxwidgets {
  
} // namespace hugh {
