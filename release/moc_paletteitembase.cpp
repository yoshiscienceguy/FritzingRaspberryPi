/****************************************************************************
** Meta object code from reading C++ file 'paletteitembase.h'
**
** Created: Sun Sep 27 18:00:30 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/items/paletteitembase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paletteitembase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PaletteItemBase[] = {

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
      16,   36,   36,   36, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PaletteItemBase[] = {
    "PaletteItemBase\0partPropertyEntry()\0"
    "\0"
};

void PaletteItemBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PaletteItemBase *_t = static_cast<PaletteItemBase *>(_o);
        switch (_id) {
        case 0: _t->partPropertyEntry(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PaletteItemBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PaletteItemBase::staticMetaObject = {
    { &ItemBase::staticMetaObject, qt_meta_stringdata_PaletteItemBase,
      qt_meta_data_PaletteItemBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PaletteItemBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PaletteItemBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PaletteItemBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PaletteItemBase))
        return static_cast<void*>(const_cast< PaletteItemBase*>(this));
    if (!strcmp(_clname, "CursorKeyListener"))
        return static_cast< CursorKeyListener*>(const_cast< PaletteItemBase*>(this));
    return ItemBase::qt_metacast(_clname);
}

int PaletteItemBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ItemBase::qt_metacall(_c, _id, _a);
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
