/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt-son/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[401];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "on_tab_destroyed"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 51, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 75, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(6, 99, 21), // "on_action_2_triggered"
QT_MOC_LITERAL(7, 121, 21), // "on_action_3_triggered"
QT_MOC_LITERAL(8, 143, 21), // "on_action_8_triggered"
QT_MOC_LITERAL(9, 165, 33), // "on_graphicsView_rubberBandCha..."
QT_MOC_LITERAL(10, 199, 12), // "viewportRect"
QT_MOC_LITERAL(11, 212, 14), // "fromScenePoint"
QT_MOC_LITERAL(12, 227, 12), // "toScenePoint"
QT_MOC_LITERAL(13, 240, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(14, 264, 14), // "setupMainGraph"
QT_MOC_LITERAL(15, 279, 1), // "m"
QT_MOC_LITERAL(16, 281, 1), // "n"
QT_MOC_LITERAL(17, 283, 13), // "_addLineGraph"
QT_MOC_LITERAL(18, 297, 13), // "_cleanTheList"
QT_MOC_LITERAL(19, 311, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(20, 335, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(21, 359, 35), // "on_horizontalScrollBar_valueC..."
QT_MOC_LITERAL(22, 395, 5) // "value"

    },
    "MainWindow\0on_tab_destroyed\0\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_action_2_triggered\0"
    "on_action_3_triggered\0on_action_8_triggered\0"
    "on_graphicsView_rubberBandChanged\0"
    "viewportRect\0fromScenePoint\0toScenePoint\0"
    "on_pushButton_4_clicked\0setupMainGraph\0"
    "m\0n\0_addLineGraph\0_cleanTheList\0"
    "on_pushButton_5_clicked\0on_pushButton_6_clicked\0"
    "on_horizontalScrollBar_valueChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    3,   96,    2, 0x08 /* Private */,
      13,    0,  103,    2, 0x08 /* Private */,
      14,    2,  104,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,
      18,    0,  110,    2, 0x08 /* Private */,
      19,    0,  111,    2, 0x08 /* Private */,
      20,    0,  112,    2, 0x08 /* Private */,
      21,    1,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect, QMetaType::QPointF, QMetaType::QPointF,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tab_destroyed(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_action_2_triggered(); break;
        case 5: _t->on_action_3_triggered(); break;
        case 6: _t->on_action_8_triggered(); break;
        case 7: _t->on_graphicsView_rubberBandChanged((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 8: _t->on_pushButton_4_clicked(); break;
        case 9: _t->setupMainGraph((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->_addLineGraph(); break;
        case 11: _t->_cleanTheList(); break;
        case 12: _t->on_pushButton_5_clicked(); break;
        case 13: _t->on_pushButton_6_clicked(); break;
        case 14: _t->on_horizontalScrollBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE


