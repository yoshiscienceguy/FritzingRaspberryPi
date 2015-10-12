/****************************************************************************
** Meta object code from reading C++ file 'fapplication.h'
**
** Created: Sun Sep 27 17:52:30 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/fapplication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,   27,   44,   44, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_FServer[] = {
    "FServer\0newConnection(int)\0socketDescriptor\0"
    "\0"
};

void FServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FServer *_t = static_cast<FServer *>(_o);
        switch (_id) {
        case 0: _t->newConnection((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_FServer,
      qt_meta_data_FServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FServer))
        return static_cast<void*>(const_cast< FServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int FServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FServer::newConnection(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_FServerThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   45,   57,   57, 0x05,
      58,   99,   57,   57, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_FServerThread[] = {
    "FServerThread\0error(QTcpSocket::SocketError)\0"
    "socketError\0\0doCommand(QString,QString,QString&,int&)\0"
    "command,params,result,status\0"
};

void FServerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FServerThread *_t = static_cast<FServerThread *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        case 1: _t->doCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FServerThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FServerThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_FServerThread,
      qt_meta_data_FServerThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FServerThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FServerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FServerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FServerThread))
        return static_cast<void*>(const_cast< FServerThread*>(this));
    return QThread::qt_metacast(_clname);
}

int FServerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FServerThread::error(QTcpSocket::SocketError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FServerThread::doCommand(const QString & _t1, const QString & _t2, QString & _t3, int & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_FApplication[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   43,   43,   43, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   43,   43,   43, 0x0a,
      58,   43,   43,   43, 0x0a,
      77,   43,   43,   43, 0x0a,
      95,  117,   43,   43, 0x0a,
     131,  156,   43,   43, 0x0a,
     164,   43,   43,   43, 0x0a,
     201,  233,   43,   43, 0x0a,
     253,   43,   43,   43, 0x0a,
     272,   43,   43,   43, 0x0a,
     306,   43,   43,   43, 0x0a,
     325,  345,   43,   43, 0x0a,
     358,  410,   43,   43, 0x0a,
     425,   43,   43,   43, 0x0a,
     453,  472,   43,   43, 0x0a,
     489,  530,   43,   43, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FApplication[] = {
    "FApplication\0spaceBarIsPressedSignal(bool)\0"
    "\0preferences()\0preferencesAfter()\0"
    "checkForUpdates()\0checkForUpdates(bool)\0"
    "atUserRequest\0enableCheckUpdates(bool)\0"
    "enabled\0createUserDataStoreFolderStructure()\0"
    "changeActivation(bool,QWidget*)\0"
    "activate,originator\0updateActivation()\0"
    "topLevelWidgetDestroyed(QObject*)\0"
    "closeAllWindows2()\0loadedPart(int,int)\0"
    "loaded,total\0"
    "externalProcessSlot(QString&,QString&,QStringList&)\0"
    "name,path,args\0gotOrderFab(QNetworkReply*)\0"
    "newConnection(int)\0socketDescriptor\0"
    "doCommand(QString,QString,QString&,int&)\0"
    "command,params,result,status\0"
};

void FApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FApplication *_t = static_cast<FApplication *>(_o);
        switch (_id) {
        case 0: _t->spaceBarIsPressedSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->preferences(); break;
        case 2: _t->preferencesAfter(); break;
        case 3: _t->checkForUpdates(); break;
        case 4: _t->checkForUpdates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->enableCheckUpdates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->createUserDataStoreFolderStructure(); break;
        case 7: _t->changeActivation((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 8: _t->updateActivation(); break;
        case 9: _t->topLevelWidgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 10: _t->closeAllWindows2(); break;
        case 11: _t->loadedPart((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->externalProcessSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 13: _t->gotOrderFab((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 14: _t->newConnection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->doCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FApplication::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_FApplication,
      qt_meta_data_FApplication, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FApplication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FApplication))
        return static_cast<void*>(const_cast< FApplication*>(this));
    return QApplication::qt_metacast(_clname);
}

int FApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void FApplication::spaceBarIsPressedSignal(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
