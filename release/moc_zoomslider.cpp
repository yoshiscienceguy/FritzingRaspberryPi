/****************************************************************************
** Meta object code from reading C++ file 'zoomslider.h'
**
** Created: Sun Sep 27 17:58:14 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/utils/zoomslider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zoomslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZoomLabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ZoomLabel[] = {
    "ZoomLabel\0clicked()\0\0repeat()\0"
};

void ZoomLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZoomLabel *_t = static_cast<ZoomLabel *>(_o);
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->repeat(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ZoomLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZoomLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ZoomLabel,
      qt_meta_data_ZoomLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZoomLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZoomLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZoomLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZoomLabel))
        return static_cast<void*>(const_cast< ZoomLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int ZoomLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ZoomLabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_ZoomSlider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   31,   39,   39, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   64,   39,   39, 0x09,
      73,   99,   39,   39, 0x09,
     107,   39,   39,   39, 0x09,
     122,   39,   39,   39, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ZoomSlider[] = {
    "ZoomSlider\0zoomChanged(double)\0newZoom\0"
    "\0sliderValueChanged(int)\0newValue\0"
    "sliderTextEdited(QString)\0newText\0"
    "minusClicked()\0plusClicked()\0"
};

void ZoomSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ZoomSlider *_t = static_cast<ZoomSlider *>(_o);
        switch (_id) {
        case 0: _t->zoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->sliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sliderTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->minusClicked(); break;
        case 4: _t->plusClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ZoomSlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ZoomSlider::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ZoomSlider,
      qt_meta_data_ZoomSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZoomSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZoomSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZoomSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZoomSlider))
        return static_cast<void*>(const_cast< ZoomSlider*>(this));
    return QFrame::qt_metacast(_clname);
}

int ZoomSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ZoomSlider::zoomChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
