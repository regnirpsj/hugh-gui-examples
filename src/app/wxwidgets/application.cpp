// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/wxwidgets/application.cpp                                              */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "application.hpp"

// includes, system

//#include <>

// includes, project

#include <window.hpp>

#if defined(HUGH_WXWIDGETS_TRACE)
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

  namespace wxwidgets {
    
    // variables, exported
  
    // functions, exported
    
    /* explicit */
    application::application()
      : inherited()
    {
      TRACE("hugh::wxwidgets::application::application");
    }

    /* virtual */
    application::~application()
    {
      TRACE("hugh::wxwidgets::application::~application");
    }

    /* virtual */ bool
    application::Initialize(int& a, wxChar** b)
    {
      TRACE("hugh::wxwidgets::application::Initialize");

      return inherited::Initialize(a, b);
    }
    
    /* virtual */ bool
    application::OnInitGui()
    {
      TRACE("hugh::wxwidgets::application::OnInitGui");

      return inherited::OnInitGui();
    }

    /* virtual */ bool
    application::CallOnInit()
    {
      TRACE("hugh::wxwidgets::application::CallOnInit");

      return inherited::CallOnInit();
    }
    
    /* virtual */ bool
    application::OnInit()
    {
      TRACE("hugh::wxwidgets::application::OnInit");
      
      wxFrame *frame(new window(argv[0].ToStdString()));
      
      frame->Show(true);
      
      SetTopWindow(frame);

      return inherited::OnInit();
    }

    /* virtual */ int
    application::OnRun()
    {
      TRACE("hugh::wxwidgets::application::OnRun");

      return inherited::OnRun();
    }

    /* virtual */ void
    application::OnLaunched()
    {
      TRACE("hugh::wxwidgets::application::OnLaunched");

      inherited::OnLaunched();
    }

    /* virtual */ void
    application::OnEventLoopEnter(wxEventLoopBase* a)
    {
      TRACE("hugh::wxwidgets::application::OnEventLoopEnter");

      inherited::OnEventLoopEnter(a);
    }

    /* virtual */ int
    application::OnExit()
    {
      TRACE("hugh::wxwidgets::application::OnExit");

      return inherited::OnExit();
    }

    /* virtual */ void
    application::OnEventLoopExit(wxEventLoopBase* a)
    {
      TRACE("hugh::wxwidgets::application::OnEventLoopExit");

      inherited::OnEventLoopExit(a);
    }

    /* virtual */ void
    application::CleanUp()
    {
      TRACE("hugh::wxwidgets::application::CleanUp");

      inherited::CleanUp();
    }

    /* virtual */ void
    application::OnInitCmdLine(wxCmdLineParser& a)
    {
      TRACE("hugh::wxwidgets::application::OnInitCmdLine");

      inherited::OnInitCmdLine(a);
    }

    /* virtual */ bool
    application::OnCmdLineParsed(wxCmdLineParser& a)
    {
      TRACE("hugh::wxwidgets::application::OnCmdLineParsed");

      return inherited::OnCmdLineParsed(a);
    }

    /* virtual */ bool
    application::OnCmdLineHelp(wxCmdLineParser& a)
    {
      TRACE("hugh::wxwidgets::application::OnCmdLineHelp");

      return inherited::OnCmdLineHelp(a);
    }

    /* virtual */ bool
    application::OnCmdLineError(wxCmdLineParser& a)
    {
      TRACE("hugh::wxwidgets::application::OnCmdLineError");

      return inherited::OnCmdLineError(a);
    }
    
    /* virtual */ int
    application::FilterEvent(wxEvent& a)
    {
      TRACE("hugh::wxwidgets::application::FilterEvent");

      return inherited::FilterEvent(a);
    }

    /* virtual */ void
    application::CallEventHandler(wxEvtHandler* a, wxEventFunctor& b, wxEvent& c) const
    {
      TRACE("hugh::wxwidgets::application::CallEventHandler");

      inherited::CallEventHandler(a, b, c);
    }

    /* virtual */ void
    application::HandleEvent(wxEvtHandler* a, wxEventFunction b, wxEvent& c) const
    {
      TRACE("hugh::wxwidgets::application::HandleEvent");

      inherited::HandleEvent(a, b, c);
    }

    /* virtual */ void
    application::OnUnhandledException()
    {
      TRACE("hugh::wxwidgets::application::OnUnhandledException");

      inherited::OnUnhandledException();
    }

    /* virtual */ bool
    application::OnExceptionInMainLoop()
    {
      TRACE("hugh::wxwidgets::application::OnExceptionInMainLoop");

      return inherited::OnExceptionInMainLoop();
    }
    
    /* virtual */ void
    application::ProcessPendingEvents()
    {
      TRACE("hugh::wxwidgets::application::ProcessPendingEvents");

      inherited::ProcessPendingEvents();
    }

    /* virtual */ bool
    application::Pending()
    {
      TRACE("hugh::wxwidgets::application::Pending");

      return inherited::Pending();
    }

    /* virtual */ bool
    application::Dispatch()
    {
      TRACE("hugh::wxwidgets::application::Dispatch");

      return inherited::Dispatch();
    }

    /* virtual */ int
    application::MainLoop()
    {
      TRACE("hugh::wxwidgets::application::MainLoop");

      return inherited::MainLoop();
    }

    /* virtual */ void
    application::ExitMainLoop()
    {
      TRACE("hugh::wxwidgets::application::ExitMainLoop");

      inherited::ExitMainLoop();
    }

    /* virtual */ void
    application::WakeUpIdle()
    {
      TRACE("hugh::wxwidgets::application::WakeUpIdle");

      inherited::WakeUpIdle();
    }

    /* virtual */ bool
    application::ProcessIdle()
    {
      TRACE("hugh::wxwidgets::application::ProcessIdle");

      return inherited::ProcessIdle();
    }

    /* virtual */ bool
    application::UsesEventLoop() const
    {
      TRACE("hugh::wxwidgets::application::UsesEventLoop");

      return inherited::UsesEventLoop();
    }

    /* virtual */ void
    application::OnAssertFailure(wxChar const* a, int b, wxChar const* c, wxChar const* d,
                                 wxChar const* e)
    {
      TRACE("hugh::wxwidgets::application::OnAssertFailure");

      inherited::OnAssertFailure(a, b, c, d, e);
    }

    /* virtual */ void
    application::OnAssert(wxChar const* a, int b, wxChar const* c, wxChar const* d)
    {
      TRACE("hugh::wxwidgets::application::OnAssert");

      inherited::OnAssert(a, b, c, d);
    }

    /* virtual */ bool
    application::SafeYield(wxWindow* a, bool b)
    {
      TRACE("hugh::wxwidgets::application::SafeYield");

      return inherited::SafeYield(a, b);
    }

    /* virtual */ bool
    application::SafeYieldFor(wxWindow* a, long b)
    {
      TRACE("hugh::wxwidgets::application::SafeYieldFor");

      return inherited::SafeYieldFor(a, b);
    }
    
    /* virtual */ void
    application::SetActive(bool a, wxWindow* b)
    {
      TRACE("hugh::wxwidgets::application::SetActive");

      inherited::SetActive(a, b);
    }

    /* virtual */ wxAppTraits*
    application::CreateTraits()
    {
      TRACE("hugh::wxwidgets::application::CreateTraits");

      return inherited::CreateTraits();
    }

  } // namespace wxwidgets {
  
} // namespace hugh {
