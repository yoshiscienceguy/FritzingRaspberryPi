/****************************************************************************
** Meta object code from reading C++ file 'jumperitem.h'
**
** Created: Sun Sep 27 17:59:13 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/items/jumperitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jumperitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JumperItem[] = {

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
      11,   41,   44,   44, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_JumperItem[] = {
    "JumperItem\0alignMe(JumperItem*,QPointF&)\0"
    ",p\0\0"
};

void JumperItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JumperItem *_t = static_cast<JumperItem *>(_o);
        switch (_id) {
        case 0: _t->alignMe((*reinterpret_cast< JumperItem*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData JumperItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject JumperItem::staticMetaObject = {
    { &PaletteItem::staticMetaObject, qt_meta_stringdata_JumperItem,
      qt_meta_data_JumperItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JumperItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JumperItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JumperItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JumperItem))
        return static_cast<void*>(const_cast< JumperItem*>(this));
    return PaletteItem::qt_metacast(_clname);
}

int JumperItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PaletteItem::qt_metacall(_c, _id, _a);
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
void JumperItem::alignMe(JumperItem * _t1, QPointF & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
