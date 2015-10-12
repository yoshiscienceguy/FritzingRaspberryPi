/****************************************************************************
** Meta object code from reading C++ file 'programtab.h'
**
** Created: Sun Sep 27 18:07:27 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/program/programtab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'programtab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SerialPortComboBox[] = {

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
      19,   33,   33,   33, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SerialPortComboBox[] = {
    "SerialPortComboBox\0aboutToShow()\0\0"
};

void SerialPortComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SerialPortComboBox *_t = static_cast<SerialPortComboBox *>(_o);
        switch (_id) {
        case 0: _t->aboutToShow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SerialPortComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SerialPortComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_SerialPortComboBox,
      qt_meta_data_SerialPortComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SerialPortComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SerialPortComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SerialPortComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SerialPortComboBox))
        return static_cast<void*>(const_cast< SerialPortComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int SerialPortComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
void SerialPortComboBox::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_ProgramTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   27,   27,   27, 0x05,
      28,   27,   27,   27, 0x05,
      46,   27,   27,   27, 0x05,
      64,   87,   27,   27, 0x05,
      99,  184,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
     275,   27,   27,   27, 0x0a,
     296,   27,   27,   27, 0x0a,
     313,   27,  331,   27, 0x0a,
     336,   27,   27,   27, 0x0a,
     350,   27,   27,   27, 0x0a,
     357,  374,   27,   27, 0x0a,
     381,   27,   27,   27, 0x0a,
     388,  374,   27,   27, 0x0a,
     405,   27,   27,   27, 0x0a,
     411,  374,   27,   27, 0x0a,
     427,   27,   27,   27, 0x0a,
     434,  374,   27,   27, 0x0a,
     451,   27,   27,   27, 0x0a,
     459,   27,   27,   27, 0x0a,
     471,   27,   27,   27, 0x0a,
     483,   27,   27,   27, 0x0a,
     490,   27,   27,   27, 0x0a,
     499,   27,   27,   27, 0x0a,
     508,   27,   27,   27, 0x0a,
     522,   27,   27,   27, 0x0a,
     549,   27,   27,   27, 0x0a,
     575,   27,   27,   27, 0x0a,
     601,  650,   27,   27, 0x0a,
     670,   27,   27,   27, 0x0a,
     696,   27,   27,   27, 0x0a,
     709,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ProgramTab[] = {
    "ProgramTab\0wantToSave(int)\0\0"
    "wantToSaveAs(int)\0wantToRename(int)\0"
    "wantToDelete(int,bool)\0,deleteFile\0"
    "programWindowUpdateRequest(bool,bool,bool,bool,bool,QString,QString,QS"
    "tring,QString)\0"
    "programEnable,undoEnable,redoEnable,cutEnable,copyEnable,language,port"
    ",programmer,filename\0"
    "setLanguage(QString)\0setPort(QString)\0"
    "loadProgramFile()\0bool\0textChanged()\0"
    "undo()\0enableUndo(bool)\0enable\0redo()\0"
    "enableRedo(bool)\0cut()\0enableCut(bool)\0"
    "copy()\0enableCopy(bool)\0paste()\0"
    "selectAll()\0deleteTab()\0save()\0saveAs()\0"
    "rename()\0sendProgram()\0"
    "chooseProgrammerTimed(int)\0"
    "chooseProgrammerTimeout()\0"
    "chooseProgrammer(QString)\0"
    "programProcessFinished(int,QProcess::ExitStatus)\0"
    "exitCode,exitStatus\0programProcessReadyRead()\0"
    "updateMenu()\0updateSerialPorts()\0"
};

void ProgramTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProgramTab *_t = static_cast<ProgramTab *>(_o);
        switch (_id) {
        case 0: _t->wantToSave((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->wantToSaveAs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->wantToRename((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->wantToDelete((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->programWindowUpdateRequest((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9]))); break;
        case 5: _t->setLanguage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setPort((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: { bool _r = _t->loadProgramFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->textChanged(); break;
        case 9: _t->undo(); break;
        case 10: _t->enableUndo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->redo(); break;
        case 12: _t->enableRedo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->cut(); break;
        case 14: _t->enableCut((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->copy(); break;
        case 16: _t->enableCopy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->paste(); break;
        case 18: _t->selectAll(); break;
        case 19: _t->deleteTab(); break;
        case 20: _t->save(); break;
        case 21: _t->saveAs(); break;
        case 22: _t->rename(); break;
        case 23: _t->sendProgram(); break;
        case 24: _t->chooseProgrammerTimed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->chooseProgrammerTimeout(); break;
        case 26: _t->chooseProgrammer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->programProcessFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 28: _t->programProcessReadyRead(); break;
        case 29: _t->updateMenu(); break;
        case 30: _t->updateSerialPorts(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProgramTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProgramTab::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ProgramTab,
      qt_meta_data_ProgramTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProgramTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProgramTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProgramTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProgramTab))
        return static_cast<void*>(const_cast< ProgramTab*>(this));
    return QFrame::qt_metacast(_clname);
}

int ProgramTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void ProgramTab::wantToSave(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProgramTab::wantToSaveAs(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProgramTab::wantToRename(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProgramTab::wantToDelete(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ProgramTab::programWindowUpdateRequest(bool _t1, bool _t2, bool _t3, bool _t4, bool _t5, const QString & _t6, const QString & _t7, const QString & _t8, const QString & _t9)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_DeleteDialog[] = {

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
      13,   45,   52,   52, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DeleteDialog[] = {
    "DeleteDialog\0buttonClicked(QAbstractButton*)\0"
    "button\0\0"
};

void DeleteDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeleteDialog *_t = static_cast<DeleteDialog *>(_o);
        switch (_id) {
        case 0: _t->buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DeleteDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DeleteDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DeleteDialog,
      qt_meta_data_DeleteDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeleteDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeleteDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeleteDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeleteDialog))
        return static_cast<void*>(const_cast< DeleteDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int DeleteDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
