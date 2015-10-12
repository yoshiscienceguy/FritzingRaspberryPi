/****************************************************************************
** Meta object code from reading C++ file 'flineedit.h'
**
** Created: Sun Sep 27 17:57:40 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/utils/flineedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   23,   23,   23, 0x05,
      24,   23,   23,   23, 0x05,
      37,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FLineEdit[] = {
    "FLineEdit\0mouseEnter()\0\0mouseLeave()\0"
    "editable(bool)\0editingFinishedSlot()\0"
};

void FLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FLineEdit *_t = static_cast<FLineEdit *>(_o);
        switch (_id) {
        case 0: _t->mouseEnter(); break;
        case 1: _t->mouseLeave(); break;
        case 2: _t->editable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->editingFinishedSlot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_FLineEdit,
      qt_meta_data_FLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FLineEdit))
        return static_cast<void*>(const_cast< FLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int FLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
void FLineEdit::mouseEnter()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void FLineEdit::mouseLeave()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void FLineEdit::editable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
