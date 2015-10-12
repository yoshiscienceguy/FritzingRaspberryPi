/****************************************************************************
** Meta object code from reading C++ file 'note.h'
**
** Created: Sun Sep 27 18:00:01 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/items/note.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'note.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Note[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       5,   37,   70,   70, 0x09,
      71,   70,   70,   70, 0x09,
      93,   70,   70,   70, 0x09,
     106,  136,   70,   70, 0x09,
     142,  204,   70,   70, 0x09,
     223,  204,   70,   70, 0x09,
     284,  204,   70,   70, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Note[] = {
    "Note\0contentsChangeSlot(int,int,int)\0"
    "position,charsAdded,charsRemoved\0\0"
    "contentsChangedSlot()\0linkDialog()\0"
    "handleZoomChangedSlot(double)\0scale\0"
    "handleMousePressSlot(QGraphicsSceneMouseEvent*,ResizeHandle*)\0"
    "event,resizeHandle\0"
    "handleMouseMoveSlot(QGraphicsSceneMouseEvent*,ResizeHandle*)\0"
    "handleMouseReleaseSlot(QGraphicsSceneMouseEvent*,ResizeHandle*)\0"
};

void Note::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Note *_t = static_cast<Note *>(_o);
        switch (_id) {
        case 0: _t->contentsChangeSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->contentsChangedSlot(); break;
        case 2: _t->linkDialog(); break;
        case 3: _t->handleZoomChangedSlot((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->handleMousePressSlot((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1])),(*reinterpret_cast< ResizeHandle*(*)>(_a[2]))); break;
        case 5: _t->handleMouseMoveSlot((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1])),(*reinterpret_cast< ResizeHandle*(*)>(_a[2]))); break;
        case 6: _t->handleMouseReleaseSlot((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1])),(*reinterpret_cast< ResizeHandle*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Note::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Note::staticMetaObject = {
    { &ItemBase::staticMetaObject, qt_meta_stringdata_Note,
      qt_meta_data_Note, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Note::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Note::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Note::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Note))
        return static_cast<void*>(const_cast< Note*>(this));
    return ItemBase::qt_metacast(_clname);
}

int Note::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ItemBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_LinkDialog[] = {

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

static const char qt_meta_stringdata_LinkDialog[] = {
    "LinkDialog\0"
};

void LinkDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LinkDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LinkDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LinkDialog,
      qt_meta_data_LinkDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LinkDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LinkDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LinkDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LinkDialog))
        return static_cast<void*>(const_cast< LinkDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LinkDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
