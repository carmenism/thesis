/****************************************************************************
** Meta object code from reading C++ file 'ms_prod_mainwindow.h'
**
** Created: Thu Jun 13 15:50:19 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kraken/ms_prod_mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ms_prod_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MS_PROD_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      38,   19,   19,   19, 0x08,
      55,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MS_PROD_MainWindow[] = {
    "MS_PROD_MainWindow\0\0pb_Load_Clicked()\0"
    "pb_Run_Clicked()\0pb_Fit_Clicked()\0"
};

void MS_PROD_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MS_PROD_MainWindow *_t = static_cast<MS_PROD_MainWindow *>(_o);
        switch (_id) {
        case 0: _t->pb_Load_Clicked(); break;
        case 1: _t->pb_Run_Clicked(); break;
        case 2: _t->pb_Fit_Clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MS_PROD_MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MS_PROD_MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MS_PROD_MainWindow,
      qt_meta_data_MS_PROD_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MS_PROD_MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MS_PROD_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MS_PROD_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MS_PROD_MainWindow))
        return static_cast<void*>(const_cast< MS_PROD_MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MS_PROD_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
