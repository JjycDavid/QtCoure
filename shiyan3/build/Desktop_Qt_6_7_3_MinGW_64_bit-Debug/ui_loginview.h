/********************************************************************************
** Form generated from reading UI file 'loginview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINVIEW_H
#define UI_LOGINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginView
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *inputUserPassword;
    QLineEdit *inputUsername;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btSignUp;
    QPushButton *btSignIn;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *LoginView)
    {
        if (LoginView->objectName().isEmpty())
            LoginView->setObjectName("LoginView");
        LoginView->resize(400, 300);
        verticalLayout = new QVBoxLayout(LoginView);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 43, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(LoginView);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 43, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(LoginView);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(LoginView);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        inputUserPassword = new QLineEdit(LoginView);
        inputUserPassword->setObjectName("inputUserPassword");

        formLayout->setWidget(1, QFormLayout::FieldRole, inputUserPassword);

        inputUsername = new QLineEdit(LoginView);
        inputUsername->setObjectName("inputUsername");

        formLayout->setWidget(0, QFormLayout::FieldRole, inputUsername);


        horizontalLayout_2->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 43, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btSignUp = new QPushButton(LoginView);
        btSignUp->setObjectName("btSignUp");

        horizontalLayout->addWidget(btSignUp);

        btSignIn = new QPushButton(LoginView);
        btSignIn->setObjectName("btSignIn");

        horizontalLayout->addWidget(btSignIn);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 43, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        retranslateUi(LoginView);

        QMetaObject::connectSlotsByName(LoginView);
    } // setupUi

    void retranslateUi(QWidget *LoginView)
    {
        LoginView->setWindowTitle(QCoreApplication::translate("LoginView", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("LoginView", "\346\254\242\350\277\216\344\275\277\347\224\250\345\214\273\347\226\227\350\257\212\346\226\255\346\265\213\350\257\225\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("LoginView", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("LoginView", "\345\257\206\347\240\201\357\274\232", nullptr));
        btSignUp->setText(QCoreApplication::translate("LoginView", "\346\263\250\345\206\214", nullptr));
        btSignIn->setText(QCoreApplication::translate("LoginView", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginView: public Ui_LoginView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINVIEW_H
