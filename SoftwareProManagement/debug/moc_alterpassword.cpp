/****************************************************************************
** Meta object code from reading C++ file 'alterpassword.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../alterpassword.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alterpassword.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_alterPassword_t {
    QByteArrayData data[7];
    char stringdata[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_alterPassword_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_alterPassword_t qt_meta_stringdata_alterPassword = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 17),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 11),
QT_MOC_LITERAL(4, 45, 21),
QT_MOC_LITERAL(5, 67, 17),
QT_MOC_LITERAL(6, 85, 6)
    },
    "alterPassword\0sigGetNewPassword\0\0"
    "newPassword\0on_BtnConfirm_clicked\0"
    "SlotAlterPassword\0status\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_alterPassword[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x08,
       5,    1,   33,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void alterPassword::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        alterPassword *_t = static_cast<alterPassword *>(_o);
        switch (_id) {
        case 0: _t->sigGetNewPassword((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_BtnConfirm_clicked(); break;
        case 2: _t->SlotAlterPassword((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (alterPassword::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&alterPassword::sigGetNewPassword)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject alterPassword::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_alterPassword.data,
      qt_meta_data_alterPassword,  qt_static_metacall, 0, 0}
};


const QMetaObject *alterPassword::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *alterPassword::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_alterPassword.stringdata))
        return static_cast<void*>(const_cast< alterPassword*>(this));
    return QDialog::qt_metacast(_clname);
}

int alterPassword::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void alterPassword::sigGetNewPassword(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
