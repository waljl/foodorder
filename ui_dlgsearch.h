/********************************************************************************
** Form generated from reading UI file 'dlgsearch.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSEARCH_H
#define UI_DLGSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgSearch
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leClientID;
    QPushButton *pbClientDetail;
    QGroupBox *groupBox;
    QTableWidget *twList;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbCancel;

    void setupUi(QDialog *DlgSearch)
    {
        if (DlgSearch->objectName().isEmpty())
            DlgSearch->setObjectName(QStringLiteral("DlgSearch"));
        DlgSearch->resize(411, 398);
        layoutWidget = new QWidget(DlgSearch);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 371, 351));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leClientID = new QLineEdit(layoutWidget);
        leClientID->setObjectName(QStringLiteral("leClientID"));

        gridLayout->addWidget(leClientID, 0, 1, 1, 1);

        pbClientDetail = new QPushButton(layoutWidget);
        pbClientDetail->setObjectName(QStringLiteral("pbClientDetail"));

        gridLayout->addWidget(pbClientDetail, 0, 2, 1, 1);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        twList = new QTableWidget(groupBox);
        if (twList->columnCount() < 3)
            twList->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        twList->setObjectName(QStringLiteral("twList"));
        twList->setGeometry(QRect(0, 20, 371, 261));

        gridLayout->addWidget(groupBox, 1, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(238, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 2);

        pbCancel = new QPushButton(layoutWidget);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));

        gridLayout->addWidget(pbCancel, 2, 2, 1, 1);


        retranslateUi(DlgSearch);

        QMetaObject::connectSlotsByName(DlgSearch);
    } // setupUi

    void retranslateUi(QDialog *DlgSearch)
    {
        DlgSearch->setWindowTitle(QApplication::translate("DlgSearch", "\346\237\245\350\257\242", nullptr));
        label->setText(QApplication::translate("DlgSearch", "\347\224\250\346\210\267\347\274\226\345\217\267:", nullptr));
        pbClientDetail->setText(QApplication::translate("DlgSearch", "\350\257\246\346\203\205\346\237\245\350\257\242", nullptr));
        groupBox->setTitle(QApplication::translate("DlgSearch", "\347\224\250\346\210\267\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = twList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DlgSearch", "\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = twList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DlgSearch", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = twList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DlgSearch", "\350\256\242\351\244\220\346\225\260\351\207\217", nullptr));
        pbCancel->setText(QApplication::translate("DlgSearch", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgSearch: public Ui_DlgSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSEARCH_H
