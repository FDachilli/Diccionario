/********************************************************************************
** Form generated from reading UI file 'elegirarbolespanol.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEGIRARBOLESPANOL_H
#define UI_ELEGIRARBOLESPANOL_H

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

class Ui_elegirArbolEspanol
{
public:
    QWidget *centralwidget;
    QCommandLinkButton *rway;
    QCommandLinkButton *ternario;
    QLabel *label;
    QCommandLinkButton *botonAtras;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *elegirArbolEspanol)
    {
        if (elegirArbolEspanol->objectName().isEmpty())
            elegirArbolEspanol->setObjectName(QStringLiteral("elegirArbolEspanol"));
        elegirArbolEspanol->resize(800, 600);
        elegirArbolEspanol->setCursor(QCursor(Qt::PointingHandCursor));
        elegirArbolEspanol->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        centralwidget = new QWidget(elegirArbolEspanol);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        rway = new QCommandLinkButton(centralwidget);
        rway->setObjectName(QStringLiteral("rway"));
        rway->setGeometry(QRect(90, 130, 341, 181));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        rway->setFont(font);
        rway->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        rway->setIcon(icon);
        rway->setIconSize(QSize(200, 200));
        ternario = new QCommandLinkButton(centralwidget);
        ternario->setObjectName(QStringLiteral("ternario"));
        ternario->setGeometry(QRect(90, 330, 341, 111));
        ternario->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imagenes/descarga.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        ternario->setIcon(icon1);
        ternario->setIconSize(QSize(300, 800));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 40, 261, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label->setFont(font1);
        botonAtras = new QCommandLinkButton(centralwidget);
        botonAtras->setObjectName(QStringLiteral("botonAtras"));
        botonAtras->setGeometry(QRect(580, 30, 81, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/imagenes/descarga (1).jpg"), QSize(), QIcon::Normal, QIcon::Off);
        botonAtras->setIcon(icon2);
        elegirArbolEspanol->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(elegirArbolEspanol);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        elegirArbolEspanol->setStatusBar(statusbar);

        retranslateUi(elegirArbolEspanol);

        QMetaObject::connectSlotsByName(elegirArbolEspanol);
    } // setupUi

    void retranslateUi(QMainWindow *elegirArbolEspanol)
    {
        elegirArbolEspanol->setWindowTitle(QApplication::translate("elegirArbolEspanol", "MainWindow", 0));
        rway->setText(QApplication::translate("elegirArbolEspanol", "R-Way", 0));
        ternario->setText(QApplication::translate("elegirArbolEspanol", "Ternario", 0));
        label->setText(QApplication::translate("elegirArbolEspanol", "Seleccione la estructura", 0));
        botonAtras->setText(QApplication::translate("elegirArbolEspanol", "Atr\303\241s", 0));
    } // retranslateUi

};

namespace Ui {
    class elegirArbolEspanol: public Ui_elegirArbolEspanol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEGIRARBOLESPANOL_H
