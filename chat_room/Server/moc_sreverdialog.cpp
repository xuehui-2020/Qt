/****************************************************************************
** Meta object code from reading C++ file 'sreverdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sreverdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sreverdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SreverDialog_t {
    QByteArrayData data[8];
    char stringdata[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SreverDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SreverDialog_t qt_meta_stringdata_SreverDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SreverDialog"
QT_MOC_LITERAL(1, 13, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "onNewConnection"
QT_MOC_LITERAL(4, 52, 11), // "onReadyRead"
QT_MOC_LITERAL(5, 64, 10), // "sendMessge"
QT_MOC_LITERAL(6, 75, 3), // "buf"
QT_MOC_LITERAL(7, 79, 9) // "onTimeout"

    },
    "SreverDialog\0on_pushButton_clicked\0\0"
    "onNewConnection\0onReadyRead\0sendMessge\0"
    "buf\0onTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SreverDialog[] = {

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
       5,    1,   42,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void,

       0        // eod
};

void SreverDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SreverDialog *_t = static_cast<SreverDialog *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->onNewConnection(); break;
        case 2: _t->onReadyRead(); break;
        case 3: _t->sendMessge((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->onTimeout(); break;
        default: ;
        }
    }
}

const QMetaObject SreverDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SreverDialog.data,
      qt_meta_data_SreverDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SreverDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SreverDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SreverDialog.stringdata))
        return static_cast<void*>(const_cast< SreverDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SreverDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
