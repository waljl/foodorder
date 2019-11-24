/********************************************************************************
** Form generated from reading UI file 'dlgdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGDETAIL_H
#define UI_DLGDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgDetail
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QTableView *tvDetail;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbOk;

    void setupUi(QDialog *DlgDetail)
    {
        if (DlgDetail->objectName().isEmpty())
            DlgDetail->setObjectName(QStringLiteral("DlgDetail"));
        DlgDetail->resize(498, 342);
        layoutWidget = new QWidget(DlgDetail);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 461, 311));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        tvDetail = new QTableView(groupBox);
        tvDetail->setObjectName(QStringLiteral("tvDetail"));
        tvDetail->setGeometry(QRect(0, 30, 461, 241));

        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pbOk = new QPushButton(layoutWidget);
        pbOk->setObjectName(QStringLiteral("pbOk"));

        gridLayout->addWidget(pbOk, 1, 1, 1, 1);


        retranslateUi(DlgDetail);

        QMetaObject::connectSlotsByName(DlgDetail);
    } // setupUi

    void retranslateUi(QDialog *DlgDetail)
    {
        DlgDetail->setWindowTitle(QApplication::translate("DlgDetail", "\350\257\246\347\273\206\344\277\241\346\201\257", nullptr));
        groupBox->setTitle(QApplication::translate("DlgDetail", "\350\256\242\345\215\225\350\257\246\346\203\205", nullptr));
        pbOk->setText(QApplication::translate("DlgDetail", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgDetail: public Ui_DlgDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGDETAIL_H
