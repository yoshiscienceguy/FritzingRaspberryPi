/****************************************************************************
** Meta object code from reading C++ file 'zoomablegraphicsview.h'
**
** Created: Sun Sep 27 18:07:15 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/sketch/zoomablegraphicsview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zoomablegraphicsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZoomableGraphicsView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   41,   46,   46, 0x05,
      47,   41,   46,   46, 0x05,
      70,   46,   46,   46, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ZoomableGraphicsView[] = {
    "ZoomableGraphicsView\0zoomChanged(double)\0"
    "zoom\0\0zoomOutOfRange(double)\0wheelSignal()\0"
};

void ZoomableGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZoomableGraphicsView *_t = static_cast<ZoomableGraphicsView *>(_o);
        switch (_id) {
        case 0: _t->zoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->zoomOutOfRange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->wheelSignal(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ZoomableGraphicsView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZoomableGraphicsView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_ZoomableGraphicsView,
      qt_meta_data_ZoomableGraphicsView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZoomableGraphicsView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZoomableGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZoomableGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZoomableGraphicsView))
        return static_cast<void*>(const_cast< ZoomableGraphicsView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int ZoomableGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ZoomableGraphicsView::zoomChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ZoomableGraphicsView::zoomOutOfRange(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ZoomableGraphicsView::wheelSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
