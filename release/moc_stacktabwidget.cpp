/****************************************************************************
** Meta object code from reading C++ file 'stacktabwidget.h'
**
** Created: Sun Sep 27 17:54:40 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/partsbinpalette/binmanager/stacktabwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stacktabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StackTabWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   51,   58,   58, 0x05,
      59,   51,   58,   58, 0x05,

 // slots: signature, parameters, type, tag, flags
      98,  124,   58,   58, 0x0a,
     130,  124,   58,   58, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StackTabWidget[] = {
    "StackTabWidget\0currentChanged(StackTabWidget*,int)\0"
    ",index\0\0tabCloseRequested(StackTabWidget*,int)\0"
    "informCurrentChanged(int)\0index\0"
    "informTabCloseRequested(int)\0"
};

void StackTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StackTabWidget *_t = static_cast<StackTabWidget *>(_o);
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< StackTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->tabCloseRequested((*reinterpret_cast< StackTabWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->informCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->informTabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StackTabWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StackTabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_StackTabWidget,
      qt_meta_data_StackTabWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StackTabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StackTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StackTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StackTabWidget))
        return static_cast<void*>(const_cast< StackTabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int StackTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void StackTabWidget::currentChanged(StackTabWidget * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StackTabWidget::tabCloseRequested(StackTabWidget * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
