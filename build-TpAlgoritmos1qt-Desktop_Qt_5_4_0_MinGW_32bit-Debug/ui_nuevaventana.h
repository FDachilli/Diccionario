/********************************************************************************
** Form generated from reading UI file 'nuevaventana.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUEVAVENTANA_H
#define UI_NUEVAVENTANA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nuevaventana
{
public:
    QWidget *centralwidget;
    QRadioButton *espanol;
    QRadioButton *english;
    QLabel *cartelIdioma;
    QPushButton *pushButton;
    QCommandLinkButton *botonAtras;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *nuevaventana)
    {
        if (nuevaventana->objectName().isEmpty())
            nuevaventana->setObjectName(QStringLiteral("nuevaventana"));
        nuevaventana->resize(800, 600);
        nuevaventana->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"\n"
""));
        centralwidget = new QWidget(nuevaventana);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        espanol = new QRadioButton(centralwidget);
        espanol->setObjectName(QStringLiteral("espanol"));
        espanol->setGeometry(QRect(80, 210, 221, 141));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(espanol->sizePolicy().hasHeightForWidth());
        espanol->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("MS Sans Serif"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        espanol->setFont(font);
        espanol->setMouseTracking(true);
        espanol->setStyleSheet(QStringLiteral("border-image: url(:/imagenes/bandera.jpg);"));
        espanol->setIconSize(QSize(16, 16));
        espanol->setChecked(true);
        english = new QRadioButton(centralwidget);
        english->setObjectName(QStringLiteral("english"));
        english->setGeometry(QRect(440, 210, 221, 141));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        english->setPalette(palette);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        english->setFont(font1);
        english->setStyleSheet(QStringLiteral("border-image: url(:/imagenes/descarga.png);"));
        cartelIdioma = new QLabel(centralwidget);
        cartelIdioma->setObjectName(QStringLiteral("cartelIdioma"));
        cartelIdioma->setGeometry(QRect(280, 80, 241, 31));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        cartelIdioma->setFont(font2);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 410, 111, 31));
        botonAtras = new QCommandLinkButton(centralwidget);
        botonAtras->setObjectName(QStringLiteral("botonAtras"));
        botonAtras->setGeometry(QRect(610, 70, 81, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/descarga (1).jpg"), QSize(), QIcon::Normal, QIcon::Off);
        botonAtras->setIcon(icon);
        nuevaventana->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(nuevaventana);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        nuevaventana->setStatusBar(statusbar);

        retranslateUi(nuevaventana);

        QMetaObject::connectSlotsByName(nuevaventana);
    } // setupUi

    void retranslateUi(QMainWindow *nuevaventana)
    {
        nuevaventana->setWindowTitle(QApplication::translate("nuevaventana", "MainWindow", 0));
        espanol->setText(QApplication::translate("nuevaventana", "Espa\303\261ol", 0));
        english->setText(QApplication::translate("nuevaventana", "Ingl\303\251s", 0));
        cartelIdioma->setText(QApplication::translate("nuevaventana", "Seleccione el idioma", 0));
        pushButton->setText(QApplication::translate("nuevaventana", "Continuar", 0));
        botonAtras->setText(QApplication::translate("nuevaventana", "Atr\303\241s", 0));
    } // retranslateUi

};

namespace Ui {
    class nuevaventana: public Ui_nuevaventana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUEVAVENTANA_H
