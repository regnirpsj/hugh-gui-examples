// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/qt/window.cpp                                                          */
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
    window::window(QWidget* a)
      : inherited(a)
    {
      TRACE("hugh::qt::window::window");
    }

    /* virtual */
    window::~window()
    {
      TRACE("hugh::qt::window::~window");
    }

    /* virtual */ void
    window::setVisible(bool a)
    {
      TRACE("hugh::qt::window::setVisible");

      inherited::setVisible(a);
    }
    
    /* virtual */ QSize
    window::sizeHint() const
    {
      TRACE("hugh::qt::window::sizeHint");

      return inherited::sizeHint();
    }

    /* virtual */ QSize
    window::minimumSizeHint() const
    {
      TRACE("hugh::qt::window::minimumSizeHint");

      return inherited::minimumSizeHint();
    }

    /* virtual */ int
    window::heightForWidth(int a) const
    {
      TRACE("hugh::qt::window::heightForWidth");

      return inherited::heightForWidth(a);
    }

    /* virtual */ bool
    window::hasHeightForWidth() const
    {
      TRACE("hugh::qt::window::hasHeightForWidth");

      return inherited::hasHeightForWidth();
    }

    /* virtual */ void
    window::mousePressEvent(QMouseEvent* a)
    {
      TRACE("hugh::qt::window::mousePressEvent");

      inherited::mousePressEvent(a);
    }

    /* virtual */ void
    window::mouseReleaseEvent(QMouseEvent* a)
    {
      TRACE("hugh::qt::window::mouseReleaseEvent");

      inherited::mouseReleaseEvent(a);
    }

    /* virtual */ void
    window::mouseDoubleClickEvent(QMouseEvent* a)
    {
      TRACE("hugh::qt::window::mouseDoubleClickEvent");

      inherited::mouseDoubleClickEvent(a);
    }

    /* virtual */ void
    window::mouseMoveEvent(QMouseEvent* a)
    {
      TRACE("hugh::qt::window::mouseMoveEvent");

      inherited::mouseMoveEvent(a);
    }

    /* virtual */ void
    window::wheelEvent(QWheelEvent* a)
    {
      TRACE("hugh::qt::window::wheelEvent");

      inherited::wheelEvent(a);
    }

    /* virtual */ void
    window::keyPressEvent(QKeyEvent* a)
    {
      TRACE("hugh::qt::window::keyPressEvent");

      inherited::keyPressEvent(a);
    }

    /* virtual */ void
    window::keyReleaseEvent(QKeyEvent* a)
    {
      TRACE("hugh::qt::window::keyReleaseEvent");

      inherited::keyReleaseEvent(a);
    }

    /* virtual */ void
    window::focusInEvent(QFocusEvent* a)
    {
      TRACE("hugh::qt::window::focusInEvent");

      inherited::focusInEvent(a);
    }

    /* virtual */ void
    window::focusOutEvent(QFocusEvent* a)
    {
      TRACE("hugh::qt::window::focusOutEvent");

      inherited::focusOutEvent(a);
    }

    /* virtual */ void
    window::enterEvent(QEvent* a)
    {
      TRACE("hugh::qt::window::enterEvent");

      inherited::enterEvent(a);
    }

    /* virtual */ void
    window::leaveEvent(QEvent* a)
    {
      TRACE("hugh::qt::window::leaveEvent");

      inherited::leaveEvent(a);
    }

    /* virtual */ void
    window::paintEvent(QPaintEvent* a)
    {
      TRACE("hugh::qt::window::paintEvent");

      inherited::paintEvent(a);
    }

    /* virtual */ void
    window::moveEvent(QMoveEvent* a)
    {
      TRACE("hugh::qt::window::moveEvent");

      inherited::moveEvent(a);
    }

    /* virtual */ void
    window::resizeEvent(QResizeEvent* a)
    {
      TRACE("hugh::qt::window::resizeEvent");

      inherited::resizeEvent(a);
    }

    /* virtual */ void
    window::closeEvent(QCloseEvent* a)
    {
      TRACE("hugh::qt::window::closeEvent");

      inherited::closeEvent(a);
    }

    /* virtual */ void
    window::contextMenuEvent(QContextMenuEvent* a)
    {
      TRACE("hugh::qt::window::contextMenuEvent");

      inherited::contextMenuEvent(a);
    }

    /* virtual */ void
    window::tabletEvent(QTabletEvent* a)
    {
      TRACE("hugh::qt::window::tabletEvent");

      inherited::tabletEvent(a);
    }

    /* virtual */ void
    window::actionEvent(QActionEvent* a)
    {
      TRACE("hugh::qt::window::actionEvent");

      inherited::actionEvent(a);
    }

    /* virtual */ void
    window::dragEnterEvent(QDragEnterEvent* a)
    {
      TRACE("hugh::qt::window::dragEnterEvent");

      inherited::dragEnterEvent(a);
    }

    /* virtual */ void
    window::dragMoveEvent(QDragMoveEvent* a)
    {
      TRACE("hugh::qt::window::dragMoveEvent");

      inherited::dragMoveEvent(a);
    }

    /* virtual */ void
    window::dragLeaveEvent(QDragLeaveEvent* a)
    {
      TRACE("hugh::qt::window::dragLeaveEvent");

      inherited::dragLeaveEvent(a);
    }

    /* virtual */ void
    window::dropEvent(QDropEvent* a)
    {
      TRACE("hugh::qt::window::dropEvent");

      inherited::dropEvent(a);
    }

    /* virtual */ void
    window::showEvent(QShowEvent* a)
    {
      TRACE("hugh::qt::window::showEvent");

      inherited::showEvent(a);
    }

    /* virtual */ void
    window::hideEvent(QHideEvent* a)
    {
      TRACE("hugh::qt::window::hideEvent");

      inherited::hideEvent(a);
    }

    /* virtual */ bool
    window::nativeEvent(QByteArray const& a, void* b, long* c)
    {
      TRACE_NEVER("hugh::qt::window::nativeEvent");

      return inherited::nativeEvent(a, b, c);
    }

    /* virtual */ void
    window::changeEvent(QEvent* a)
    {
      TRACE("hugh::qt::window::changeEvent");

      inherited::changeEvent(a);
    }

    /* virtual */ void
    window::inputMethodEvent(QInputMethodEvent* a)
    {
      TRACE("hugh::qt::window::inputMethodEvent");

      inherited::inputMethodEvent(a);
    }

    /* virtual */ QVariant
    window::inputMethodQuery(Qt::InputMethodQuery a) const
    {
      TRACE("hugh::qt::window::inputMethodQuery");

      return inherited::inputMethodQuery(a);
    }

    /* virtual */ bool
    window::focusNextPrevChild(bool a)
    {
      TRACE("hugh::qt::window::focusNextPrevChild");

      return inherited::focusNextPrevChild(a);
    }

    /* virtual */ bool
    window::event(QEvent* a)
    {
      TRACE("hugh::qt::window::event");

      return inherited::event(a);
    }

    /* virtual */ bool
    window::eventFilter(QObject* a, QEvent* b)
    {
      TRACE("hugh::qt::window::eventFilter");

      return inherited::eventFilter(a, b);
    }

    /* virtual */ void
    window::timerEvent(QTimerEvent* a)
    {
      TRACE("hugh::qt::window::timerEvent");

      inherited::timerEvent(a);
    }

    /* virtual */ void
    window::childEvent(QChildEvent* a)
    {
      TRACE("hugh::qt::window::childEvent");

      inherited::childEvent(a);
    }

    /* virtual */ void
    window::customEvent(QEvent* a)
    {
      TRACE("hugh::qt::window::customEvent");

      inherited::customEvent(a);
    }

    /* virtual */ void
    window::connectNotify(QMetaMethod const& a)
    {
      TRACE("hugh::qt::window::");

      inherited::connectNotify(a);
    }

    /* virtual */ void
    window::disconnectNotify(QMetaMethod const& a)
    {
      TRACE("hugh::qt::window::disconnectNotify");

      inherited::disconnectNotify(a);
    }

  } // namespace qt {
  
} // namespace hugh {
