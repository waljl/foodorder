/****************************************************************************
** Meta object code from reading C++ file 'dlgfoodmanger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt/foodorder/dlgfoodmanger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgfoodmanger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DlgFoodManger_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DlgFoodManger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DlgFoodManger_t qt_meta_stringdata_DlgFoodManger = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DlgFoodManger"
QT_MOC_LITERAL(1, 14, 18), // "on_pbFresh_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "on_pbAdd_clicked"
QT_MOC_LITERAL(4, 51, 26), // "on_pbUpdate_Delete_clicked"
QT_MOC_LITERAL(5, 78, 17), // "on_pbExit_clicked"
QT_MOC_LITERAL(6, 96, 4), // "type"
QT_MOC_LITERAL(7, 101, 5) // "index"

    },
    "DlgFoodManger\0on_pbFresh_clicked\0\0"
    "on_pbAdd_clicked\0on_pbUpdate_Delete_clicked\0"
    "on_pbExit_clicked\0type\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DlgFoodManger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void DlgFoodManger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DlgFoodManger *_t = static_cast<DlgFoodManger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbFresh_clicked(); break;
        case 1: _t->on_pbAdd_clicked(); break;
        case 2: _t->on_pbUpdate_Delete_clicked(); break;
        case 3: _t->on_pbExit_clicked(); break;
        case 4: _t->type((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DlgFoodManger::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DlgFoodManger.data,
      qt_meta_data_DlgFoodManger,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DlgFoodManger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DlgFoodManger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DlgFoodManger.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DlgFoodManger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
