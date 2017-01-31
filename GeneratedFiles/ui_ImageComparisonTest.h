/********************************************************************************
** Form generated from reading UI file 'ImageComparisonTest.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGECOMPARISONTEST_H
#define UI_IMAGECOMPARISONTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageComparisonTestClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageComparisonTestClass)
    {
        if (ImageComparisonTestClass->objectName().isEmpty())
            ImageComparisonTestClass->setObjectName(QStringLiteral("ImageComparisonTestClass"));
        ImageComparisonTestClass->resize(1044, 811);
        centralWidget = new QWidget(ImageComparisonTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout_2->addWidget(listWidget);

        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));

        horizontalLayout_2->addWidget(listWidget_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        radioButton_9 = new QRadioButton(centralWidget);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));

        horizontalLayout->addWidget(radioButton_9);

        radioButton_8 = new QRadioButton(centralWidget);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));

        horizontalLayout->addWidget(radioButton_8);

        radioButton_7 = new QRadioButton(centralWidget);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        horizontalLayout->addWidget(radioButton_7);

        radioButton_6 = new QRadioButton(centralWidget);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        horizontalLayout->addWidget(radioButton_6);

        radioButton_5 = new QRadioButton(centralWidget);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        horizontalLayout->addWidget(radioButton_5);

        radioButton_4 = new QRadioButton(centralWidget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        horizontalLayout->addWidget(radioButton_4);

        radioButton_3 = new QRadioButton(centralWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout->addWidget(radioButton_3);

        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        ImageComparisonTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageComparisonTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1044, 26));
        ImageComparisonTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImageComparisonTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ImageComparisonTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImageComparisonTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImageComparisonTestClass->setStatusBar(statusBar);

        retranslateUi(ImageComparisonTestClass);

        QMetaObject::connectSlotsByName(ImageComparisonTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImageComparisonTestClass)
    {
        ImageComparisonTestClass->setWindowTitle(QApplication::translate("ImageComparisonTestClass", "ImageComparisonTest", 0));
        label->setText(QApplication::translate("ImageComparisonTestClass", "TextLabel", 0));
        radioButton_2->setText(QApplication::translate("ImageComparisonTestClass", "RadioButton", 0));
        radioButton_9->setText(QApplication::translate("ImageComparisonTestClass", "RadioButton", 0));
        radioButton_8->setText(QApplication::translate("ImageComparisonTestClass", "RadioButton", 0));
        radioButton_7->setText(QApplication::translate("ImageComparisonTestClass", "RadioButton", 0));
        radioButton_6->setText(QApplication::translate("ImageComparisonTestClass", "RadioButton", 0));
        radioButton_5->setText(QApplication::translate("ImageComparisonTestClass", "RadioButton", 0));
        radioButton_4->setText(QApplication::translate("ImageComparisonTestClass", "RadioButton", 0));
        radioButton_3->setText(QApplication::translate("ImageComparisonTestClass", "RadioButton", 0));
        radioButton->setText(QApplication::translate("ImageComparisonTestClass", "RadioButton", 0));
        pushButton->setText(QApplication::translate("ImageComparisonTestClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageComparisonTestClass: public Ui_ImageComparisonTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGECOMPARISONTEST_H
