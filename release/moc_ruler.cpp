/****************************************************************************
** Meta object code from reading C++ file 'ruler.h'
**
** Created: Sun Sep 27 18:01:27 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/items/ruler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ruler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ruler[] = {

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
       6,   19,   19,   19, 0x0a,
      20,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Ruler[] = {
    "Ruler\0widthEntry()\0\0unitsEntry(QString)\0"
};

void Ruler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Ruler *_t = static_cast<Ruler *>(_o);
        switch (_id) {
        case 0: _t->widthEntry(); break;
        case 1: _t->unitsEntry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Ruler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Ruler::staticMetaObject = {
    { &PaletteItem::staticMetaObject, qt_meta_stringdata_Ruler,
      qt_meta_data_Ruler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Ruler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Ruler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Ruler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ruler))
        return static_cast<void*>(const_cast< Ruler*>(this));
    return PaletteItem::qt_metacast(_clname);
}

int Ruler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
