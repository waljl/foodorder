/********************************************************************************
** Form generated from reading UI file 'foodorder.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODORDER_H
#define UI_FOODORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pbMain_Manager;
    QPushButton *pbMain_Order;
    QPushButton *pbMain_Search;
    QPushButton *pbMain_Count;
    QGroupBox *gbHotFoodList;
    QTableView *tvMainList;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbMain_Exit;

    void setupUi(QMainWindow *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QStringLiteral("MainForm"));
        MainForm->resize(552, 389);
        centralWidget = new QWidget(MainForm);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 511, 321));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pbMain_Manager = new QPushButton(layoutWidget);
        pbMain_Manager->setObjectName(QStringLiteral("pbMain_Manager"));

        verticalLayout->addWidget(pbMain_Manager);

        pbMain_Order = new QPushButton(layoutWidget);
        pbMain_Order->setObjectName(QStringLiteral("pbMain_Order"));

        verticalLayout->addWidget(pbMain_Order);

        pbMain_Search = new QPushButton(layoutWidget);
        pbMain_Search->setObjectName(QStringLiteral("pbMain_Search"));

        verticalLayout->addWidget(pbMain_Search);

        pbMain_Count = new QPushButton(layoutWidget);
        pbMain_Count->setObjectName(QStringLiteral("pbMain_Count"));

        verticalLayout->addWidget(pbMain_Count);


        gridLayout->addLayout(verticalLayout, 0, 0, 2, 1);

        gbHotFoodList = new QGroupBox(layoutWidget);
        gbHotFoodList->setObjectName(QStringLiteral("gbHotFoodList"));
        gbHotFoodList->setContextMenuPolicy(Qt::ActionsContextMenu);
        tvMainList = new QTableView(gbHotFoodList);
        tvMainList->setObjectName(QStringLiteral("tvMainList"));
        tvMainList->setGeometry(QRect(0, 40, 411, 241));

        gridLayout->addWidget(gbHotFoodList, 0, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(288, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        pbMain_Exit = new QPushButton(layoutWidget);
        pbMain_Exit->setObjectName(QStringLiteral("pbMain_Exit"));

        gridLayout->addWidget(pbMain_Exit, 1, 2, 1, 1);

        MainForm->setCentralWidget(centralWidget);

        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QMainWindow *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "MainForm", nullptr));
        pbMain_Manager->setText(QApplication::translate("MainForm", "\347\256\241\347\220\206", nullptr));
        pbMain_Order->setText(QApplication::translate("MainForm", "\350\256\242\351\244\220", nullptr));
        pbMain_Search->setText(QApplication::translate("MainForm", "\346\237\245\350\257\242", nullptr));
        pbMain_Count->setText(QApplication::translate("MainForm", "\347\273\223\350\264\246", nullptr));
        gbHotFoodList->setTitle(QApplication::translate("MainForm", "\347\203\255\351\227\250\346\216\250\350\215\220", nullptr));
        pbMain_Exit->setText(QApplication::translate("MainForm", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODORDER_H
