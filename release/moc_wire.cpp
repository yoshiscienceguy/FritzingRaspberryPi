/****************************************************************************
** Meta object code from reading C++ file 'wire.h'
**
** Created: Sun Sep 27 18:02:53 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/items/wire.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wire.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WireAction[] = {

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

static const char qt_meta_stringdata_WireAction[] = {
    "WireAction\0"
};

void WireAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WireAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WireAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_WireAction,
      qt_meta_data_WireAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WireAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WireAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WireAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WireAction))
        return static_cast<void*>(const_cast< WireAction*>(this));
    return QAction::qt_metacast(_clname);
}

int WireAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Wire[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
       5,   90,  131,  131, 0x05,
     132,  195,  131,  131, 0x05,
     225,  271,  131,  131, 0x05,
     296,  333,  131,  131, 0x05,

 // slots: signature, parameters, type, tag, flags
     357,  377,  131,  131, 0x09,
     382,  131,  131,  131, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Wire[] = {
    "Wire\0"
    "wireChangedSignal(Wire*,QLineF,QLineF,QPointF,QPointF,ConnectorItem*,C"
    "onnectorItem*)\0"
    "me,oldLine,newLine,oldPos,newPos,from,to\0"
    "\0wireChangedCurveSignal(Wire*,const Bezier*,const Bezier*,bool)\0"
    "me,oldB,newB,triggerFirstTime\0"
    "wireSplitSignal(Wire*,QPointF,QPointF,QLineF)\0"
    "me,newPos,oldPos,oldLine\0"
    "wireJoinSignal(Wire*,ConnectorItem*)\0"
    "me,clickedConnectorItem\0colorEntry(QString)\0"
    "text\0setBandedProp(bool)\0"
};

void Wire::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Wire *_t = static_cast<Wire *>(_o);
        switch (_id) {
        case 0: _t->wireChangedSignal((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< const QLineF(*)>(_a[2])),(*reinterpret_cast< const QLineF(*)>(_a[3])),(*reinterpret_cast< QPointF(*)>(_a[4])),(*reinterpret_cast< QPointF(*)>(_a[5])),(*reinterpret_cast< ConnectorItem*(*)>(_a[6])),(*reinterpret_cast< ConnectorItem*(*)>(_a[7]))); break;
        case 1: _t->wireChangedCurveSignal((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< const Bezier*(*)>(_a[2])),(*reinterpret_cast< const Bezier*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->wireSplitSignal((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3])),(*reinterpret_cast< const QLineF(*)>(_a[4]))); break;
        case 3: _t->wireJoinSignal((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< ConnectorItem*(*)>(_a[2]))); break;
        case 4: _t->colorEntry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setBandedProp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Wire::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Wire::staticMetaObject = {
    { &ItemBase::staticMetaObject, qt_meta_stringdata_Wire,
      qt_meta_data_Wire, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Wire::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Wire::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Wire::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Wire))
        return static_cast<void*>(const_cast< Wire*>(this));
    if (!strcmp(_clname, "CursorKeyListener"))
        return static_cast< CursorKeyListener*>(const_cast< Wire*>(this));
    return ItemBase::qt_metacast(_clname);
}

int Wire::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ItemBase::qt_metacall(_c, _id, _a);
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
void Wire::wireChangedSignal(Wire * _t1, const QLineF & _t2, const QLineF & _t3, QPointF _t4, QPointF _t5, ConnectorItem * _t6, ConnectorItem * _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Wire::wireChangedCurveSignal(Wire * _t1, const Bezier * _t2, const Bezier * _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Wire::wireSplitSignal(Wire * _t1, QPointF _t2, QPointF _t3, const QLineF & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Wire::wireJoinSignal(Wire * _t1, ConnectorItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
