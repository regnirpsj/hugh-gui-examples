// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/common/logfile.cpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "logfile.hpp"

// includes, system

#include <boost/filesystem.hpp> // boost::filesystem::path
#include <iostream>             // std::c[err|log|out]

// includes, project

#include <hugh/support/chrono.hpp>   // support::date_time_iso8601

#define HUGH_USE_TRACE
#undef HUGH_USE_TRACE
#include <hugh/support/trace.hpp>

// internal unnamed namespace

namespace {
  
  // types, internal (class, enum, struct, union, typedef)

  // variables, internal
  
  // functions, internal

} // namespace {

namespace hugh {

  namespace support {
    
    // variables, exported
  
    // functions, exported

    /* explicit */
    scoped_redirect_guard::scoped_redirect_guard(std::string const& a)
      : logfile_(boost::filesystem::path(a).filename().string() + "." +
                 date_time_iso8601() + ".log"),
        sr_cerr_(std::cerr, logfile_),
        sr_clog_(std::clog, logfile_),
        sr_cout_(std::cout, logfile_)
    {}

  } // namespace support {
  
} // namespace hugh {
