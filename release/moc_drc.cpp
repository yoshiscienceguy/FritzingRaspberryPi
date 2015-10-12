/****************************************************************************
** Meta object code from reading C++ file 'drc.h'
**
** Created: Sun Sep 27 18:03:51 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/autoroute/drc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DRC[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
       4,   19,   19,   19, 0x05,
      20,   19,   19,   19, 0x05,
      44,   19,   19,   19, 0x05,
      66,   19,   19,   19, 0x05,
      83,   19,   19,   19, 0x05,
     103,   19,   19,   19, 0x05,
     121,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     149,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DRC[] = {
    "DRC\0hideProgress()\0\0setMaximumProgress(int)\0"
    "setProgressValue(int)\0wantTopVisible()\0"
    "wantBottomVisible()\0wantBothVisible()\0"
    "setProgressMessage(QString)\0cancel()\0"
};

void DRC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DRC *_t = static_cast<DRC *>(_o);
        switch (_id) {
        case 0: _t->hideProgress(); break;
        case 1: _t->setMaximumProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setProgressValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->wantTopVisible(); break;
        case 4: _t->wantBottomVisible(); break;
        case 5: _t->wantBothVisible(); break;
        case 6: _t->setProgressMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->cancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DRC::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DRC::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DRC,
      qt_meta_data_DRC, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DRC::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DRC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DRC::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DRC))
        return static_cast<void*>(const_cast< DRC*>(this));
    return QObject::qt_metacast(_clname);
}

int DRC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DRC::hideProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DRC::setMaximumProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DRC::setProgressValue(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DRC::wantTopVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void DRC::wantBottomVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void DRC::wantBothVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void DRC::setProgressMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
static const uint qt_meta_data_DRCResultsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   47,   47,   47, 0x09,
      48,   47,   47,   47, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DRCResultsDialog[] = {
    "DRCResultsDialog\0pressedSlot(QListWidgetItem*)\0"
    "\0releasedSlot(QListWidgetItem*)\0"
};

void DRCResultsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DRCResultsDialog *_t = static_cast<DRCResultsDialog *>(_o);
        switch (_id) {
        case 0: _t->pressedSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->releasedSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DRCResultsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DRCResultsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DRCResultsDialog,
      qt_meta_data_DRCResultsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DRCResultsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DRCResultsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DRCResultsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DRCResultsDialog))
        return static_cast<void*>(const_cast< DRCResultsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int DRCResultsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
