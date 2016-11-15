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
    QAction *actionAbrir;
    QAction *actionSalir;
    QAction *actionGuardar;
    QAction *actionGuardar_como;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tabTernario;
    QLabel *label;
    QLabel *label_2;
    QPushButton *buscarPalabraT;
    QLabel *barraDeEstadoPreT;
    QListWidget *listaT;
    QListWidget *listaPrefijoT;
    QLabel *label_3;
    QLineEdit *entradaAgregarT;
    QLineEdit *entradaBuscarT;
    QLineEdit *entradaPrefijoT;
    QPushButton *agregarT;
    QPushButton *borrarT;
    QPushButton *buscarPrefijoT;
    QLabel *barraDeEstadoT;
    QWidget *tabRway;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *buscarPalabraR;
    QLabel *barraDeEstadoPreR;
    QListWidget *listaR;
    QListWidget *listaPrefijoR;
    QLabel *label_8;
    QLineEdit *entradaAgregarR;
    QLineEdit *entradaBuscarR;
    QLineEdit *entradaPrefijoR;
    QPushButton *agregarR;
    QPushButton *borrarR;
    QPushButton *buscarPrefijoR;
    QLabel *barraDeEstadoR;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuSalir;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QStringLiteral("Principal"));
        Principal->resize(567, 547);
        Principal->setStyleSheet(QStringLiteral("selection-color: rgb(108, 108, 108);"));
        actionAbrir = new QAction(Principal);
        actionAbrir->setObjectName(QStringLiteral("actionAbrir"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/images (1).jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon);
        actionSalir = new QAction(Principal);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imagenes/salir-de-gnome-icono-7637-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon1);
        actionGuardar = new QAction(Principal);
        actionGuardar->setObjectName(QStringLiteral("actionGuardar"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/imagenes/floppy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon2);
        actionGuardar_como = new QAction(Principal);
        actionGuardar_como->setObjectName(QStringLiteral("actionGuardar_como"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/imagenes/disque10.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar_como->setIcon(icon3);
        centralwidget = new QWidget(Principal);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 561, 481));
        tabWidget->setMovable(false);
        tabTernario = new QWidget();
        tabTernario->setObjectName(QStringLiteral("tabTernario"));
        label = new QLabel(tabTernario);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 151, 71));
        label->setStyleSheet(QStringLiteral("image: url(:/imagenes/fondo.jpg);"));
        label_2 = new QLabel(tabTernario);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 120, 61, 20));
        buscarPalabraT = new QPushButton(tabTernario);
        buscarPalabraT->setObjectName(QStringLiteral("buscarPalabraT"));
        buscarPalabraT->setGeometry(QRect(400, 40, 51, 23));
        barraDeEstadoPreT = new QLabel(tabTernario);
        barraDeEstadoPreT->setObjectName(QStringLiteral("barraDeEstadoPreT"));
        barraDeEstadoPreT->setGeometry(QRect(30, 420, 191, 20));
        listaT = new QListWidget(tabTernario);
        listaT->setObjectName(QStringLiteral("listaT"));
        listaT->setGeometry(QRect(270, 100, 191, 311));
        listaPrefijoT = new QListWidget(tabTernario);
        listaPrefijoT->setObjectName(QStringLiteral("listaPrefijoT"));
        listaPrefijoT->setGeometry(QRect(20, 150, 201, 261));
        label_3 = new QLabel(tabTernario);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 70, 121, 21));
        entradaAgregarT = new QLineEdit(tabTernario);
        entradaAgregarT->setObjectName(QStringLiteral("entradaAgregarT"));
        entradaAgregarT->setGeometry(QRect(280, 10, 113, 20));
        entradaBuscarT = new QLineEdit(tabTernario);
        entradaBuscarT->setObjectName(QStringLiteral("entradaBuscarT"));
        entradaBuscarT->setGeometry(QRect(280, 40, 113, 20));
        entradaPrefijoT = new QLineEdit(tabTernario);
        entradaPrefijoT->setObjectName(QStringLiteral("entradaPrefijoT"));
        entradaPrefijoT->setGeometry(QRect(20, 100, 113, 20));
        agregarT = new QPushButton(tabTernario);
        agregarT->setObjectName(QStringLiteral("agregarT"));
        agregarT->setGeometry(QRect(400, 10, 51, 23));
        borrarT = new QPushButton(tabTernario);
        borrarT->setObjectName(QStringLiteral("borrarT"));
        borrarT->setEnabled(false);
        borrarT->setGeometry(QRect(400, 70, 61, 23));
        buscarPrefijoT = new QPushButton(tabTernario);
        buscarPrefijoT->setObjectName(QStringLiteral("buscarPrefijoT"));
        buscarPrefijoT->setGeometry(QRect(140, 100, 81, 23));
        barraDeEstadoT = new QLabel(tabTernario);
        barraDeEstadoT->setObjectName(QStringLiteral("barraDeEstadoT"));
        barraDeEstadoT->setGeometry(QRect(275, 416, 281, 21));
        tabWidget->addTab(tabTernario, QString());
        tabRway = new QWidget();
        tabRway->setObjectName(QStringLiteral("tabRway"));
        label_5 = new QLabel(tabRway);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 10, 131, 71));
        label_5->setStyleSheet(QStringLiteral("image: url(:/imagenes/fondo.jpg);"));
        label_6 = new QLabel(tabRway);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 120, 61, 20));
        buscarPalabraR = new QPushButton(tabRway);
        buscarPalabraR->setObjectName(QStringLiteral("buscarPalabraR"));
        buscarPalabraR->setGeometry(QRect(400, 40, 51, 23));
        barraDeEstadoPreR = new QLabel(tabRway);
        barraDeEstadoPreR->setObjectName(QStringLiteral("barraDeEstadoPreR"));
        barraDeEstadoPreR->setGeometry(QRect(30, 420, 191, 20));
        listaR = new QListWidget(tabRway);
        listaR->setObjectName(QStringLiteral("listaR"));
        listaR->setGeometry(QRect(270, 100, 191, 311));
        listaPrefijoR = new QListWidget(tabRway);
        listaPrefijoR->setObjectName(QStringLiteral("listaPrefijoR"));
        listaPrefijoR->setGeometry(QRect(20, 150, 201, 261));
        label_8 = new QLabel(tabRway);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(280, 70, 121, 21));
        entradaAgregarR = new QLineEdit(tabRway);
        entradaAgregarR->setObjectName(QStringLiteral("entradaAgregarR"));
        entradaAgregarR->setGeometry(QRect(280, 10, 113, 20));
        entradaBuscarR = new QLineEdit(tabRway);
        entradaBuscarR->setObjectName(QStringLiteral("entradaBuscarR"));
        entradaBuscarR->setGeometry(QRect(280, 40, 113, 20));
        entradaPrefijoR = new QLineEdit(tabRway);
        entradaPrefijoR->setObjectName(QStringLiteral("entradaPrefijoR"));
        entradaPrefijoR->setGeometry(QRect(20, 100, 113, 20));
        agregarR = new QPushButton(tabRway);
        agregarR->setObjectName(QStringLiteral("agregarR"));
        agregarR->setGeometry(QRect(400, 10, 51, 23));
        borrarR = new QPushButton(tabRway);
        borrarR->setObjectName(QStringLiteral("borrarR"));
        borrarR->setEnabled(false);
        borrarR->setGeometry(QRect(400, 70, 61, 23));
        buscarPrefijoR = new QPushButton(tabRway);
        buscarPrefijoR->setObjectName(QStringLiteral("buscarPrefijoR"));
        buscarPrefijoR->setGeometry(QRect(140, 100, 81, 23));
        barraDeEstadoR = new QLabel(tabRway);
        barraDeEstadoR->setObjectName(QStringLiteral("barraDeEstadoR"));
        barraDeEstadoR->setGeometry(QRect(275, 416, 181, 20));
        tabWidget->addTab(tabRway, QString());
        Principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Principal);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 567, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuSalir = new QMenu(menubar);
        menuSalir->setObjectName(QStringLiteral("menuSalir"));
        Principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Principal);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Principal->setStatusBar(statusbar);
        toolBar = new QToolBar(Principal);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        Principal->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuSalir->menuAction());
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionGuardar_como);
        menuSalir->addAction(actionSalir);
        toolBar->addAction(actionAbrir);
        toolBar->addAction(actionGuardar);
        toolBar->addAction(actionGuardar_como);
        toolBar->addAction(actionSalir);

        retranslateUi(Principal);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "MainWindow", 0));
        actionAbrir->setText(QApplication::translate("Principal", "Abrir", 0));
        actionSalir->setText(QApplication::translate("Principal", "Salir", 0));
        actionGuardar->setText(QApplication::translate("Principal", "Guardar", 0));
        actionGuardar_como->setText(QApplication::translate("Principal", "Guardar como...", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("Principal", "Resultado:", 0));
        buscarPalabraT->setText(QApplication::translate("Principal", "Buscar", 0));
        barraDeEstadoPreT->setText(QString());
        label_3->setText(QApplication::translate("Principal", "Seleccionar para borrar", 0));
        agregarT->setText(QApplication::translate("Principal", "Agregar", 0));
        borrarT->setText(QApplication::translate("Principal", "Borrar", 0));
        buscarPrefijoT->setText(QApplication::translate("Principal", "Buscar prefijo", 0));
        barraDeEstadoT->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabTernario), QApplication::translate("Principal", "Ternario", 0));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("Principal", "Resultado:", 0));
        buscarPalabraR->setText(QApplication::translate("Principal", "Buscar", 0));
        barraDeEstadoPreR->setText(QString());
        label_8->setText(QApplication::translate("Principal", "Seleccionar para borrar", 0));
        agregarR->setText(QApplication::translate("Principal", "Agregar", 0));
        borrarR->setText(QApplication::translate("Principal", "Borrar", 0));
        buscarPrefijoR->setText(QApplication::translate("Principal", "Buscar prefijo", 0));
        barraDeEstadoR->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabRway), QApplication::translate("Principal", "R-Way", 0));
        menuArchivo->setTitle(QApplication::translate("Principal", "Archivo", 0));
        menuSalir->setTitle(QApplication::translate("Principal", "Salir", 0));
        toolBar->setWindowTitle(QApplication::translate("Principal", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
