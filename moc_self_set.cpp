/****************************************************************************
** Meta object code from reading C++ file 'self_set.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt-son/self_set.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'self_set.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_self_set_t {
    QByteArrayData data[11];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_self_set_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_self_set_t qt_meta_stringdata_self_set = {
    {
QT_MOC_LITERAL(0, 0, 8), // "self_set"
QT_MOC_LITERAL(1, 9, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "on_self_set_accepted"
QT_MOC_LITERAL(4, 53, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(5, 86, 5), // "value"
QT_MOC_LITERAL(6, 92, 20), // "on_dial_valueChanged"
QT_MOC_LITERAL(7, 113, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(8, 137, 4), // "arg1"
QT_MOC_LITERAL(9, 142, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(10, 166, 21) // "on_pushButton_clicked"

    },
    "self_set\0on_buttonBox_accepted\0\0"
    "on_self_set_accepted\0"
    "on_horizontalSlider_valueChanged\0value\0"
    "on_dial_valueChanged\0on_lineEdit_textChanged\0"
    "arg1\0on_spinBox_valueChanged\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_self_set[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    1,   54,    2, 0x08 /* Private */,
       7,    1,   57,    2, 0x08 /* Private */,
       9,    1,   60,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void self_set::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        self_set *_t = static_cast<self_set *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonBox_accepted(); break;
        case 1: _t->on_self_set_accepted(); break;
        case 2: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_dial_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject self_set::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_self_set.data,
      qt_meta_data_self_set,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *self_set::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *self_set::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_self_set.stringdata0))
        return static_cast<void*>(const_cast< self_set*>(this));
    return QDialog::qt_metacast(_clname);
}

int self_set::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE


