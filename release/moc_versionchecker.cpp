/****************************************************************************
** Meta object code from reading C++ file 'versionchecker.h'
**
** Created: Sun Sep 27 17:56:54 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/version/versionchecker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'versionchecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VersionChecker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   39,   50,   50, 0x05,
      51,   85,   50,   50, 0x05,
      95,   50,   50,   50, 0x05,

 // slots: signature, parameters, type, tag, flags
     115,   50,   50,   50, 0x0a,
     123,  142,   50,   50, 0x0a,
     151,   50,   50,   50, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_VersionChecker[] = {
    "VersionChecker\0httpError(QHttp::Error)\0"
    "statusCode\0\0xmlError(QXmlStreamReader::Error)\0"
    "errorCode\0releasesAvailable()\0fetch()\0"
    "finished(int,bool)\0id,error\0"
    "readData(QHttpResponseHeader)\0"
};

void VersionChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VersionChecker *_t = static_cast<VersionChecker *>(_o);
        switch (_id) {
        case 0: _t->httpError((*reinterpret_cast< QHttp::Error(*)>(_a[1]))); break;
        case 1: _t->xmlError((*reinterpret_cast< QXmlStreamReader::Error(*)>(_a[1]))); break;
        case 2: _t->releasesAvailable(); break;
        case 3: _t->fetch(); break;
        case 4: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->readData((*reinterpret_cast< const QHttpResponseHeader(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VersionChecker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VersionChecker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VersionChecker,
      qt_meta_data_VersionChecker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VersionChecker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VersionChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VersionChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VersionChecker))
        return static_cast<void*>(const_cast< VersionChecker*>(this));
    return QObject::qt_metacast(_clname);
}

int VersionChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void VersionChecker::httpError(QHttp::Error _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VersionChecker::xmlError(QXmlStreamReader::Error _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VersionChecker::releasesAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
