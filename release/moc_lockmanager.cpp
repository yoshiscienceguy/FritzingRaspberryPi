/****************************************************************************
** Meta object code from reading C++ file 'lockmanager.h'
**
** Created: Sun Sep 27 17:57:59 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/utils/lockmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lockmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LockManager[] = {

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
      12,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LockManager[] = {
    "LockManager\0touchFiles()\0\0"
};

void LockManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LockManager *_t = static_cast<LockManager *>(_o);
        switch (_id) {
        case 0: _t->touchFiles(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LockManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LockManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LockManager,
      qt_meta_data_LockManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LockManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LockManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LockManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LockManager))
        return static_cast<void*>(const_cast< LockManager*>(this));
    return QObject::qt_metacast(_clname);
}

int LockManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
