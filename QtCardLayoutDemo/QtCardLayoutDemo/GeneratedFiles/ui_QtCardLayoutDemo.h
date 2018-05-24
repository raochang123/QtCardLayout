/********************************************************************************
** Form generated from reading UI file 'QtCardLayoutDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCARDLAYOUTDEMO_H
#define UI_QTCARDLAYOUTDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtCardLayoutDemoClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtCardLayoutDemoClass)
    {
        if (QtCardLayoutDemoClass->objectName().isEmpty())
            QtCardLayoutDemoClass->setObjectName(QStringLiteral("QtCardLayoutDemoClass"));
        QtCardLayoutDemoClass->resize(600, 400);
        menuBar = new QMenuBar(QtCardLayoutDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtCardLayoutDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtCardLayoutDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtCardLayoutDemoClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtCardLayoutDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtCardLayoutDemoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtCardLayoutDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtCardLayoutDemoClass->setStatusBar(statusBar);

        retranslateUi(QtCardLayoutDemoClass);

        QMetaObject::connectSlotsByName(QtCardLayoutDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtCardLayoutDemoClass)
    {
        QtCardLayoutDemoClass->setWindowTitle(QApplication::translate("QtCardLayoutDemoClass", "QtCardLayoutDemo", 0));
    } // retranslateUi

};

namespace Ui {
    class QtCardLayoutDemoClass: public Ui_QtCardLayoutDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCARDLAYOUTDEMO_H
