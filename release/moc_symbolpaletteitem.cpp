/****************************************************************************
** Meta object code from reading C++ file 'symbolpaletteitem.h'
**
** Created: Sun Sep 27 18:02:15 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/items/symbolpaletteitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'symbolpaletteitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SymbolPaletteItem[] = {

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
      18,   40,   45,   45, 0x0a,
      46,   45,   45,   45, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SymbolPaletteItem[] = {
    "SymbolPaletteItem\0voltageEntry(QString)\0"
    "text\0\0labelEntry()\0"
};

void SymbolPaletteItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SymbolPaletteItem *_t = static_cast<SymbolPaletteItem *>(_o);
        switch (_id) {
        case 0: _t->voltageEntry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->labelEntry(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SymbolPaletteItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SymbolPaletteItem::staticMetaObject = {
    { &PaletteItem::staticMetaObject, qt_meta_stringdata_SymbolPaletteItem,
      qt_meta_data_SymbolPaletteItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SymbolPaletteItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SymbolPaletteItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SymbolPaletteItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SymbolPaletteItem))
        return static_cast<void*>(const_cast< SymbolPaletteItem*>(this));
    return PaletteItem::qt_metacast(_clname);
}

int SymbolPaletteItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_NetLabel[] = {

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

static const char qt_meta_stringdata_NetLabel[] = {
    "NetLabel\0"
};

void NetLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData NetLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NetLabel::staticMetaObject = {
    { &SymbolPaletteItem::staticMetaObject, qt_meta_stringdata_NetLabel,
      qt_meta_data_NetLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetLabel))
        return static_cast<void*>(const_cast< NetLabel*>(this));
    return SymbolPaletteItem::qt_metacast(_clname);
}

int NetLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SymbolPaletteItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
