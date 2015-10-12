/****************************************************************************
** Meta object code from reading C++ file 'setcolordialog.h'
**
** Created: Sun Sep 27 18:04:35 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/dialogs/setcolordialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setcolordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SetColorDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   31,   31,   31, 0x09,
      32,   31,   31,   31, 0x09,
      47,   31,   31,   31, 0x09,
      66,   31,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SetColorDialog[] = {
    "SetColorDialog\0selectCurrent()\0\0"
    "selectCustom()\0selectLastCustom()\0"
    "selectStandard()\0"
};

void SetColorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SetColorDialog *_t = static_cast<SetColorDialog *>(_o);
        switch (_id) {
        case 0: _t->selectCurrent(); break;
        case 1: _t->selectCustom(); break;
        case 2: _t->selectLastCustom(); break;
        case 3: _t->selectStandard(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SetColorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SetColorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SetColorDialog,
      qt_meta_data_SetColorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SetColorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SetColorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SetColorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetColorDialog))
        return static_cast<void*>(const_cast< SetColorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SetColorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
