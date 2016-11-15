/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QAction *actionSalir;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tabTernario;
    QLabel *label;
    QLabel *label_2;
    QPushButton *buscarPalabraT;
    QListWidget *listaT;
    QListWidget *listaPrefijoT;
    QLabel *label_3;
    QLineEdit *entradaAgregarT;
    QLineEdit *entradaBuscarT;
    QLineEdit *entradaPrefijoT;
    QPushButton *agregarT;
    QPushButton *borrarT;
    QLabel *barraDeEstadoT;
    QPushButton *deshacerT;
    QLabel *label_4;
    QPushButton *botonAbrirT;
    QPushButton *botonGuardarT;
    QPushButton *botonGuardarComoT;
    QWidget *tabRway;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *buscarPalabraR;
    QListWidget *listaR;
    QListWidget *listaPrefijoR;
    QLabel *label_8;
    QLineEdit *entradaAgregarR;
    QLineEdit *entradaBuscarR;
    QLineEdit *entradaPrefijoR;
    QPushButton *agregarR;
    QPushButton *borrarR;
    QLabel *barraDeEstadoR;
    QPushButton *deshacerR;
    QLabel *label_7;
    QPushButton *botonGuardarR;
    QPushButton *botonAbrirR;
    QPushButton *botonGuardarComoR;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QMenuBar *menubar;
    QMenu *menuSalir;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QStringLiteral("Principal"));
        Principal->setWindowModality(Qt::ApplicationModal);
        Principal->resize(615, 617);
        Principal->setMinimumSize(QSize(565, 558));
        Principal->setMaximumSize(QSize(700, 700));
        Principal->setCursor(QCursor(Qt::ArrowCursor));
        Principal->setStyleSheet(QStringLiteral("selection-color: rgb(108, 108, 108);"));
        actionSalir = new QAction(Principal);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/salir-de-gnome-icono-7637-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon);
        centralwidget = new QWidget(Principal);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(-1, 0, 571, 531));
        tabWidget->setMovable(false);
        tabTernario = new QWidget();
        tabTernario->setObjectName(QStringLiteral("tabTernario"));
        label = new QLabel(tabTernario);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 151, 71));
        label->setStyleSheet(QStringLiteral("image: url(:/imagenes/fondo.jpg);"));
        label_2 = new QLabel(tabTernario);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(22, 166, 61, 20));
        buscarPalabraT = new QPushButton(tabTernario);
        buscarPalabraT->setObjectName(QStringLiteral("buscarPalabraT"));
        buscarPalabraT->setGeometry(QRect(425, 80, 51, 23));
        listaT = new QListWidget(tabTernario);
        listaT->setObjectName(QStringLiteral("listaT"));
        listaT->setGeometry(QRect(260, 140, 221, 311));
        listaPrefijoT = new QListWidget(tabTernario);
        listaPrefijoT->setObjectName(QStringLiteral("listaPrefijoT"));
        listaPrefijoT->setGeometry(QRect(20, 190, 201, 261));
        label_3 = new QLabel(tabTernario);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(258, 110, 121, 21));
        entradaAgregarT = new QLineEdit(tabTernario);
        entradaAgregarT->setObjectName(QStringLiteral("entradaAgregarT"));
        entradaAgregarT->setGeometry(QRect(262, 50, 151, 20));
        entradaBuscarT = new QLineEdit(tabTernario);
        entradaBuscarT->setObjectName(QStringLiteral("entradaBuscarT"));
        entradaBuscarT->setGeometry(QRect(262, 80, 151, 20));
        entradaPrefijoT = new QLineEdit(tabTernario);
        entradaPrefijoT->setObjectName(QStringLiteral("entradaPrefijoT"));
        entradaPrefijoT->setGeometry(QRect(20, 147, 201, 20));
        agregarT = new QPushButton(tabTernario);
        agregarT->setObjectName(QStringLiteral("agregarT"));
        agregarT->setGeometry(QRect(424, 50, 51, 23));
        borrarT = new QPushButton(tabTernario);
        borrarT->setObjectName(QStringLiteral("borrarT"));
        borrarT->setEnabled(false);
        borrarT->setGeometry(QRect(372, 110, 41, 23));
        barraDeEstadoT = new QLabel(tabTernario);
        barraDeEstadoT->setObjectName(QStringLiteral("barraDeEstadoT"));
        barraDeEstadoT->setGeometry(QRect(275, 456, 281, 21));
        deshacerT = new QPushButton(tabTernario);
        deshacerT->setObjectName(QStringLiteral("deshacerT"));
        deshacerT->setEnabled(false);
        deshacerT->setGeometry(QRect(419, 110, 61, 23));
        deshacerT->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(tabTernario);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(22, 126, 101, 20));
        botonAbrirT = new QPushButton(tabTernario);
        botonAbrirT->setObjectName(QStringLiteral("botonAbrirT"));
        botonAbrirT->setGeometry(QRect(20, 10, 31, 31));
        botonAbrirT->setStyleSheet(QStringLiteral("border-image: url(:/imagenes/images (1).jpg);"));
        botonGuardarT = new QPushButton(tabTernario);
        botonGuardarT->setObjectName(QStringLiteral("botonGuardarT"));
        botonGuardarT->setGeometry(QRect(60, 10, 31, 31));
        botonGuardarT->setStyleSheet(QStringLiteral("border-image: url(:/imagenes/floppy.png);"));
        botonGuardarComoT = new QPushButton(tabTernario);
        botonGuardarComoT->setObjectName(QStringLiteral("botonGuardarComoT"));
        botonGuardarComoT->setGeometry(QRect(100, 10, 31, 31));
        botonGuardarComoT->setStyleSheet(QStringLiteral("border-image: url(:/imagenes/disque10.png);"));
        tabWidget->addTab(tabTernario, QString());
        tabRway = new QWidget();
        tabRway->setObjectName(QStringLiteral("tabRway"));
        label_5 = new QLabel(tabRway);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 50, 131, 71));
        label_5->setStyleSheet(QStringLiteral("image: url(:/imagenes/fondo.jpg);"));
        label_6 = new QLabel(tabRway);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(22, 166, 61, 20));
        buscarPalabraR = new QPushButton(tabRway);
        buscarPalabraR->setObjectName(QStringLiteral("buscarPalabraR"));
        buscarPalabraR->setGeometry(QRect(425, 80, 51, 23));
        listaR = new QListWidget(tabRway);
        listaR->setObjectName(QStringLiteral("listaR"));
        listaR->setGeometry(QRect(260, 140, 221, 311));
        listaPrefijoR = new QListWidget(tabRway);
        listaPrefijoR->setObjectName(QStringLiteral("listaPrefijoR"));
        listaPrefijoR->setGeometry(QRect(20, 190, 201, 261));
        label_8 = new QLabel(tabRway);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(258, 110, 121, 21));
        entradaAgregarR = new QLineEdit(tabRway);
        entradaAgregarR->setObjectName(QStringLiteral("entradaAgregarR"));
        entradaAgregarR->setGeometry(QRect(262, 50, 151, 20));
        entradaBuscarR = new QLineEdit(tabRway);
        entradaBuscarR->setObjectName(QStringLiteral("entradaBuscarR"));
        entradaBuscarR->setGeometry(QRect(262, 80, 151, 20));
        entradaPrefijoR = new QLineEdit(tabRway);
        entradaPrefijoR->setObjectName(QStringLiteral("entradaPrefijoR"));
        entradaPrefijoR->setGeometry(QRect(20, 147, 201, 20));
        agregarR = new QPushButton(tabRway);
        agregarR->setObjectName(QStringLiteral("agregarR"));
        agregarR->setGeometry(QRect(424, 50, 51, 23));
        borrarR = new QPushButton(tabRway);
        borrarR->setObjectName(QStringLiteral("borrarR"));
        borrarR->setEnabled(false);
        borrarR->setGeometry(QRect(372, 110, 41, 23));
        borrarR->setCursor(QCursor(Qt::ArrowCursor));
        barraDeEstadoR = new QLabel(tabRway);
        barraDeEstadoR->setObjectName(QStringLiteral("barraDeEstadoR"));
        barraDeEstadoR->setGeometry(QRect(275, 456, 181, 20));
        deshacerR = new QPushButton(tabRway);
        deshacerR->setObjectName(QStringLiteral("deshacerR"));
        deshacerR->setEnabled(false);
        deshacerR->setGeometry(QRect(419, 110, 61, 23));
        deshacerR->setStyleSheet(QStringLiteral(""));
        label_7 = new QLabel(tabRway);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(22, 126, 101, 21));
        botonGuardarR = new QPushButton(tabRway);
        botonGuardarR->setObjectName(QStringLiteral("botonGuardarR"));
        botonGuardarR->setGeometry(QRect(60, 10, 31, 31));
        botonGuardarR->setStyleSheet(QStringLiteral("border-image: url(:/imagenes/floppy.png);"));
        botonAbrirR = new QPushButton(tabRway);
        botonAbrirR->setObjectName(QStringLiteral("botonAbrirR"));
        botonAbrirR->setGeometry(QRect(20, 10, 31, 31));
        botonAbrirR->setStyleSheet(QStringLiteral("border-image: url(:/imagenes/images (1).jpg);"));
        botonGuardarComoR = new QPushButton(tabRway);
        botonGuardarComoR->setObjectName(QStringLiteral("botonGuardarComoR"));
        botonGuardarComoR->setGeometry(QRect(100, 10, 31, 31));
        botonGuardarComoR->setStyleSheet(QStringLiteral("border-image: url(:/imagenes/disque10.png);"));
        tabWidget->addTab(tabRway, QString());
        Principal->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Principal);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Principal->setStatusBar(statusbar);
        toolBar = new QToolBar(Principal);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        Principal->addToolBar(Qt::TopToolBarArea, toolBar);
        menubar = new QMenuBar(Principal);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 615, 21));
        menuSalir = new QMenu(menubar);
        menuSalir->setObjectName(QStringLiteral("menuSalir"));
        Principal->setMenuBar(menubar);

        toolBar->addAction(actionSalir);
        menubar->addAction(menuSalir->menuAction());
        menuSalir->addAction(actionSalir);

        retranslateUi(Principal);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "RTS", 0));
        actionSalir->setText(QApplication::translate("Principal", "Salir", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("Principal", "Resultado:", 0));
        buscarPalabraT->setText(QApplication::translate("Principal", "Buscar", 0));
        label_3->setText(QApplication::translate("Principal", "Seleccionar para borrar", 0));
        agregarT->setText(QApplication::translate("Principal", "Agregar", 0));
        borrarT->setText(QApplication::translate("Principal", "Borrar", 0));
        barraDeEstadoT->setText(QString());
        deshacerT->setText(QApplication::translate("Principal", "Deshacer", 0));
        label_4->setText(QApplication::translate("Principal", "Buscar prefijo:", 0));
        botonAbrirT->setText(QString());
        botonGuardarT->setText(QString());
        botonGuardarComoT->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabTernario), QApplication::translate("Principal", "Ternario", 0));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("Principal", "Resultado:", 0));
        buscarPalabraR->setText(QApplication::translate("Principal", "Buscar", 0));
        label_8->setText(QApplication::translate("Principal", "Seleccionar para borrar", 0));
        agregarR->setText(QApplication::translate("Principal", "Agregar", 0));
        borrarR->setText(QApplication::translate("Principal", "Borrar", 0));
        barraDeEstadoR->setText(QString());
        deshacerR->setText(QApplication::translate("Principal", "Deshacer", 0));
        label_7->setText(QApplication::translate("Principal", "Buscar prefijo:", 0));
        botonGuardarR->setText(QString());
        botonAbrirR->setText(QString());
        botonGuardarComoR->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabRway), QApplication::translate("Principal", "R-Way", 0));
        toolBar->setWindowTitle(QApplication::translate("Principal", "toolBar", 0));
        menuSalir->setTitle(QApplication::translate("Principal", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
