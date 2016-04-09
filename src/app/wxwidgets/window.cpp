// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/wxwidgets/window.cpp                                                   */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "window.hpp"

// includes, system

//#include <>

// includes, project

//#include <>

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
    window::window(std::string const& a)
      : inherited(nullptr, wxID_ANY, a)
    {
      TRACE("hugh::wxwidgets::window::window");
    }

    /* virtual */
    window::~window()
    {
      TRACE("hugh::wxwidgets::window::~window");
    }

  } // namespace wxwidgets {
  
} // namespace hugh {
