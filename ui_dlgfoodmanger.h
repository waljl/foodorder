/********************************************************************************
** Form generated from reading UI file 'dlgfoodmanger.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGFOODMANGER_H
#define UI_DLGFOODMANGER_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgFoodManger
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cbType;
    QPushButton *pbFresh;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QTableView *tvFoodList;
    QPushButton *pbAdd;
    QPushButton *pbUpdate_Delete;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbExit;

    void setupUi(QDialog *DlgFoodManger)
    {
        if (DlgFoodManger->objectName().isEmpty())
            DlgFoodManger->setObjectName(QStringLiteral("DlgFoodManger"));
        DlgFoodManger->resize(527, 419);
        layoutWidget = new QWidget(DlgFoodManger);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 481, 381));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cbType = new QComboBox(layoutWidget);
        cbType->addItem(QString());
        cbType->addItem(QString());
        cbType->addItem(QString());
        cbType->addItem(QString());
        cbType->addItem(QString());
        cbType->setObjectName(QStringLiteral("cbType"));
        cbType->setLayoutDirection(Qt::LeftToRight);
        cbType->setEditable(false);

        gridLayout->addWidget(cbType, 0, 1, 1, 2);

        pbFresh = new QPushButton(layoutWidget);
        pbFresh->setObjectName(QStringLiteral("pbFresh"));

        gridLayout->addWidget(pbFresh, 0, 3, 1, 2);

        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 1, 2);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        tvFoodList = new QTableView(groupBox);
        tvFoodList->setObjectName(QStringLiteral("tvFoodList"));
        tvFoodList->setGeometry(QRect(0, 30, 481, 271));

        gridLayout->addWidget(groupBox, 1, 0, 1, 7);

        pbAdd = new QPushButton(layoutWidget);
        pbAdd->setObjectName(QStringLiteral("pbAdd"));

        gridLayout->addWidget(pbAdd, 2, 0, 1, 2);

        pbUpdate_Delete = new QPushButton(layoutWidget);
        pbUpdate_Delete->setObjectName(QStringLiteral("pbUpdate_Delete"));

        gridLayout->addWidget(pbUpdate_Delete, 2, 2, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 4, 1, 2);

        pbExit = new QPushButton(layoutWidget);
        pbExit->setObjectName(QStringLiteral("pbExit"));

        gridLayout->addWidget(pbExit, 2, 6, 1, 1);


        retranslateUi(DlgFoodManger);

        cbType->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DlgFoodManger);
    } // setupUi

    void retranslateUi(QDialog *DlgFoodManger)
    {
        DlgFoodManger->setWindowTitle(QApplication::translate("DlgFoodManger", "\350\217\234\347\233\256\347\256\241\347\220\206", nullptr));
        label->setText(QApplication::translate("DlgFoodManger", "\347\261\273\345\236\213", nullptr));
        cbType->setItemText(0, QApplication::translate("DlgFoodManger", "\347\233\226\351\245\255", nullptr));
        cbType->setItemText(1, QApplication::translate("DlgFoodManger", "\347\233\222\351\245\255", nullptr));
        cbType->setItemText(2, QApplication::translate("DlgFoodManger", "\350\217\234\347\263\273", nullptr));
        cbType->setItemText(3, QApplication::translate("DlgFoodManger", "\351\235\242\351\243\237", nullptr));
        cbType->setItemText(4, QApplication::translate("DlgFoodManger", "\345\205\266\345\256\203", nullptr));

        pbFresh->setText(QApplication::translate("DlgFoodManger", "\345\210\267\346\226\260", nullptr));
        groupBox->setTitle(QApplication::translate("DlgFoodManger", "\351\243\237\347\211\251\345\210\227\350\241\250", nullptr));
        pbAdd->setText(QApplication::translate("DlgFoodManger", "\346\267\273\345\212\240", nullptr));
        pbUpdate_Delete->setText(QApplication::translate("DlgFoodManger", "\346\233\264\346\226\260/\345\210\240\351\231\244", nullptr));
        pbExit->setText(QApplication::translate("DlgFoodManger", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgFoodManger: public Ui_DlgFoodManger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGFOODMANGER_H
