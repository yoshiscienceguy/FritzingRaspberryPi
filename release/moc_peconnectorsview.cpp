/****************************************************************************
** Meta object code from reading C++ file 'peconnectorsview.h'
**
** Created: Sun Sep 27 17:55:10 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/partseditor/peconnectorsview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'peconnectorsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PEConnectorsView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   62,   62,   62, 0x05,
      63,   62,   62,   62, 0x05,
     109,   62,   62,   62, 0x05,
     136,   62,   62,   62, 0x05,
     184,   62,   62,   62, 0x05,

 // slots: signature, parameters, type, tag, flags
     204,   62,   62,   62, 0x09,
     216,   62,   62,   62, 0x09,
     235,   62,   62,   62, 0x09,
     247,   62,   62,   62, 0x09,
     269,   62,   62,   62, 0x09,
     287,   62,   62,   62, 0x09,
     302,   62,   62,   62, 0x09,
     313,   62,   62,   62, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PEConnectorsView[] = {
    "PEConnectorsView\0"
    "connectorMetadataChanged(ConnectorMetadata*)\0"
    "\0removedConnectors(QList<ConnectorMetadata*>&)\0"
    "connectorCountChanged(int)\0"
    "connectorsTypeChanged(Connector::ConnectorType)\0"
    "smdChanged(QString)\0nameEntry()\0"
    "descriptionEntry()\0typeEntry()\0"
    "connectorCountEntry()\0removeConnector()\0"
    "allTypeEntry()\0smdEntry()\0uncheckRadios()\0"
};

void PEConnectorsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PEConnectorsView *_t = static_cast<PEConnectorsView *>(_o);
        switch (_id) {
        case 0: _t->connectorMetadataChanged((*reinterpret_cast< ConnectorMetadata*(*)>(_a[1]))); break;
        case 1: _t->removedConnectors((*reinterpret_cast< QList<ConnectorMetadata*>(*)>(_a[1]))); break;
        case 2: _t->connectorCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->connectorsTypeChanged((*reinterpret_cast< Connector::ConnectorType(*)>(_a[1]))); break;
        case 4: _t->smdChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->nameEntry(); break;
        case 6: _t->descriptionEntry(); break;
        case 7: _t->typeEntry(); break;
        case 8: _t->connectorCountEntry(); break;
        case 9: _t->removeConnector(); break;
        case 10: _t->allTypeEntry(); break;
        case 11: _t->smdEntry(); break;
        case 12: _t->uncheckRadios(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PEConnectorsView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PEConnectorsView::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PEConnectorsView,
      qt_meta_data_PEConnectorsView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PEConnectorsView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PEConnectorsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PEConnectorsView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PEConnectorsView))
        return static_cast<void*>(const_cast< PEConnectorsView*>(this));
    return QFrame::qt_metacast(_clname);
}

int PEConnectorsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PEConnectorsView::connectorMetadataChanged(ConnectorMetadata * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PEConnectorsView::removedConnectors(QList<struct ConnectorMetadata*> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PEConnectorsView::connectorCountChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PEConnectorsView::connectorsTypeChanged(Connector::ConnectorType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PEConnectorsView::smdChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
