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

#include <SDL.h>  // SDL_*
#include <string> // std::string
#include <vector> // std::vector<>

// includes, project

// #include <>

namespace hugh {

  namespace sdl {
    
    // types, exported (class, enum, struct, union, typedef)

    class application {

    public:

      explicit application(int /* argc */, char* /* argv */[]);
      virtual ~application();

      virtual void run() =0;
      
    protected:    

      using command_line_type = std::vector<std::string>;

      command_line_type command_line_;
      
    };
    
    // variables, exported (extern)

    // functions, inlined (inline)
  
    // functions, exported (extern)

  } // namespace sdl {
  
} // namespace hugh {

#endif // #if !defined(HUGH_APP_SDL_APPLICATION_HPP)
