/****************************************************************************
** Meta object code from reading C++ file 'pcbsketchwidget.h'
**
** Created: Sun Sep 27 18:06:28 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/sketch/pcbsketchwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pcbsketchwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PCBSketchWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,  113,  148,  148, 0x05,
     149,  148,  148,  148, 0x05,
     170,  148,  148,  148, 0x05,
     189,  148,  148,  148, 0x05,

 // slots: signature, parameters, type, tag, flags
     208,  240,  148,  148, 0x0a,
     251,  286,  148,  148, 0x0a,
     305,  333,  148,  148, 0x0a,
     347,  379,  386,  148, 0x0a,
     396,  434,  148,  148, 0x09,
     436,  480,  148,  148, 0x09,
     503,  586,  148,  148, 0x09,
     617,  148,  148,  148, 0x09,
     645,  148,  148,  148, 0x09,
     663,  739,  148,  148, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PCBSketchWidget[] = {
    "PCBSketchWidget\0"
    "subSwapSignal(SketchWidget*,ItemBase*,QString,ViewLayer::ViewLayerPlac"
    "ement,long&,QUndoCommand*)\0"
    ",,newModuleID,,newID,parentCommand\0\0"
    "boardDeletedSignal()\0groundFillSignal()\0"
    "copperFillSignal()\0resizeBoard(double,double,bool)\0"
    "w,h,doEmit\0showLabelFirstTime(long,bool,bool)\0"
    "itemID,show,doEmit\0changeBoardLayers(int,bool)\0"
    "layers,doEmit\0resizeBoard(long,double,double)\0"
    "id,w,h\0ItemBase*\0alignJumperItem(JumperItem*,QPointF&)\0"
    ",\0wireSplitSlot(Wire*,QPointF,QPointF,QLineF)\0"
    ",newPos,oldPos,oldLine\0"
    "postImageSlot(GroundPlaneGenerator*,QImage*,QImage*,QGraphicsItem*,QLi"
    "st<QRectF>*)\0"
    ",copperImage,boardImage,board,\0"
    "gotFabQuote(QNetworkReply*)\0"
    "requestQuoteNow()\0"
    "getDroppedItemViewLayerPlacement(ModelPart*,ViewLayer::ViewLayerPlacem"
    "ent&)\0"
    "modelPart,\0"
};

void PCBSketchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PCBSketchWidget *_t = static_cast<PCBSketchWidget *>(_o);
        switch (_id) {
        case 0: _t->subSwapSignal((*reinterpret_cast< SketchWidget*(*)>(_a[1])),(*reinterpret_cast< ItemBase*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5])),(*reinterpret_cast< QUndoCommand*(*)>(_a[6]))); break;
        case 1: _t->boardDeletedSignal(); break;
        case 2: _t->groundFillSignal(); break;
        case 3: _t->copperFillSignal(); break;
        case 4: _t->resizeBoard((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->showLabelFirstTime((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->changeBoardLayers((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: { ItemBase* _r = _t->resizeBoard((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< ItemBase**>(_a[0]) = _r; }  break;
        case 8: _t->alignJumperItem((*reinterpret_cast< JumperItem*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 9: _t->wireSplitSlot((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3])),(*reinterpret_cast< QLineF(*)>(_a[4]))); break;
        case 10: _t->postImageSlot((*reinterpret_cast< GroundPlaneGenerator*(*)>(_a[1])),(*reinterpret_cast< QImage*(*)>(_a[2])),(*reinterpret_cast< QImage*(*)>(_a[3])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[4])),(*reinterpret_cast< QList<QRectF>*(*)>(_a[5]))); break;
        case 11: _t->gotFabQuote((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 12: _t->requestQuoteNow(); break;
        case 13: _t->getDroppedItemViewLayerPlacement((*reinterpret_cast< ModelPart*(*)>(_a[1])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PCBSketchWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PCBSketchWidget::staticMetaObject = {
    { &SketchWidget::staticMetaObject, qt_meta_stringdata_PCBSketchWidget,
      qt_meta_data_PCBSketchWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PCBSketchWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PCBSketchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PCBSketchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PCBSketchWidget))
        return static_cast<void*>(const_cast< PCBSketchWidget*>(this));
    return SketchWidget::qt_metacast(_clname);
}

int PCBSketchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SketchWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void PCBSketchWidget::subSwapSignal(SketchWidget * _t1, ItemBase * _t2, const QString & _t3, ViewLayer::ViewLayerPlacement _t4, long & _t5, QUndoCommand * _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PCBSketchWidget::boardDeletedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void PCBSketchWidget::groundFillSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void PCBSketchWidget::copperFillSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
