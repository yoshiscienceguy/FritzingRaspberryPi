/****************************************************************************
** Meta object code from reading C++ file 'quotedialog.h'
**
** Created: Sun Sep 27 18:04:20 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/dialogs/quotedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quotedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LabelThing[] = {

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
      11,   21,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_LabelThing[] = {
    "LabelThing\0clicked()\0\0"
};

void LabelThing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LabelThing *_t = static_cast<LabelThing *>(_o);
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LabelThing::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LabelThing::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_LabelThing,
      qt_meta_data_LabelThing, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LabelThing::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LabelThing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LabelThing::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LabelThing))
        return static_cast<void*>(const_cast< LabelThing*>(this));
    return QLabel::qt_metacast(_clname);
}

int LabelThing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void LabelThing::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_QuoteDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   31,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QuoteDialog[] = {
    "QuoteDialog\0visitFritzingFab()\0\0"
};

void QuoteDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QuoteDialog *_t = static_cast<QuoteDialog *>(_o);
        switch (_id) {
        case 0: _t->visitFritzingFab(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QuoteDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QuoteDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QuoteDialog,
      qt_meta_data_QuoteDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QuoteDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QuoteDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QuoteDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuoteDialog))
        return static_cast<void*>(const_cast< QuoteDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QuoteDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
