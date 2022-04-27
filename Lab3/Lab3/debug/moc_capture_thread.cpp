/****************************************************************************
** Meta object code from reading C++ file 'capture_thread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../capture_thread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'capture_thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CaptureThread_t {
    QByteArrayData data[15];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CaptureThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CaptureThread_t qt_meta_stringdata_CaptureThread = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CaptureThread"
QT_MOC_LITERAL(1, 14, 13), // "frameCaptured"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "cv::Mat*"
QT_MOC_LITERAL(4, 38, 4), // "data"
QT_MOC_LITERAL(5, 43, 10), // "fpsChanged"
QT_MOC_LITERAL(6, 54, 3), // "fps"
QT_MOC_LITERAL(7, 58, 10), // "videoSaved"
QT_MOC_LITERAL(8, 69, 4), // "name"
QT_MOC_LITERAL(9, 74, 12), // "updateStatus"
QT_MOC_LITERAL(10, 87, 10), // "cv::Scalar"
QT_MOC_LITERAL(11, 98, 11), // "cv_arr_mean"
QT_MOC_LITERAL(12, 110, 8), // "arr_mean"
QT_MOC_LITERAL(13, 119, 14), // "cv_arr_std_dev"
QT_MOC_LITERAL(14, 134, 11) // "arr_std_dev"

    },
    "CaptureThread\0frameCaptured\0\0cv::Mat*\0"
    "data\0fpsChanged\0fps\0videoSaved\0name\0"
    "updateStatus\0cv::Scalar\0cv_arr_mean\0"
    "arr_mean\0cv_arr_std_dev\0arr_std_dev"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CaptureThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       7,    1,   40,    2, 0x06 /* Public */,
       9,    5,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Float, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10,    6,   11,   12,   13,   14,

       0        // eod
};

void CaptureThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CaptureThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->frameCaptured((*reinterpret_cast< cv::Mat*(*)>(_a[1]))); break;
        case 1: _t->fpsChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->videoSaved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->updateStatus((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< cv::Scalar(*)>(_a[2])),(*reinterpret_cast< cv::Scalar(*)>(_a[3])),(*reinterpret_cast< cv::Scalar(*)>(_a[4])),(*reinterpret_cast< cv::Scalar(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CaptureThread::*)(cv::Mat * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CaptureThread::frameCaptured)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CaptureThread::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CaptureThread::fpsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CaptureThread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CaptureThread::videoSaved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CaptureThread::*)(float , cv::Scalar , cv::Scalar , cv::Scalar , cv::Scalar );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CaptureThread::updateStatus)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CaptureThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_CaptureThread.data,
    qt_meta_data_CaptureThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CaptureThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int CaptureThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CaptureThread::frameCaptured(cv::Mat * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CaptureThread::fpsChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CaptureThread::videoSaved(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CaptureThread::updateStatus(float _t1, cv::Scalar _t2, cv::Scalar _t3, cv::Scalar _t4, cv::Scalar _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
