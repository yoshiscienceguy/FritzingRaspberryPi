/****************************************************************************
** Meta object code from reading C++ file 'svgpathrunner.h'
**
** Created: Sun Sep 27 17:56:15 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/svg/svgpathrunner.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'svgpathrunner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SVGPathRunner[] = {

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
      14,   61,   92,   92, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SVGPathRunner[] = {
    "SVGPathRunner\0"
    "commandSignal(QChar,bool,QList<double>&,void*)\0"
    "command,relative,args,userData\0\0"
};

void SVGPathRunner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SVGPathRunner *_t = static_cast<SVGPathRunner *>(_o);
        switch (_id) {
        case 0: _t->commandSignal((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SVGPathRunner::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SVGPathRunner::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SVGPathRunner,
      qt_meta_data_SVGPathRunner, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SVGPathRunner::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SVGPathRunner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SVGPathRunner::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SVGPathRunner))
        return static_cast<void*>(const_cast< SVGPathRunner*>(this));
    return QObject::qt_metacast(_clname);
}

int SVGPathRunner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SVGPathRunner::commandSignal(QChar _t1, bool _t2, QList<double> & _t3, void * _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
