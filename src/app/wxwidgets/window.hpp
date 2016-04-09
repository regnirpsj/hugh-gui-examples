// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/wxwidgets/window.hpp                                                   */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_APP_WXWIDGETS_WINDOW_HPP)

#define HUGH_APP_WXWIDGETS_WINDOW_HPP

// includes, system

#include <wx/wx.h> // wxFrame
#include <string>  // std::string

// includes, project

// #include <>

namespace hugh {

  namespace wxwidgets {
    
    // types, exported (class, enum, struct, union, typedef)

    class window : public wxFrame {

    public:

      using inherited = wxFrame;

      explicit window(std::string const&);
      virtual ~window();
    
    protected:
      
    };

    // variables, exported (extern)

    // functions, inlined (inline)
  
    // functions, exported (extern)

  } // namespace wxwidgets {
  
} // namespace hugh {

#endif // #if !defined(HUGH_APP_WXWIDGETS_WINDOW_HPP)
