// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/qt/application.cpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "application.hpp"

// includes, system

//#include <>

// includes, project

//#include <>

#if defined(HUGH_QT_TRACE)
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

  namespace qt {
    
    // variables, exported
  
    // functions, exported
    
    /* explicit */
    application::application(int& a, char* b[])
      : inherited(a, b)
    {
      TRACE("hugh::qt::application::application");
    }

    /* virtual */
    application::~application()
    {
      TRACE("hugh::qt::application::~application");
    }

    /* virtual */ bool
    application::notify(QObject* a, QEvent* b)
    {
      TRACE("hugh::qt::application::notify");

      return inherited::notify(a, b);
    }

    /* virtual */ bool
    application::compressEvent(QEvent* a, QObject* b, QPostEventList* c)
    {
      TRACE("hugh::qt::application::compressEvent");

      return inherited::compressEvent(a, b, c);
    }

    /* virtual */ bool
    application::event(QEvent* a)
    {
      TRACE("hugh::qt::application::event");

      return inherited::event(a);
    }

    /* virtual */ bool
    application::eventFilter(QObject* a, QEvent* b)
    {
      TRACE("hugh::qt::application::eventFilter");

      return inherited::eventFilter(a, b);
    }

    /* virtual */ void
    application::timerEvent(QTimerEvent* a)
    {
      TRACE("hugh::qt::application::timerEvent");

      inherited::timerEvent(a);
    }

    /* virtual */ void
    application::childEvent(QChildEvent* a)
    {
      TRACE("hugh::qt::application::childEvent");

      inherited::childEvent(a);
    }

    /* virtual */ void
    application::customEvent(QEvent* a)
    {
      TRACE("hugh::qt::application::customEvent");

      inherited::customEvent(a);
    }

    /* virtual */ void
    application::connectNotify(QMetaMethod const& a)
    {
      TRACE("hugh::qt::application::");

      inherited::connectNotify(a);
    }

    /* virtual */ void
    application::disconnectNotify(QMetaMethod const& a)
    {
      TRACE("hugh::qt::application::disconnectNotify");

      inherited::disconnectNotify(a);
    }

  } // namespace qt {
  
} // namespace hugh {
