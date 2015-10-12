/****************************************************************************
** Meta object code from reading C++ file 'sketchtoolbutton.h'
**
** Created: Sun Sep 27 17:52:54 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/sketchtoolbutton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sketchtoolbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SketchToolButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   27,   27,   27, 0x05,
      28,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   27,   27,   27, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SketchToolButton[] = {
    "SketchToolButton\0entered()\0\0left()\0"
    "setEnabledIconAux()\0"
};

void SketchToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SketchToolButton *_t = static_cast<SketchToolButton *>(_o);
        switch (_id) {
        case 0: _t->entered(); break;
        case 1: _t->left(); break;
        case 2: _t->setEnabledIconAux(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SketchToolButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SketchToolButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_SketchToolButton,
      qt_meta_data_SketchToolButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SketchToolButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SketchToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SketchToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SketchToolButton))
        return static_cast<void*>(const_cast< SketchToolButton*>(this));
    if (!strcmp(_clname, "AbstractStatesButton"))
        return static_cast< AbstractStatesButton*>(const_cast< SketchToolButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int SketchToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SketchToolButton::entered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SketchToolButton::left()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
