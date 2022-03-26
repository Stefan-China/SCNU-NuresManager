/****************************************************************************
** Meta object code from reading C++ file 'camera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../maincontent/controlwidget/cylindercontrol/camera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Camera_t {
    QByteArrayData data[28];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Camera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Camera_t qt_meta_stringdata_Camera = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Camera"
QT_MOC_LITERAL(1, 7, 19), // "id_information_send"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "address"
QT_MOC_LITERAL(4, 36, 5), // "brith"
QT_MOC_LITERAL(5, 42, 4), // "name"
QT_MOC_LITERAL(6, 47, 3), // "sex"
QT_MOC_LITERAL(7, 51, 2), // "id"
QT_MOC_LITERAL(8, 54, 11), // "photo_image"
QT_MOC_LITERAL(9, 66, 13), // "cameraBtnSlot"
QT_MOC_LITERAL(10, 80, 15), // "clearImgBtnSlot"
QT_MOC_LITERAL(11, 96, 17), // "choosePathBtnSlot"
QT_MOC_LITERAL(12, 114, 14), // "captureBtnSlot"
QT_MOC_LITERAL(13, 129, 14), // "openImgBtnSlot"
QT_MOC_LITERAL(14, 144, 17), // "cameraCaptureSlot"
QT_MOC_LITERAL(15, 162, 5), // "image"
QT_MOC_LITERAL(16, 168, 16), // "captureErrorSlot"
QT_MOC_LITERAL(17, 185, 26), // "QCameraImageCapture::Error"
QT_MOC_LITERAL(18, 212, 5), // "error"
QT_MOC_LITERAL(19, 218, 11), // "errorString"
QT_MOC_LITERAL(20, 230, 15), // "cameraStateSlot"
QT_MOC_LITERAL(21, 246, 14), // "QCamera::State"
QT_MOC_LITERAL(22, 261, 5), // "state"
QT_MOC_LITERAL(23, 267, 15), // "cameraErrorSlot"
QT_MOC_LITERAL(24, 283, 14), // "QCamera::Error"
QT_MOC_LITERAL(25, 298, 9), // "timerSlot"
QT_MOC_LITERAL(26, 308, 24), // "on_Del_Btn_close_clicked"
QT_MOC_LITERAL(27, 333, 21) // "on_pushButton_clicked"

    },
    "Camera\0id_information_send\0\0address\0"
    "brith\0name\0sex\0id\0photo_image\0"
    "cameraBtnSlot\0clearImgBtnSlot\0"
    "choosePathBtnSlot\0captureBtnSlot\0"
    "openImgBtnSlot\0cameraCaptureSlot\0image\0"
    "captureErrorSlot\0QCameraImageCapture::Error\0"
    "error\0errorString\0cameraStateSlot\0"
    "QCamera::State\0state\0cameraErrorSlot\0"
    "QCamera::Error\0timerSlot\0"
    "on_Del_Btn_close_clicked\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Camera[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    2,   97,    2, 0x08 /* Private */,
      16,    3,  102,    2, 0x08 /* Private */,
      20,    1,  109,    2, 0x08 /* Private */,
      23,    1,  112,    2, 0x08 /* Private */,
      25,    0,  115,    2, 0x08 /* Private */,
      26,    0,  116,    2, 0x08 /* Private */,
      27,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    7,   15,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 17, QMetaType::QString,    7,   18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 24,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Camera *_t = static_cast<Camera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->id_information_send((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 1: _t->cameraBtnSlot(); break;
        case 2: _t->clearImgBtnSlot(); break;
        case 3: _t->choosePathBtnSlot(); break;
        case 4: _t->captureBtnSlot(); break;
        case 5: _t->openImgBtnSlot(); break;
        case 6: _t->cameraCaptureSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 7: _t->captureErrorSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QCameraImageCapture::Error(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 8: _t->cameraStateSlot((*reinterpret_cast< QCamera::State(*)>(_a[1]))); break;
        case 9: _t->cameraErrorSlot((*reinterpret_cast< QCamera::Error(*)>(_a[1]))); break;
        case 10: _t->timerSlot(); break;
        case 11: _t->on_Del_Btn_close_clicked(); break;
        case 12: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCameraImageCapture::Error >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::State >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::Error >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Camera::*_t)(QString , QString , QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::id_information_send)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Camera::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Camera.data,
      qt_meta_data_Camera,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Camera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Camera.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Camera::id_information_send(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5, QString _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
