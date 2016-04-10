// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/fltk/window.cpp                                                   */
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

namespace hugh {

  namespace fltk {
    
    // variables, exported
  
    // functions, exported

    /* explicit */
    window::window(std::string const& a, int b, int c, int d, int e)
      : inherited(b, c, d, e, a.c_str()),
        box_     (new Fl_Box(5, 5, d-10, e-10, a.c_str()))
    {
      TRACE("hugh::fltk::window::window");

      copy_label(a.c_str());
      size_range(100, 100);
      
      box_->box      (FL_UP_BOX);
      box_->labelfont(FL_BOLD+FL_ITALIC);
      box_->labelsize(12);
      box_->labeltype(FL_SHADOW_LABEL);
    }

    /* virtual */
    window::~window()
    {
      TRACE("hugh::fltk::window::~window");
    }

    /* virtual */ int
    window::handle(int a)
    {
      TRACE("hugh::fltk::window::handle");

      return inherited::handle(a);
    }
    
    /* virtual */ void
    window::resize(int a, int b, int c, int d)
    {
      TRACE("hugh::fltk::window::resize");

      box_     ->resize(5, 5, c-10, d-10);
      inherited::resize(a, b, c, d);
    }

    /* virtual */ void
    window::show()
    {
      TRACE("hugh::fltk::window::show");

      inherited::show();
    }

    /* virtual */ void
    window::hide()
    {
      TRACE("hugh::fltk::window::hide");

      inherited::hide();
    }

    /* virtual */ void
    window::draw()
    {
      TRACE("hugh::fltk::window::draw");

      inherited::draw();
    }

    /* virtual */ void
    window::flush()
    {
      TRACE("hugh::fltk::window::flush");

      inherited::flush();
    }

  } // namespace fltk {
  
} // namespace hugh {
