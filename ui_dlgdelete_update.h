/********************************************************************************
** Form generated from reading UI file 'dlgdelete_update.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGDELETE_UPDATE_H
#define UI_DLGDELETE_UPDATE_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgDelete_Update
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
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *leHotLevel;
    QPushButton *pbDelete;
    QPushButton *pbUpdate;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbExit;

    void setupUi(QDialog *DlgDelete_Update)
    {
        if (DlgDelete_Update->objectName().isEmpty())
            DlgDelete_Update->setObjectName(QStringLiteral("DlgDelete_Update"));
        DlgDelete_Update->resize(297, 317);
        layoutWidget = new QWidget(DlgDelete_Update);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 261, 281));
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

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 3, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        leHotLevel = new QLineEdit(layoutWidget);
        leHotLevel->setObjectName(QStringLiteral("leHotLevel"));

        gridLayout->addWidget(leHotLevel, 3, 1, 1, 3);

        pbDelete = new QPushButton(layoutWidget);
        pbDelete->setObjectName(QStringLiteral("pbDelete"));

        gridLayout->addWidget(pbDelete, 4, 0, 1, 1);

        pbUpdate = new QPushButton(layoutWidget);
        pbUpdate->setObjectName(QStringLiteral("pbUpdate"));

        gridLayout->addWidget(pbUpdate, 4, 2, 1, 2);

        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 2);

        pbExit = new QPushButton(layoutWidget);
        pbExit->setObjectName(QStringLiteral("pbExit"));

        gridLayout->addWidget(pbExit, 5, 2, 1, 2);


        retranslateUi(DlgDelete_Update);

        QMetaObject::connectSlotsByName(DlgDelete_Update);
    } // setupUi

    void retranslateUi(QDialog *DlgDelete_Update)
    {
        DlgDelete_Update->setWindowTitle(QApplication::translate("DlgDelete_Update", "\346\233\264\346\226\260/\345\210\240\351\231\244\350\217\234\347\233\256", nullptr));
        label->setText(QApplication::translate("DlgDelete_Update", "\345\220\215\347\247\260\357\274\232", nullptr));
        label_2->setText(QApplication::translate("DlgDelete_Update", "\347\261\273\345\236\213\357\274\232", nullptr));
        cbType->setItemText(0, QApplication::translate("DlgDelete_Update", "\347\233\226\351\245\255", nullptr));
        cbType->setItemText(1, QApplication::translate("DlgDelete_Update", "\347\233\222\351\245\255", nullptr));
        cbType->setItemText(2, QApplication::translate("DlgDelete_Update", "\350\217\234\347\263\273", nullptr));
        cbType->setItemText(3, QApplication::translate("DlgDelete_Update", "\344\270\273\351\243\237", nullptr));
        cbType->setItemText(4, QApplication::translate("DlgDelete_Update", "\345\205\266\345\256\203", nullptr));

        label_3->setText(QApplication::translate("DlgDelete_Update", "\344\273\267\346\240\274\357\274\232", nullptr));
        label_5->setText(QApplication::translate("DlgDelete_Update", "\345\205\203", nullptr));
        label_4->setText(QApplication::translate("DlgDelete_Update", "\347\203\255\345\272\246\345\200\274\357\274\232", nullptr));
        pbDelete->setText(QApplication::translate("DlgDelete_Update", "\345\210\240\351\231\244", nullptr));
        pbUpdate->setText(QApplication::translate("DlgDelete_Update", "\346\233\264\346\226\260", nullptr));
        pbExit->setText(QApplication::translate("DlgDelete_Update", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgDelete_Update: public Ui_DlgDelete_Update {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGDELETE_UPDATE_H
