/****************************************************************************
** Meta object code from reading C++ file 'schematicsketchwidget.h'
**
** Created: Sun Sep 27 18:06:40 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/sketch/schematicsketchwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schematicsketchwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SchematicSketchWidget[] = {

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
      22,   46,   61,   61, 0x0a,
      62,  118,   61,   61, 0x0a,
     172,  221,   61,   61, 0x0a,
     260,   61,   61,   61, 0x09,
     276,  352,   61,   61, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SchematicSketchWidget[] = {
    "SchematicSketchWidget\0setVoltage(double,bool)\0"
    "voltage,doEmit\0\0"
    "setProp(ItemBase*,QString,QString,QString,QString,bool)\0"
    ",propName,translatedPropName,oldValue,newValue,redraw\0"
    "setInstanceTitle(long,QString,QString,bool,bool)\0"
    "id,oldTitle,newTitle,isUndoable,doEmit\0"
    "updateBigDots()\0"
    "getDroppedItemViewLayerPlacement(ModelPart*,ViewLayer::ViewLayerPlacem"
    "ent&)\0"
    "modelPart,\0"
};

void SchematicSketchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SchematicSketchWidget *_t = static_cast<SchematicSketchWidget *>(_o);
        switch (_id) {
        case 0: _t->setVoltage((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->setProp((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 2: _t->setInstanceTitle((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 3: _t->updateBigDots(); break;
        case 4: _t->getDroppedItemViewLayerPlacement((*reinterpret_cast< ModelPart*(*)>(_a[1])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SchematicSketchWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SchematicSketchWidget::staticMetaObject = {
    { &PCBSketchWidget::staticMetaObject, qt_meta_stringdata_SchematicSketchWidget,
      qt_meta_data_SchematicSketchWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SchematicSketchWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SchematicSketchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SchematicSketchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SchematicSketchWidget))
        return static_cast<void*>(const_cast< SchematicSketchWidget*>(this));
    return PCBSketchWidget::qt_metacast(_clname);
}

int SchematicSketchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PCBSketchWidget::qt_metacall(_c, _id, _a);
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
