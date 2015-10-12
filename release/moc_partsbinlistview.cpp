/****************************************************************************
** Meta object code from reading C++ file 'partsbinlistview.h'
**
** Created: Sun Sep 27 17:53:53 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/partsbinpalette/partsbinlistview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partsbinlistview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartsBinListView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   42,   60,   60, 0x05,
      61,   60,   60,   60, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   97,   60,   60, 0x0a,
     113,  130,   60,   60, 0x2a,
     139,   42,   60,   60, 0x0a,
     158,  182,   60,   60, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PartsBinListView[] = {
    "PartsBinListView\0informItemMoved(int,int)\0"
    "fromIndex,toIndex\0\0settingItem()\0"
    "setSelected(int,bool)\0position,doEmit\0"
    "setSelected(int)\0position\0itemMoved(int,int)\0"
    "showContextMenu(QPoint)\0pos\0"
};

void PartsBinListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PartsBinListView *_t = static_cast<PartsBinListView *>(_o);
        switch (_id) {
        case 0: _t->informItemMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->settingItem(); break;
        case 2: _t->setSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->setSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->itemMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartsBinListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartsBinListView::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_PartsBinListView,
      qt_meta_data_PartsBinListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartsBinListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartsBinListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartsBinListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartsBinListView))
        return static_cast<void*>(const_cast< PartsBinListView*>(this));
    if (!strcmp(_clname, "PartsBinView"))
        return static_cast< PartsBinView*>(const_cast< PartsBinListView*>(this));
    return QListWidget::qt_metacast(_clname);
}

int PartsBinListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PartsBinListView::informItemMoved(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PartsBinListView::settingItem()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
