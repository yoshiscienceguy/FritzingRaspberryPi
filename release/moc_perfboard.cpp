/****************************************************************************
** Meta object code from reading C++ file 'perfboard.h'
**
** Created: Sun Sep 27 18:00:47 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/items/perfboard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'perfboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Perfboard[] = {

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
      10,   28,   28,   28, 0x09,
      29,   28,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Perfboard[] = {
    "Perfboard\0changeBoardSize()\0\0"
    "enableSetButton()\0"
};

void Perfboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Perfboard *_t = static_cast<Perfboard *>(_o);
        switch (_id) {
        case 0: _t->changeBoardSize(); break;
        case 1: _t->enableSetButton(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Perfboard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Perfboard::staticMetaObject = {
    { &Capacitor::staticMetaObject, qt_meta_stringdata_Perfboard,
      qt_meta_data_Perfboard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Perfboard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Perfboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Perfboard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Perfboard))
        return static_cast<void*>(const_cast< Perfboard*>(this));
    return Capacitor::qt_metacast(_clname);
}

int Perfboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Capacitor::qt_metacall(_c, _id, _a);
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
