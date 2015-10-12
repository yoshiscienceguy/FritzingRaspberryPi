/****************************************************************************
** Meta object code from reading C++ file 'stacktabbar.h'
**
** Created: Sun Sep 27 17:54:35 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/partsbinpalette/binmanager/stacktabbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stacktabbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StackTabBar[] = {

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
      12,   23,   23,   23, 0x0a,
      24,   48,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_StackTabBar[] = {
    "StackTabBar\0setIndex()\0\0showContextMenu(QPoint)\0"
    "point\0"
};

void StackTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StackTabBar *_t = static_cast<StackTabBar *>(_o);
        switch (_id) {
        case 0: _t->setIndex(); break;
        case 1: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StackTabBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StackTabBar::staticMetaObject = {
    { &QTabBar::staticMetaObject, qt_meta_stringdata_StackTabBar,
      qt_meta_data_StackTabBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StackTabBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StackTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StackTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StackTabBar))
        return static_cast<void*>(const_cast< StackTabBar*>(this));
    return QTabBar::qt_metacast(_clname);
}

int StackTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
