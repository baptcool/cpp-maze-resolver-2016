/****************************************************************************
** Meta object code from reading C++ file 'evaluation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../model/evaluation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'evaluation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EvaluationReportProducer_t {
    QByteArrayData data[10];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EvaluationReportProducer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EvaluationReportProducer_t qt_meta_stringdata_EvaluationReportProducer = {
    {
QT_MOC_LITERAL(0, 0, 24), // "EvaluationReportProducer"
QT_MOC_LITERAL(1, 25, 8), // "finished"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "progressRangeChanged"
QT_MOC_LITERAL(4, 56, 20), // "progressValueChanged"
QT_MOC_LITERAL(5, 77, 11), // "resultReady"
QT_MOC_LITERAL(6, 89, 29), // "std::vector<EvaluationReport>"
QT_MOC_LITERAL(7, 119, 7), // "reports"
QT_MOC_LITERAL(8, 127, 6), // "cancel"
QT_MOC_LITERAL(9, 134, 21) // "handleFinishedProduce"

    },
    "EvaluationReportProducer\0finished\0\0"
    "progressRangeChanged\0progressValueChanged\0"
    "resultReady\0std::vector<EvaluationReport>\0"
    "reports\0cancel\0handleFinishedProduce"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EvaluationReportProducer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    2,   45,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   56,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EvaluationReportProducer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EvaluationReportProducer *_t = static_cast<EvaluationReportProducer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->progressRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->progressValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->resultReady((*reinterpret_cast< const std::vector<EvaluationReport>(*)>(_a[1]))); break;
        case 4: _t->cancel(); break;
        case 5: _t->handleFinishedProduce(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EvaluationReportProducer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EvaluationReportProducer::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (EvaluationReportProducer::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EvaluationReportProducer::progressRangeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (EvaluationReportProducer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EvaluationReportProducer::progressValueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (EvaluationReportProducer::*_t)(const std::vector<EvaluationReport> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EvaluationReportProducer::resultReady)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject EvaluationReportProducer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EvaluationReportProducer.data,
      qt_meta_data_EvaluationReportProducer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EvaluationReportProducer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EvaluationReportProducer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EvaluationReportProducer.stringdata0))
        return static_cast<void*>(const_cast< EvaluationReportProducer*>(this));
    return QObject::qt_metacast(_clname);
}

int EvaluationReportProducer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void EvaluationReportProducer::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void EvaluationReportProducer::progressRangeChanged(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EvaluationReportProducer::progressValueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void EvaluationReportProducer::resultReady(const std::vector<EvaluationReport> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
