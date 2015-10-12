/****************************************************************************
** Meta object code from reading C++ file 'dip.h'
**
** Created: Sun Sep 27 17:58:46 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/items/dip.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dip[] = {

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
       4,   23,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Dip[] = {
    "Dip\0swapEntry(QString)\0text\0\0"
};

void Dip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dip *_t = static_cast<Dip *>(_o);
        switch (_id) {
        case 0: _t->swapEntry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dip::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dip::staticMetaObject = {
    { &MysteryPart::staticMetaObject, qt_meta_stringdata_Dip,
      qt_meta_data_Dip, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dip::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dip))
        return static_cast<void*>(const_cast< Dip*>(this));
    return MysteryPart::qt_metacast(_clname);
}

int Dip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MysteryPart::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
