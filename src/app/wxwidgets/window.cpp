// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/wxwidgets/window.cpp                                                   */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "window.hpp"

// includes, system

//#include <>

// includes, project

//#include <>

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
    window::window(std::string const& a)
      : inherited(nullptr, wxID_ANY, a)
    {
      TRACE("hugh::wxwidgets::window::window");
    }

    /* virtual */
    window::~window()
    {
      TRACE("hugh::wxwidgets::window::~window");
    }

    /* virtual */ wxPoint
    window::GetClientAreaOrigin() const
    {
      TRACE("hugh::wxwidgets::window::GetClientAreaOrigin");

      return inherited::GetClientAreaOrigin();
    }
    
    /* virtual */ void
    window::SetMenuBar(wxMenuBar* a)
    {
      TRACE("hugh::wxwidgets::window::SetMenuBar");

      inherited::SetMenuBar(a);
    }

    /* virtual */ wxMenuBar*
    window::GetMenuBar() const
    {
      TRACE("hugh::wxwidgets::window::GetMenuBar");

      return inherited::GetMenuBar();
    }

    /* virtual */ wxMenuItem*
    window::FindItemInMenuBar(int a) const
    {
      TRACE("hugh::wxwidgets::window::FindItemInMenuBar");

      return inherited::FindItemInMenuBar(a);
    }

    /* virtual */ wxStatusBar*
    window::CreateStatusBar(int a, long b, wxWindowID c, wxString const& d)
    {
      TRACE("hugh::wxwidgets::window::CreateStatusBar");

      return inherited::CreateStatusBar(a, b, c, d);
    }

    /* virtual */ wxStatusBar*
    window::OnCreateStatusBar(int a, long b, wxWindowID c, wxString const& d)
    {
      TRACE("hugh::wxwidgets::window::OnCreateStatusBar");

      return inherited::OnCreateStatusBar(a, b, c, d);
    }

    /* virtual */ wxStatusBar*
    window::GetStatusBar() const
    {
      TRACE("hugh::wxwidgets::window::GetStatusBar");

      return inherited::GetStatusBar();
    }

    /* virtual */ void
    window::SetStatusBar(wxStatusBar* a)
    {
      TRACE("hugh::wxwidgets::window::SetStatusBar");

      inherited::SetStatusBar(a);
    }

    /* virtual */ void
    window::SetStatusText(wxString const& a, int b)
    {
      TRACE("hugh::wxwidgets::window::SetStatusText");

      inherited::SetStatusText(a, b);
    }

    /* virtual */ void
    window::SetStatusWidths(int a, int const b[])
    {
      TRACE("hugh::wxwidgets::window::SetStatusWidths");

      inherited::SetStatusWidths(a, b);
    }

    /* virtual */ wxToolBar*
    window::CreateToolBar(long a, wxWindowID b, wxString const& c)
    {
      TRACE("hugh::wxwidgets::window::CreateToolBar");

      return inherited::CreateToolBar(a, b, c);
    }

    /* virtual */ wxToolBar*
    window::OnCreateToolBar(long a, wxWindowID b, wxString const& c)
    {
      TRACE("hugh::wxwidgets::window::OnCreateToolBar");

      return inherited::OnCreateToolBar(a, b, c);
    }

    /* virtual */ wxToolBar*
    window::GetToolBar() const
    {
      TRACE("hugh::wxwidgets::window::GetToolBar");

      return inherited::GetToolBar();
    }

    /* virtual */ void
    window::SetToolBar(wxToolBar* a)
    {
      TRACE("hugh::wxwidgets::window::SetToolBar");

      inherited::SetToolBar(a);
    }

    /* virtual */ void
    window::DoMenuUpdates(wxMenu* a)
    {
      TRACE("hugh::wxwidgets::window::DoMenuUpdates");

      inherited::DoMenuUpdates(a);
    }

    /* virtual */ void
    window::UpdateWindowUI(long a)
    {
      TRACE("hugh::wxwidgets::window::UpdateWindowUI");

      inherited::UpdateWindowUI(a);
    }

    /* virtual */ void
    window::OnInternalIdle()
    {
      TRACE("hugh::wxwidgets::window::OnInternalIdle");

      inherited::OnInternalIdle();
    }

    /* virtual */ void
    window::DoGiveHelp(wxString const& a, bool b)
    {
      TRACE("hugh::wxwidgets::window::DoGiveHelp");

      inherited::DoGiveHelp(a, b);
    }

    /* virtual */ bool
    window::IsClientAreaChild(wxWindow const* a) const
    {
      TRACE("hugh::wxwidgets::window::IsClientAreaChild");

      return inherited::IsClientAreaChild(a);
    }

    /* virtual */ bool
    window::IsOneOfBars(wxWindow const* a) const
    {
      TRACE("hugh::wxwidgets::window::IsOneOfBars");

      return inherited::IsOneOfBars(a);
    }

    /* virtual */ void
    window::Maximize(bool a)
    {
      TRACE("hugh::wxwidgets::window::Maximize");

      inherited::Maximize(a);
    }

    /* virtual */ void
    window::Restore()
    {
      TRACE("hugh::wxwidgets::window::Restore");

      inherited::Restore();
    }

    /* virtual */ void
    window::Iconize(bool a)
    {
      TRACE("hugh::wxwidgets::window::Iconize");

      inherited::Iconize(a);
    }

    /* virtual */ bool
    window::IsMaximized() const
    {
      TRACE("hugh::wxwidgets::window::IsMaximized");

      return inherited::IsMaximized();
    }

    /* virtual */ bool
    window::IsAlwaysMaximized() const
    {
      TRACE("hugh::wxwidgets::window::IsAlwaysMaximized");

      return inherited::IsAlwaysMaximized();
    }

    /* virtual */ bool
    window::IsIconized() const
    {
      TRACE("hugh::wxwidgets::window::IsIconized");

      return inherited::IsIconized();
    }

    /* virtual */ void
    window::SetIcons(wxIconBundle const& a)
    {
      TRACE("hugh::wxwidgets::window::SetIcons");

      inherited::SetIcons(a);
    }

    /* virtual */ bool
    window::ShowFullScreen(bool a, long b)
    {
      TRACE("hugh::wxwidgets::window::ShowFullScreen");

      return inherited::ShowFullScreen(a, b);
    }

    /* virtual */ void
    window::ShowWithoutActivating()
    {
      TRACE("hugh::wxwidgets::window::ShowWithoutActivating");

      inherited::ShowWithoutActivating();
    }

    /* virtual */ bool
    window::IsFullScreen() const
    {
      TRACE("hugh::wxwidgets::window::IsFullScreen");

      return inherited::IsFullScreen();
    }

    /* virtual */ void
    window::SetTitle(wxString const& a)
    {
      TRACE("hugh::wxwidgets::window::SetTitle");

      inherited::SetTitle(a);
    }

    /* virtual */ wxString
    window::GetTitle() const
    {
      TRACE("hugh::wxwidgets::window::GetTitle");

      return inherited::GetTitle();
    }

    /* virtual */ bool
    window::EnableCloseButton(bool a)
    {
      TRACE("hugh::wxwidgets::window::EnableCloseButton");

      return inherited::EnableCloseButton(a);
    }

    /* virtual */ void
    window::RequestUserAttention(int a)
    {
      TRACE("hugh::wxwidgets::window::RequestUserAttention");

      inherited::RequestUserAttention(a);
    }

    /* virtual */ bool
    window::IsActive()
    {
      TRACE("hugh::wxwidgets::window::IsActive");

      return inherited::IsActive();
    }

    /* virtual */ bool
    window::ShouldPreventAppExit() const
    {
      TRACE("hugh::wxwidgets::window::ShouldPreventAppExit");

      return inherited::ShouldPreventAppExit();
    }

    /* virtual */ bool
    window::Destroy()
    {
      TRACE("hugh::wxwidgets::window::Destroy");

      return inherited::Destroy();
    }

    /* virtual */ bool
    window::IsTopLevel() const
    {
      TRACE("hugh::wxwidgets::window::IsTopLevel");

      return inherited::IsTopLevel();
    }

    /* virtual */ bool
    window::IsTopNavigationDomain() const
    {
      TRACE("hugh::wxwidgets::window::IsTopNavigationDomain");

      return inherited::IsTopNavigationDomain();
    }

    /* virtual */ bool
    window::IsVisible() const
    {
      TRACE("hugh::wxwidgets::window::IsVisible");

      return inherited::IsVisible();
    }

    /* virtual */ void
    window::GetRectForTopLevelChildren(int* a, int* b, int* c, int* d)
    {
      TRACE("hugh::wxwidgets::window::GetRectForTopLevelChildren");

      inherited::GetRectForTopLevelChildren(a, b, c, d);
    }

    /* virtual */ void
    window::DoUpdateWindowUI(wxUpdateUIEvent& a)
    {
      TRACE("hugh::wxwidgets::window::DoUpdateWindowUI");

      inherited::DoUpdateWindowUI(a);
    }

    /* virtual */ void
    window::SetMinSize(wxSize const& a)
    {
      TRACE("hugh::wxwidgets::window::SetMinSize");

      inherited::SetMinSize(a);
    }

    /* virtual */ void
    window::SetMaxSize(wxSize const& a)
    {
      TRACE("hugh::wxwidgets::window::SetMaxSize");

      inherited::SetMaxSize(a);
    }

    /* virtual */ void
    window::OSXSetModified(bool a)
    {
      TRACE("hugh::wxwidgets::window::OSXSetModified");

      inherited::OSXSetModified(a);
    }

    /* virtual */ bool
    window::OSXIsModified() const
    {
      TRACE("hugh::wxwidgets::window::OSXIsModified");

      return inherited::OSXIsModified();
    }

    /* virtual */ void
    window::SetRepresentedFilename(wxString const& a)
    {
      TRACE("hugh::wxwidgets::window::SetRepresentedFilename");

      inherited::SetRepresentedFilename(a);
    }


    /* virtual */ void
    window::PositionMenuBar()
    {
      TRACE("hugh::wxwidgets::window::PositionMenuBar");

      inherited::PositionMenuBar();
    }

    /* virtual */ void
    window::DetachMenuBar()
    {
      TRACE("hugh::wxwidgets::window::DetachMenuBar");

      inherited::DetachMenuBar();
    }

    /* virtual */ void
    window::AttachMenuBar(wxMenuBar* a)
    {
      TRACE("hugh::wxwidgets::window::AttachMenuBar");

      inherited::AttachMenuBar(a);
    }

    /* virtual */ void
    window::PositionStatusBar()
    {
      TRACE("hugh::wxwidgets::window::PositionStatusBar");

      inherited::PositionStatusBar();
    }

    /* virtual */ void
    window::PositionToolBar()
    {
      TRACE("hugh::wxwidgets::window::PositionToolBar");

      inherited::PositionToolBar();
    }

    /* virtual */ void
    window::DoClientToScreen(int*a , int* b) const
    {
      TRACE("hugh::wxwidgets::window::DoClientToScreen");

      inherited::DoClientToScreen(a, b);
    }

    /* virtual */ void
    window::DoScreenToClient(int* a, int* b) const
    {
      TRACE("hugh::wxwidgets::window::DoScreenToClient");

      inherited::DoScreenToClient(a, b);
    }

    /* virtual */ void
    window::DoCentre(int a)
    {
      TRACE("hugh::wxwidgets::window::DoCentre");

      inherited::DoCentre(a);
    }

    /* virtual */ void
    window::DoGetScreenPosition(int* a, int* b) const
    {
      TRACE("hugh::wxwidgets::window::DoGetScreenPosition");

      inherited::DoGetScreenPosition(a, b);
    }
    
  } // namespace wxwidgets {
  
} // namespace hugh {
