/****************************************************************************
** Meta object code from reading C++ file 'prefsdialog.h'
**
** Created: Sun Sep 27 18:03:59 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/dialogs/prefsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrefsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   32,   32,   32, 0x09,
      33,   32,   32,   32, 0x09,
      41,   32,   32,   32, 0x09,
      61,   32,   32,   32, 0x09,
      83,   32,   32,   32, 0x09,
     105,   32,   32,   32, 0x09,
     126,   32,   32,   32, 0x09,
     152,   32,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PrefsDialog[] = {
    "PrefsDialog\0changeLanguage(int)\0\0"
    "clear()\0setConnectedColor()\0"
    "setUnconnectedColor()\0changeWheelBehavior()\0"
    "toggleAutosave(bool)\0changeAutosavePeriod(int)\0"
    "curvyChanged()\0"
};

void PrefsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrefsDialog *_t = static_cast<PrefsDialog *>(_o);
        switch (_id) {
        case 0: _t->changeLanguage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->clear(); break;
        case 2: _t->setConnectedColor(); break;
        case 3: _t->setUnconnectedColor(); break;
        case 4: _t->changeWheelBehavior(); break;
        case 5: _t->toggleAutosave((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->changeAutosavePeriod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->curvyChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PrefsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrefsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PrefsDialog,
      qt_meta_data_PrefsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrefsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrefsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrefsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrefsDialog))
        return static_cast<void*>(const_cast< PrefsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PrefsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
