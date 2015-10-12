/****************************************************************************
** Meta object code from reading C++ file 'modelpartshared.h'
**
** Created: Sun Sep 27 18:05:42 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/model/modelpartshared.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelpartshared.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ModelPartShared[] = {

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
      16,   30,   30,   30, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ModelPartShared[] = {
    "ModelPartShared\0removeOwner()\0\0"
};

void ModelPartShared::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModelPartShared *_t = static_cast<ModelPartShared *>(_o);
        switch (_id) {
        case 0: _t->removeOwner(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ModelPartShared::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModelPartShared::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModelPartShared,
      qt_meta_data_ModelPartShared, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModelPartShared::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModelPartShared::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModelPartShared::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModelPartShared))
        return static_cast<void*>(const_cast< ModelPartShared*>(this));
    return QObject::qt_metacast(_clname);
}

int ModelPartShared::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_ModelPartSharedRoot[] = {

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

static const char qt_meta_stringdata_ModelPartSharedRoot[] = {
    "ModelPartSharedRoot\0"
};

void ModelPartSharedRoot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ModelPartSharedRoot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModelPartSharedRoot::staticMetaObject = {
    { &ModelPartShared::staticMetaObject, qt_meta_stringdata_ModelPartSharedRoot,
      qt_meta_data_ModelPartSharedRoot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModelPartSharedRoot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModelPartSharedRoot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModelPartSharedRoot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModelPartSharedRoot))
        return static_cast<void*>(const_cast< ModelPartSharedRoot*>(this));
    return ModelPartShared::qt_metacast(_clname);
}

int ModelPartSharedRoot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelPartShared::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
