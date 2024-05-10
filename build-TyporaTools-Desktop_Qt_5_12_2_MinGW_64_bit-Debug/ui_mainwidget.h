/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *startCap_btn;
    QPushButton *init_btn;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *line_path;
    QTimeEdit *timeEdit;
    QPushButton *startRecord_btn;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *codeCount_btn;
    QPushButton *GIFMake_btn;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(579, 326);
        verticalLayout = new QVBoxLayout(MainWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        startCap_btn = new QPushButton(MainWidget);
        startCap_btn->setObjectName(QString::fromUtf8("startCap_btn"));

        horizontalLayout->addWidget(startCap_btn);

        init_btn = new QPushButton(MainWidget);
        init_btn->setObjectName(QString::fromUtf8("init_btn"));

        horizontalLayout->addWidget(init_btn);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        line_path = new QLineEdit(MainWidget);
        line_path->setObjectName(QString::fromUtf8("line_path"));

        horizontalLayout_2->addWidget(line_path);

        timeEdit = new QTimeEdit(MainWidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(timeEdit->sizePolicy().hasHeightForWidth());
        timeEdit->setSizePolicy(sizePolicy);
        timeEdit->setMinimumSize(QSize(120, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        timeEdit->setFont(font);
        timeEdit->setAlignment(Qt::AlignCenter);
        timeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout_2->addWidget(timeEdit);

        startRecord_btn = new QPushButton(MainWidget);
        startRecord_btn->setObjectName(QString::fromUtf8("startRecord_btn"));

        horizontalLayout_2->addWidget(startRecord_btn);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        codeCount_btn = new QPushButton(MainWidget);
        codeCount_btn->setObjectName(QString::fromUtf8("codeCount_btn"));

        horizontalLayout_3->addWidget(codeCount_btn);

        GIFMake_btn = new QPushButton(MainWidget);
        GIFMake_btn->setObjectName(QString::fromUtf8("GIFMake_btn"));

        horizontalLayout_3->addWidget(GIFMake_btn);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "MainWidget", nullptr));
        startCap_btn->setText(QApplication::translate("MainWidget", "\345\274\200\345\247\213\346\210\252\345\261\217", nullptr));
        init_btn->setText(QApplication::translate("MainWidget", "\351\273\230\350\256\244\350\256\276\347\275\256", nullptr));
        timeEdit->setDisplayFormat(QApplication::translate("MainWidget", "HH:mm:ss", nullptr));
        startRecord_btn->setText(QApplication::translate("MainWidget", "\345\274\200\345\247\213\345\275\225\345\210\266", nullptr));
        codeCount_btn->setText(QApplication::translate("MainWidget", "\344\273\243\347\240\201\347\273\237\350\256\241", nullptr));
        GIFMake_btn->setText(QApplication::translate("MainWidget", "GIF\345\210\266\344\275\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
