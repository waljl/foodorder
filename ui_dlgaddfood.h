/********************************************************************************
** Form generated from reading UI file 'dlgaddfood.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGADDFOOD_H
#define UI_DLGADDFOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgAddFood
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leName;
    QLabel *label_2;
    QComboBox *cbType;
    QLabel *label_3;
    QLineEdit *lePrice;
    QLabel *label_4;
    QPushButton *pbAdd;
    QPushButton *pbExit;

    void setupUi(QDialog *DlgAddFood)
    {
        if (DlgAddFood->objectName().isEmpty())
            DlgAddFood->setObjectName(QStringLiteral("DlgAddFood"));
        DlgAddFood->resize(279, 300);
        layoutWidget = new QWidget(DlgAddFood);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 231, 271));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leName = new QLineEdit(layoutWidget);
        leName->setObjectName(QStringLiteral("leName"));

        gridLayout->addWidget(leName, 0, 1, 1, 3);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cbType = new QComboBox(layoutWidget);
        cbType->addItem(QString());
        cbType->addItem(QString());
        cbType->addItem(QString());
        cbType->addItem(QString());
        cbType->addItem(QString());
        cbType->setObjectName(QStringLiteral("cbType"));

        gridLayout->addWidget(cbType, 1, 1, 1, 3);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lePrice = new QLineEdit(layoutWidget);
        lePrice->setObjectName(QStringLiteral("lePrice"));

        gridLayout->addWidget(lePrice, 2, 1, 1, 2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 3, 1, 1);

        pbAdd = new QPushButton(layoutWidget);
        pbAdd->setObjectName(QStringLiteral("pbAdd"));

        gridLayout->addWidget(pbAdd, 3, 0, 1, 2);

        pbExit = new QPushButton(layoutWidget);
        pbExit->setObjectName(QStringLiteral("pbExit"));

        gridLayout->addWidget(pbExit, 3, 2, 1, 2);


        retranslateUi(DlgAddFood);

        QMetaObject::connectSlotsByName(DlgAddFood);
    } // setupUi

    void retranslateUi(QDialog *DlgAddFood)
    {
        DlgAddFood->setWindowTitle(QApplication::translate("DlgAddFood", "\346\267\273\345\212\240\350\217\234\347\233\256", nullptr));
        label->setText(QApplication::translate("DlgAddFood", "\345\220\215\347\247\260\357\274\232", nullptr));
        label_2->setText(QApplication::translate("DlgAddFood", "\347\261\273\345\236\213\357\274\232", nullptr));
        cbType->setItemText(0, QApplication::translate("DlgAddFood", "\347\233\226\351\245\255", nullptr));
        cbType->setItemText(1, QApplication::translate("DlgAddFood", "\347\233\222\351\245\255", nullptr));
        cbType->setItemText(2, QApplication::translate("DlgAddFood", "\350\217\234\347\263\273", nullptr));
        cbType->setItemText(3, QApplication::translate("DlgAddFood", "\344\270\273\351\243\237", nullptr));
        cbType->setItemText(4, QApplication::translate("DlgAddFood", "\345\205\266\345\256\203", nullptr));

        label_3->setText(QApplication::translate("DlgAddFood", "\344\273\267\346\240\274\357\274\232", nullptr));
        label_4->setText(QApplication::translate("DlgAddFood", "\345\205\203", nullptr));
        pbAdd->setText(QApplication::translate("DlgAddFood", "\346\267\273\345\212\240", nullptr));
        pbExit->setText(QApplication::translate("DlgAddFood", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgAddFood: public Ui_DlgAddFood {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGADDFOOD_H
