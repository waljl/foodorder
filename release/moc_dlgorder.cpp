/****************************************************************************
** Meta object code from reading C++ file 'dlgorder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt/foodorder/dlgorder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgorder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DlgOrder_t {
    QByteArrayData data[8];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DlgOrder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DlgOrder_t qt_meta_stringdata_DlgOrder = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DlgOrder"
QT_MOC_LITERAL(1, 9, 18), // "on_pbFresh_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "on_pbAdd_clicked"
QT_MOC_LITERAL(4, 46, 17), // "on_pbSave_clicked"
QT_MOC_LITERAL(5, 64, 25), // "on_pbCancel_Order_clicked"
QT_MOC_LITERAL(6, 90, 4), // "type"
QT_MOC_LITERAL(7, 95, 5) // "index"

    },
    "DlgOrder\0on_pbFresh_clicked\0\0"
    "on_pbAdd_clicked\0on_pbSave_clicked\0"
    "on_pbCancel_Order_clicked\0type\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DlgOrder[] = {

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

void DlgOrder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DlgOrder *_t = static_cast<DlgOrder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbFresh_clicked(); break;
        case 1: _t->on_pbAdd_clicked(); break;
        case 2: _t->on_pbSave_clicked(); break;
        case 3: _t->on_pbCancel_Order_clicked(); break;
        case 4: _t->type((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DlgOrder::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DlgOrder.data,
      qt_meta_data_DlgOrder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DlgOrder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DlgOrder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DlgOrder.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DlgOrder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
