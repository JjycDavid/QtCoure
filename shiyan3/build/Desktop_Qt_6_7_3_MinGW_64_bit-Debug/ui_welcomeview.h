/********************************************************************************
** Form generated from reading UI file 'welcomeview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEVIEW_H
#define UI_WELCOMEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeView
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *WelcomeView)
    {
        if (WelcomeView->objectName().isEmpty())
            WelcomeView->setObjectName("WelcomeView");
        WelcomeView->resize(400, 300);
        gridLayout = new QGridLayout(WelcomeView);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(WelcomeView);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(WelcomeView);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(WelcomeView);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(98, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        retranslateUi(WelcomeView);

        QMetaObject::connectSlotsByName(WelcomeView);
    } // setupUi

    void retranslateUi(QWidget *WelcomeView)
    {
        WelcomeView->setWindowTitle(QCoreApplication::translate("WelcomeView", "\346\254\242\350\277\216", nullptr));
        pushButton->setText(QCoreApplication::translate("WelcomeView", "\347\247\221\345\256\244\347\256\241\347\220\206", nullptr));
        pushButton_3->setText(QCoreApplication::translate("WelcomeView", "\345\214\273\347\224\237\347\256\241\347\220\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("WelcomeView", "\346\202\243\350\200\205\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeView: public Ui_WelcomeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEVIEW_H
