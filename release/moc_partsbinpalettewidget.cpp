/****************************************************************************
** Meta object code from reading C++ file 'partsbinpalettewidget.h'
**
** Created: Sun Sep 27 17:53:45 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/partsbinpalette/partsbinpalettewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partsbinpalettewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartsBinPaletteWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   34,   54,   54, 0x05,
      55,  111,   54,   54, 0x05,
     136,   54,   54,   54, 0x05,

 // slots: signature, parameters, type, tag, flags
     168,  192,   54,   54, 0x0a,
     201,   54,   54,   54, 0x0a,
     220,   54,   54,   54, 0x0a,
     232,   54,   54,   54, 0x0a,
     245,   54,   54,   54, 0x0a,
     258,   54,  265,   54, 0x0a,
     270,   54,  265,   54, 0x0a,
     279,   54,   54,   54, 0x0a,
     297,  325,   54,   54, 0x09,
     333,   54,   54,   54, 0x09,
     353,   54,   54,   54, 0x09,
     362,   54,   54,   54, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PartsBinPaletteWidget[] = {
    "PartsBinPaletteWidget\0saved(bool)\0"
    "hasPartsFromBundled\0\0"
    "fileNameUpdated(PartsBinPaletteWidget*,QString,QString)\0"
    ",newFileName,oldFilename\0"
    "focused(PartsBinPaletteWidget*)\0"
    "addPartCommand(QString)\0moduleID\0"
    "removeAlienParts()\0itemMoved()\0"
    "toIconView()\0toListView()\0save()\0bool\0"
    "saveAs()\0changeIconColor()\0"
    "undoStackCleanChanged(bool)\0isClean\0"
    "addSketchPartToMe()\0search()\0"
    "focusSearchAfter()\0"
};

void PartsBinPaletteWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PartsBinPaletteWidget *_t = static_cast<PartsBinPaletteWidget *>(_o);
        switch (_id) {
        case 0: _t->saved((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->fileNameUpdated((*reinterpret_cast< PartsBinPaletteWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->focused((*reinterpret_cast< PartsBinPaletteWidget*(*)>(_a[1]))); break;
        case 3: _t->addPartCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->removeAlienParts(); break;
        case 5: _t->itemMoved(); break;
        case 6: _t->toIconView(); break;
        case 7: _t->toListView(); break;
        case 8: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->changeIconColor(); break;
        case 11: _t->undoStackCleanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->addSketchPartToMe(); break;
        case 13: _t->search(); break;
        case 14: _t->focusSearchAfter(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartsBinPaletteWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartsBinPaletteWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PartsBinPaletteWidget,
      qt_meta_data_PartsBinPaletteWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartsBinPaletteWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartsBinPaletteWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartsBinPaletteWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartsBinPaletteWidget))
        return static_cast<void*>(const_cast< PartsBinPaletteWidget*>(this));
    if (!strcmp(_clname, "Bundler"))
        return static_cast< Bundler*>(const_cast< PartsBinPaletteWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int PartsBinPaletteWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void PartsBinPaletteWidget::saved(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PartsBinPaletteWidget::fileNameUpdated(PartsBinPaletteWidget * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PartsBinPaletteWidget::focused(PartsBinPaletteWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
