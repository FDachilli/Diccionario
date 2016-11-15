/********************************************************************************
** Form generated from reading UI file 'ternario.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERNARIO_H
#define UI_TERNARIO_H

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

class Ui_ternario
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ternario)
    {
        if (ternario->objectName().isEmpty())
            ternario->setObjectName(QStringLiteral("ternario"));
        ternario->resize(800, 600);
        menubar = new QMenuBar(ternario);
        menubar->setObjectName(QStringLiteral("menubar"));
        ternario->setMenuBar(menubar);
        centralwidget = new QWidget(ternario);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ternario->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ternario);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ternario->setStatusBar(statusbar);

        retranslateUi(ternario);

        QMetaObject::connectSlotsByName(ternario);
    } // setupUi

    void retranslateUi(QMainWindow *ternario)
    {
        ternario->setWindowTitle(QApplication::translate("ternario", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class ternario: public Ui_ternario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERNARIO_H
