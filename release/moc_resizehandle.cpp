/****************************************************************************
** Meta object code from reading C++ file 'resizehandle.h'
**
** Created: Sun Sep 27 17:58:03 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/utils/resizehandle.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resizehandle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ResizeHandle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   71,   78,   78, 0x05,
      79,   71,   78,   78, 0x05,
     136,   71,   78,   78, 0x05,
     196,  222,   78,   78, 0x05,

 // slots: signature, parameters, type, tag, flags
     228,  222,   78,   78, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ResizeHandle[] = {
    "ResizeHandle\0"
    "mousePressSignal(QGraphicsSceneMouseEvent*,ResizeHandle*)\0"
    "event,\0\0"
    "mouseMoveSignal(QGraphicsSceneMouseEvent*,ResizeHandle*)\0"
    "mouseReleaseSignal(QGraphicsSceneMouseEvent*,ResizeHandle*)\0"
    "zoomChangedSignal(double)\0scale\0"
    "zoomChangedSlot(double)\0"
};

void ResizeHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ResizeHandle *_t = static_cast<ResizeHandle *>(_o);
        switch (_id) {
        case 0: _t->mousePressSignal((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1])),(*reinterpret_cast< ResizeHandle*(*)>(_a[2]))); break;
        case 1: _t->mouseMoveSignal((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1])),(*reinterpret_cast< ResizeHandle*(*)>(_a[2]))); break;
        case 2: _t->mouseReleaseSignal((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1])),(*reinterpret_cast< ResizeHandle*(*)>(_a[2]))); break;
        case 3: _t->zoomChangedSignal((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->zoomChangedSlot((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ResizeHandle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ResizeHandle::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ResizeHandle,
      qt_meta_data_ResizeHandle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ResizeHandle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ResizeHandle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ResizeHandle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ResizeHandle))
        return static_cast<void*>(const_cast< ResizeHandle*>(this));
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(const_cast< ResizeHandle*>(this));
    return QObject::qt_metacast(_clname);
}

int ResizeHandle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ResizeHandle::mousePressSignal(QGraphicsSceneMouseEvent * _t1, ResizeHandle * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ResizeHandle::mouseMoveSignal(QGraphicsSceneMouseEvent * _t1, ResizeHandle * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ResizeHandle::mouseReleaseSignal(QGraphicsSceneMouseEvent * _t1, ResizeHandle * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ResizeHandle::zoomChangedSignal(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
