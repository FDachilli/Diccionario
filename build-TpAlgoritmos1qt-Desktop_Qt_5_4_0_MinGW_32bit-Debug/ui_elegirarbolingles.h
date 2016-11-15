/********************************************************************************
** Form generated from reading UI file 'elegirarbolingles.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEGIRARBOLINGLES_H
#define UI_ELEGIRARBOLINGLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_elegirarbolingles
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *elegirarbolingles)
    {
        if (elegirarbolingles->objectName().isEmpty())
            elegirarbolingles->setObjectName(QStringLiteral("elegirarbolingles"));
        elegirarbolingles->resize(800, 600);
        menubar = new QMenuBar(elegirarbolingles);
        menubar->setObjectName(QStringLiteral("menubar"));
        elegirarbolingles->setMenuBar(menubar);
        centralwidget = new QWidget(elegirarbolingles);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        elegirarbolingles->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(elegirarbolingles);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        elegirarbolingles->setStatusBar(statusbar);

        retranslateUi(elegirarbolingles);

        QMetaObject::connectSlotsByName(elegirarbolingles);
    } // setupUi

    void retranslateUi(QMainWindow *elegirarbolingles)
    {
        elegirarbolingles->setWindowTitle(QApplication::translate("elegirarbolingles", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class elegirarbolingles: public Ui_elegirarbolingles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEGIRARBOLINGLES_H
