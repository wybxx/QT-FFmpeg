/********************************************************************************
** Form generated from reading UI file 'CodeCount.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODECOUNT_H
#define UI_CODECOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CodeCount
{
public:
    QAction *actionOpen;
    QAction *actionOpenDir;
    QAction *actionAbout;
    QAction *actionClearModel;
    QAction *actionClearModelLine;
    QAction *actionChinese;
    QAction *actionEnglish;
    QAction *actionUTF8;
    QAction *actionGB18030;
    QAction *actionQuit;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *txtCode;
    QLineEdit *txtRow;
    QLineEdit *txtNote;
    QLineEdit *txtBlank;
    QLineEdit *txtCount;
    QLabel *labPercentCode;
    QLabel *labBlank;
    QLineEdit *txtSize;
    QLabel *labFilter;
    QLabel *labFile;
    QLineEdit *txtPath;
    QLineEdit *txtFile;
    QLabel *labPath;
    QLineEdit *txtFilter;
    QLabel *labPercentNote;
    QLabel *labPercentBlank;
    QLabel *labCount;
    QLabel *labCode;
    QLabel *labNote;
    QLabel *labSize;
    QLabel *labRow;
    QPushButton *btnOpenFile;
    QPushButton *btnOpenPath;
    QPushButton *btnClear;

    void setupUi(QWidget *CodeCount)
    {
        if (CodeCount->objectName().isEmpty())
            CodeCount->setObjectName(QString::fromUtf8("CodeCount"));
        CodeCount->resize(800, 600);
        actionOpen = new QAction(CodeCount);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/toolbar/ic_files.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionOpenDir = new QAction(CodeCount);
        actionOpenDir->setObjectName(QString::fromUtf8("actionOpenDir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/toolbar/ic_folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenDir->setIcon(icon1);
        actionAbout = new QAction(CodeCount);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/toolbar/ic_about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon2);
        actionClearModel = new QAction(CodeCount);
        actionClearModel->setObjectName(QString::fromUtf8("actionClearModel"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/toolbar/ic_clean.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearModel->setIcon(icon3);
        actionClearModelLine = new QAction(CodeCount);
        actionClearModelLine->setObjectName(QString::fromUtf8("actionClearModelLine"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/toolbar/ic_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearModelLine->setIcon(icon4);
        actionChinese = new QAction(CodeCount);
        actionChinese->setObjectName(QString::fromUtf8("actionChinese"));
        actionChinese->setCheckable(true);
        actionChinese->setChecked(true);
        actionEnglish = new QAction(CodeCount);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionEnglish->setCheckable(true);
        actionUTF8 = new QAction(CodeCount);
        actionUTF8->setObjectName(QString::fromUtf8("actionUTF8"));
        actionUTF8->setCheckable(true);
        actionUTF8->setChecked(true);
        actionGB18030 = new QAction(CodeCount);
        actionGB18030->setObjectName(QString::fromUtf8("actionGB18030"));
        actionGB18030->setCheckable(true);
        actionQuit = new QAction(CodeCount);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        verticalLayout_2 = new QVBoxLayout(CodeCount);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableWidget = new QTableWidget(CodeCount);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);

        widget = new QWidget(CodeCount);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        txtCode = new QLineEdit(widget);
        txtCode->setObjectName(QString::fromUtf8("txtCode"));
        txtCode->setMaximumSize(QSize(80, 16777215));
        txtCode->setAlignment(Qt::AlignCenter);
        txtCode->setReadOnly(true);

        gridLayout->addWidget(txtCode, 0, 3, 1, 1);

        txtRow = new QLineEdit(widget);
        txtRow->setObjectName(QString::fromUtf8("txtRow"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtRow->sizePolicy().hasHeightForWidth());
        txtRow->setSizePolicy(sizePolicy);
        txtRow->setAlignment(Qt::AlignCenter);
        txtRow->setReadOnly(true);

        gridLayout->addWidget(txtRow, 2, 1, 1, 1);

        txtNote = new QLineEdit(widget);
        txtNote->setObjectName(QString::fromUtf8("txtNote"));
        sizePolicy.setHeightForWidth(txtNote->sizePolicy().hasHeightForWidth());
        txtNote->setSizePolicy(sizePolicy);
        txtNote->setAlignment(Qt::AlignCenter);
        txtNote->setReadOnly(true);

        gridLayout->addWidget(txtNote, 1, 3, 1, 1);

        txtBlank = new QLineEdit(widget);
        txtBlank->setObjectName(QString::fromUtf8("txtBlank"));
        sizePolicy.setHeightForWidth(txtBlank->sizePolicy().hasHeightForWidth());
        txtBlank->setSizePolicy(sizePolicy);
        txtBlank->setAlignment(Qt::AlignCenter);
        txtBlank->setReadOnly(true);

        gridLayout->addWidget(txtBlank, 2, 3, 1, 1);

        txtCount = new QLineEdit(widget);
        txtCount->setObjectName(QString::fromUtf8("txtCount"));
        txtCount->setMaximumSize(QSize(80, 16777215));
        txtCount->setAlignment(Qt::AlignCenter);
        txtCount->setReadOnly(true);

        gridLayout->addWidget(txtCount, 0, 1, 1, 1);

        labPercentCode = new QLabel(widget);
        labPercentCode->setObjectName(QString::fromUtf8("labPercentCode"));
        labPercentCode->setMinimumSize(QSize(60, 0));
        labPercentCode->setFrameShape(QFrame::Box);
        labPercentCode->setFrameShadow(QFrame::Sunken);
        labPercentCode->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labPercentCode, 0, 4, 1, 1);

        labBlank = new QLabel(widget);
        labBlank->setObjectName(QString::fromUtf8("labBlank"));

        gridLayout->addWidget(labBlank, 2, 2, 1, 1);

        txtSize = new QLineEdit(widget);
        txtSize->setObjectName(QString::fromUtf8("txtSize"));
        sizePolicy.setHeightForWidth(txtSize->sizePolicy().hasHeightForWidth());
        txtSize->setSizePolicy(sizePolicy);
        txtSize->setAlignment(Qt::AlignCenter);
        txtSize->setReadOnly(true);

        gridLayout->addWidget(txtSize, 1, 1, 1, 1);

        labFilter = new QLabel(widget);
        labFilter->setObjectName(QString::fromUtf8("labFilter"));

        gridLayout->addWidget(labFilter, 2, 5, 1, 1);

        labFile = new QLabel(widget);
        labFile->setObjectName(QString::fromUtf8("labFile"));

        gridLayout->addWidget(labFile, 0, 5, 1, 1);

        txtPath = new QLineEdit(widget);
        txtPath->setObjectName(QString::fromUtf8("txtPath"));
        txtPath->setReadOnly(true);

        gridLayout->addWidget(txtPath, 1, 6, 1, 1);

        txtFile = new QLineEdit(widget);
        txtFile->setObjectName(QString::fromUtf8("txtFile"));
        txtFile->setReadOnly(true);

        gridLayout->addWidget(txtFile, 0, 6, 1, 1);

        labPath = new QLabel(widget);
        labPath->setObjectName(QString::fromUtf8("labPath"));

        gridLayout->addWidget(labPath, 1, 5, 1, 1);

        txtFilter = new QLineEdit(widget);
        txtFilter->setObjectName(QString::fromUtf8("txtFilter"));

        gridLayout->addWidget(txtFilter, 2, 6, 1, 1);

        labPercentNote = new QLabel(widget);
        labPercentNote->setObjectName(QString::fromUtf8("labPercentNote"));
        labPercentNote->setFrameShape(QFrame::Box);
        labPercentNote->setFrameShadow(QFrame::Sunken);
        labPercentNote->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labPercentNote, 1, 4, 1, 1);

        labPercentBlank = new QLabel(widget);
        labPercentBlank->setObjectName(QString::fromUtf8("labPercentBlank"));
        labPercentBlank->setFrameShape(QFrame::Box);
        labPercentBlank->setFrameShadow(QFrame::Sunken);
        labPercentBlank->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labPercentBlank, 2, 4, 1, 1);

        labCount = new QLabel(widget);
        labCount->setObjectName(QString::fromUtf8("labCount"));

        gridLayout->addWidget(labCount, 0, 0, 1, 1);

        labCode = new QLabel(widget);
        labCode->setObjectName(QString::fromUtf8("labCode"));

        gridLayout->addWidget(labCode, 0, 2, 1, 1);

        labNote = new QLabel(widget);
        labNote->setObjectName(QString::fromUtf8("labNote"));

        gridLayout->addWidget(labNote, 1, 2, 1, 1);

        labSize = new QLabel(widget);
        labSize->setObjectName(QString::fromUtf8("labSize"));

        gridLayout->addWidget(labSize, 1, 0, 1, 1);

        labRow = new QLabel(widget);
        labRow->setObjectName(QString::fromUtf8("labRow"));

        gridLayout->addWidget(labRow, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 3, 1);

        btnOpenFile = new QPushButton(widget);
        btnOpenFile->setObjectName(QString::fromUtf8("btnOpenFile"));

        gridLayout_2->addWidget(btnOpenFile, 0, 1, 1, 1);

        btnOpenPath = new QPushButton(widget);
        btnOpenPath->setObjectName(QString::fromUtf8("btnOpenPath"));

        gridLayout_2->addWidget(btnOpenPath, 1, 1, 1, 1);

        btnClear = new QPushButton(widget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        gridLayout_2->addWidget(btnClear, 2, 1, 1, 1);


        verticalLayout_2->addWidget(widget);

        QWidget::setTabOrder(btnOpenFile, btnOpenPath);
        QWidget::setTabOrder(btnOpenPath, btnClear);
        QWidget::setTabOrder(btnClear, tableWidget);
        QWidget::setTabOrder(tableWidget, txtCount);
        QWidget::setTabOrder(txtCount, txtSize);
        QWidget::setTabOrder(txtSize, txtRow);
        QWidget::setTabOrder(txtRow, txtCode);
        QWidget::setTabOrder(txtCode, txtNote);
        QWidget::setTabOrder(txtNote, txtBlank);
        QWidget::setTabOrder(txtBlank, txtFile);
        QWidget::setTabOrder(txtFile, txtPath);
        QWidget::setTabOrder(txtPath, txtFilter);

        retranslateUi(CodeCount);

        QMetaObject::connectSlotsByName(CodeCount);
    } // setupUi

    void retranslateUi(QWidget *CodeCount)
    {
        actionOpen->setText(QApplication::translate("CodeCount", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("CodeCount", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpenDir->setText(QApplication::translate("CodeCount", "\351\200\211\346\213\251\347\233\256\345\275\225", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpenDir->setShortcut(QApplication::translate("CodeCount", "Ctrl+Shift+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("CodeCount", "\345\205\263\344\272\216", nullptr));
        actionClearModel->setText(QApplication::translate("CodeCount", "\346\270\205\347\251\272\345\210\227\350\241\250", nullptr));
        actionClearModelLine->setText(QApplication::translate("CodeCount", "\345\210\240\351\231\244\351\200\211\344\270\255\350\241\214", nullptr));
        actionChinese->setText(QApplication::translate("CodeCount", "\344\270\255\346\226\207", nullptr));
        actionEnglish->setText(QApplication::translate("CodeCount", "English", nullptr));
        actionUTF8->setText(QApplication::translate("CodeCount", "UTF8", nullptr));
        actionGB18030->setText(QApplication::translate("CodeCount", "GB18030", nullptr));
        actionQuit->setText(QApplication::translate("CodeCount", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("CodeCount", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        labPercentCode->setText(QString());
        labBlank->setText(QApplication::translate("CodeCount", "\347\251\272\347\231\275\350\241\214\346\225\260", nullptr));
        labFilter->setText(QApplication::translate("CodeCount", "\350\277\207\346\273\244", nullptr));
        labFile->setText(QApplication::translate("CodeCount", "\346\226\207\344\273\266", nullptr));
        labPath->setText(QApplication::translate("CodeCount", "\347\233\256\345\275\225", nullptr));
        txtFilter->setText(QApplication::translate("CodeCount", "*.h *.cpp *.c *.cs *.java *.js", nullptr));
        labPercentNote->setText(QString());
        labPercentBlank->setText(QString());
        labCount->setText(QApplication::translate("CodeCount", "\346\226\207\344\273\266\346\225\260", nullptr));
        labCode->setText(QApplication::translate("CodeCount", "\344\273\243\347\240\201\350\241\214\346\225\260", nullptr));
        labNote->setText(QApplication::translate("CodeCount", "\346\263\250\351\207\212\350\241\214\346\225\260", nullptr));
        labSize->setText(QApplication::translate("CodeCount", "\345\255\227\350\212\202\346\225\260", nullptr));
        labRow->setText(QApplication::translate("CodeCount", "\346\200\273\350\241\214\346\225\260", nullptr));
        btnOpenFile->setText(QApplication::translate("CodeCount", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        btnOpenPath->setText(QApplication::translate("CodeCount", "\346\211\223\345\274\200\347\233\256\345\275\225", nullptr));
        btnClear->setText(QApplication::translate("CodeCount", "\346\270\205\347\251\272\347\273\223\346\236\234", nullptr));
        Q_UNUSED(CodeCount);
    } // retranslateUi

};

namespace Ui {
    class CodeCount: public Ui_CodeCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODECOUNT_H
