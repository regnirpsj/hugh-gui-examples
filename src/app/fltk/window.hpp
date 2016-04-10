// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/fltk/window.hpp                                                        */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_APP_FLTK_WINDOW_HPP)

#define HUGH_APP_FLTK_WINDOW_HPP

// includes, system

#include <FL/Fl_Box.h>    // Fl_Box
#include <FL/Fl_Window.h> // Fl_Window
#include <memory>         // std::unique_ptr<>
#include <string>         // std::string

// includes, project

// #include <>

namespace hugh {

  namespace fltk {
    
    // types, exported (class, enum, struct, union, typedef)

    class window : public Fl_Window {

    public:

      using inherited = Fl_Window;

      explicit window(std::string const&, int = 10, int = 10, int = 500, int = 500);
      virtual ~window();

      virtual int  handle(int);
      virtual void resize(int, int, int, int);
      virtual void show();
      virtual void hide();
      
    protected:

      virtual void draw();
      virtual void flush();
      
    private:

      std::unique_ptr<Fl_Box> box_;
      
    };

    // variables, exported (extern)

    // functions, inlined (inline)
  
    // functions, exported (extern)

  } // namespace fltk {
  
} // namespace hugh {

#endif // #if !defined(HUGH_APP_FLTK_WINDOW_HPP)
