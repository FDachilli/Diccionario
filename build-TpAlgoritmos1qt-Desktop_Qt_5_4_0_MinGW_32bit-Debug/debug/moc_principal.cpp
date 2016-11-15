/****************************************************************************
** Meta object code from reading C++ file 'principal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TpAlgoritmos1qt/principal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'principal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Principal_t {
    QByteArrayData data[16];
    char stringdata[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Principal_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Principal_t qt_meta_stringdata_Principal = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Principal"
QT_MOC_LITERAL(1, 10, 31), // "on_actionGuardar_como_triggered"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 26), // "on_actionGuardar_triggered"
QT_MOC_LITERAL(4, 70, 24), // "on_actionAbrir_triggered"
QT_MOC_LITERAL(5, 95, 24), // "on_actionSalir_triggered"
QT_MOC_LITERAL(6, 120, 18), // "on_borrarR_clicked"
QT_MOC_LITERAL(7, 139, 18), // "on_borrarT_clicked"
QT_MOC_LITERAL(8, 158, 30), // "on_listaT_itemSelectionChanged"
QT_MOC_LITERAL(9, 189, 30), // "on_listaR_itemSelectionChanged"
QT_MOC_LITERAL(10, 220, 19), // "on_agregarR_clicked"
QT_MOC_LITERAL(11, 240, 19), // "on_agregarT_clicked"
QT_MOC_LITERAL(12, 260, 25), // "on_buscarPalabraR_clicked"
QT_MOC_LITERAL(13, 286, 25), // "on_buscarPalabraT_clicked"
QT_MOC_LITERAL(14, 312, 25), // "on_buscarPrefijoR_clicked"
QT_MOC_LITERAL(15, 338, 25) // "on_buscarPrefijoT_clicked"

    },
    "Principal\0on_actionGuardar_como_triggered\0"
    "\0on_actionGuardar_triggered\0"
    "on_actionAbrir_triggered\0"
    "on_actionSalir_triggered\0on_borrarR_clicked\0"
    "on_borrarT_clicked\0on_listaT_itemSelectionChanged\0"
    "on_listaR_itemSelectionChanged\0"
    "on_agregarR_clicked\0on_agregarT_clicked\0"
    "on_buscarPalabraR_clicked\0"
    "on_buscarPalabraT_clicked\0"
    "on_buscarPrefijoR_clicked\0"
    "on_buscarPrefijoT_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Principal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Principal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Principal *_t = static_cast<Principal *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->on_actionGuardar_como_triggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->on_actionGuardar_triggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->on_actionAbrir_triggered(); break;
        case 3: _t->on_actionSalir_triggered(); break;
        case 4: _t->on_borrarR_clicked(); break;
        case 5: _t->on_borrarT_clicked(); break;
        case 6: _t->on_listaT_itemSelectionChanged(); break;
        case 7: _t->on_listaR_itemSelectionChanged(); break;
        case 8: _t->on_agregarR_clicked(); break;
        case 9: _t->on_agregarT_clicked(); break;
        case 10: _t->on_buscarPalabraR_clicked(); break;
        case 11: _t->on_buscarPalabraT_clicked(); break;
        case 12: _t->on_buscarPrefijoR_clicked(); break;
        case 13: _t->on_buscarPrefijoT_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Principal::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Principal.data,
      qt_meta_data_Principal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Principal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Principal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Principal.stringdata))
        return static_cast<void*>(const_cast< Principal*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Principal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
