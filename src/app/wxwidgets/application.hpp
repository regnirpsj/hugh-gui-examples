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

      virtual bool Initialize(int&, wxChar**);
      virtual bool OnInitGui();
      virtual bool CallOnInit();
      virtual bool OnInit();
      virtual int  OnRun();
      virtual void OnLaunched();
      virtual void OnEventLoopEnter(wxEventLoopBase*);
      virtual int  OnExit();
      virtual void OnEventLoopExit(wxEventLoopBase*);
      virtual void CleanUp();
      virtual void OnInitCmdLine(wxCmdLineParser&);
      virtual bool OnCmdLineParsed(wxCmdLineParser&);
      virtual bool OnCmdLineHelp(wxCmdLineParser&);
      virtual bool OnCmdLineError(wxCmdLineParser&);
      virtual int  FilterEvent(wxEvent&);
      virtual void CallEventHandler(wxEvtHandler*, wxEventFunctor&, wxEvent&) const;
      virtual void HandleEvent(wxEvtHandler*, wxEventFunction, wxEvent&) const;
      virtual void OnUnhandledException();
      virtual bool OnExceptionInMainLoop();
      virtual void ProcessPendingEvents();
      virtual bool Pending();
      virtual bool Dispatch();
      virtual int  MainLoop();
      virtual void ExitMainLoop();
      virtual void WakeUpIdle();
      virtual bool ProcessIdle();
      virtual bool UsesEventLoop() const;
      virtual void OnAssertFailure(wxChar const*, int, wxChar const*, wxChar const*, wxChar const*);
      virtual void OnAssert(wxChar const*, int, wxChar const*, wxChar const*);
      virtual bool SafeYield(wxWindow*, bool);
      virtual bool SafeYieldFor(wxWindow*, long);
      virtual void SetActive(bool, wxWindow*);
                          
    protected:

      virtual wxAppTraits* CreateTraits();
      
    };
    
    // variables, exported (extern)

    // functions, inlined (inline)
  
    // functions, exported (extern)

  } // namespace wxwidgets {
  
} // namespace hugh {

#endif // #if !defined(HUGH_APP_WXWIDGETS_APPLICATION_HPP)
