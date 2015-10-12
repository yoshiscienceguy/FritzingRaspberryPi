/****************************************************************************
** Meta object code from reading C++ file 'hashpopulatewidget.h'
**
** Created: Sun Sep 27 17:55:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/partseditor/hashpopulatewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hashpopulatewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HashLineEdit[] = {

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
      13,   32,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_HashLineEdit[] = {
    "HashLineEdit\0updateObjectName()\0\0"
};

void HashLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HashLineEdit *_t = static_cast<HashLineEdit *>(_o);
        switch (_id) {
        case 0: _t->updateObjectName(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData HashLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HashLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_HashLineEdit,
      qt_meta_data_HashLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HashLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HashLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HashLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HashLineEdit))
        return static_cast<void*>(const_cast< HashLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int HashLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_HashRemoveButton[] = {

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
      17,   44,   44,   44, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_HashRemoveButton[] = {
    "HashRemoveButton\0clicked(HashRemoveButton*)\0"
    "\0"
};

void HashRemoveButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HashRemoveButton *_t = static_cast<HashRemoveButton *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< HashRemoveButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HashRemoveButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HashRemoveButton::staticMetaObject = {
    { &BaseRemoveButton::staticMetaObject, qt_meta_stringdata_HashRemoveButton,
      qt_meta_data_HashRemoveButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HashRemoveButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HashRemoveButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HashRemoveButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HashRemoveButton))
        return static_cast<void*>(const_cast< HashRemoveButton*>(this));
    return BaseRemoveButton::qt_metacast(_clname);
}

int HashRemoveButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseRemoveButton::qt_metacall(_c, _id, _a);
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
void HashRemoveButton::clicked(HashRemoveButton * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_HashPopulateWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   36,   36,   36, 0x05,
      37,   36,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   36,   36,   36, 0x09,
      73,   36,   36,   36, 0x09,
     102,   36,   36,   36, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_HashPopulateWidget[] = {
    "HashPopulateWidget\0editionStarted()\0"
    "\0changed()\0lastRowEditionCompleted()\0"
    "removeRow(HashRemoveButton*)\0"
    "lineEditChanged()\0"
};

void HashPopulateWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HashPopulateWidget *_t = static_cast<HashPopulateWidget *>(_o);
        switch (_id) {
        case 0: _t->editionStarted(); break;
        case 1: _t->changed(); break;
        case 2: _t->lastRowEditionCompleted(); break;
        case 3: _t->removeRow((*reinterpret_cast< HashRemoveButton*(*)>(_a[1]))); break;
        case 4: _t->lineEditChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HashPopulateWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HashPopulateWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_HashPopulateWidget,
      qt_meta_data_HashPopulateWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HashPopulateWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HashPopulateWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HashPopulateWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HashPopulateWidget))
        return static_cast<void*>(const_cast< HashPopulateWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int HashPopulateWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void HashPopulateWidget::editionStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void HashPopulateWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
