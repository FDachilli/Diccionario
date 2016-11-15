/********************************************************************************
** Form generated from reading UI file 'tpalgoritmos.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPALGORITMOS_H
#define UI_TPALGORITMOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TPAlgoritmos
{
public:
    QWidget *centralWidget;
    QLabel *fondo;
    QCommandLinkButton *botonContinuar;

    void setupUi(QMainWindow *TPAlgoritmos)
    {
        if (TPAlgoritmos->objectName().isEmpty())
            TPAlgoritmos->setObjectName(QStringLiteral("TPAlgoritmos"));
        TPAlgoritmos->resize(629, 452);
        TPAlgoritmos->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        TPAlgoritmos->setIconSize(QSize(50, 50));
        TPAlgoritmos->setAnimated(true);
        centralWidget = new QWidget(TPAlgoritmos);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        centralWidget->setPalette(palette);
        fondo = new QLabel(centralWidget);
        fondo->setObjectName(QStringLiteral("fondo"));
        fondo->setGeometry(QRect(-20, -30, 641, 471));
        fondo->setStyleSheet(QStringLiteral("image: url(:/imagenes/fondo.jpg);"));
        botonContinuar = new QCommandLinkButton(centralWidget);
        botonContinuar->setObjectName(QStringLiteral("botonContinuar"));
        botonContinuar->setGeometry(QRect(510, 40, 101, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/flecha roja.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        botonContinuar->setIcon(icon);
        TPAlgoritmos->setCentralWidget(centralWidget);

        retranslateUi(TPAlgoritmos);

        QMetaObject::connectSlotsByName(TPAlgoritmos);
    } // setupUi

    void retranslateUi(QMainWindow *TPAlgoritmos)
    {
        TPAlgoritmos->setWindowTitle(QApplication::translate("TPAlgoritmos", "TPAlgoritmos", 0));
#ifndef QT_NO_TOOLTIP
        TPAlgoritmos->setToolTip(QApplication::translate("TPAlgoritmos", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        TPAlgoritmos->setWhatsThis(QApplication::translate("TPAlgoritmos", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        fondo->setText(QString());
        botonContinuar->setText(QApplication::translate("TPAlgoritmos", "Continuar", 0));
    } // retranslateUi

};

namespace Ui {
    class TPAlgoritmos: public Ui_TPAlgoritmos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPALGORITMOS_H
