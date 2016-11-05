// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/sdl/window.hpp                                                         */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_APP_SDL_WINDOW_HPP)

#define HUGH_APP_SDL_WINDOW_HPP

// includes, system

#include <SDL2/SDL.h> // SDL_*
#include <string>     // std::string

// includes, project

// #include <>

namespace hugh {

  namespace sdl {
    
    // types, exported (class, enum, struct, union, typedef)

    class window {

    public:

      explicit window(std::string const& /* title  */,
                      unsigned           /* pos-x  */ = SDL_WINDOWPOS_UNDEFINED,
                      unsigned           /* pos-y  */ = SDL_WINDOWPOS_UNDEFINED,
                      unsigned           /* width  */ = 100,
                      unsigned           /* height */ = 100,
                      unsigned           /* flags  */ = SDL_WINDOW_SHOWN);
      virtual ~window();
    
    protected:

      SDL_Window* window_;
      
    };

    // variables, exported (extern)

    // functions, inlined (inline)
  
    // functions, exported (extern)

  } // namespace sdl {
  
} // namespace hugh {

#endif // #if !defined(HUGH_APP_SDL_WINDOW_HPP)
