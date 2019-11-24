/********************************************************************************
** Form generated from reading UI file 'dlgcount.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCOUNT_H
#define UI_DLGCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgCount
{
public:
    QCheckBox *cbVip;
    QPushButton *pbCount;
    QLineEdit *leMoney;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pbExit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leClientID;
    QPushButton *pbSearchInfo;
    QGroupBox *groupBox;
    QTableWidget *twList;

    void setupUi(QDialog *DlgCount)
    {
        if (DlgCount->objectName().isEmpty())
            DlgCount->setObjectName(QStringLiteral("DlgCount"));
        DlgCount->resize(539, 406);
        cbVip = new QCheckBox(DlgCount);
        cbVip->setObjectName(QStringLiteral("cbVip"));
        cbVip->setGeometry(QRect(300, 20, 97, 22));
        pbCount = new QPushButton(DlgCount);
        pbCount->setObjectName(QStringLiteral("pbCount"));
        pbCount->setGeometry(QRect(350, 120, 97, 27));
        leMoney = new QLineEdit(DlgCount);
        leMoney->setObjectName(QStringLiteral("leMoney"));
        leMoney->setGeometry(QRect(350, 210, 113, 27));
        label_2 = new QLabel(DlgCount);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 170, 101, 17));
        label_3 = new QLabel(DlgCount);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(470, 220, 21, 17));
        pbExit = new QPushButton(DlgCount);
        pbExit->setObjectName(QStringLiteral("pbExit"));
        pbExit->setGeometry(QRect(420, 360, 97, 27));
        layoutWidget = new QWidget(DlgCount);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 271, 371));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leClientID = new QLineEdit(layoutWidget);
        leClientID->setObjectName(QStringLiteral("leClientID"));

        gridLayout->addWidget(leClientID, 0, 1, 1, 1);

        pbSearchInfo = new QPushButton(layoutWidget);
        pbSearchInfo->setObjectName(QStringLiteral("pbSearchInfo"));

        gridLayout->addWidget(pbSearchInfo, 0, 2, 1, 1);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        twList = new QTableWidget(groupBox);
        if (twList->columnCount() < 2)
            twList->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        twList->setObjectName(QStringLiteral("twList"));
        twList->setGeometry(QRect(0, 20, 271, 321));

        gridLayout->addWidget(groupBox, 1, 0, 1, 3);


        retranslateUi(DlgCount);

        QMetaObject::connectSlotsByName(DlgCount);
    } // setupUi

    void retranslateUi(QDialog *DlgCount)
    {
        DlgCount->setWindowTitle(QApplication::translate("DlgCount", "\347\273\223\350\264\246", nullptr));
        cbVip->setText(QApplication::translate("DlgCount", "VIP \345\256\242\346\210\267", nullptr));
        pbCount->setText(QApplication::translate("DlgCount", "\347\273\223\345\270\220", nullptr));
        label_2->setText(QApplication::translate("DlgCount", "\345\272\224\344\273\230\346\200\273\351\242\235\344\270\272\357\274\232", nullptr));
        label_3->setText(QApplication::translate("DlgCount", "\345\205\203", nullptr));
        pbExit->setText(QApplication::translate("DlgCount", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("DlgCount", "\345\256\242\346\210\267\347\274\226\345\217\267:", nullptr));
        pbSearchInfo->setText(QApplication::translate("DlgCount", "\346\237\245\350\257\242\344\277\241\346\201\257", nullptr));
        groupBox->setTitle(QApplication::translate("DlgCount", "\346\211\200\350\256\242\350\217\234\345\215\225\345\210\227\350\241\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DlgCount", "\350\217\234\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = twList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DlgCount", "\345\215\225\344\273\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgCount: public Ui_DlgCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGCOUNT_H
