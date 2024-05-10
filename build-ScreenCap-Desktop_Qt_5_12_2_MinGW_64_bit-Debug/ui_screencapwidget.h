/********************************************************************************
** Form generated from reading UI file 'screencapwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENCAPWIDGET_H
#define UI_SCREENCAPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenCapWidget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *start_btn;
    QPushButton *open_btn;

    void setupUi(QWidget *ScreenCapWidget)
    {
        if (ScreenCapWidget->objectName().isEmpty())
            ScreenCapWidget->setObjectName(QString::fromUtf8("ScreenCapWidget"));
        ScreenCapWidget->resize(474, 92);
        layoutWidget = new QWidget(ScreenCapWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 20, 293, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        start_btn = new QPushButton(layoutWidget);
        start_btn->setObjectName(QString::fromUtf8("start_btn"));

        horizontalLayout->addWidget(start_btn);

        open_btn = new QPushButton(layoutWidget);
        open_btn->setObjectName(QString::fromUtf8("open_btn"));

        horizontalLayout->addWidget(open_btn);


        retranslateUi(ScreenCapWidget);

        QMetaObject::connectSlotsByName(ScreenCapWidget);
    } // setupUi

    void retranslateUi(QWidget *ScreenCapWidget)
    {
        ScreenCapWidget->setWindowTitle(QApplication::translate("ScreenCapWidget", "ScreenCapWidget", nullptr));
        start_btn->setText(QApplication::translate("ScreenCapWidget", "\345\274\200\345\247\213\346\210\252\345\261\217", nullptr));
#ifndef QT_NO_SHORTCUT
        start_btn->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        open_btn->setText(QApplication::translate("ScreenCapWidget", "\351\273\230\350\256\244\344\275\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScreenCapWidget: public Ui_ScreenCapWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENCAPWIDGET_H
