/********************************************************************************
** Form generated from reading UI file 'patinenteditview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATINENTEDITVIEW_H
#define UI_PATINENTEDITVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatienttEditView
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLineEdit *lineEdit_4;
    QSpinBox *spinBox_2;
    QLineEdit *lineEdit_2;
    QLabel *label_8;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *PatienttEditView)
    {
        if (PatienttEditView->objectName().isEmpty())
            PatienttEditView->setObjectName("PatienttEditView");
        PatienttEditView->resize(400, 300);
        widget = new QWidget(PatienttEditView);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 50, 275, 184));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 6, 1, 1, 1);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 1, 1, 1, 1);

        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName("spinBox_2");

        gridLayout->addWidget(spinBox_2, 5, 1, 1, 1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 7, 1, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 3, 1, 1, 1);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName("dateEdit");

        gridLayout->addWidget(dateEdit, 4, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout_2->addLayout(verticalLayout_2, 1, 2, 1, 1);


        retranslateUi(PatienttEditView);

        QMetaObject::connectSlotsByName(PatienttEditView);
    } // setupUi

    void retranslateUi(QWidget *PatienttEditView)
    {
        PatienttEditView->setWindowTitle(QCoreApplication::translate("PatienttEditView", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("PatienttEditView", "\344\275\223\351\207\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("PatienttEditView", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("PatienttEditView", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("PatienttEditView", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("PatienttEditView", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("PatienttEditView", "\350\272\253\351\253\230\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("PatienttEditView", "ID\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("PatienttEditView", "\347\224\267", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("PatienttEditView", "\345\245\263", nullptr));

        label_3->setText(QCoreApplication::translate("PatienttEditView", "\350\272\253\344\273\275\350\257\201\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("PatienttEditView", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PatienttEditView", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatienttEditView: public Ui_PatienttEditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATINENTEDITVIEW_H
