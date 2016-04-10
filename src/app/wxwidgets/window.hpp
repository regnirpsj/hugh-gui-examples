// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/wxwidgets/window.hpp                                                   */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_APP_WXWIDGETS_WINDOW_HPP)

#define HUGH_APP_WXWIDGETS_WINDOW_HPP

// includes, system

#include <wx/wx.h> // wxFrame
#include <string>  // std::string

// includes, project

// #include <>

namespace hugh {

  namespace wxwidgets {
    
    // types, exported (class, enum, struct, union, typedef)

    class window : public wxFrame {

    public:

      using inherited = wxFrame;

      explicit window(std::string const&);
      virtual ~window();

      virtual wxPoint      GetClientAreaOrigin() const;
      virtual void         SetMenuBar(wxMenuBar*);
      virtual wxMenuBar*   GetMenuBar() const;
      virtual wxMenuItem*  FindItemInMenuBar(int) const;
      virtual wxStatusBar* CreateStatusBar(int = 1, long = wxSTB_DEFAULT_STYLE, wxWindowID = 0,
                                           wxString const& = wxStatusLineNameStr);
      virtual wxStatusBar* OnCreateStatusBar(int, long, wxWindowID, wxString const&);
      virtual wxStatusBar* GetStatusBar() const;
      virtual void         SetStatusBar(wxStatusBar*);
      virtual void         SetStatusText(wxString const&, int = 0);
      virtual void         SetStatusWidths(int, int const []);
      virtual wxToolBar*   CreateToolBar(long = -1, wxWindowID = wxID_ANY,
                                         wxString const& = wxToolBarNameStr);
      virtual wxToolBar*   OnCreateToolBar(long, wxWindowID, wxString const&);
      virtual wxToolBar*   GetToolBar() const;
      virtual void         SetToolBar(wxToolBar*);
      virtual void         DoMenuUpdates(wxMenu* = nullptr);
      virtual void         UpdateWindowUI(long = wxUPDATE_UI_NONE);
      virtual void         OnInternalIdle();
      virtual void         DoGiveHelp(wxString const&, bool);
      virtual bool         IsClientAreaChild(wxWindow const*) const;
      virtual void         Maximize(bool = true);
      virtual void         Restore();
      virtual void         Iconize(bool = true);
      virtual bool         IsMaximized() const;
      virtual bool         IsAlwaysMaximized() const;
      virtual bool         IsIconized() const;
      virtual void         SetIcons(wxIconBundle const&);
      virtual bool         ShowFullScreen(bool, long = wxFULLSCREEN_ALL);
      virtual void         ShowWithoutActivating();
      virtual bool         IsFullScreen() const;
      virtual void         SetTitle(wxString const&);
      virtual wxString     GetTitle() const;
      virtual bool         EnableCloseButton(bool);
      virtual void         RequestUserAttention(int = wxUSER_ATTENTION_INFO);
      virtual bool         IsActive();
      virtual bool         ShouldPreventAppExit() const;
      virtual bool         Destroy();
      virtual bool         IsTopLevel() const;
      virtual bool         IsTopNavigationDomain() const;
      virtual bool         IsVisible() const;
      virtual void         GetRectForTopLevelChildren(int*, int*, int*, int*);
      virtual void         DoUpdateWindowUI(wxUpdateUIEvent&);
      virtual void         SetMinSize(wxSize const&);
      virtual void         SetMaxSize(wxSize const&);
      virtual void         OSXSetModified(bool);
      virtual bool         OSXIsModified() const;
      virtual void         SetRepresentedFilename(wxString const&);
      
    protected:

      virtual bool         IsOneOfBars(wxWindow const*) const;
      virtual void         PositionMenuBar();
      virtual void         DetachMenuBar();
      virtual void         AttachMenuBar(wxMenuBar*);
      virtual void         PositionStatusBar();
      virtual void         PositionToolBar();
      virtual void         DoClientToScreen(int*, int*) const;
      virtual void         DoScreenToClient(int*, int*) const;
      virtual void         DoCentre(int);
      virtual void         DoGetScreenPosition(int*, int*) const;

      
    };

    // variables, exported (extern)

    // functions, inlined (inline)
  
    // functions, exported (extern)

  } // namespace wxwidgets {
  
} // namespace hugh {

#endif // #if !defined(HUGH_APP_WXWIDGETS_WINDOW_HPP)
