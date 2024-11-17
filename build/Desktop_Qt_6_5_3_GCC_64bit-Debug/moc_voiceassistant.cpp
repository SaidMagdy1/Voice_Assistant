/****************************************************************************
** Meta object code from reading C++ file 'voiceassistant.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../voiceassistant.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'voiceassistant.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSVoiceAssistantENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSVoiceAssistantENDCLASS = QtMocHelpers::stringData(
    "VoiceAssistant",
    "killedChanged",
    "",
    "runningChanged",
    "responseChanged",
    "CallScript",
    "killProcess",
    "running",
    "response"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVoiceAssistantENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[15];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[16];
    char stringdata5[11];
    char stringdata6[12];
    char stringdata7[8];
    char stringdata8[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVoiceAssistantENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVoiceAssistantENDCLASS_t qt_meta_stringdata_CLASSVoiceAssistantENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "VoiceAssistant"
        QT_MOC_LITERAL(15, 13),  // "killedChanged"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 14),  // "runningChanged"
        QT_MOC_LITERAL(45, 15),  // "responseChanged"
        QT_MOC_LITERAL(61, 10),  // "CallScript"
        QT_MOC_LITERAL(72, 11),  // "killProcess"
        QT_MOC_LITERAL(84, 7),  // "running"
        QT_MOC_LITERAL(92, 8)   // "response"
    },
    "VoiceAssistant",
    "killedChanged",
    "",
    "runningChanged",
    "responseChanged",
    "CallScript",
    "killProcess",
    "running",
    "response"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVoiceAssistantENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   63, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    3 /* Public */,
       3,    0,   57,    2, 0x06,    4 /* Public */,
       4,    0,   58,    2, 0x06,    5 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   59,    2, 0x02,    6 /* Public */,
       6,    0,   60,    2, 0x02,    7 /* Public */,
       7,    0,   61,    2, 0x102,    8 /* Public | MethodIsConst  */,
       8,    0,   62,    2, 0x102,    9 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::QString,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00015803, uint(1), 0,
       8, QMetaType::QString, 0x00015903, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject VoiceAssistant::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSVoiceAssistantENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVoiceAssistantENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVoiceAssistantENDCLASS_t,
        // property 'running'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'response'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VoiceAssistant, std::true_type>,
        // method 'killedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'runningChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'responseChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CallScript'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'killProcess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'running'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'response'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void VoiceAssistant::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VoiceAssistant *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->killedChanged(); break;
        case 1: _t->runningChanged(); break;
        case 2: _t->responseChanged(); break;
        case 3: { QString _r = _t->CallScript();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->killProcess(); break;
        case 5: { bool _r = _t->running();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->response();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VoiceAssistant::*)();
            if (_t _q_method = &VoiceAssistant::killedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VoiceAssistant::*)();
            if (_t _q_method = &VoiceAssistant::runningChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VoiceAssistant::*)();
            if (_t _q_method = &VoiceAssistant::responseChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VoiceAssistant *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->running(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->response(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VoiceAssistant *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setrunning(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setresponse(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *VoiceAssistant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VoiceAssistant::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVoiceAssistantENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VoiceAssistant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void VoiceAssistant::killedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VoiceAssistant::runningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VoiceAssistant::responseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
