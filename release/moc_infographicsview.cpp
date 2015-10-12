/****************************************************************************
** Meta object code from reading C++ file 'infographicsview.h'
**
** Created: Sun Sep 27 18:06:19 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/sketch/infographicsview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'infographicsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InfoGraphicsView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   47,   55,   55, 0x05,
      56,  117,   55,   55, 0x05,
     139,  177,   55,   55, 0x05,
     188,   55,   55,   55, 0x05,
     215,   55,   55,   55, 0x05,
     260,   55,   55,   55, 0x05,

 // slots: signature, parameters, type, tag, flags
     281,   47,   55,   55, 0x0a,
     305,  337,   55,   55, 0x0a,
     348,  397,   55,   55, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_InfoGraphicsView[] = {
    "InfoGraphicsView\0setVoltageSignal(double,bool)\0"
    ",doEmit\0\0"
    "swapSignal(QString,QString,QMap<QString,QString>&,ItemBase*)\0"
    "family,prop,propsMap,\0"
    "changePinLabelsSignal(ItemBase*,bool)\0"
    ",singleRow\0setActiveWireSignal(Wire*)\0"
    "setActiveConnectorItemSignal(ConnectorItem*)\0"
    "newWireSignal(Wire*)\0setVoltage(double,bool)\0"
    "resizeBoard(double,double,bool)\0"
    "w,h,doEmit\0setInstanceTitle(long,QString,QString,bool,bool)\0"
    "id,oldTitle,newTitle,isUndoable,doEmit\0"
};

void InfoGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InfoGraphicsView *_t = static_cast<InfoGraphicsView *>(_o);
        switch (_id) {
        case 0: _t->setVoltageSignal((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->swapSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QMap<QString,QString>(*)>(_a[3])),(*reinterpret_cast< ItemBase*(*)>(_a[4]))); break;
        case 2: _t->changePinLabelsSignal((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->setActiveWireSignal((*reinterpret_cast< Wire*(*)>(_a[1]))); break;
        case 4: _t->setActiveConnectorItemSignal((*reinterpret_cast< ConnectorItem*(*)>(_a[1]))); break;
        case 5: _t->newWireSignal((*reinterpret_cast< Wire*(*)>(_a[1]))); break;
        case 6: _t->setVoltage((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->resizeBoard((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 8: _t->setInstanceTitle((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InfoGraphicsView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InfoGraphicsView::staticMetaObject = {
    { &ZoomableGraphicsView::staticMetaObject, qt_meta_stringdata_InfoGraphicsView,
      qt_meta_data_InfoGraphicsView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InfoGraphicsView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InfoGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InfoGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InfoGraphicsView))
        return static_cast<void*>(const_cast< InfoGraphicsView*>(this));
    return ZoomableGraphicsView::qt_metacast(_clname);
}

int InfoGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZoomableGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void InfoGraphicsView::setVoltageSignal(double _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InfoGraphicsView::swapSignal(const QString & _t1, const QString & _t2, QMap<QString,QString> & _t3, ItemBase * _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InfoGraphicsView::changePinLabelsSignal(ItemBase * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InfoGraphicsView::setActiveWireSignal(Wire * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void InfoGraphicsView::setActiveConnectorItemSignal(ConnectorItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void InfoGraphicsView::newWireSignal(Wire * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
