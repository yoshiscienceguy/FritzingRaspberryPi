/****************************************************************************
** Meta object code from reading C++ file 'schematicframe.h'
**
** Created: Sun Sep 27 18:01:37 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/items/schematicframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schematicframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SchematicFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   27,   27,   27, 0x09,
      28,   27,   27,   27, 0x09,
      53,   27,   27,   27, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SchematicFrame[] = {
    "SchematicFrame\0propEntry()\0\0"
    "dateTimeEntry(QDateTime)\0sheetEntry(int)\0"
};

void SchematicFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SchematicFrame *_t = static_cast<SchematicFrame *>(_o);
        switch (_id) {
        case 0: _t->propEntry(); break;
        case 1: _t->dateTimeEntry((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 2: _t->sheetEntry((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SchematicFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SchematicFrame::staticMetaObject = {
    { &ResizableBoard::staticMetaObject, qt_meta_stringdata_SchematicFrame,
      qt_meta_data_SchematicFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SchematicFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SchematicFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SchematicFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SchematicFrame))
        return static_cast<void*>(const_cast< SchematicFrame*>(this));
    return ResizableBoard::qt_metacast(_clname);
}

int SchematicFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResizableBoard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
