/****************************************************************************
** Meta object code from reading C++ file 'htmlinfoview.h'
**
** Created: Sun Sep 27 18:05:18 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/infoview/htmlinfoview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'htmlinfoview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TagLabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_TagLabel[] = {
    "TagLabel\0"
};

void TagLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TagLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TagLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_TagLabel,
      qt_meta_data_TagLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TagLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TagLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TagLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TagLabel))
        return static_cast<void*>(const_cast< TagLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int TagLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_HtmlInfoView[] = {

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
      13,   35,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   35,   35,   35, 0x09,
      49,   35,   35,   35, 0x09,
      68,   35,   35,   35, 0x09,
      89,   35,   35,   35, 0x09,
     110,  138,   35,   35, 0x09,
     147,   35,   35,   35, 0x09,
     164,   35,   35,   35, 0x09,
     183,   35,   35,   35, 0x09,
     206,   35,   35,   35, 0x09,
     216,   35,   35,   35, 0x09,
     231,   35,   35,   35, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_HtmlInfoView[] = {
    "HtmlInfoView\0clickObsoleteSignal()\0\0"
    "setContent()\0setInstanceTitle()\0"
    "instanceTitleEnter()\0instanceTitleLeave()\0"
    "instanceTitleEditable(bool)\0editable\0"
    "changeLock(bool)\0changeSticky(bool)\0"
    "clickObsolete(QString)\0xyEntry()\0"
    "unitsClicked()\0rotEntry()\0"
};

void HtmlInfoView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HtmlInfoView *_t = static_cast<HtmlInfoView *>(_o);
        switch (_id) {
        case 0: _t->clickObsoleteSignal(); break;
        case 1: _t->setContent(); break;
        case 2: _t->setInstanceTitle(); break;
        case 3: _t->instanceTitleEnter(); break;
        case 4: _t->instanceTitleLeave(); break;
        case 5: _t->instanceTitleEditable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->changeLock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->changeSticky((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->clickObsolete((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->xyEntry(); break;
        case 10: _t->unitsClicked(); break;
        case 11: _t->rotEntry(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HtmlInfoView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HtmlInfoView::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_HtmlInfoView,
      qt_meta_data_HtmlInfoView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HtmlInfoView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HtmlInfoView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HtmlInfoView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HtmlInfoView))
        return static_cast<void*>(const_cast< HtmlInfoView*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int HtmlInfoView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
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
void HtmlInfoView::clickObsoleteSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
