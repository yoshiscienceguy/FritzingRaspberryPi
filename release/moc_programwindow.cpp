/****************************************************************************
** Meta object code from reading C++ file 'programwindow.h'
**
** Created: Sun Sep 27 18:07:37 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/program/programwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'programwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PTabWidget[] = {

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
      11,   27,   33,   33, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PTabWidget[] = {
    "PTabWidget\0tabChanged(int)\0index\0\0"
};

void PTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PTabWidget *_t = static_cast<PTabWidget *>(_o);
        switch (_id) {
        case 0: _t->tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PTabWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PTabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_PTabWidget,
      qt_meta_data_PTabWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PTabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PTabWidget))
        return static_cast<void*>(const_cast< PTabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int PTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ProgramWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   23,   23,   23, 0x05,
      24,   62,   23,   23, 0x05,
      82,  135,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     179,   23,   23,   23, 0x09,
     197,   23,  206,   23, 0x09,
     218,   23,   23,   23, 0x09,
     236,  250,   23,   23, 0x09,
     256,   23,   23,   23, 0x09,
     269,   23,   23,   23, 0x09,
     284,   23,   23,   23, 0x09,
     299,   23,   23,   23, 0x09,
     314,  342,   23,   23, 0x09,
     346,  366,   23,   23, 0x09,
     383,   23,   23,   23, 0x09,
     391,  460,   23,   23, 0x09,
     551,   23,   23,   23, 0x09,
     571,  617,   23,   23, 0x09,
     637,   23,   23,   23, 0x09,
     660,   23,   23,   23, 0x09,
     682,   23,   23,   23, 0x09,
     700,   23,   23,   23, 0x09,
     724,   23,   23,   23, 0x09,
     733,   23,   23,   23, 0x09,
     740,   23,   23,   23, 0x09,
     747,   23,   23,   23, 0x09,
     753,   23,   23,   23, 0x09,
     760,   23,   23,   23, 0x09,
     768,   23,   23,   23, 0x09,
     780,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ProgramWindow[] = {
    "ProgramWindow\0closed()\0\0"
    "changeActivationSignal(bool,QWidget*)\0"
    "activate,originator\0"
    "linkToProgramFile(QString,QString,QString,bool,bool)\0"
    "filename,language,programmer,addlink,strong\0"
    "loadProgramFile()\0addTab()\0ProgramTab*\0"
    "closeCurrentTab()\0closeTab(int)\0index\0"
    "tabSave(int)\0tabSaveAs(int)\0tabRename(int)\0"
    "duplicateTab()\0tabBeforeClosing(int,bool&)\0"
    ",ok\0tabDelete(int,bool)\0index,deleteFile\0"
    "print()\0"
    "updateMenu(bool,bool,bool,bool,bool,QString,QString,QString,QString)\0"
    "programEnable,undoEnable,redoEnable,cutEnable,copyEnable,language,port"
    ",programmer,filename\0"
    "updateSerialPorts()\0"
    "portProcessFinished(int,QProcess::ExitStatus)\0"
    "exitCode,exitStatus\0portProcessReadyRead()\0"
    "setLanguage(QAction*)\0setPort(QAction*)\0"
    "setProgrammer(QAction*)\0rename()\0"
    "undo()\0redo()\0cut()\0copy()\0paste()\0"
    "selectAll()\0sendProgram()\0"
};

void ProgramWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProgramWindow *_t = static_cast<ProgramWindow *>(_o);
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->changeActivationSignal((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 2: _t->linkToProgramFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 3: _t->loadProgramFile(); break;
        case 4: { ProgramTab* _r = _t->addTab();
            if (_a[0]) *reinterpret_cast< ProgramTab**>(_a[0]) = _r; }  break;
        case 5: _t->closeCurrentTab(); break;
        case 6: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->tabSave((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->tabSaveAs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->tabRename((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->duplicateTab(); break;
        case 11: _t->tabBeforeClosing((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->tabDelete((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->print(); break;
        case 14: _t->updateMenu((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9]))); break;
        case 15: _t->updateSerialPorts(); break;
        case 16: _t->portProcessFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 17: _t->portProcessReadyRead(); break;
        case 18: _t->setLanguage((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 19: _t->setPort((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 20: _t->setProgrammer((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 21: _t->rename(); break;
        case 22: _t->undo(); break;
        case 23: _t->redo(); break;
        case 24: _t->cut(); break;
        case 25: _t->copy(); break;
        case 26: _t->paste(); break;
        case 27: _t->selectAll(); break;
        case 28: _t->sendProgram(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProgramWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProgramWindow::staticMetaObject = {
    { &FritzingWindow::staticMetaObject, qt_meta_stringdata_ProgramWindow,
      qt_meta_data_ProgramWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProgramWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProgramWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProgramWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProgramWindow))
        return static_cast<void*>(const_cast< ProgramWindow*>(this));
    return FritzingWindow::qt_metacast(_clname);
}

int ProgramWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FritzingWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void ProgramWindow::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ProgramWindow::changeActivationSignal(bool _t1, QWidget * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProgramWindow::linkToProgramFile(const QString & _t1, const QString & _t2, const QString & _t3, bool _t4, bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
