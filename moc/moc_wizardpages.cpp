/****************************************************************************
** Meta object code from reading C++ file 'wizardpages.h'
**
** Created: Sat Jun 5 21:55:56 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wizardpages.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wizardpages.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IntroPage[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_IntroPage[] = {
    "IntroPage\0"
};

const QMetaObject IntroPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_IntroPage,
      qt_meta_data_IntroPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IntroPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IntroPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IntroPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IntroPage))
        return static_cast<void*>(const_cast< IntroPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int IntroPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ConfigInitialPage[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x09,
      33,   18,   18,   18, 0x09,
      53,   18,   18,   18, 0x09,
      75,   18,   18,   18, 0x09,
     100,   18,   18,   18, 0x09,
     116,   18,   18,   18, 0x09,
     151,  146,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ConfigInitialPage[] = {
    "ConfigInitialPage\0\0changeRadio()\0"
    "openFileForImport()\0verFormatacaoDialog()\0"
    "insertExperimentalData()\0addRowInTable()\0"
    "okThenGetExperimentalPoints()\0item\0"
    "currentItemTableChanged(QTableWidgetItem*)\0"
};

const QMetaObject ConfigInitialPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_ConfigInitialPage,
      qt_meta_data_ConfigInitialPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConfigInitialPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConfigInitialPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConfigInitialPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigInitialPage))
        return static_cast<void*>(const_cast< ConfigInitialPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int ConfigInitialPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeRadio(); break;
        case 1: openFileForImport(); break;
        case 2: verFormatacaoDialog(); break;
        case 3: insertExperimentalData(); break;
        case 4: addRowInTable(); break;
        case 5: okThenGetExperimentalPoints(); break;
        case 6: currentItemTableChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
