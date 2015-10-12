/****************************************************************************
** Meta object code from reading C++ file 'layerpalette.h'
**
** Created: Sun Sep 27 17:58:21 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/dock/layerpalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layerpalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewLayerCheckBox[] = {

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

static const char qt_meta_stringdata_ViewLayerCheckBox[] = {
    "ViewLayerCheckBox\0"
};

void ViewLayerCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ViewLayerCheckBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ViewLayerCheckBox::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_ViewLayerCheckBox,
      qt_meta_data_ViewLayerCheckBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewLayerCheckBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewLayerCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewLayerCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewLayerCheckBox))
        return static_cast<void*>(const_cast< ViewLayerCheckBox*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int ViewLayerCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_LayerPalette[] = {

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
      13,   38,   42,   42, 0x09,
      43,   38,   42,   42, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_LayerPalette[] = {
    "LayerPalette\0setLayerVisibility(bool)\0"
    "vis\0\0setAllLayersVisible(bool)\0"
};

void LayerPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LayerPalette *_t = static_cast<LayerPalette *>(_o);
        switch (_id) {
        case 0: _t->setLayerVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setAllLayersVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LayerPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LayerPalette::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_LayerPalette,
      qt_meta_data_LayerPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LayerPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LayerPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LayerPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LayerPalette))
        return static_cast<void*>(const_cast< LayerPalette*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int LayerPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
