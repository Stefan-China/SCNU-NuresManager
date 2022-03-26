/****************************************************************************
** Meta object code from reading C++ file 'camera_id.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../maincontent/controlwidget/cylindercontrol/camera_id.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera_id.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Camera_ID_t {
    QByteArrayData data[21];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Camera_ID_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Camera_ID_t qt_meta_stringdata_Camera_ID = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Camera_ID"
QT_MOC_LITERAL(1, 10, 13), // "cameraBtnSlot"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "clearImgBtnSlot"
QT_MOC_LITERAL(4, 41, 17), // "choosePathBtnSlot"
QT_MOC_LITERAL(5, 59, 14), // "captureBtnSlot"
QT_MOC_LITERAL(6, 74, 14), // "openImgBtnSlot"
QT_MOC_LITERAL(7, 89, 17), // "cameraCaptureSlot"
QT_MOC_LITERAL(8, 107, 2), // "id"
QT_MOC_LITERAL(9, 110, 5), // "image"
QT_MOC_LITERAL(10, 116, 16), // "captureErrorSlot"
QT_MOC_LITERAL(11, 133, 26), // "QCameraImageCapture::Error"
QT_MOC_LITERAL(12, 160, 5), // "error"
QT_MOC_LITERAL(13, 166, 11), // "errorString"
QT_MOC_LITERAL(14, 178, 15), // "cameraStateSlot"
QT_MOC_LITERAL(15, 194, 14), // "QCamera::State"
QT_MOC_LITERAL(16, 209, 5), // "state"
QT_MOC_LITERAL(17, 215, 15), // "cameraErrorSlot"
QT_MOC_LITERAL(18, 231, 14), // "QCamera::Error"
QT_MOC_LITERAL(19, 246, 9), // "timerSlot"
QT_MOC_LITERAL(20, 256, 24) // "on_Del_Btn_close_clicked"

    },
    "Camera_ID\0cameraBtnSlot\0\0clearImgBtnSlot\0"
    "choosePathBtnSlot\0captureBtnSlot\0"
    "openImgBtnSlot\0cameraCaptureSlot\0id\0"
    "image\0captureErrorSlot\0"
    "QCameraImageCapture::Error\0error\0"
    "errorString\0cameraStateSlot\0QCamera::State\0"
    "state\0cameraErrorSlot\0QCamera::Error\0"
    "timerSlot\0on_Del_Btn_close_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Camera_ID[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    2,   74,    2, 0x08 /* Private */,
      10,    3,   79,    2, 0x08 /* Private */,
      14,    1,   86,    2, 0x08 /* Private */,
      17,    1,   89,    2, 0x08 /* Private */,
      19,    0,   92,    2, 0x08 /* Private */,
      20,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    8,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11, QMetaType::QString,    8,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Camera_ID::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Camera_ID *_t = static_cast<Camera_ID *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cameraBtnSlot(); break;
        case 1: _t->clearImgBtnSlot(); break;
        case 2: _t->choosePathBtnSlot(); break;
        case 3: _t->captureBtnSlot(); break;
        case 4: _t->openImgBtnSlot(); break;
        case 5: _t->cameraCaptureSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 6: _t->captureErrorSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QCameraImageCapture::Error(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 7: _t->cameraStateSlot((*reinterpret_cast< QCamera::State(*)>(_a[1]))); break;
        case 8: _t->cameraErrorSlot((*reinterpret_cast< QCamera::Error(*)>(_a[1]))); break;
        case 9: _t->timerSlot(); break;
        case 10: _t->on_Del_Btn_close_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCameraImageCapture::Error >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::State >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::Error >(); break;
            }
            break;
        }
    }
}

const QMetaObject Camera_ID::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Camera_ID.data,
      qt_meta_data_Camera_ID,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Camera_ID::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Camera_ID::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Camera_ID.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Camera_ID::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
