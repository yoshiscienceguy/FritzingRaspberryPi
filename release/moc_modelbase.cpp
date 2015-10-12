/****************************************************************************
** Meta object code from reading C++ file 'modelbase.h'
**
** Created: Sun Sep 27 18:05:28 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/model/modelbase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelbase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ModelBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   47,   54,   54, 0x05,
      55,   99,   54,   54, 0x05,
     114,  156,   54,   54, 0x05,
     167,  208,   54,   54, 0x05,
     218,  156,   54,   54, 0x05,
     259,   54,   54,   54, 0x05,
     290,  325,   54,   54, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ModelBase[] = {
    "ModelBase\0loadedViews(ModelBase*,QDomElement&)\0"
    ",views\0\0loadedRoot(QString,ModelBase*,QDomElement&)\0"
    "fileName,,root\0loadingInstances(ModelBase*,QDomElement&)\0"
    ",instances\0loadingInstance(ModelBase*,QDomElement&)\0"
    ",instance\0loadedInstances(ModelBase*,QDomElement&)\0"
    "obsoleteSMDOrientationSignal()\0"
    "oldSchematicsSignal(QString,bool&)\0"
    "filename,useOldSchematics\0"
};

void ModelBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModelBase *_t = static_cast<ModelBase *>(_o);
        switch (_id) {
        case 0: _t->loadedViews((*reinterpret_cast< ModelBase*(*)>(_a[1])),(*reinterpret_cast< QDomElement(*)>(_a[2]))); break;
        case 1: _t->loadedRoot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< ModelBase*(*)>(_a[2])),(*reinterpret_cast< QDomElement(*)>(_a[3]))); break;
        case 2: _t->loadingInstances((*reinterpret_cast< ModelBase*(*)>(_a[1])),(*reinterpret_cast< QDomElement(*)>(_a[2]))); break;
        case 3: _t->loadingInstance((*reinterpret_cast< ModelBase*(*)>(_a[1])),(*reinterpret_cast< QDomElement(*)>(_a[2]))); break;
        case 4: _t->loadedInstances((*reinterpret_cast< ModelBase*(*)>(_a[1])),(*reinterpret_cast< QDomElement(*)>(_a[2]))); break;
        case 5: _t->obsoleteSMDOrientationSignal(); break;
        case 6: _t->oldSchematicsSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ModelBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModelBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModelBase,
      qt_meta_data_ModelBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModelBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModelBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModelBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModelBase))
        return static_cast<void*>(const_cast< ModelBase*>(this));
    return QObject::qt_metacast(_clname);
}

int ModelBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ModelBase::loadedViews(ModelBase * _t1, QDomElement & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ModelBase::loadedRoot(const QString & _t1, ModelBase * _t2, QDomElement & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ModelBase::loadingInstances(ModelBase * _t1, QDomElement & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ModelBase::loadingInstance(ModelBase * _t1, QDomElement & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ModelBase::loadedInstances(ModelBase * _t1, QDomElement & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ModelBase::obsoleteSMDOrientationSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void ModelBase::oldSchematicsSignal(const QString & _t1, bool & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
