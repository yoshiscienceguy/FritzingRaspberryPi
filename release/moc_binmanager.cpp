/****************************************************************************
** Meta object code from reading C++ file 'binmanager.h'
**
** Created: Sun Sep 27 17:54:28 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/partsbinpalette/binmanager/binmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'binmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BinManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   38,   47,   47, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   47,   47,   47, 0x0a,
      79,   47,   47,   47, 0x0a,
      92,   47,   47,   47, 0x0a,
     105,  145,   47,   47, 0x0a,
     149,  204,   47,   47, 0x09,
     232,   47,   47,   47, 0x09,
     252,   47,   47,   47, 0x09,
     275,   47,  286,   47, 0x09,
     309,   47,   47,   47, 0x09,
     320,   47,   47,   47, 0x09,
     332,   47,   47,   47, 0x09,
     350,   47,   47,   47, 0x09,
     360,   47,   47,   47, 0x09,
     372,   47,   47,   47, 0x09,
     384,   47,   47,   47, 0x09,
     399,   47,   47,   47, 0x09,
     417,   47,   47,   47, 0x09,
     434,   47,  451,   47, 0x09,
     456,   47,   47,   47, 0x09,
     471,   47,   47,   47, 0x09,
     488,   47,   47,   47, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BinManager[] = {
    "BinManager\0savePartAsBundled(QString)\0"
    "moduleId\0\0updateBinCombinedMenuCurrent()\0"
    "toIconView()\0toListView()\0"
    "setAsCurrentBin(PartsBinPaletteWidget*)\0"
    "bin\0updateFileName(PartsBinPaletteWidget*,QString,QString)\0"
    "bin,newFileName,oldFilename\0"
    "currentChanged(int)\0tabCloseRequested(int)\0"
    "newBinIn()\0PartsBinPaletteWidget*\0"
    "closeBin()\0deleteBin()\0editSelectedNew()\0"
    "saveBin()\0saveBinAs()\0renameBin()\0"
    "copyToSketch()\0copyAllToSketch()\0"
    "exportSelected()\0removeSelected()\0"
    "bool\0findSelected()\0saveBundledBin()\0"
    "mainLoad()\0"
};

void BinManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BinManager *_t = static_cast<BinManager *>(_o);
        switch (_id) {
        case 0: _t->savePartAsBundled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateBinCombinedMenuCurrent(); break;
        case 2: _t->toIconView(); break;
        case 3: _t->toListView(); break;
        case 4: _t->setAsCurrentBin((*reinterpret_cast< PartsBinPaletteWidget*(*)>(_a[1]))); break;
        case 5: _t->updateFileName((*reinterpret_cast< PartsBinPaletteWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: { PartsBinPaletteWidget* _r = _t->newBinIn();
            if (_a[0]) *reinterpret_cast< PartsBinPaletteWidget**>(_a[0]) = _r; }  break;
        case 9: _t->closeBin(); break;
        case 10: _t->deleteBin(); break;
        case 11: _t->editSelectedNew(); break;
        case 12: _t->saveBin(); break;
        case 13: _t->saveBinAs(); break;
        case 14: _t->renameBin(); break;
        case 15: _t->copyToSketch(); break;
        case 16: _t->copyAllToSketch(); break;
        case 17: _t->exportSelected(); break;
        case 18: { bool _r = _t->removeSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: _t->findSelected(); break;
        case 20: _t->saveBundledBin(); break;
        case 21: _t->mainLoad(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BinManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BinManager::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_BinManager,
      qt_meta_data_BinManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BinManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BinManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BinManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BinManager))
        return static_cast<void*>(const_cast< BinManager*>(this));
    return QFrame::qt_metacast(_clname);
}

int BinManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void BinManager::savePartAsBundled(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
