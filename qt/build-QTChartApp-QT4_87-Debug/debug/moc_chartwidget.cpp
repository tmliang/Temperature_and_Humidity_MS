/****************************************************************************
** Meta object code from reading C++ file 'chartwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QTChartApp/chartwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChartWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      40,   12,   12,   12, 0x08,
      66,   12,   12,   12, 0x08,
      79,   12,   12,   12, 0x08,
      98,   12,   12,   12, 0x08,
     118,   12,   12,   12, 0x08,
     140,   12,   12,   12, 0x08,
     162,   12,   12,   12, 0x08,
     187,   12,   12,   12, 0x08,
     231,   12,   12,   12, 0x08,
     276,   12,   12,   12, 0x08,
     301,   12,   12,   12, 0x08,
     327,   12,   12,   12, 0x08,
     350,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ChartWidget[] = {
    "ChartWidget\0\0on_StartChartbtn_clicked()\0"
    "on_StopChartbtn_clicked()\0readMyComA()\0"
    "realtimeDataSlot()\0on_Setbtn_clicked()\0"
    "on_Resetbtn_clicked()\0on_checkbtn_clicked()\0"
    "on_ChangeTheme_clicked()\0"
    "on_progressBar_customContextMenuRequested()\0"
    "on_progressBar2_customContextMenuRequested()\0"
    "on_kongtiao_on_clicked()\0"
    "on_kongtiao_off_clicked()\0"
    "on_chushi_on_clicked()\0on_chushi_off_clicked()\0"
};

void ChartWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChartWidget *_t = static_cast<ChartWidget *>(_o);
        switch (_id) {
        case 0: _t->on_StartChartbtn_clicked(); break;
        case 1: _t->on_StopChartbtn_clicked(); break;
        case 2: _t->readMyComA(); break;
        case 3: _t->realtimeDataSlot(); break;
        case 4: _t->on_Setbtn_clicked(); break;
        case 5: _t->on_Resetbtn_clicked(); break;
        case 6: _t->on_checkbtn_clicked(); break;
        case 7: _t->on_ChangeTheme_clicked(); break;
        case 8: _t->on_progressBar_customContextMenuRequested(); break;
        case 9: _t->on_progressBar2_customContextMenuRequested(); break;
        case 10: _t->on_kongtiao_on_clicked(); break;
        case 11: _t->on_kongtiao_off_clicked(); break;
        case 12: _t->on_chushi_on_clicked(); break;
        case 13: _t->on_chushi_off_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ChartWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChartWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChartWidget,
      qt_meta_data_ChartWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChartWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChartWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChartWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChartWidget))
        return static_cast<void*>(const_cast< ChartWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ChartWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
