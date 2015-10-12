/****************************************************************************
** Meta object code from reading C++ file 'sketchwidget.h'
**
** Created: Sun Sep 27 18:06:51 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/sketch/sketchwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sketchwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SizeItem[] = {

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

static const char qt_meta_stringdata_SizeItem[] = {
    "SizeItem\0"
};

void SizeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SizeItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SizeItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SizeItem,
      qt_meta_data_SizeItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SizeItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SizeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SizeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SizeItem))
        return static_cast<void*>(const_cast< SizeItem*>(this));
    if (!strcmp(_clname, "QGraphicsLineItem"))
        return static_cast< QGraphicsLineItem*>(const_cast< SizeItem*>(this));
    return QObject::qt_metacast(_clname);
}

int SizeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_SketchWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
     110,   14, // methods
       3,  564, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      45,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,  113,  131,  131, 0x05,
     132,  156,  131,  131, 0x05,
     159,  131,  131,  131, 0x05,
     182,  212,  131,  131, 0x05,
     221,  131,  131,  131, 0x05,
     248,  285,  131,  131, 0x05,
     308,  355,  131,  131, 0x05,
     397,  487,  131,  131, 0x05,
     556,  131,  131,  131, 0x05,
     604,  131,  131,  131, 0x05,
     645,  131,  131,  131, 0x05,
     670,  131,  131,  131, 0x05,
     685,  704,  131,  131, 0x05,
     708,  757,  131,  131, 0x05,
     759,  801,  131,  131, 0x05,
     816,  848,  131,  131, 0x05,
     861,  915,  131,  131, 0x05,
     939, 1028,  131,  131, 0x05,
    1057, 1104,  131,  131, 0x05,
    1140, 1186,  131,  131, 0x05,
    1220, 1275,  131,  131, 0x05,
    1314, 1347,  131,  131, 0x05,
    1356, 1397,  131,  131, 0x05,
    1416,  131,  131,  131, 0x05,
    1447, 1481,  131,  131, 0x05,
    1489, 1590,  131,  131, 0x05,
    1656, 1718,  131,  131, 0x05,
    1749, 1718,  131,  131, 0x05,
    1812, 1848,  131,  131, 0x05,
    1864, 1910,  131,  131, 0x05,
    1940, 1981,  131,  131, 0x05,
    1988, 2015,  131,  131, 0x05,
    2024, 2069,  131,  131, 0x05,
    2090, 2149,  131,  131, 0x05,
    2170,  131,  131,  131, 0x05,
    2194, 2261,  131,  131, 0x05,
    2309, 2349,  131,  131, 0x05,
    2365, 2398,  131,  131, 0x05,
    2415,  131,  131,  131, 0x05,
    2438, 2487,  131,  131, 0x05,
    2491,  131,  131,  131, 0x05,
    2516, 2545,  131,  131, 0x05,
    2552, 2585,  131,  131, 0x05,
    2605, 2687,  131,  131, 0x05,
    2698, 2750,  131,  131, 0x05,

 // slots: signature, parameters, type, tag, flags
    2776,  113,  131,  131, 0x09,
    2874,  156,  131,  131, 0x09,
    2896,  131,  131,  131, 0x09,
    2917,  212,  131,  131, 0x09,
    2945,  131,  131,  131, 0x09,
    2968, 3051,  131,  131, 0x09,
    3090, 3151,  131,  131, 0x09,
    3179, 3223,  131,  131, 0x09,
    3246, 3281,  131,  131, 0x09,
    3303,  131,  131,  131, 0x09,
    3327,  355,  131,  131, 0x09,
    3372,  285,  131,  131, 0x09,
    3407,  487,  131,  131, 0x09,
    3495,  131,  131,  131, 0x09,
    3515,  131,  131,  131, 0x09,
    3541, 3568,  131,  131, 0x09,
    3584, 3607,  131,  131, 0x29,
    3615,  131,  131,  131, 0x09,
    3654,  131,  131,  131, 0x09,
    3675,  131,  131,  131, 0x09,
    3703,  131,  131,  131, 0x09,
    3723,  131,  131,  131, 0x09,
    3747,  131,  131,  131, 0x09,
    3771, 3806,  131,  131, 0x09,
    3823,  801,  131,  131, 0x09,
    3863,  131,  131,  131, 0x09,
    3909,  801,  131,  131, 0x09,
    3945, 1590,  131,  131, 0x09,
    4044,  131,  131,  131, 0x09,
    4060,  131,  131,  131, 0x09,
    4080, 1718,  131,  131, 0x09,
    4140, 1718,  131,  131, 0x09,
    4201, 1981,  131,  131, 0x09,
    4240, 4276,  131,  131, 0x09,
    4295, 4327,  131,  131, 0x09,
    4338, 2069,  131,  131, 0x09,
    4381, 2149,  131,  131, 0x09,
    4438,  131,  131,  131, 0x09,
    4456, 2349,  131,  131, 0x09,
    4490, 2398, 4517,  131, 0x09,
    4522, 2687,  131,  131, 0x09,
    4598, 4623,  131,  131, 0x0a,
    4632, 4661,  131,  131, 0x0a,
    4670,  848,  131,  131, 0x0a,
    4696, 4722,  131,  131, 0x0a,
    4737, 1275,  131,  131, 0x0a,
    4786,  156,  131,  131, 0x0a,
    4809, 4834,  131,  131, 0x0a,
    4844,  915,  131,  131, 0x0a,
    4892, 4924, 4931,  131, 0x0a,
    4941, 4988,  131,  131, 0x0a,
    5001, 1028,  131,  131, 0x0a,
    5088, 1104,  131,  131, 0x0a,
    5129, 5160,  131,  131, 0x0a,
    5182, 5222,  131,  131, 0x0a,
    5254, 5310,  131,  131, 0x0a,
    5364, 5440,  131,  131, 0x0a,
    5510, 1397,  131,  131, 0x0a,
    5545, 5577,  131,  131, 0x0a,
    5588, 5616,  131,  131, 0x0a,
    5630,  131,  131,  131, 0x0a,
    5649, 1910,  131,  131, 0x0a,
    5689, 2545,  131,  131, 0x0a,
    5712, 5739,  131,  131, 0x0a,
    5759, 2750,  131,  131, 0x0a,

 // properties: name, type, flags
    5805, 5815, 0x43095103,
    5822, 5836, 0x06095103,
    5843, 5836, 0x06095103,

       0        // eod
};

static const char qt_meta_stringdata_SketchWidget[] = {
    "SketchWidget\0"
    "itemAddedSignal(ModelPart*,ItemBase*,ViewLayer::ViewLayerPlacement,Vie"
    "wGeometry,long,SketchWidget*)\0"
    ",,,,id,dropOrigin\0\0itemDeletedSignal(long)\0"
    "id\0clearSelectionSignal()\0"
    "itemSelectedSignal(long,bool)\0id,state\0"
    "itemMovedSignal(ItemBase*)\0"
    "wireDisconnectedSignal(long,QString)\0"
    "fromID,fromConnectorID\0"
    "wireConnectedSignal(long,QString,long,QString)\0"
    "fromID,fromConnectorID,toID,toConnectorID\0"
    "changeConnectionSignal(long,QString,long,QString,ViewLayer::ViewLayerP"
    "lacement,bool,bool)\0"
    "fromID,fromConnectorID,toID,toConnectorID,,connect,updateConnections\0"
    "copyBoundingRectsSignal(QHash<QString,QRectF>&)\0"
    "cleanUpWiresSignal(CleanUpWiresCommand*)\0"
    "selectionChangedSignal()\0resizeSignal()\0"
    "dropSignal(QPoint)\0pos\0"
    "routingStatusSignal(SketchWidget*,RoutingStatus)\0"
    ",\0movingSignal(SketchWidget*,QUndoCommand*)\0"
    ",parentCommand\0selectAllItemsSignal(bool,bool)\0"
    "state,doEmit\0"
    "checkStickySignal(long,bool,bool,CheckStickyCommand*)\0"
    "id,doEmit,checkCurrent,\0"
    "disconnectAllSignal(QList<ConnectorItem*>,QHash<ItemBase*,SketchWidget"
    "*>&,QUndoCommand*)\0"
    ",itemsToDelete,parentCommand\0"
    "setResistanceSignal(long,QString,QString,bool)\0"
    "itemID,resistance,pinSpacing,doEmit\0"
    "setPropSignal(long,QString,QString,bool,bool)\0"
    "itemID,prop,value,doRedraw,doEmit\0"
    "setInstanceTitleSignal(long,QString,QString,bool,bool)\0"
    "id,oldTitle,newTitle,isUndoable,doEmit\0"
    "statusMessageSignal(QString,int)\0"
    ",timeout\0showLabelFirstTimeSignal(long,bool,bool)\0"
    "itemID,show,doEmit\0dropPasteSignal(SketchWidget*)\0"
    "changeBoardLayersSignal(int,bool)\0"
    ",doEmit\0"
    "deleteTracesSignal(QSet<ItemBase*>&,QHash<ItemBase*,SketchWidget*>&,QL"
    "ist<long>&,bool,QUndoCommand*)\0"
    "deletedItems,otherDeletedItems,deletedIDs,isForeign,parentCommand\0"
    "makeDeleteItemCommandPrepSignal(ItemBase*,bool,QUndoCommand*)\0"
    "itemBase,foreign,parentCommand\0"
    "makeDeleteItemCommandFinalSignal(ItemBase*,bool,QUndoCommand*)\0"
    "cursorLocationSignal(double,double)\0"
    "xinches,yinches\0"
    "ratsnestConnectSignal(long,QString,bool,bool)\0"
    "id,connectorID,connect,doEmit\0"
    "updatePartLabelInstanceTitleSignal(long)\0"
    "itemID\0filenameIfSignal(QString&)\0"
    "filename\0collectRatsnestSignal(QList<SketchWidget*>&)\0"
    "foreignSketchWidgets\0"
    "removeRatsnestSignal(QList<ConnectorEdge*>&,QUndoCommand*)\0"
    "cutSet,parentCommand\0updateLayerMenuSignal()\0"
    "swapBoardImageSignal(SketchWidget*,ItemBase*,QString,QString,bool)\0"
    "sketchWidget,itemBase,filename,moduleID,addName\0"
    "canConnectSignal(Wire*,ItemBase*,bool&)\0"
    "from,to,connect\0swapStartSignal(SwapThing&,bool)\0"
    "swapThing,master\0showing(SketchWidget*)\0"
    "clickedItemCandidateSignal(QGraphicsItem*,bool&)\0"
    ",ok\0resizedSignal(ItemBase*)\0"
    "cleanupRatsnestsSignal(bool)\0doEmit\0"
    "addSubpartSignal(long,long,bool)\0"
    "id,subpartID,doEmit\0"
    "getDroppedItemViewLayerPlacementSignal(ModelPart*,ViewLayer::ViewLayer"
    "Placement&)\0"
    "modelPart,\0"
    "packItemsSignal(int,QList<long>,QUndoCommand*,bool)\0"
    "columns,ids,parent,doEmit\0"
    "itemAddedSlot(ModelPart*,ItemBase*,ViewLayer::ViewLayerPlacement,ViewG"
    "eometry,long,SketchWidget*)\0"
    "itemDeletedSlot(long)\0clearSelectionSlot()\0"
    "itemSelectedSlot(long,bool)\0"
    "selectionChangedSlot()\0"
    "wireChangedSlot(Wire*,QLineF,QLineF,QPointF,QPointF,ConnectorItem*,Con"
    "nectorItem*)\0"
    ",oldLine,newLine,oldPos,newPos,from,to\0"
    "wireChangedCurveSlot(Wire*,const Bezier*,const Bezier*,bool)\0"
    ",oldB,newB,triggerFirstTime\0"
    "wireSplitSlot(Wire*,QPointF,QPointF,QLineF)\0"
    ",newPos,oldPos,oldLine\0"
    "wireJoinSlot(Wire*,ConnectorItem*)\0"
    ",clickedConnectorItem\0toggleLayerVisibility()\0"
    "wireConnectedSlot(long,QString,long,QString)\0"
    "wireDisconnectedSlot(long,QString)\0"
    "changeConnectionSlot(long,QString,long,QString,ViewLayer::ViewLayerPla"
    "cement,bool,bool)\0"
    "restartPasteCount()\0dragIsDoneSlot(ItemDrag*)\0"
    "statusMessage(QString,int)\0message,timeout\0"
    "statusMessage(QString)\0message\0"
    "cleanUpWiresSlot(CleanUpWiresCommand*)\0"
    "updateInfoViewSlot()\0spaceBarIsPressedSlot(bool)\0"
    "autoScrollTimeout()\0dragAutoScrollTimeout()\0"
    "moveAutoScrollTimeout()\0"
    "rememberSticky(long,QUndoCommand*)\0"
    "id,parentCommand\0"
    "rememberSticky(ItemBase*,QUndoCommand*)\0"
    "copyBoundingRectsSlot(QHash<QString,QRectF>&)\0"
    "deleteRatsnest(Wire*,QUndoCommand*)\0"
    "deleteTracesSlot(QSet<ItemBase*>&,QHash<ItemBase*,SketchWidget*>&,QLis"
    "t<long>&,bool,QUndoCommand*)\0"
    "vScrollToZero()\0arrowTimerTimeout()\0"
    "makeDeleteItemCommandPrepSlot(ItemBase*,bool,QUndoCommand*)\0"
    "makeDeleteItemCommandFinalSlot(ItemBase*,bool,QUndoCommand*)\0"
    "updatePartLabelInstanceTitleSlot(long)\0"
    "changePinLabelsSlot(ItemBase*,bool)\0"
    "itemBase,singleRow\0changePinLabels(ItemBase*,bool)\0"
    ",singleRow\0collectRatsnestSlot(QList<SketchWidget*>&)\0"
    "removeRatsnestSlot(QList<ConnectorEdge*>&,QUndoCommand*)\0"
    "deleteTemporary()\0canConnect(Wire*,ItemBase*,bool&)\0"
    "swapStart(SwapThing&,bool)\0long\0"
    "getDroppedItemViewLayerPlacement(ModelPart*,ViewLayer::ViewLayerPlacem"
    "ent&)\0"
    "changeWireColor(QString)\0newColor\0"
    "changeWireWidthMils(QString)\0newWidth\0"
    "selectAllItems(bool,bool)\0"
    "setNoteText(long,QString)\0itemID,newText\0"
    "setInstanceTitle(long,QString,QString,bool,bool)\0"
    "incInstanceTitle(long)\0showPartLabel(long,bool)\0"
    "id,showIt\0checkSticky(long,bool,bool,CheckStickyCommand*)\0"
    "resizeBoard(long,double,double)\0id,w,h\0"
    "ItemBase*\0resizeJumperItem(long,QPointF,QPointF,QPointF)\0"
    "id,pos,c0,c1\0"
    "disconnectAllSlot(QList<ConnectorItem*>,QHash<ItemBase*,SketchWidget*>"
    "&,QUndoCommand*)\0"
    "setResistance(long,QString,QString,bool)\0"
    "setResistance(QString,QString)\0"
    "resistance,pinSpacing\0"
    "setProp(long,QString,QString,bool,bool)\0"
    "itemID,prop,value,redraw,doEmit\0"
    "setProp(ItemBase*,QString,QString,QString,QString,bool)\0"
    ",propName,translatedPropName,oldValue,newValue,redraw\0"
    "setHoleSize(ItemBase*,QString,QString,QString,QString,QRectF&,QRectF&,"
    "bool)\0"
    ",propName,translatedPropName,oldValue,newValue,oldRect,newRect,redraw\0"
    "showLabelFirstTime(long,bool,bool)\0"
    "resizeBoard(double,double,bool)\0"
    "w,h,doEmit\0changeBoardLayers(int,bool)\0"
    "layers,doEmit\0updateConnectors()\0"
    "ratsnestConnect(long,QString,bool,bool)\0"
    "cleanupRatsnests(bool)\0"
    "addSubpart(long,long,bool)\0"
    "id,subpartid,doEmit\0"
    "packItems(int,QList<long>,QUndoCommand*,bool)\0"
    "gridColor\0QColor\0ratsnestWidth\0double\0"
    "ratsnestOpacity\0"
};

void SketchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SketchWidget *_t = static_cast<SketchWidget *>(_o);
        switch (_id) {
        case 0: _t->itemAddedSignal((*reinterpret_cast< ModelPart*(*)>(_a[1])),(*reinterpret_cast< ItemBase*(*)>(_a[2])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[3])),(*reinterpret_cast< const ViewGeometry(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5])),(*reinterpret_cast< SketchWidget*(*)>(_a[6]))); break;
        case 1: _t->itemDeletedSignal((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 2: _t->clearSelectionSignal(); break;
        case 3: _t->itemSelectedSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->itemMovedSignal((*reinterpret_cast< ItemBase*(*)>(_a[1]))); break;
        case 5: _t->wireDisconnectedSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->wireConnectedSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 7: _t->changeConnectionSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 8: _t->copyBoundingRectsSignal((*reinterpret_cast< QHash<QString,QRectF>(*)>(_a[1]))); break;
        case 9: _t->cleanUpWiresSignal((*reinterpret_cast< CleanUpWiresCommand*(*)>(_a[1]))); break;
        case 10: _t->selectionChangedSignal(); break;
        case 11: _t->resizeSignal(); break;
        case 12: _t->dropSignal((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->routingStatusSignal((*reinterpret_cast< SketchWidget*(*)>(_a[1])),(*reinterpret_cast< const RoutingStatus(*)>(_a[2]))); break;
        case 14: _t->movingSignal((*reinterpret_cast< SketchWidget*(*)>(_a[1])),(*reinterpret_cast< QUndoCommand*(*)>(_a[2]))); break;
        case 15: _t->selectAllItemsSignal((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->checkStickySignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< CheckStickyCommand*(*)>(_a[4]))); break;
        case 17: _t->disconnectAllSignal((*reinterpret_cast< QList<ConnectorItem*>(*)>(_a[1])),(*reinterpret_cast< QHash<ItemBase*,SketchWidget*>(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3]))); break;
        case 18: _t->setResistanceSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 19: _t->setPropSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 20: _t->setInstanceTitleSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 21: _t->statusMessageSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->showLabelFirstTimeSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 23: _t->dropPasteSignal((*reinterpret_cast< SketchWidget*(*)>(_a[1]))); break;
        case 24: _t->changeBoardLayersSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 25: _t->deleteTracesSignal((*reinterpret_cast< QSet<ItemBase*>(*)>(_a[1])),(*reinterpret_cast< QHash<ItemBase*,SketchWidget*>(*)>(_a[2])),(*reinterpret_cast< QList<long>(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QUndoCommand*(*)>(_a[5]))); break;
        case 26: _t->makeDeleteItemCommandPrepSignal((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3]))); break;
        case 27: _t->makeDeleteItemCommandFinalSignal((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3]))); break;
        case 28: _t->cursorLocationSignal((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 29: _t->ratsnestConnectSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 30: _t->updatePartLabelInstanceTitleSignal((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 31: _t->filenameIfSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->collectRatsnestSignal((*reinterpret_cast< QList<SketchWidget*>(*)>(_a[1]))); break;
        case 33: _t->removeRatsnestSignal((*reinterpret_cast< QList<ConnectorEdge*>(*)>(_a[1])),(*reinterpret_cast< QUndoCommand*(*)>(_a[2]))); break;
        case 34: _t->updateLayerMenuSignal(); break;
        case 35: _t->swapBoardImageSignal((*reinterpret_cast< SketchWidget*(*)>(_a[1])),(*reinterpret_cast< ItemBase*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 36: _t->canConnectSignal((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< ItemBase*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 37: _t->swapStartSignal((*reinterpret_cast< SwapThing(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 38: _t->showing((*reinterpret_cast< SketchWidget*(*)>(_a[1]))); break;
        case 39: _t->clickedItemCandidateSignal((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->resizedSignal((*reinterpret_cast< ItemBase*(*)>(_a[1]))); break;
        case 41: _t->cleanupRatsnestsSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->addSubpartSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 43: _t->getDroppedItemViewLayerPlacementSignal((*reinterpret_cast< ModelPart*(*)>(_a[1])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[2]))); break;
        case 44: _t->packItemsSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<long>(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 45: _t->itemAddedSlot((*reinterpret_cast< ModelPart*(*)>(_a[1])),(*reinterpret_cast< ItemBase*(*)>(_a[2])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[3])),(*reinterpret_cast< const ViewGeometry(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5])),(*reinterpret_cast< SketchWidget*(*)>(_a[6]))); break;
        case 46: _t->itemDeletedSlot((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 47: _t->clearSelectionSlot(); break;
        case 48: _t->itemSelectedSlot((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 49: _t->selectionChangedSlot(); break;
        case 50: _t->wireChangedSlot((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< const QLineF(*)>(_a[2])),(*reinterpret_cast< const QLineF(*)>(_a[3])),(*reinterpret_cast< QPointF(*)>(_a[4])),(*reinterpret_cast< QPointF(*)>(_a[5])),(*reinterpret_cast< ConnectorItem*(*)>(_a[6])),(*reinterpret_cast< ConnectorItem*(*)>(_a[7]))); break;
        case 51: _t->wireChangedCurveSlot((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< const Bezier*(*)>(_a[2])),(*reinterpret_cast< const Bezier*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 52: _t->wireSplitSlot((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3])),(*reinterpret_cast< const QLineF(*)>(_a[4]))); break;
        case 53: _t->wireJoinSlot((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< ConnectorItem*(*)>(_a[2]))); break;
        case 54: _t->toggleLayerVisibility(); break;
        case 55: _t->wireConnectedSlot((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 56: _t->wireDisconnectedSlot((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 57: _t->changeConnectionSlot((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 58: _t->restartPasteCount(); break;
        case 59: _t->dragIsDoneSlot((*reinterpret_cast< ItemDrag*(*)>(_a[1]))); break;
        case 60: _t->statusMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 61: _t->statusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 62: _t->cleanUpWiresSlot((*reinterpret_cast< CleanUpWiresCommand*(*)>(_a[1]))); break;
        case 63: _t->updateInfoViewSlot(); break;
        case 64: _t->spaceBarIsPressedSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: _t->autoScrollTimeout(); break;
        case 66: _t->dragAutoScrollTimeout(); break;
        case 67: _t->moveAutoScrollTimeout(); break;
        case 68: _t->rememberSticky((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QUndoCommand*(*)>(_a[2]))); break;
        case 69: _t->rememberSticky((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< QUndoCommand*(*)>(_a[2]))); break;
        case 70: _t->copyBoundingRectsSlot((*reinterpret_cast< QHash<QString,QRectF>(*)>(_a[1]))); break;
        case 71: _t->deleteRatsnest((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< QUndoCommand*(*)>(_a[2]))); break;
        case 72: _t->deleteTracesSlot((*reinterpret_cast< QSet<ItemBase*>(*)>(_a[1])),(*reinterpret_cast< QHash<ItemBase*,SketchWidget*>(*)>(_a[2])),(*reinterpret_cast< QList<long>(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QUndoCommand*(*)>(_a[5]))); break;
        case 73: _t->vScrollToZero(); break;
        case 74: _t->arrowTimerTimeout(); break;
        case 75: _t->makeDeleteItemCommandPrepSlot((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3]))); break;
        case 76: _t->makeDeleteItemCommandFinalSlot((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3]))); break;
        case 77: _t->updatePartLabelInstanceTitleSlot((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 78: _t->changePinLabelsSlot((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 79: _t->changePinLabels((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 80: _t->collectRatsnestSlot((*reinterpret_cast< QList<SketchWidget*>(*)>(_a[1]))); break;
        case 81: _t->removeRatsnestSlot((*reinterpret_cast< QList<ConnectorEdge*>(*)>(_a[1])),(*reinterpret_cast< QUndoCommand*(*)>(_a[2]))); break;
        case 82: _t->deleteTemporary(); break;
        case 83: _t->canConnect((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< ItemBase*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 84: { long _r = _t->swapStart((*reinterpret_cast< SwapThing(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 85: _t->getDroppedItemViewLayerPlacement((*reinterpret_cast< ModelPart*(*)>(_a[1])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[2]))); break;
        case 86: _t->changeWireColor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 87: _t->changeWireWidthMils((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 88: _t->selectAllItems((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 89: _t->setNoteText((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 90: _t->setInstanceTitle((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 91: _t->incInstanceTitle((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 92: _t->showPartLabel((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 93: _t->checkSticky((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< CheckStickyCommand*(*)>(_a[4]))); break;
        case 94: { ItemBase* _r = _t->resizeBoard((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< ItemBase**>(_a[0]) = _r; }  break;
        case 95: _t->resizeJumperItem((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3])),(*reinterpret_cast< QPointF(*)>(_a[4]))); break;
        case 96: _t->disconnectAllSlot((*reinterpret_cast< QList<ConnectorItem*>(*)>(_a[1])),(*reinterpret_cast< QHash<ItemBase*,SketchWidget*>(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3]))); break;
        case 97: _t->setResistance((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 98: _t->setResistance((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 99: _t->setProp((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 100: _t->setProp((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 101: _t->setHoleSize((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< QRectF(*)>(_a[6])),(*reinterpret_cast< QRectF(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 102: _t->showLabelFirstTime((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 103: _t->resizeBoard((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 104: _t->changeBoardLayers((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 105: _t->updateConnectors(); break;
        case 106: _t->ratsnestConnect((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 107: _t->cleanupRatsnests((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 108: _t->addSubpart((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 109: _t->packItems((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<long>(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SketchWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SketchWidget::staticMetaObject = {
    { &InfoGraphicsView::staticMetaObject, qt_meta_stringdata_SketchWidget,
      qt_meta_data_SketchWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SketchWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SketchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SketchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SketchWidget))
        return static_cast<void*>(const_cast< SketchWidget*>(this));
    return InfoGraphicsView::qt_metacast(_clname);
}

int SketchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InfoGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 110)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 110;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = gridColor(); break;
        case 1: *reinterpret_cast< double*>(_v) = ratsnestWidth(); break;
        case 2: *reinterpret_cast< double*>(_v) = ratsnestOpacity(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setGridColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setRatsnestWidth(*reinterpret_cast< double*>(_v)); break;
        case 2: setRatsnestOpacity(*reinterpret_cast< double*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SketchWidget::itemAddedSignal(ModelPart * _t1, ItemBase * _t2, ViewLayer::ViewLayerPlacement _t3, const ViewGeometry & _t4, long _t5, SketchWidget * _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SketchWidget::itemDeletedSignal(long _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SketchWidget::clearSelectionSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void SketchWidget::itemSelectedSignal(long _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SketchWidget::itemMovedSignal(ItemBase * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SketchWidget::wireDisconnectedSignal(long _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SketchWidget::wireConnectedSignal(long _t1, QString _t2, long _t3, QString _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SketchWidget::changeConnectionSignal(long _t1, QString _t2, long _t3, QString _t4, ViewLayer::ViewLayerPlacement _t5, bool _t6, bool _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SketchWidget::copyBoundingRectsSignal(QHash<QString,QRectF> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SketchWidget::cleanUpWiresSignal(CleanUpWiresCommand * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SketchWidget::selectionChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void SketchWidget::resizeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void SketchWidget::dropSignal(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void SketchWidget::routingStatusSignal(SketchWidget * _t1, const RoutingStatus & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void SketchWidget::movingSignal(SketchWidget * _t1, QUndoCommand * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void SketchWidget::selectAllItemsSignal(bool _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void SketchWidget::checkStickySignal(long _t1, bool _t2, bool _t3, CheckStickyCommand * _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void SketchWidget::disconnectAllSignal(QList<ConnectorItem*> _t1, QHash<ItemBase*,SketchWidget*> & _t2, QUndoCommand * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void SketchWidget::setResistanceSignal(long _t1, QString _t2, QString _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void SketchWidget::setPropSignal(long _t1, const QString & _t2, const QString & _t3, bool _t4, bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void SketchWidget::setInstanceTitleSignal(long _t1, const QString & _t2, const QString & _t3, bool _t4, bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void SketchWidget::statusMessageSignal(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void SketchWidget::showLabelFirstTimeSignal(long _t1, bool _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void SketchWidget::dropPasteSignal(SketchWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void SketchWidget::changeBoardLayersSignal(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void SketchWidget::deleteTracesSignal(QSet<ItemBase*> & _t1, QHash<ItemBase*,SketchWidget*> & _t2, QList<long> & _t3, bool _t4, QUndoCommand * _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void SketchWidget::makeDeleteItemCommandPrepSignal(ItemBase * _t1, bool _t2, QUndoCommand * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void SketchWidget::makeDeleteItemCommandFinalSignal(ItemBase * _t1, bool _t2, QUndoCommand * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void SketchWidget::cursorLocationSignal(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void SketchWidget::ratsnestConnectSignal(long _t1, const QString & _t2, bool _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void SketchWidget::updatePartLabelInstanceTitleSignal(long _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void SketchWidget::filenameIfSignal(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void SketchWidget::collectRatsnestSignal(QList<SketchWidget*> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void SketchWidget::removeRatsnestSignal(QList<struct ConnectorEdge*> & _t1, QUndoCommand * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void SketchWidget::updateLayerMenuSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 34, 0);
}

// SIGNAL 35
void SketchWidget::swapBoardImageSignal(SketchWidget * _t1, ItemBase * _t2, const QString & _t3, const QString & _t4, bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void SketchWidget::canConnectSignal(Wire * _t1, ItemBase * _t2, bool & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void SketchWidget::swapStartSignal(SwapThing & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void SketchWidget::showing(SketchWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void SketchWidget::clickedItemCandidateSignal(QGraphicsItem * _t1, bool & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void SketchWidget::resizedSignal(ItemBase * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void SketchWidget::cleanupRatsnestsSignal(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void SketchWidget::addSubpartSignal(long _t1, long _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void SketchWidget::getDroppedItemViewLayerPlacementSignal(ModelPart * _t1, ViewLayer::ViewLayerPlacement & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void SketchWidget::packItemsSignal(int _t1, const QList<long> & _t2, QUndoCommand * _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}
QT_END_MOC_NAMESPACE
