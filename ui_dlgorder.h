/********************************************************************************
** Form generated from reading UI file 'dlgorder.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGORDER_H
#define UI_DLGORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgOrder
{
public:
    QPushButton *pbFresh;
    QPushButton *pbAdd;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *leClientID;
    QLabel *label_3;
    QLineEdit *leName;
    QGroupBox *groupBox_2;
    QTableWidget *twOrder;
    QPushButton *pbSave;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbCancel_Order;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *cbType;
    QGroupBox *groupBox;
    QTableView *tvList;

    void setupUi(QDialog *DlgOrder)
    {
        if (DlgOrder->objectName().isEmpty())
            DlgOrder->setObjectName(QStringLiteral("DlgOrder"));
        DlgOrder->resize(627, 384);
        pbFresh = new QPushButton(DlgOrder);
        pbFresh->setObjectName(QStringLiteral("pbFresh"));
        pbFresh->setGeometry(QRect(230, 20, 97, 27));
        pbAdd = new QPushButton(DlgOrder);
        pbAdd->setObjectName(QStringLiteral("pbAdd"));
        pbAdd->setGeometry(QRect(230, 200, 97, 27));
        layoutWidget = new QWidget(DlgOrder);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(340, 20, 261, 341));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        leClientID = new QLineEdit(layoutWidget);
        leClientID->setObjectName(QStringLiteral("leClientID"));

        gridLayout->addWidget(leClientID, 0, 1, 1, 2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        leName = new QLineEdit(layoutWidget);
        leName->setObjectName(QStringLiteral("leName"));

        gridLayout->addWidget(leName, 0, 4, 1, 1);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        twOrder = new QTableWidget(groupBox_2);
        if (twOrder->columnCount() < 3)
            twOrder->setColumnCount(3);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        twOrder->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        twOrder->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        twOrder->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        twOrder->setObjectName(QStringLiteral("twOrder"));
        twOrder->setGeometry(QRect(0, 20, 261, 251));

        gridLayout->addWidget(groupBox_2, 1, 0, 1, 5);

        pbSave = new QPushButton(layoutWidget);
        pbSave->setObjectName(QStringLiteral("pbSave"));

        gridLayout->addWidget(pbSave, 2, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(38, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        pbCancel_Order = new QPushButton(layoutWidget);
        pbCancel_Order->setObjectName(QStringLiteral("pbCancel_Order"));

        gridLayout->addWidget(pbCancel_Order, 2, 4, 1, 1);

        layoutWidget1 = new QWidget(DlgOrder);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 20, 201, 341));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        cbType = new QComboBox(layoutWidget1);
        cbType->addItem(QString());
        cbType->addItem(QString());
        cbType->addItem(QString());
        cbType->addItem(QString());
        cbType->addItem(QString());
        cbType->setObjectName(QStringLiteral("cbType"));

        gridLayout_2->addWidget(cbType, 0, 1, 1, 1);

        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        tvList = new QTableView(groupBox);
        tvList->setObjectName(QStringLiteral("tvList"));
        tvList->setGeometry(QRect(0, 20, 201, 281));

        gridLayout_2->addWidget(groupBox, 1, 0, 1, 2);


        retranslateUi(DlgOrder);

        QMetaObject::connectSlotsByName(DlgOrder);
    } // setupUi

    void retranslateUi(QDialog *DlgOrder)
    {
        DlgOrder->setWindowTitle(QApplication::translate("DlgOrder", "\350\256\242\351\244\220", nullptr));
        pbFresh->setText(QApplication::translate("DlgOrder", "\345\210\267\346\226\260", nullptr));
        pbAdd->setText(QApplication::translate("DlgOrder", "\346\267\273\345\212\240-->", nullptr));
        label_2->setText(QApplication::translate("DlgOrder", "\345\256\242\346\210\267\347\274\226\345\217\267:", nullptr));
        label_3->setText(QApplication::translate("DlgOrder", "\345\247\223\345\220\215:", nullptr));
        groupBox_2->setTitle(QApplication::translate("DlgOrder", "\350\256\242\345\215\225\345\210\227\350\241\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twOrder->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DlgOrder", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = twOrder->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DlgOrder", "\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = twOrder->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DlgOrder", "\344\273\267\346\240\274(\345\205\203)", nullptr));
        pbSave->setText(QApplication::translate("DlgOrder", "\344\277\235\345\255\230", nullptr));
        pbCancel_Order->setText(QApplication::translate("DlgOrder", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("DlgOrder", "\351\200\211\346\213\251\351\243\237\347\211\251\347\261\273\345\236\213:", nullptr));
        cbType->setItemText(0, QApplication::translate("DlgOrder", "\347\233\226\351\245\255", nullptr));
        cbType->setItemText(1, QApplication::translate("DlgOrder", "\347\233\222\351\245\255", nullptr));
        cbType->setItemText(2, QApplication::translate("DlgOrder", "\350\217\234\347\263\273", nullptr));
        cbType->setItemText(3, QApplication::translate("DlgOrder", "\344\270\273\351\243\237", nullptr));
        cbType->setItemText(4, QApplication::translate("DlgOrder", "\345\205\266\345\256\203", nullptr));

        groupBox->setTitle(QApplication::translate("DlgOrder", "\351\243\237\347\211\251\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgOrder: public Ui_DlgOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGORDER_H
