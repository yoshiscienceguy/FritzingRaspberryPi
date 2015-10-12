/****************************************************************************
** Meta object code from reading C++ file 'pad.h'
**
** Created: Sun Sep 27 18:00:11 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/items/pad.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Pad[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       4,   32,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Pad[] = {
    "Pad\0terminalPointEntry(QString)\0\0"
};

void Pad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Pad *_t = static_cast<Pad *>(_o);
        switch (_id) {
        case 0: _t->terminalPointEntry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Pad::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Pad::staticMetaObject = {
    { &ResizableBoard::staticMetaObject, qt_meta_stringdata_Pad,
      qt_meta_data_Pad, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Pad::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Pad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Pad::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Pad))
        return static_cast<void*>(const_cast< Pad*>(this));
    return ResizableBoard::qt_metacast(_clname);
}

int Pad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResizableBoard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_CopperBlocker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CopperBlocker[] = {
    "CopperBlocker\0"
};

void CopperBlocker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CopperBlocker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CopperBlocker::staticMetaObject = {
    { &Pad::staticMetaObject, qt_meta_stringdata_CopperBlocker,
      qt_meta_data_CopperBlocker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CopperBlocker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CopperBlocker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CopperBlocker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CopperBlocker))
        return static_cast<void*>(const_cast< CopperBlocker*>(this));
    return Pad::qt_metacast(_clname);
}

int CopperBlocker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Pad::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
