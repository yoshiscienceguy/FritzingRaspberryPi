/****************************************************************************
** Meta object code from reading C++ file 'pegraphicsitem.h'
**
** Created: Sun Sep 27 17:55:36 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/partseditor/pegraphicsitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pegraphicsitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PEGraphicsItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   48,   48,   48, 0x05,
      49,   91,   48,   48, 0x05,
      99,   48,   48,   48, 0x05,
     136,  180,   48,   48, 0x05,
     182,  236,   48,   48, 0x05,

 // slots: signature, parameters, type, tag, flags
     250,   48,   48,   48, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PEGraphicsItem[] = {
    "PEGraphicsItem\0highlightSignal(PEGraphicsItem*)\0"
    "\0mousePressedSignal(PEGraphicsItem*,bool&)\0"
    ",ignore\0mouseReleasedSignal(PEGraphicsItem*)\0"
    "terminalPointMoved(PEGraphicsItem*,QPointF)\0"
    ",\0terminalPointChanged(PEGraphicsItem*,QPointF,QPointF)\0"
    ",before,after\0restoreColor()\0"
};

void PEGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PEGraphicsItem *_t = static_cast<PEGraphicsItem *>(_o);
        switch (_id) {
        case 0: _t->highlightSignal((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1]))); break;
        case 1: _t->mousePressedSignal((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->mouseReleasedSignal((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1]))); break;
        case 3: _t->terminalPointMoved((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 4: _t->terminalPointChanged((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3]))); break;
        case 5: _t->restoreColor(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PEGraphicsItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PEGraphicsItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PEGraphicsItem,
      qt_meta_data_PEGraphicsItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PEGraphicsItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PEGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PEGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PEGraphicsItem))
        return static_cast<void*>(const_cast< PEGraphicsItem*>(this));
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(const_cast< PEGraphicsItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PEGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PEGraphicsItem::highlightSignal(PEGraphicsItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PEGraphicsItem::mousePressedSignal(PEGraphicsItem * _t1, bool & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PEGraphicsItem::mouseReleasedSignal(PEGraphicsItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PEGraphicsItem::terminalPointMoved(PEGraphicsItem * _t1, QPointF _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PEGraphicsItem::terminalPointChanged(PEGraphicsItem * _t1, QPointF _t2, QPointF _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
