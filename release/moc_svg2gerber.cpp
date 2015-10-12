/****************************************************************************
** Meta object code from reading C++ file 'svg2gerber.h'
**
** Created: Sun Sep 27 17:56:19 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/svg/svg2gerber.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'svg2gerber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SVG2gerber[] = {

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
      11,   65,   96,   96, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SVG2gerber[] = {
    "SVG2gerber\0"
    "path2gerbCommandSlot(QChar,bool,QList<double>&,void*)\0"
    "command,relative,args,userData\0\0"
};

void SVG2gerber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SVG2gerber *_t = static_cast<SVG2gerber *>(_o);
        switch (_id) {
        case 0: _t->path2gerbCommandSlot((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SVG2gerber::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SVG2gerber::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SVG2gerber,
      qt_meta_data_SVG2gerber, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SVG2gerber::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SVG2gerber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SVG2gerber::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SVG2gerber))
        return static_cast<void*>(const_cast< SVG2gerber*>(this));
    return QObject::qt_metacast(_clname);
}

int SVG2gerber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
