/****************************************************************************
** Meta object code from reading C++ file 'settingmenu.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "C:/Users/Andrew/Desktop/CIS-17B/Project/17B_Project_1/settingmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_settingMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      37,   12,   12,   12, 0x08,
      63,   12,   12,   12, 0x08,
      87,   12,   12,   12, 0x08,
     111,   12,   12,   12, 0x08,
     140,   12,   12,   12, 0x08,
     163,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_settingMenu[] = {
    "settingMenu\0\0on_easyButton_clicked()\0"
    "on_mediumButton_clicked()\0"
    "on_hardButton_clicked()\0on_nameButton_clicked()\0"
    "on_checkDifficulty_clicked()\0"
    "on_checkName_clicked()\0on_startButton_clicked()\0"
};

void settingMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        settingMenu *_t = static_cast<settingMenu *>(_o);
        switch (_id) {
        case 0: _t->on_easyButton_clicked(); break;
        case 1: _t->on_mediumButton_clicked(); break;
        case 2: _t->on_hardButton_clicked(); break;
        case 3: _t->on_nameButton_clicked(); break;
        case 4: _t->on_checkDifficulty_clicked(); break;
        case 5: _t->on_checkName_clicked(); break;
        case 6: _t->on_startButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData settingMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject settingMenu::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_settingMenu,
      qt_meta_data_settingMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &settingMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *settingMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *settingMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_settingMenu))
        return static_cast<void*>(const_cast< settingMenu*>(this));
    return QDialog::qt_metacast(_clname);
}

int settingMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
