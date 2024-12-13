/********************************************************************************
** Form generated from reading UI file 'patienteditview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTEDITVIEW_H
#define UI_PATIENTEDITVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientEditView
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *dbSpinWeight;
    QDoubleSpinBox *dbSpinHeight;
    QLabel *label_3;
    QLabel *label_7;
    QLineEdit *dbEditID;
    QLabel *label;
    QLabel *label_5;
    QLabel *PatientEditView_2;
    QLabel *label_2;
    QLineEdit *dbEditMobile;
    QLabel *label_4;
    QLineEdit *dbEditIDcard;
    QLineEdit *dbEditName;
    QDateEdit *dateEdit;
    QComboBox *dbComboSex;
    QLabel *label_6;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLineEdit *dbCreatedTimestamp;

    void setupUi(QWidget *PatientEditView)
    {
        if (PatientEditView->objectName().isEmpty())
            PatientEditView->setObjectName("PatientEditView");
        PatientEditView->resize(400, 300);
        layoutWidget = new QWidget(PatientEditView);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 60, 169, 206));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        dbSpinWeight = new QDoubleSpinBox(layoutWidget);
        dbSpinWeight->setObjectName("dbSpinWeight");

        gridLayout->addWidget(dbSpinWeight, 6, 2, 2, 1);

        dbSpinHeight = new QDoubleSpinBox(layoutWidget);
        dbSpinHeight->setObjectName("dbSpinHeight");

        gridLayout->addWidget(dbSpinHeight, 8, 2, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        dbEditID = new QLineEdit(layoutWidget);
        dbEditID->setObjectName("dbEditID");

        gridLayout->addWidget(dbEditID, 0, 1, 1, 2);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 2, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 7, 0, 1, 1);

        PatientEditView_2 = new QLabel(layoutWidget);
        PatientEditView_2->setObjectName("PatientEditView_2");

        gridLayout->addWidget(PatientEditView_2, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 9, 0, 1, 1);

        dbEditMobile = new QLineEdit(layoutWidget);
        dbEditMobile->setObjectName("dbEditMobile");

        gridLayout->addWidget(dbEditMobile, 9, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        dbEditIDcard = new QLineEdit(layoutWidget);
        dbEditIDcard->setObjectName("dbEditIDcard");

        gridLayout->addWidget(dbEditIDcard, 2, 1, 2, 2);

        dbEditName = new QLineEdit(layoutWidget);
        dbEditName->setObjectName("dbEditName");

        gridLayout->addWidget(dbEditName, 1, 1, 1, 2);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName("dateEdit");

        gridLayout->addWidget(dateEdit, 5, 1, 2, 2);

        dbComboSex = new QComboBox(layoutWidget);
        dbComboSex->addItem(QString());
        dbComboSex->addItem(QString());
        dbComboSex->setObjectName("dbComboSex");

        gridLayout->addWidget(dbComboSex, 4, 2, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        layoutWidget1 = new QWidget(PatientEditView);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(300, 180, 77, 54));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        widget = new QWidget(PatientEditView);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 270, 171, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        horizontalLayout->addWidget(label_8);

        dbCreatedTimestamp = new QLineEdit(widget);
        dbCreatedTimestamp->setObjectName("dbCreatedTimestamp");

        horizontalLayout->addWidget(dbCreatedTimestamp);


        retranslateUi(PatientEditView);

        QMetaObject::connectSlotsByName(PatientEditView);
    } // setupUi

    void retranslateUi(QWidget *PatientEditView)
    {
        PatientEditView->setWindowTitle(QCoreApplication::translate("PatientEditView", "\346\202\243\350\200\205\344\277\241\346\201\257\346\267\273\345\212\240", nullptr));
        label_3->setText(QCoreApplication::translate("PatientEditView", "\350\272\253\344\273\275\350\257\201\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("PatientEditView", "\344\275\223\351\207\215\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("PatientEditView", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("PatientEditView", "\350\272\253\351\253\230\357\274\232", nullptr));
        PatientEditView_2->setText(QCoreApplication::translate("PatientEditView", "ID\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("PatientEditView", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("PatientEditView", "\346\200\247\345\210\253\357\274\232", nullptr));
        dbComboSex->setItemText(0, QCoreApplication::translate("PatientEditView", "\347\224\267", nullptr));
        dbComboSex->setItemText(1, QCoreApplication::translate("PatientEditView", "\345\245\263", nullptr));

        label_6->setText(QCoreApplication::translate("PatientEditView", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("PatientEditView", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PatientEditView", "\345\217\226\346\266\210", nullptr));
        label_8->setText(QCoreApplication::translate("PatientEditView", "\345\210\233\345\273\272\346\227\266\351\227\264\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientEditView: public Ui_PatientEditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTEDITVIEW_H
