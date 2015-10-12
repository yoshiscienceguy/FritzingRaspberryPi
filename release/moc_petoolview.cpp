/****************************************************************************
** Meta object code from reading C++ file 'petoolview.h'
**
** Created: Sun Sep 27 17:55:28 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/partseditor/petoolview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'petoolview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PEDoubleSpinBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   39,   39,   39, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_PEDoubleSpinBox[] = {
    "PEDoubleSpinBox\0getSpinAmount(double&)\0"
    "\0"
};

void PEDoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PEDoubleSpinBox *_t = static_cast<PEDoubleSpinBox *>(_o);
        switch (_id) {
        case 0: _t->getSpinAmount((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PEDoubleSpinBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PEDoubleSpinBox::staticMetaObject = {
    { &QDoubleSpinBox::staticMetaObject, qt_meta_stringdata_PEDoubleSpinBox,
      qt_meta_data_PEDoubleSpinBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PEDoubleSpinBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PEDoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PEDoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PEDoubleSpinBox))
        return static_cast<void*>(const_cast< PEDoubleSpinBox*>(this));
    return QDoubleSpinBox::qt_metacast(_clname);
}

int PEDoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PEDoubleSpinBox::getSpinAmount(double & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_PEToolView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   34,   34,   34, 0x05,
      35,   34,   34,   34, 0x05,
      65,   34,   34,   34, 0x05,
      87,   34,   34,   34, 0x05,
     108,  138,   34,   34, 0x05,
     142,  179,   34,   34, 0x05,
     191,   34,   34,   34, 0x05,
     214,   34,   34,   34, 0x05,

 // slots: signature, parameters, type, tag, flags
     259,  310,   34,   34, 0x09,
     327,   34,   34,   34, 0x09,
     349,   34,   34,   34, 0x09,
     374,   34,   34,   34, 0x09,
     393,   34,   34,   34, 0x09,
     405,   34,   34,   34, 0x09,
     417,   34,   34,   34, 0x09,
     445,   34,   34,   34, 0x09,
     466,   34,   34,   34, 0x09,
     493,   34,   34,   34, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PEToolView[] = {
    "PEToolView\0switchedConnector(int)\0\0"
    "removedConnector(QDomElement)\0"
    "pickModeChanged(bool)\0busModeChanged(bool)\0"
    "terminalPointChanged(QString)\0how\0"
    "terminalPointChanged(QString,double)\0"
    "coord,value\0getSpinAmount(double&)\0"
    "connectorMetadataChanged(ConnectorMetadata*)\0"
    "switchConnector(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "current,previous\0pickModeChangedSlot()\0"
    "busModeChangedSlot(bool)\0descriptionEntry()\0"
    "typeEntry()\0nameEntry()\0"
    "buttonChangeTerminalPoint()\0"
    "terminalPointEntry()\0getSpinAmountSlot(double&)\0"
    "removeConnector()\0"
};

void PEToolView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PEToolView *_t = static_cast<PEToolView *>(_o);
        switch (_id) {
        case 0: _t->switchedConnector((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->removedConnector((*reinterpret_cast< const QDomElement(*)>(_a[1]))); break;
        case 2: _t->pickModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->busModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->terminalPointChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->terminalPointChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->getSpinAmount((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->connectorMetadataChanged((*reinterpret_cast< ConnectorMetadata*(*)>(_a[1]))); break;
        case 8: _t->switchConnector((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 9: _t->pickModeChangedSlot(); break;
        case 10: _t->busModeChangedSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->descriptionEntry(); break;
        case 12: _t->typeEntry(); break;
        case 13: _t->nameEntry(); break;
        case 14: _t->buttonChangeTerminalPoint(); break;
        case 15: _t->terminalPointEntry(); break;
        case 16: _t->getSpinAmountSlot((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->removeConnector(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PEToolView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PEToolView::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PEToolView,
      qt_meta_data_PEToolView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PEToolView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PEToolView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PEToolView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PEToolView))
        return static_cast<void*>(const_cast< PEToolView*>(this));
    return QFrame::qt_metacast(_clname);
}

int PEToolView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void PEToolView::switchedConnector(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PEToolView::removedConnector(const QDomElement & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PEToolView::pickModeChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PEToolView::busModeChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PEToolView::terminalPointChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PEToolView::terminalPointChanged(const QString & _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PEToolView::getSpinAmount(double & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PEToolView::connectorMetadataChanged(ConnectorMetadata * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
