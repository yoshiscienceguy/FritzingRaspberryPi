/****************************************************************************
** Meta object code from reading C++ file 'groundfillseeddialog.h'
**
** Created: Sun Sep 27 18:04:12 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/dialogs/groundfillseeddialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groundfillseeddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GroundFillSeedDialog[] = {

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
      21,   51,   51,   51, 0x0a,
      52,   51,   51,   51, 0x0a,
      82,   51,   51,   51, 0x0a,
      91,   51,   51,   51, 0x0a,
     100,   51,   51,   51, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GroundFillSeedDialog[] = {
    "GroundFillSeedDialog\0clickedSlot(QListWidgetItem*)\0"
    "\0changedSlot(QListWidgetItem*)\0accept()\0"
    "reject()\0doFill(bool)\0"
};

void GroundFillSeedDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GroundFillSeedDialog *_t = static_cast<GroundFillSeedDialog *>(_o);
        switch (_id) {
        case 0: _t->clickedSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->changedSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->accept(); break;
        case 3: _t->reject(); break;
        case 4: _t->doFill((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GroundFillSeedDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GroundFillSeedDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GroundFillSeedDialog,
      qt_meta_data_GroundFillSeedDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GroundFillSeedDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GroundFillSeedDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GroundFillSeedDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GroundFillSeedDialog))
        return static_cast<void*>(const_cast< GroundFillSeedDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GroundFillSeedDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
