// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/gtkmm/logfile.hpp                                                      */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_APP_GTKMM_LOGFILE_HPP)

#define HUGH_APP_GTKMM_LOGFILE_HPP

// includes, system

#include <boost/noncopyable.hpp> // boost::noncopyable
#include <fstream>               // std::ofstream
#include <string>                // std::string

// includes, project

#include <hugh/support/io_utils.hpp>

namespace hugh {

  namespace support {
    
    // types, exported (class, enum, struct, union, typedef)

    class scoped_redirect_guard : private boost::noncopyable {

    public:
    
      explicit scoped_redirect_guard(std::string const& /* base name (e.g., argv[0]) */ );
    
    private:
      
      std::ofstream                  logfile_;
      ostream::scoped_redirect const sr_cerr_;
      ostream::scoped_redirect const sr_clog_;
      ostream::scoped_redirect const sr_cout_;
    
    };
  
    // variables, exported (extern)

    // functions, inlined (inline)
  
    // functions, exported (extern)

  } // namespace support {

} // namespace hugh {

#endif // #if !defined(HUGH_APP_GTKMM_LOGFILE_HPP)
