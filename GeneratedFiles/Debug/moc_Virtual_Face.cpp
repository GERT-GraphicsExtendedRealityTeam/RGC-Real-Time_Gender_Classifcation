/****************************************************************************
** Meta object code from reading C++ file 'Virtual_Face.h'
**
** Created: Tue 27. Aug 17:30:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gui/Virtual_Face.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Virtual_Face.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gui__Virtual_Face[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_gui__Virtual_Face[] = {
    "gui::Virtual_Face\0"
};

void gui::Virtual_Face::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData gui::Virtual_Face::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gui::Virtual_Face::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gui__Virtual_Face,
      qt_meta_data_gui__Virtual_Face, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gui::Virtual_Face::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gui::Virtual_Face::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gui::Virtual_Face::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gui__Virtual_Face))
        return static_cast<void*>(const_cast< Virtual_Face*>(this));
    return QWidget::qt_metacast(_clname);
}

int gui::Virtual_Face::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
