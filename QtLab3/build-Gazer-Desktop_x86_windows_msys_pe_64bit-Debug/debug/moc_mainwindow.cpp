/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Lab3/Lab3/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "showCameraInfo"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "openCamera"
QT_MOC_LITERAL(4, 38, 11), // "updateFrame"
QT_MOC_LITERAL(5, 50, 8), // "cv::Mat*"
QT_MOC_LITERAL(6, 59, 12), // "calculateFPS"
QT_MOC_LITERAL(7, 72, 9), // "updateFPS"
QT_MOC_LITERAL(8, 82, 18), // "recordingStartStop"
QT_MOC_LITERAL(9, 101, 16), // "appendSavedVideo"
QT_MOC_LITERAL(10, 118, 4), // "name"
QT_MOC_LITERAL(11, 123, 19), // "updateMonitorStatus"
QT_MOC_LITERAL(12, 143, 6), // "status"
QT_MOC_LITERAL(13, 150, 10), // "showStatus"
QT_MOC_LITERAL(14, 161, 3), // "fps"
QT_MOC_LITERAL(15, 165, 10), // "cv::Scalar"
QT_MOC_LITERAL(16, 176, 11), // "cv_arr_mean"
QT_MOC_LITERAL(17, 188, 8), // "arr_mean"
QT_MOC_LITERAL(18, 197, 14), // "cv_arr_std_dev"
QT_MOC_LITERAL(19, 212, 11) // "arr_std_dev"

    },
    "MainWindow\0showCameraInfo\0\0openCamera\0"
    "updateFrame\0cv::Mat*\0calculateFPS\0"
    "updateFPS\0recordingStartStop\0"
    "appendSavedVideo\0name\0updateMonitorStatus\0"
    "status\0showStatus\0fps\0cv::Scalar\0"
    "cv_arr_mean\0arr_mean\0cv_arr_std_dev\0"
    "arr_std_dev"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    1,   65,    2, 0x08 /* Private */,
       8,    0,   68,    2, 0x08 /* Private */,
       9,    1,   69,    2, 0x08 /* Private */,
      11,    1,   72,    2, 0x08 /* Private */,
      13,    5,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Float, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 15,   14,   16,   17,   18,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showCameraInfo(); break;
        case 1: _t->openCamera(); break;
        case 2: _t->updateFrame((*reinterpret_cast< cv::Mat*(*)>(_a[1]))); break;
        case 3: _t->calculateFPS(); break;
        case 4: _t->updateFPS((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->recordingStartStop(); break;
        case 6: _t->appendSavedVideo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->updateMonitorStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->showStatus((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< cv::Scalar(*)>(_a[2])),(*reinterpret_cast< cv::Scalar(*)>(_a[3])),(*reinterpret_cast< cv::Scalar(*)>(_a[4])),(*reinterpret_cast< cv::Scalar(*)>(_a[5]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
