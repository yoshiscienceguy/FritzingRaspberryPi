/****************************************************************************
** Meta object code from reading C++ file 'updatedialog.h'
**
** Created: Sun Sep 27 17:56:48 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/version/updatedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UpdateDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   37,   44,   44, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   44,   44,   44, 0x09,
      69,  107,   44,   44, 0x09,
     117,  145,   44,   44, 0x09,
     156,   44,   44,   44, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_UpdateDialog[] = {
    "UpdateDialog\0enableAgainSignal(bool)\0"
    "enable\0\0releasesAvailableSlot()\0"
    "xmlErrorSlot(QXmlStreamReader::Error)\0"
    "errorCode\0httpErrorSlot(QHttp::Error)\0"
    "statusCode\0stopClose()\0"
};

void UpdateDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UpdateDialog *_t = static_cast<UpdateDialog *>(_o);
        switch (_id) {
        case 0: _t->enableAgainSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->releasesAvailableSlot(); break;
        case 2: _t->xmlErrorSlot((*reinterpret_cast< QXmlStreamReader::Error(*)>(_a[1]))); break;
        case 3: _t->httpErrorSlot((*reinterpret_cast< QHttp::Error(*)>(_a[1]))); break;
        case 4: _t->stopClose(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UpdateDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UpdateDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UpdateDialog,
      qt_meta_data_UpdateDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UpdateDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UpdateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UpdateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateDialog))
        return static_cast<void*>(const_cast< UpdateDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UpdateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void UpdateDialog::enableAgainSignal(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
