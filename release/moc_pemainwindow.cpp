/****************************************************************************
** Meta object code from reading C++ file 'pemainwindow.h'
**
** Created: Sun Sep 27 17:54:46 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/partseditor/pemainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pemainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IconSketchWidget[] = {

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

static const char qt_meta_stringdata_IconSketchWidget[] = {
    "IconSketchWidget\0"
};

void IconSketchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IconSketchWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IconSketchWidget::staticMetaObject = {
    { &SketchWidget::staticMetaObject, qt_meta_stringdata_IconSketchWidget,
      qt_meta_data_IconSketchWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IconSketchWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IconSketchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IconSketchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IconSketchWidget))
        return static_cast<void*>(const_cast< IconSketchWidget*>(this));
    return SketchWidget::qt_metacast(_clname);
}

int IconSketchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SketchWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PEMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   44,   44,   44, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   78,   44,   44, 0x0a,
      89,   44,   44,   44, 0x0a,
     131,   44,   44,   44, 0x0a,
     156,   44,   44,   44, 0x0a,
     201,   44,   44,   44, 0x0a,
     247,   44,   44,   44, 0x0a,
     278,  318,   44,   44, 0x0a,
     326,   44,   44,   44, 0x0a,
     361,  409,   44,   44, 0x0a,
     411,  469,   44,   44, 0x0a,
     483,   44,   44,   44, 0x0a,
     506,   44,   44,   44, 0x0a,
     536,  566,   44,   44, 0x0a,
     570,  607,   44,   44, 0x0a,
     619,  642,   44,   44, 0x0a,
     649,   44,   44,   44, 0x0a,
     671,   44,   44,   44, 0x0a,
     692,   44,   44,   44, 0x0a,
     719,   44,   44,   44, 0x0a,
     741,   44,   44,   44, 0x0a,
     760,  843,   44,   44, 0x0a,
     882,   44,   44,   44, 0x0a,
     930,   44,   44,   44, 0x0a,
     950,   44,   44,   44, 0x0a,
     973,   44,   44,   44, 0x0a,
     992,   44,   44,   44, 0x0a,
    1009, 1033,   44,   44, 0x0a,
    1041,   44,   44,   44, 0x09,
    1052,   44,   44,   44, 0x09,
    1071,   44,   44,   44, 0x09,
    1092,   44,   44,   44, 0x09,
    1107,   44,   44,   44, 0x09,
    1119,   44, 1126,   44, 0x09,
    1131,   44, 1126,   44, 0x09,
    1140,   44,   44,   44, 0x09,
    1151, 1181,   44,   44, 0x09,
    1187,   44,   44,   44, 0x09,
    1202,   44,   44,   44, 0x09,
    1221,   44,   44,   44, 0x09,
    1238,   44,   44,   44, 0x09,
    1251,   44,   44,   44, 0x09,
    1267,   44,   44,   44, 0x09,
    1285,   44,   44,   44, 0x09,
    1302,   44,   44,   44, 0x09,
    1313,   44,   44,   44, 0x09,
    1330,   44,   44,   44, 0x09,
    1347, 1369,   44,   44, 0x09,
    1381,   44,   44,   44, 0x29,
    1399,   44,   44,   44, 0x09,
    1426, 1524,   44,   44, 0x09,
    1542,   44,   44,   44, 0x09,
    1567, 1614,   44,   44, 0x09,
    1618,   44,   44,   44, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PEMainWindow[] = {
    "PEMainWindow\0addToMyPartsSignal(ModelPart*)\0"
    "\0metadataChanged(QString,QString)\0"
    "name,value\0propertiesChanged(QHash<QString,QString>)\0"
    "tagsChanged(QStringList)\0"
    "connectorMetadataChanged(ConnectorMetadata*)\0"
    "removedConnectors(QList<ConnectorMetadata*>&)\0"
    "highlightSlot(PEGraphicsItem*)\0"
    "pegiMousePressed(PEGraphicsItem*,bool&)\0"
    ",ignore\0pegiMouseReleased(PEGraphicsItem*)\0"
    "pegiTerminalPointMoved(PEGraphicsItem*,QPointF)\0"
    ",\0pegiTerminalPointChanged(PEGraphicsItem*,QPointF,QPointF)\0"
    ",before,after\0switchedConnector(int)\0"
    "removedConnector(QDomElement)\0"
    "terminalPointChanged(QString)\0how\0"
    "terminalPointChanged(QString,double)\0"
    "coord,value\0getSpinAmount(double&)\0"
    "amount\0pickModeChanged(bool)\0"
    "busModeChanged(bool)\0connectorCountChanged(int)\0"
    "deleteBusConnection()\0newWireSlot(Wire*)\0"
    "wireChangedSlot(Wire*,QLineF,QLineF,QPointF,QPointF,ConnectorItem*,Con"
    "nectorItem*)\0"
    ",oldLine,newLine,oldPos,newPos,from,to\0"
    "connectorsTypeChanged(Connector::ConnectorType)\0"
    "smdChanged(QString)\0showing(SketchWidget*)\0"
    "updateExportMenu()\0updateEditMenu()\0"
    "s2sMessageSlot(QString)\0message\0"
    "initZoom()\0showMetadataView()\0"
    "showConnectorsView()\0showIconView()\0"
    "loadImage()\0save()\0bool\0saveAs()\0"
    "showInOS()\0tabWidget_currentChanged(int)\0"
    "index\0backupSketch()\0updateWindowMenu()\0"
    "updateWireMenu()\0closeLater()\0"
    "resetNextPick()\0reuseBreadboard()\0"
    "reuseSchematic()\0reusePCB()\0"
    "convertToTenth()\0hideOtherViews()\0"
    "updateLayerMenu(bool)\0resetLayout\0"
    "updateLayerMenu()\0updateAssignedConnectors()\0"
    "itemAddedSlot(ModelPart*,ItemBase*,ViewLayer::ViewLayerPlacement,ViewG"
    "eometry,long,SketchWidget*)\0"
    ",,,,id,dropOrigin\0itemMovedSlot(ItemBase*)\0"
    "clickedItemCandidateSlot(QGraphicsItem*,bool&)\0"
    ",ok\0resizedSlot(ItemBase*)\0"
};

void PEMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PEMainWindow *_t = static_cast<PEMainWindow *>(_o);
        switch (_id) {
        case 0: _t->addToMyPartsSignal((*reinterpret_cast< ModelPart*(*)>(_a[1]))); break;
        case 1: _t->metadataChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->propertiesChanged((*reinterpret_cast< const QHash<QString,QString>(*)>(_a[1]))); break;
        case 3: _t->tagsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->connectorMetadataChanged((*reinterpret_cast< ConnectorMetadata*(*)>(_a[1]))); break;
        case 5: _t->removedConnectors((*reinterpret_cast< QList<ConnectorMetadata*>(*)>(_a[1]))); break;
        case 6: _t->highlightSlot((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1]))); break;
        case 7: _t->pegiMousePressed((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->pegiMouseReleased((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1]))); break;
        case 9: _t->pegiTerminalPointMoved((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 10: _t->pegiTerminalPointChanged((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3]))); break;
        case 11: _t->switchedConnector((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->removedConnector((*reinterpret_cast< const QDomElement(*)>(_a[1]))); break;
        case 13: _t->terminalPointChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->terminalPointChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 15: _t->getSpinAmount((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->pickModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->busModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->connectorCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->deleteBusConnection(); break;
        case 20: _t->newWireSlot((*reinterpret_cast< Wire*(*)>(_a[1]))); break;
        case 21: _t->wireChangedSlot((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< const QLineF(*)>(_a[2])),(*reinterpret_cast< const QLineF(*)>(_a[3])),(*reinterpret_cast< QPointF(*)>(_a[4])),(*reinterpret_cast< QPointF(*)>(_a[5])),(*reinterpret_cast< ConnectorItem*(*)>(_a[6])),(*reinterpret_cast< ConnectorItem*(*)>(_a[7]))); break;
        case 22: _t->connectorsTypeChanged((*reinterpret_cast< Connector::ConnectorType(*)>(_a[1]))); break;
        case 23: _t->smdChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->showing((*reinterpret_cast< SketchWidget*(*)>(_a[1]))); break;
        case 25: _t->updateExportMenu(); break;
        case 26: _t->updateEditMenu(); break;
        case 27: _t->s2sMessageSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->initZoom(); break;
        case 29: _t->showMetadataView(); break;
        case 30: _t->showConnectorsView(); break;
        case 31: _t->showIconView(); break;
        case 32: _t->loadImage(); break;
        case 33: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: _t->showInOS(); break;
        case 36: _t->tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->backupSketch(); break;
        case 38: _t->updateWindowMenu(); break;
        case 39: _t->updateWireMenu(); break;
        case 40: _t->closeLater(); break;
        case 41: _t->resetNextPick(); break;
        case 42: _t->reuseBreadboard(); break;
        case 43: _t->reuseSchematic(); break;
        case 44: _t->reusePCB(); break;
        case 45: _t->convertToTenth(); break;
        case 46: _t->hideOtherViews(); break;
        case 47: _t->updateLayerMenu((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->updateLayerMenu(); break;
        case 49: _t->updateAssignedConnectors(); break;
        case 50: _t->itemAddedSlot((*reinterpret_cast< ModelPart*(*)>(_a[1])),(*reinterpret_cast< ItemBase*(*)>(_a[2])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[3])),(*reinterpret_cast< const ViewGeometry(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5])),(*reinterpret_cast< SketchWidget*(*)>(_a[6]))); break;
        case 51: _t->itemMovedSlot((*reinterpret_cast< ItemBase*(*)>(_a[1]))); break;
        case 52: _t->clickedItemCandidateSlot((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 53: _t->resizedSlot((*reinterpret_cast< ItemBase*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PEMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PEMainWindow::staticMetaObject = {
    { &MainWindow::staticMetaObject, qt_meta_stringdata_PEMainWindow,
      qt_meta_data_PEMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PEMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PEMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PEMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PEMainWindow))
        return static_cast<void*>(const_cast< PEMainWindow*>(this));
    return MainWindow::qt_metacast(_clname);
}

int PEMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void PEMainWindow::addToMyPartsSignal(ModelPart * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
