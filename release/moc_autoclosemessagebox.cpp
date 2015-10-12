/****************************************************************************
** Meta object code from reading C++ file 'autoclosemessagebox.h'
**
** Created: Sun Sep 27 17:56:58 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/utils/autoclosemessagebox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autoclosemessagebox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AutoCloseMessageBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   30,   30,   30, 0x09,
      31,   30,   30,   30, 0x09,
      42,   30,   30,   30, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AutoCloseMessageBox[] = {
    "AutoCloseMessageBox\0moveOut()\0\0"
    "moveBack()\0wait()\0"
};

void AutoCloseMessageBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AutoCloseMessageBox *_t = static_cast<AutoCloseMessageBox *>(_o);
        switch (_id) {
        case 0: _t->moveOut(); break;
        case 1: _t->moveBack(); break;
        case 2: _t->wait(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AutoCloseMessageBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AutoCloseMessageBox::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_AutoCloseMessageBox,
      qt_meta_data_AutoCloseMessageBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AutoCloseMessageBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AutoCloseMessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AutoCloseMessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AutoCloseMessageBox))
        return static_cast<void*>(const_cast< AutoCloseMessageBox*>(this));
    return QLabel::qt_metacast(_clname);
}

int AutoCloseMessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
