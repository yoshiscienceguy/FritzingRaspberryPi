/****************************************************************************
** Meta object code from reading C++ file 'resizableboard.h'
**
** Created: Sun Sep 27 18:01:16 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/items/resizableboard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resizableboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Board[] = {

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
       6,   22,   22,   22, 0x09,
      23,   46,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Board[] = {
    "Board\0prepLoadImage()\0\0fileNameEntry(QString)\0"
    "filename\0"
};

void Board::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Board *_t = static_cast<Board *>(_o);
        switch (_id) {
        case 0: _t->prepLoadImage(); break;
        case 1: _t->fileNameEntry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Board::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Board::staticMetaObject = {
    { &PaletteItem::staticMetaObject, qt_meta_stringdata_Board,
      qt_meta_data_Board, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Board::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Board::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Board::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Board))
        return static_cast<void*>(const_cast< Board*>(this));
    return PaletteItem::qt_metacast(_clname);
}

int Board::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PaletteItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_ResizableBoard[] = {

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
      15,   28,   28,   28, 0x0a,
      29,   28,   28,   28, 0x0a,
      43,   65,   28,   28, 0x0a,
      76,   28,   28,   28, 0x0a,
      93,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ResizableBoard[] = {
    "ResizableBoard\0widthEntry()\0\0heightEntry()\0"
    "keepAspectRatio(bool)\0checkState\0"
    "revertSize(bool)\0paperSizeChanged(int)\0"
};

void ResizableBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ResizableBoard *_t = static_cast<ResizableBoard *>(_o);
        switch (_id) {
        case 0: _t->widthEntry(); break;
        case 1: _t->heightEntry(); break;
        case 2: _t->keepAspectRatio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->revertSize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->paperSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ResizableBoard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ResizableBoard::staticMetaObject = {
    { &Board::staticMetaObject, qt_meta_stringdata_ResizableBoard,
      qt_meta_data_ResizableBoard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ResizableBoard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ResizableBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ResizableBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ResizableBoard))
        return static_cast<void*>(const_cast< ResizableBoard*>(this));
    return Board::qt_metacast(_clname);
}

int ResizableBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Board::qt_metacall(_c, _id, _a);
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
