/****************************************************************************
** Meta object code from reading C++ file 'fileprogressdialog.h'
**
** Created: Sun Sep 27 17:57:35 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/utils/fileprogressdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileprogressdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileProgressDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   28,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x0a,
      45,   28,   28,   28, 0x0a,
      61,   28,   28,   28, 0x0a,
      77,   28,   28,   28, 0x0a,
      91,   28,   28,   28, 0x0a,
     102,  122,   28,   28, 0x0a,
     130,   28,   28,   28, 0x0a,
     143,  189,   28,   28, 0x0a,
     200,  245,   28,   28, 0x0a,
     255,   28,   28,   28, 0x0a,
     273,   28,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FileProgressDialog[] = {
    "FileProgressDialog\0cancel()\0\0"
    "setMinimum(int)\0setMaximum(int)\0"
    "addMaximum(int)\0setValue(int)\0incValue()\0"
    "setMessage(QString)\0message\0sendCancel()\0"
    "loadingInstancesSlot(ModelBase*,QDomElement&)\0"
    ",instances\0loadingInstanceSlot(ModelBase*,QDomElement&)\0"
    ",instance\0settingItemSlot()\0"
    "updateIndeterminate()\0"
};

void FileProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileProgressDialog *_t = static_cast<FileProgressDialog *>(_o);
        switch (_id) {
        case 0: _t->cancel(); break;
        case 1: _t->setMinimum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setMaximum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->addMaximum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->incValue(); break;
        case 6: _t->setMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->sendCancel(); break;
        case 8: _t->loadingInstancesSlot((*reinterpret_cast< ModelBase*(*)>(_a[1])),(*reinterpret_cast< QDomElement(*)>(_a[2]))); break;
        case 9: _t->loadingInstanceSlot((*reinterpret_cast< ModelBase*(*)>(_a[1])),(*reinterpret_cast< QDomElement(*)>(_a[2]))); break;
        case 10: _t->settingItemSlot(); break;
        case 11: _t->updateIndeterminate(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileProgressDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileProgressDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FileProgressDialog,
      qt_meta_data_FileProgressDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileProgressDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileProgressDialog))
        return static_cast<void*>(const_cast< FileProgressDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int FileProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void FileProgressDialog::cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
