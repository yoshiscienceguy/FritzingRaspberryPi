/****************************************************************************
** Meta object code from reading C++ file 'autorouteprogressdialog.h'
**
** Created: Sun Sep 27 18:03:19 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/autoroute/autorouteprogressdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autorouteprogressdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AutorouteProgressDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   31,   31,   31, 0x05,
      32,   31,   31,   31, 0x05,
      41,   31,   31,   31, 0x05,
      48,   31,   31,   31, 0x05,
      55,   31,   31,   31, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,   31,   31,   31, 0x0a,
      87,   31,   31,   31, 0x0a,
     103,   31,   31,   31, 0x0a,
     117,   31,   31,   31, 0x0a,
     128,   31,   31,   31, 0x0a,
     141,   31,   31,   31, 0x0a,
     152,   31,   31,   31, 0x0a,
     174,   31,   31,   31, 0x0a,
     194,   31,   31,   31, 0x0a,
     215,   31,   31,   31, 0x0a,
     233,   31,   31,   31, 0x0a,
     250,   31,   31,   31, 0x0a,
     261,   31,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AutorouteProgressDialog[] = {
    "AutorouteProgressDialog\0skip()\0\0"
    "cancel()\0stop()\0best()\0spinChange(int)\0"
    "setMinimum(int)\0setMaximum(int)\0"
    "setValue(int)\0sendSkip()\0sendCancel()\0"
    "sendStop()\0setSpinLabel(QString)\0"
    "setMessage(QString)\0setMessage2(QString)\0"
    "setSpinValue(int)\0disableButtons()\0"
    "sendBest()\0internalSpinChange(int)\0"
};

void AutorouteProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AutorouteProgressDialog *_t = static_cast<AutorouteProgressDialog *>(_o);
        switch (_id) {
        case 0: _t->skip(); break;
        case 1: _t->cancel(); break;
        case 2: _t->stop(); break;
        case 3: _t->best(); break;
        case 4: _t->spinChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setMinimum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setMaximum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->sendSkip(); break;
        case 9: _t->sendCancel(); break;
        case 10: _t->sendStop(); break;
        case 11: _t->setSpinLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setMessage2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->setSpinValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->disableButtons(); break;
        case 16: _t->sendBest(); break;
        case 17: _t->internalSpinChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AutorouteProgressDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AutorouteProgressDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AutorouteProgressDialog,
      qt_meta_data_AutorouteProgressDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AutorouteProgressDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AutorouteProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AutorouteProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AutorouteProgressDialog))
        return static_cast<void*>(const_cast< AutorouteProgressDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AutorouteProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void AutorouteProgressDialog::skip()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AutorouteProgressDialog::cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void AutorouteProgressDialog::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void AutorouteProgressDialog::best()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void AutorouteProgressDialog::spinChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_ArrowButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ArrowButton[] = {
    "ArrowButton\0"
};

void ArrowButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ArrowButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ArrowButton::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ArrowButton,
      qt_meta_data_ArrowButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ArrowButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ArrowButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ArrowButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArrowButton))
        return static_cast<void*>(const_cast< ArrowButton*>(this));
    return QLabel::qt_metacast(_clname);
}

int ArrowButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
