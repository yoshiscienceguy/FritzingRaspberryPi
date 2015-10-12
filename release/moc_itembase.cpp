/****************************************************************************
** Meta object code from reading C++ file 'itembase.h'
**
** Created: Sun Sep 27 17:59:05 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/items/itembase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itembase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ItemBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,   40,   46,   46, 0x0a,
      47,   46,   46,   46, 0x0a,
      63,   89,   46,   46, 0x0a,
      97,  116,   46,   46, 0x0a,
     121,   46,   46,   46, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ItemBase[] = {
    "ItemBase\0showPartLabel(bool,ViewLayer*)\0"
    "show,\0\0hidePartLabel()\0partLabelChanged(QString)\0"
    "newText\0swapEntry(QString)\0text\0"
    "showInFolder()\0"
};

void ItemBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ItemBase *_t = static_cast<ItemBase *>(_o);
        switch (_id) {
        case 0: _t->showPartLabel((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< ViewLayer*(*)>(_a[2]))); break;
        case 1: _t->hidePartLabel(); break;
        case 2: _t->partLabelChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->swapEntry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->showInFolder(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ItemBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ItemBase::staticMetaObject = {
    { &QGraphicsSvgItem::staticMetaObject, qt_meta_stringdata_ItemBase,
      qt_meta_data_ItemBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ItemBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ItemBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ItemBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ItemBase))
        return static_cast<void*>(const_cast< ItemBase*>(this));
    return QGraphicsSvgItem::qt_metacast(_clname);
}

int ItemBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsSvgItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
