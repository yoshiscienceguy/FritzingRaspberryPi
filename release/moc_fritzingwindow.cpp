/****************************************************************************
** Meta object code from reading C++ file 'fritzingwindow.h'
**
** Created: Sun Sep 27 17:53:19 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/mainwindow/fritzingwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fritzingwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FritzingWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   37,   48,   48, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   77,   48,   48, 0x09,
      85,   48,   92,   48, 0x09,
      97,   48,   92,   48, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FritzingWindow[] = {
    "FritzingWindow\0readOnlyChanged(bool)\0"
    "isReadOnly\0\0undoStackCleanChanged(bool)\0"
    "isClean\0save()\0bool\0saveAs()\0"
};

void FritzingWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FritzingWindow *_t = static_cast<FritzingWindow *>(_o);
        switch (_id) {
        case 0: _t->readOnlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->undoStackCleanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FritzingWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FritzingWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FritzingWindow,
      qt_meta_data_FritzingWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FritzingWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FritzingWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FritzingWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FritzingWindow))
        return static_cast<void*>(const_cast< FritzingWindow*>(this));
    if (!strcmp(_clname, "Bundler"))
        return static_cast< Bundler*>(const_cast< FritzingWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FritzingWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FritzingWindow::readOnlyChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
