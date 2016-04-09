// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/wxwidgets/application.hpp                                              */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_APP_WXWIDGETS_APPLICATION_HPP)

#define HUGH_APP_WXWIDGETS_APPLICATION_HPP

// includes, system

#include <wx/app.h> // wxApp

// includes, project

// #include <>

namespace hugh {

  namespace wxwidgets {
    
    // types, exported (class, enum, struct, union, typedef)

    class application : public wxApp {

    public:

      using inherited = wxApp;

      explicit application();
      virtual ~application();
    
    protected:

    };
    
    // variables, exported (extern)

    // functions, inlined (inline)
  
    // functions, exported (extern)

  } // namespace wxwidgets {
  
} // namespace hugh {

#endif // #if !defined(HUGH_APP_WXWIDGETS_APPLICATION_HPP)
