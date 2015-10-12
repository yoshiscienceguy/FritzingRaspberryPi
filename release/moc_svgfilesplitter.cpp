/****************************************************************************
** Meta object code from reading C++ file 'svgfilesplitter.h'
**
** Created: Sun Sep 27 17:56:10 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/svg/svgfilesplitter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'svgfilesplitter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SvgFileSplitter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   70,  101,  101, 0x09,
     102,   70,  101,  101, 0x09,
     152,  203,  101,  101, 0x09,
     207,   70,  101,  101, 0x09,
     263,   70,  101,  101, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SvgFileSplitter[] = {
    "SvgFileSplitter\0"
    "normalizeCommandSlot(QChar,bool,QList<double>&,void*)\0"
    "command,relative,args,userData\0\0"
    "shiftCommandSlot(QChar,bool,QList<double>&,void*)\0"
    "rotateCommandSlot(QChar,bool,QList<double>&,void*)\0"
    ",,,\0painterPathCommandSlot(QChar,bool,QList<double>&,void*)\0"
    "convertHVSlot(QChar,bool,QList<double>&,void*)\0"
};

void SvgFileSplitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SvgFileSplitter *_t = static_cast<SvgFileSplitter *>(_o);
        switch (_id) {
        case 0: _t->normalizeCommandSlot((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 1: _t->shiftCommandSlot((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 2: _t->rotateCommandSlot((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 3: _t->painterPathCommandSlot((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 4: _t->convertHVSlot((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SvgFileSplitter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SvgFileSplitter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SvgFileSplitter,
      qt_meta_data_SvgFileSplitter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SvgFileSplitter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SvgFileSplitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SvgFileSplitter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SvgFileSplitter))
        return static_cast<void*>(const_cast< SvgFileSplitter*>(this));
    return QObject::qt_metacast(_clname);
}

int SvgFileSplitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
