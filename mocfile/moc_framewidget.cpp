/****************************************************************************
** Meta object code from reading C++ file 'framewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../maincontent/controlwidget/framecontrol/framewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'framewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FrameWidget_t {
    QByteArrayData data[8];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FrameWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FrameWidget_t qt_meta_stringdata_FrameWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FrameWidget"
QT_MOC_LITERAL(1, 12, 19), // "on_turn_btn_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 33), // "on_smart_ask_medicine_btn_cli..."
QT_MOC_LITERAL(4, 67, 35), // "on_smart_hospital_guide_btn_c..."
QT_MOC_LITERAL(5, 103, 31), // "on_smart_autognosis_btn_clicked"
QT_MOC_LITERAL(6, 135, 28), // "on_smart_qus_ans_btn_clicked"
QT_MOC_LITERAL(7, 164, 31) // "on_smart_pre_visits_btn_clicked"

    },
    "FrameWidget\0on_turn_btn_clicked\0\0"
    "on_smart_ask_medicine_btn_clicked\0"
    "on_smart_hospital_guide_btn_clicked\0"
    "on_smart_autognosis_btn_clicked\0"
    "on_smart_qus_ans_btn_clicked\0"
    "on_smart_pre_visits_btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FrameWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FrameWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FrameWidget *_t = static_cast<FrameWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_turn_btn_clicked(); break;
        case 1: _t->on_smart_ask_medicine_btn_clicked(); break;
        case 2: _t->on_smart_hospital_guide_btn_clicked(); break;
        case 3: _t->on_smart_autognosis_btn_clicked(); break;
        case 4: _t->on_smart_qus_ans_btn_clicked(); break;
        case 5: _t->on_smart_pre_visits_btn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FrameWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FrameWidget.data,
      qt_meta_data_FrameWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FrameWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FrameWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FrameWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FrameWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
