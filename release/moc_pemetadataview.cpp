/****************************************************************************
** Meta object code from reading C++ file 'pemetadataview.h'
**
** Created: Sun Sep 27 17:54:59 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/partseditor/pemetadataview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pemetadataview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PEMetadataView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   48,   59,   59, 0x05,
      60,   59,   59,   59, 0x05,
     102,   59,   59,   59, 0x05,

 // slots: signature, parameters, type, tag, flags
     127,   59,   59,   59, 0x09,
     140,   59,   59,   59, 0x09,
     154,   59,   59,   59, 0x09,
     173,   59,   59,   59, 0x09,
     186,   59,   59,   59, 0x09,
     200,   59,   59,   59, 0x09,
     215,   59,   59,   59, 0x09,
     227,   59,   59,   59, 0x09,
     238,   59,   59,   59, 0x09,
     256,   59,   59,   59, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PEMetadataView[] = {
    "PEMetadataView\0metadataChanged(QString,QString)\0"
    "name,value\0\0propertiesChanged(QHash<QString,QString>)\0"
    "tagsChanged(QStringList)\0titleEntry()\0"
    "authorEntry()\0descriptionEntry()\0"
    "labelEntry()\0familyEntry()\0variantEntry()\0"
    "dateEntry()\0urlEntry()\0propertiesEntry()\0"
    "tagsEntry()\0"
};

void PEMetadataView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PEMetadataView *_t = static_cast<PEMetadataView *>(_o);
        switch (_id) {
        case 0: _t->metadataChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->propertiesChanged((*reinterpret_cast< const QHash<QString,QString>(*)>(_a[1]))); break;
        case 2: _t->tagsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->titleEntry(); break;
        case 4: _t->authorEntry(); break;
        case 5: _t->descriptionEntry(); break;
        case 6: _t->labelEntry(); break;
        case 7: _t->familyEntry(); break;
        case 8: _t->variantEntry(); break;
        case 9: _t->dateEntry(); break;
        case 10: _t->urlEntry(); break;
        case 11: _t->propertiesEntry(); break;
        case 12: _t->tagsEntry(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PEMetadataView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PEMetadataView::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_PEMetadataView,
      qt_meta_data_PEMetadataView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PEMetadataView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PEMetadataView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PEMetadataView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PEMetadataView))
        return static_cast<void*>(const_cast< PEMetadataView*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int PEMetadataView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PEMetadataView::metadataChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PEMetadataView::propertiesChanged(const QHash<QString,QString> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PEMetadataView::tagsChanged(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_FocusOutTextEdit[] = {

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
      17,   28,   28,   28, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_FocusOutTextEdit[] = {
    "FocusOutTextEdit\0focusOut()\0\0"
};

void FocusOutTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FocusOutTextEdit *_t = static_cast<FocusOutTextEdit *>(_o);
        switch (_id) {
        case 0: _t->focusOut(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FocusOutTextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FocusOutTextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_FocusOutTextEdit,
      qt_meta_data_FocusOutTextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FocusOutTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FocusOutTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FocusOutTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FocusOutTextEdit))
        return static_cast<void*>(const_cast< FocusOutTextEdit*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int FocusOutTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
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
void FocusOutTextEdit::focusOut()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
