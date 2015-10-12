/****************************************************************************
** Meta object code from reading C++ file 'hole.h'
**
** Created: Sun Sep 27 17:58:56 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/items/hole.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Hole[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       5,   29,   29,   29, 0x09,
      30,   29,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Hole[] = {
    "Hole\0changeHoleSize(QString)\0\0"
    "changeUnits(bool)\0"
};

void Hole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Hole *_t = static_cast<Hole *>(_o);
        switch (_id) {
        case 0: _t->changeHoleSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->changeUnits((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Hole::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Hole::staticMetaObject = {
    { &PaletteItem::staticMetaObject, qt_meta_stringdata_Hole,
      qt_meta_data_Hole, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Hole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Hole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Hole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Hole))
        return static_cast<void*>(const_cast< Hole*>(this));
    return PaletteItem::qt_metacast(_clname);
}

int Hole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PaletteItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
