/****************************************************************************
** Meta object code from reading C++ file 'realtime_plot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../app/components/realtime_plot/include/realtime_plot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'realtime_plot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RealtimePlotter_t {
    QByteArrayData data[13];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RealtimePlotter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RealtimePlotter_t qt_meta_stringdata_RealtimePlotter = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RealtimePlotter"
QT_MOC_LITERAL(1, 16, 11), // "update_plot"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "set_scroll_speed"
QT_MOC_LITERAL(4, 46, 12), // "scroll_speed"
QT_MOC_LITERAL(5, 59, 16), // "set_refresh_time"
QT_MOC_LITERAL(6, 76, 12), // "refresh_time"
QT_MOC_LITERAL(7, 89, 9), // "set_y_val"
QT_MOC_LITERAL(8, 99, 5), // "y_val"
QT_MOC_LITERAL(9, 105, 15), // "set_xaxis_title"
QT_MOC_LITERAL(10, 121, 11), // "xaxis_title"
QT_MOC_LITERAL(11, 133, 15), // "set_yaxis_title"
QT_MOC_LITERAL(12, 149, 11) // "yaxis_title"

    },
    "RealtimePlotter\0update_plot\0\0"
    "set_scroll_speed\0scroll_speed\0"
    "set_refresh_time\0refresh_time\0set_y_val\0"
    "y_val\0set_xaxis_title\0xaxis_title\0"
    "set_yaxis_title\0yaxis_title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RealtimePlotter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    1,   45,    2, 0x0a /* Public */,
       5,    1,   48,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x0a /* Public */,
       9,    1,   54,    2, 0x0a /* Public */,
      11,    1,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void RealtimePlotter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RealtimePlotter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update_plot(); break;
        case 1: _t->set_scroll_speed((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->set_refresh_time((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->set_y_val((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 4: _t->set_xaxis_title((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->set_yaxis_title((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RealtimePlotter::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_RealtimePlotter.data,
    qt_meta_data_RealtimePlotter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RealtimePlotter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RealtimePlotter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RealtimePlotter.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RealtimePlotter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
