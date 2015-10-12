/****************************************************************************
** Meta object code from reading C++ file 'debugdialog.h'
**
** Created: Sun Sep 27 17:52:23 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/debugdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debugdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DebugDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   56,   74,   74, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_DebugDialog[] = {
    "DebugDialog\0debugBroadcast(QString,DebugLevel,QObject*)\0"
    "message,,ancestor\0\0"
};

void DebugDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DebugDialog *_t = static_cast<DebugDialog *>(_o);
        switch (_id) {
        case 0: _t->debugBroadcast((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< DebugLevel(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DebugDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DebugDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DebugDialog,
      qt_meta_data_DebugDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DebugDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DebugDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DebugDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DebugDialog))
        return static_cast<void*>(const_cast< DebugDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int DebugDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DebugDialog::debugBroadcast(const QString & _t1, DebugLevel _t2, QObject * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
