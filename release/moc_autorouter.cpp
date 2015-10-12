/****************************************************************************
** Meta object code from reading C++ file 'autorouter.h'
**
** Created: Sun Sep 27 18:03:02 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/autoroute/autorouter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autorouter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Autorouter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   35,   35,   35, 0x05,
      36,   35,   35,   35, 0x05,
      58,   35,   35,   35, 0x05,
      75,   35,   35,   35, 0x05,
      95,   35,   35,   35, 0x05,
     113,   35,   35,   35, 0x05,
     141,   35,   35,   35, 0x05,
     170,   35,   35,   35, 0x05,
     195,   35,   35,   35, 0x05,
     214,   35,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
     231,   35,   35,   35, 0x0a,
     240,   35,   35,   35, 0x0a,
     254,   35,   35,   35, 0x0a,
     268,   35,   35,   35, 0x0a,
     278,   35,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Autorouter[] = {
    "Autorouter\0setMaximumProgress(int)\0\0"
    "setProgressValue(int)\0wantTopVisible()\0"
    "wantBottomVisible()\0wantBothVisible()\0"
    "setProgressMessage(QString)\0"
    "setProgressMessage2(QString)\0"
    "setCycleMessage(QString)\0setCycleCount(int)\0"
    "disableButtons()\0cancel()\0cancelTrace()\0"
    "stopTracing()\0useBest()\0setMaxCycles(int)\0"
};

void Autorouter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Autorouter *_t = static_cast<Autorouter *>(_o);
        switch (_id) {
        case 0: _t->setMaximumProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setProgressValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->wantTopVisible(); break;
        case 3: _t->wantBottomVisible(); break;
        case 4: _t->wantBothVisible(); break;
        case 5: _t->setProgressMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setProgressMessage2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setCycleMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setCycleCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->disableButtons(); break;
        case 10: _t->cancel(); break;
        case 11: _t->cancelTrace(); break;
        case 12: _t->stopTracing(); break;
        case 13: _t->useBest(); break;
        case 14: _t->setMaxCycles((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Autorouter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Autorouter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Autorouter,
      qt_meta_data_Autorouter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Autorouter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Autorouter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Autorouter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Autorouter))
        return static_cast<void*>(const_cast< Autorouter*>(this));
    return QObject::qt_metacast(_clname);
}

int Autorouter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Autorouter::setMaximumProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Autorouter::setProgressValue(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Autorouter::wantTopVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Autorouter::wantBottomVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Autorouter::wantBothVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Autorouter::setProgressMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Autorouter::setProgressMessage2(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Autorouter::setCycleMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Autorouter::setCycleCount(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Autorouter::disableButtons()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
