/****************************************************************************
** Meta object code from reading C++ file 'LocalTrackGroupView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/jamtaba/gui/LocalTrackGroupView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LocalTrackGroupView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LocalTrackGroupView_t {
    QByteArrayData data[9];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalTrackGroupView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalTrackGroupView_t qt_meta_stringdata_LocalTrackGroupView = {
    {
QT_MOC_LITERAL(0, 0, 19), // "LocalTrackGroupView"
QT_MOC_LITERAL(1, 20, 11), // "nameChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "on_toolButtonClicked"
QT_MOC_LITERAL(4, 54, 22), // "onAddSubChannelClicked"
QT_MOC_LITERAL(5, 77, 26), // "on_toolButtonActionHovered"
QT_MOC_LITERAL(6, 104, 8), // "QAction*"
QT_MOC_LITERAL(7, 113, 6), // "action"
QT_MOC_LITERAL(8, 120, 28) // "on_toolButtonActionTriggered"

    },
    "LocalTrackGroupView\0nameChanged\0\0"
    "on_toolButtonClicked\0onAddSubChannelClicked\0"
    "on_toolButtonActionHovered\0QAction*\0"
    "action\0on_toolButtonActionTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalTrackGroupView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       8,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void LocalTrackGroupView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LocalTrackGroupView *_t = static_cast<LocalTrackGroupView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->on_toolButtonClicked(); break;
        case 2: _t->onAddSubChannelClicked(); break;
        case 3: _t->on_toolButtonActionHovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->on_toolButtonActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LocalTrackGroupView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LocalTrackGroupView::nameChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject LocalTrackGroupView::staticMetaObject = {
    { &TrackGroupView::staticMetaObject, qt_meta_stringdata_LocalTrackGroupView.data,
      qt_meta_data_LocalTrackGroupView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LocalTrackGroupView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalTrackGroupView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LocalTrackGroupView.stringdata0))
        return static_cast<void*>(const_cast< LocalTrackGroupView*>(this));
    return TrackGroupView::qt_metacast(_clname);
}

int LocalTrackGroupView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrackGroupView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void LocalTrackGroupView::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE