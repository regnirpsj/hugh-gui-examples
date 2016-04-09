// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/qt/window.hpp                                                          */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_APP_QT_WINDOW_HPP)

#define HUGH_APP_QT_WINDOW_HPP

// includes, system

#include <QWidget>  // QWidget
#include <QVariant> // QVariant

// includes, project

// #include <>

namespace hugh {

  namespace qt {
    
    // types, exported (class, enum, struct, union, typedef)

    class window : public QWidget {

    public:

      using inherited = QWidget;

      explicit window(QWidget* /* parent */ = nullptr);
      virtual ~window();
    
    protected:

      virtual void     setVisible(bool);
      virtual QSize    sizeHint() const;
      virtual QSize    minimumSizeHint() const;
      virtual int      heightForWidth(int) const;
      virtual bool     hasHeightForWidth() const;
      virtual void     mousePressEvent(QMouseEvent*);
      virtual void     mouseReleaseEvent(QMouseEvent*);
      virtual void     mouseDoubleClickEvent(QMouseEvent*);
      virtual void     mouseMoveEvent(QMouseEvent*);
      virtual void     wheelEvent(QWheelEvent*);
      virtual void     keyPressEvent(QKeyEvent*);
      virtual void     keyReleaseEvent(QKeyEvent*);
      virtual void     focusInEvent(QFocusEvent*);
      virtual void     focusOutEvent(QFocusEvent*);
      virtual void     enterEvent(QEvent*);
      virtual void     leaveEvent(QEvent*);
      virtual void     paintEvent(QPaintEvent*);
      virtual void     moveEvent(QMoveEvent*);
      virtual void     resizeEvent(QResizeEvent*);
      virtual void     closeEvent(QCloseEvent*);
      virtual void     contextMenuEvent(QContextMenuEvent*);
      virtual void     tabletEvent(QTabletEvent*);
      virtual void     actionEvent(QActionEvent*);
      virtual void     dragEnterEvent(QDragEnterEvent*);
      virtual void     dragMoveEvent(QDragMoveEvent*);
      virtual void     dragLeaveEvent(QDragLeaveEvent*);
      virtual void     dropEvent(QDropEvent*);
      virtual void     showEvent(QShowEvent*);
      virtual void     hideEvent(QHideEvent*);
      virtual bool     nativeEvent(QByteArray const&, void*, long*);
      virtual void     changeEvent(QEvent*);
      virtual void     inputMethodEvent(QInputMethodEvent*);
      virtual QVariant inputMethodQuery(Qt::InputMethodQuery) const;
      virtual bool     focusNextPrevChild(bool);
      virtual bool     event(QEvent*);
      virtual bool     eventFilter(QObject*, QEvent*);
      virtual void     timerEvent(QTimerEvent*);
      virtual void     childEvent(QChildEvent*);
      virtual void     customEvent(QEvent*);
      virtual void     connectNotify(QMetaMethod const&);
      virtual void     disconnectNotify(QMetaMethod const&);
      
    };

    // variables, exported (extern)

    // functions, inlined (inline)
  
    // functions, exported (extern)

  } // namespace qt {
  
} // namespace hugh {

#endif // #if !defined(HUGH_APP_QT_WINDOW_HPP)
