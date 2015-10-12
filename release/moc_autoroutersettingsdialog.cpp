/****************************************************************************
** Meta object code from reading C++ file 'autoroutersettingsdialog.h'
**
** Created: Sun Sep 27 18:03:26 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/autoroute/autoroutersettingsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autoroutersettingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AutorouterSettingsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   42,   42,   42, 0x09,
      43,   42,   42,   42, 0x09,
      63,   42,   42,   42, 0x09,
      81,   42,   42,   42, 0x09,
     105,   42,   42,   42, 0x09,
     122,   42,   42,   42, 0x09,
     140,   42,   42,   42, 0x09,
     151,   42,   42,   42, 0x09,
     158,   42,   42,   42, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AutorouterSettingsDialog[] = {
    "AutorouterSettingsDialog\0production(bool)\0"
    "\0widthEntry(QString)\0changeUnits(bool)\0"
    "changeHoleSize(QString)\0changeDiameter()\0"
    "changeThickness()\0toInches()\0toMM()\0"
    "keepoutEntry()\0"
};

void AutorouterSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AutorouterSettingsDialog *_t = static_cast<AutorouterSettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->production((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->widthEntry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->changeUnits((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->changeHoleSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->changeDiameter(); break;
        case 5: _t->changeThickness(); break;
        case 6: _t->toInches(); break;
        case 7: _t->toMM(); break;
        case 8: _t->keepoutEntry(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AutorouterSettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AutorouterSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AutorouterSettingsDialog,
      qt_meta_data_AutorouterSettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AutorouterSettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AutorouterSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AutorouterSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AutorouterSettingsDialog))
        return static_cast<void*>(const_cast< AutorouterSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AutorouterSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
