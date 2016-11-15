/********************************************************************************
** Form generated from reading UI file 'elegirarbol.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEGIRARBOL_H
#define UI_ELEGIRARBOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_elegirArbol
{
public:
    QWidget *centralwidget;
    QCommandLinkButton *botonAtras;
    QLabel *label;
    QCommandLinkButton *ternario;
    QCommandLinkButton *rway;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *elegirArbol)
    {
        if (elegirArbol->objectName().isEmpty())
            elegirArbol->setObjectName(QStringLiteral("elegirArbol"));
        elegirArbol->resize(1080, 827);
        elegirArbol->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(elegirArbol);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        botonAtras = new QCommandLinkButton(centralwidget);
        botonAtras->setObjectName(QStringLiteral("botonAtras"));
        botonAtras->setGeometry(QRect(620, 50, 81, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/descarga (1).jpg"), QSize(), QIcon::Normal, QIcon::Off);
        botonAtras->setIcon(icon);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 50, 261, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        ternario = new QCommandLinkButton(centralwidget);
        ternario->setObjectName(QStringLiteral("ternario"));
        ternario->setGeometry(QRect(80, 340, 341, 111));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        ternario->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imagenes/descarga.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        ternario->setIcon(icon1);
        ternario->setIconSize(QSize(300, 800));
        rway = new QCommandLinkButton(centralwidget);
        rway->setObjectName(QStringLiteral("rway"));
        rway->setGeometry(QRect(80, 140, 341, 181));
        rway->setFont(font1);
        rway->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/imagenes/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        rway->setIcon(icon2);
        rway->setIconSize(QSize(200, 200));
        elegirArbol->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(elegirArbol);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        elegirArbol->setStatusBar(statusbar);

        retranslateUi(elegirArbol);

        QMetaObject::connectSlotsByName(elegirArbol);
    } // setupUi

    void retranslateUi(QMainWindow *elegirArbol)
    {
        elegirArbol->setWindowTitle(QApplication::translate("elegirArbol", "MainWindow", 0));
        botonAtras->setText(QApplication::translate("elegirArbol", "Atr\303\241s", 0));
        label->setText(QApplication::translate("elegirArbol", "Seleccione la estructura", 0));
        ternario->setText(QApplication::translate("elegirArbol", "Ternario", 0));
        rway->setText(QApplication::translate("elegirArbol", "R-Way", 0));
    } // retranslateUi

};

namespace Ui {
    class elegirArbol: public Ui_elegirArbol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEGIRARBOL_H
