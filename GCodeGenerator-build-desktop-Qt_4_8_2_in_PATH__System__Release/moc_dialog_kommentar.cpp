/****************************************************************************
** Meta object code from reading C++ file 'dialog_kommentar.h'
**
** Created: Fri Nov 17 21:29:18 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dialoge/dialog_kommentar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_kommentar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog_Kommentar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x05,
      47,   18,   17,   17, 0x05,
      79,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     127,  105,   17,   17, 0x0a,
     155,   17,   17,   17, 0x08,
     189,   17,   17,   17, 0x08,
     216,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog_Kommentar[] = {
    "Dialog_Kommentar\0\0text\0sendDialogData(QString)\0"
    "sendDialogDataModifyed(QString)\0"
    "signalSaveConfig(QString)\0"
    "text,openToChangeData\0getDialogData(QString,bool)\0"
    "on_pushButton_Abbrechen_clicked()\0"
    "on_pushButton_OK_clicked()\0"
    "on_pushButton_save_clicked()\0"
};

void Dialog_Kommentar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog_Kommentar *_t = static_cast<Dialog_Kommentar *>(_o);
        switch (_id) {
        case 0: _t->sendDialogData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendDialogDataModifyed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->signalSaveConfig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->getDialogData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->on_pushButton_Abbrechen_clicked(); break;
        case 5: _t->on_pushButton_OK_clicked(); break;
        case 6: _t->on_pushButton_save_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dialog_Kommentar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog_Kommentar::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_Kommentar,
      qt_meta_data_Dialog_Kommentar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog_Kommentar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog_Kommentar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog_Kommentar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_Kommentar))
        return static_cast<void*>(const_cast< Dialog_Kommentar*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_Kommentar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Dialog_Kommentar::sendDialogData(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dialog_Kommentar::sendDialogDataModifyed(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dialog_Kommentar::signalSaveConfig(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
