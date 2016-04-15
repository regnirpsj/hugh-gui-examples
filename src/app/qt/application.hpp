// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/app/qt/application.hpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_APP_QT_APPLICATION_HPP)

#define HUGH_APP_QT_APPLICATION_HPP

// includes, system

#include <QApplication> // QApplication

// includes, project

// #include <>

namespace hugh {

  namespace qt {
    
    // types, exported (class, enum, struct, union, typedef)

    class application : public QApplication {

      Q_OBJECT
      
    public:

      using inherited = QApplication;

      explicit application(int& /* argc */, char* /* argv */[]);
      virtual ~application();
    
    protected:    

      virtual bool notify(QObject*, QEvent*);
      virtual bool compressEvent(QEvent*, QObject*, QPostEventList*);
      virtual bool event(QEvent*);
      virtual bool eventFilter(QObject*, QEvent*);
      virtual void timerEvent(QTimerEvent*);
      virtual void childEvent(QChildEvent*);
      virtual void customEvent(QEvent*);
      virtual void connectNotify(QMetaMethod const&);
      virtual void disconnectNotify(QMetaMethod const&);

    };
    
    // variables, exported (extern)

    // functions, inlined (inline)
  
    // functions, exported (extern)

  } // namespace qt {
  
} // namespace hugh {

#endif // #if !defined(HUGH_APP_QT_APPLICATION_HPP)
