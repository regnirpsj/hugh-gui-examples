// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/sdl/application.hpp                                                    */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_APP_SDL_APPLICATION_HPP)

#define HUGH_APP_SDL_APPLICATION_HPP

// includes, system

#include <SDL2/SDL.h> // SDL_*

// includes, project

// #include <>

namespace hugh {

  namespace sdl {
    
    // types, exported (class, enum, struct, union, typedef)

    class application {

    public:

      explicit application(int /* argc */, char* /* argv */[]);
      virtual ~application();
    
    protected:    
    
    };
    
    // variables, exported (extern)

    // functions, inlined (inline)
  
    // functions, exported (extern)

  } // namespace sdl {
  
} // namespace hugh {

#endif // #if !defined(HUGH_APP_SDL_APPLICATION_HPP)
