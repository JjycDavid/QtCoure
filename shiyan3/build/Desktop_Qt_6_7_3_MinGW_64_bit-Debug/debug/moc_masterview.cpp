/****************************************************************************
** Meta object code from reading C++ file 'masterview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../masterview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masterview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMasterViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMasterViewENDCLASS = QtMocHelpers::stringData(
    "MasterView",
    "goLoginView",
    "",
    "goWelcomeView",
    "goDoctorView",
    "goDepartment",
    "goPatientView",
    "goPatientEditView",
    "goPreviousView",
    "on_btBack_clicked",
    "on_stackedWidget_currentChanged",
    "arg1",
    "on_btLogout_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMasterViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x0a,    1 /* Public */,
       3,    0,   75,    2, 0x0a,    2 /* Public */,
       4,    0,   76,    2, 0x0a,    3 /* Public */,
       5,    0,   77,    2, 0x0a,    4 /* Public */,
       6,    0,   78,    2, 0x0a,    5 /* Public */,
       7,    0,   79,    2, 0x0a,    6 /* Public */,
       8,    0,   80,    2, 0x0a,    7 /* Public */,
       9,    0,   81,    2, 0x08,    8 /* Private */,
      10,    1,   82,    2, 0x08,    9 /* Private */,
      12,    0,   85,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MasterView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSMasterViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMasterViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMasterViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MasterView, std::true_type>,
        // method 'goLoginView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goWelcomeView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goDoctorView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goDepartment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goPatientView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goPatientEditView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goPreviousView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btBack_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stackedWidget_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btLogout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MasterView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MasterView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->goLoginView(); break;
        case 1: _t->goWelcomeView(); break;
        case 2: _t->goDoctorView(); break;
        case 3: _t->goDepartment(); break;
        case 4: _t->goPatientView(); break;
        case 5: _t->goPatientEditView(); break;
        case 6: _t->goPreviousView(); break;
        case 7: _t->on_btBack_clicked(); break;
        case 8: _t->on_stackedWidget_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_btLogout_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MasterView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasterView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMasterViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MasterView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
