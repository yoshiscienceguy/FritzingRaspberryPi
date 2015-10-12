/****************************************************************************
** Meta object code from reading C++ file 'logoitem.h'
**
** Created: Sun Sep 27 17:59:41 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/items/logoitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logoitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LogoItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,   21,   21,   21, 0x09,
      22,   21,   21,   21, 0x09,
      35,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_LogoItem[] = {
    "LogoItem\0logoEntry()\0\0widthEntry()\0"
    "heightEntry()\0"
};

void LogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LogoItem *_t = static_cast<LogoItem *>(_o);
        switch (_id) {
        case 0: _t->logoEntry(); break;
        case 1: _t->widthEntry(); break;
        case 2: _t->heightEntry(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LogoItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LogoItem::staticMetaObject = {
    { &ResizableBoard::staticMetaObject, qt_meta_stringdata_LogoItem,
      qt_meta_data_LogoItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LogoItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LogoItem))
        return static_cast<void*>(const_cast< LogoItem*>(this));
    return ResizableBoard::qt_metacast(_clname);
}

int LogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResizableBoard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_CopperLogoItem[] = {

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

static const char qt_meta_stringdata_CopperLogoItem[] = {
    "CopperLogoItem\0"
};

void CopperLogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CopperLogoItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CopperLogoItem::staticMetaObject = {
    { &LogoItem::staticMetaObject, qt_meta_stringdata_CopperLogoItem,
      qt_meta_data_CopperLogoItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CopperLogoItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CopperLogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CopperLogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CopperLogoItem))
        return static_cast<void*>(const_cast< CopperLogoItem*>(this));
    return LogoItem::qt_metacast(_clname);
}

int CopperLogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LogoItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_SchematicLogoItem[] = {

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

static const char qt_meta_stringdata_SchematicLogoItem[] = {
    "SchematicLogoItem\0"
};

void SchematicLogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SchematicLogoItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SchematicLogoItem::staticMetaObject = {
    { &LogoItem::staticMetaObject, qt_meta_stringdata_SchematicLogoItem,
      qt_meta_data_SchematicLogoItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SchematicLogoItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SchematicLogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SchematicLogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SchematicLogoItem))
        return static_cast<void*>(const_cast< SchematicLogoItem*>(this));
    return LogoItem::qt_metacast(_clname);
}

int SchematicLogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LogoItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_BreadboardLogoItem[] = {

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
      19,   37,   37,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BreadboardLogoItem[] = {
    "BreadboardLogoItem\0changeTextColor()\0"
    "\0"
};

void BreadboardLogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BreadboardLogoItem *_t = static_cast<BreadboardLogoItem *>(_o);
        switch (_id) {
        case 0: _t->changeTextColor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BreadboardLogoItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BreadboardLogoItem::staticMetaObject = {
    { &LogoItem::staticMetaObject, qt_meta_stringdata_BreadboardLogoItem,
      qt_meta_data_BreadboardLogoItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BreadboardLogoItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BreadboardLogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BreadboardLogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BreadboardLogoItem))
        return static_cast<void*>(const_cast< BreadboardLogoItem*>(this));
    return LogoItem::qt_metacast(_clname);
}

int BreadboardLogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LogoItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_BoardLogoItem[] = {

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

static const char qt_meta_stringdata_BoardLogoItem[] = {
    "BoardLogoItem\0"
};

void BoardLogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BoardLogoItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BoardLogoItem::staticMetaObject = {
    { &LogoItem::staticMetaObject, qt_meta_stringdata_BoardLogoItem,
      qt_meta_data_BoardLogoItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BoardLogoItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BoardLogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BoardLogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BoardLogoItem))
        return static_cast<void*>(const_cast< BoardLogoItem*>(this));
    return LogoItem::qt_metacast(_clname);
}

int BoardLogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LogoItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
