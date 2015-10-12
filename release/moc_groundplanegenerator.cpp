/****************************************************************************
** Meta object code from reading C++ file 'groundplanegenerator.h'
**
** Created: Sun Sep 27 17:56:24 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/svg/groundplanegenerator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groundplanegenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GroundPlaneGenerator[] = {

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
      21,  106,  137,  137, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GroundPlaneGenerator[] = {
    "GroundPlaneGenerator\0"
    "postImageSignal(GroundPlaneGenerator*,QImage*,QImage*,QGraphicsItem*,Q"
    "List<QRectF>*)\0"
    ",copperImage,boardImage,board,\0\0"
};

void GroundPlaneGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GroundPlaneGenerator *_t = static_cast<GroundPlaneGenerator *>(_o);
        switch (_id) {
        case 0: _t->postImageSignal((*reinterpret_cast< GroundPlaneGenerator*(*)>(_a[1])),(*reinterpret_cast< QImage*(*)>(_a[2])),(*reinterpret_cast< QImage*(*)>(_a[3])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[4])),(*reinterpret_cast< QList<QRectF>*(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GroundPlaneGenerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GroundPlaneGenerator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GroundPlaneGenerator,
      qt_meta_data_GroundPlaneGenerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GroundPlaneGenerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GroundPlaneGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GroundPlaneGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GroundPlaneGenerator))
        return static_cast<void*>(const_cast< GroundPlaneGenerator*>(this));
    return QObject::qt_metacast(_clname);
}

int GroundPlaneGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void GroundPlaneGenerator::postImageSignal(GroundPlaneGenerator * _t1, QImage * _t2, QImage * _t3, QGraphicsItem * _t4, QList<QRectF> * _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
