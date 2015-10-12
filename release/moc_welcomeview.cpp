/****************************************************************************
** Meta object code from reading C++ file 'welcomeview.h'
**
** Created: Sun Sep 27 18:07:06 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fritzing-0.8.7b.source/src/sketch/welcomeview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'welcomeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BlogListWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      11,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   49,   49,   49, 0x0a,

 // properties: name, type, flags
      50,   65, 0x43095103,
      72,   92, 0x0a095103,
     100,   92, 0x0a095103,
     118,   92, 0x0a095103,
     140,   65, 0x43095103,
     155,   92, 0x0a095103,
     175,   92, 0x0a095103,
     193,   92, 0x0a095103,
     215,   65, 0x43095103,
     229,   92, 0x0a095103,
     248,   92, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_BlogListWidget[] = {
    "BlogListWidget\0itemEnteredSlot(QListWidgetItem*)\0"
    "\0titleTextColor\0QColor\0titleTextFontFamily\0"
    "QString\0titleTextFontSize\0"
    "titleTextExtraLeading\0introTextColor\0"
    "introTextFontFamily\0introTextFontSize\0"
    "introTextExtraLeading\0dateTextColor\0"
    "dateTextFontFamily\0dateTextFontSize\0"
};

void BlogListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BlogListWidget *_t = static_cast<BlogListWidget *>(_o);
        switch (_id) {
        case 0: _t->itemEnteredSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BlogListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BlogListWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_BlogListWidget,
      qt_meta_data_BlogListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BlogListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BlogListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BlogListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BlogListWidget))
        return static_cast<void*>(const_cast< BlogListWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int BlogListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = titleTextColor(); break;
        case 1: *reinterpret_cast< QString*>(_v) = titleTextFontFamily(); break;
        case 2: *reinterpret_cast< QString*>(_v) = titleTextFontSize(); break;
        case 3: *reinterpret_cast< QString*>(_v) = titleTextExtraLeading(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = introTextColor(); break;
        case 5: *reinterpret_cast< QString*>(_v) = introTextFontFamily(); break;
        case 6: *reinterpret_cast< QString*>(_v) = introTextFontSize(); break;
        case 7: *reinterpret_cast< QString*>(_v) = introTextExtraLeading(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = dateTextColor(); break;
        case 9: *reinterpret_cast< QString*>(_v) = dateTextFontFamily(); break;
        case 10: *reinterpret_cast< QString*>(_v) = dateTextFontSize(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTitleTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setTitleTextFontFamily(*reinterpret_cast< QString*>(_v)); break;
        case 2: setTitleTextFontSize(*reinterpret_cast< QString*>(_v)); break;
        case 3: setTitleTextExtraLeading(*reinterpret_cast< QString*>(_v)); break;
        case 4: setIntroTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: setIntroTextFontFamily(*reinterpret_cast< QString*>(_v)); break;
        case 6: setIntroTextFontSize(*reinterpret_cast< QString*>(_v)); break;
        case 7: setIntroTextExtraLeading(*reinterpret_cast< QString*>(_v)); break;
        case 8: setDateTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 9: setDateTextFontFamily(*reinterpret_cast< QString*>(_v)); break;
        case 10: setDateTextFontSize(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_WelcomeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   24,   24,   24, 0x05,
      25,   24,   24,   24, 0x05,
      38,   68,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      88,   24,   24,   24, 0x09,
     109,   24,   24,   24, 0x09,
     140,   24,   24,   24, 0x09,
     169,   24,   24,   24, 0x09,
     188,   24,   24,   24, 0x09,
     224,   24,   24,   24, 0x09,
     258,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_WelcomeView[] = {
    "WelcomeView\0newSketch()\0\0openSketch()\0"
    "recentSketch(QString,QString)\0"
    "filename,actionText\0clickRecent(QString)\0"
    "gotBlogSnippet(QNetworkReply*)\0"
    "gotBlogImage(QNetworkReply*)\0"
    "clickBlog(QString)\0"
    "recentItemClicked(QListWidgetItem*)\0"
    "blogItemClicked(QListWidgetItem*)\0"
    "nextTip()\0"
};

void WelcomeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WelcomeView *_t = static_cast<WelcomeView *>(_o);
        switch (_id) {
        case 0: _t->newSketch(); break;
        case 1: _t->openSketch(); break;
        case 2: _t->recentSketch((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->clickRecent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->gotBlogSnippet((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->gotBlogImage((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->clickBlog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->recentItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->blogItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->nextTip(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WelcomeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WelcomeView::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WelcomeView,
      qt_meta_data_WelcomeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WelcomeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WelcomeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WelcomeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WelcomeView))
        return static_cast<void*>(const_cast< WelcomeView*>(this));
    return QFrame::qt_metacast(_clname);
}

int WelcomeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void WelcomeView::newSketch()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void WelcomeView::openSketch()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void WelcomeView::recentSketch(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
