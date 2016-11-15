/********************************************************************************
** Form generated from reading UI file 'rway.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RWAY_H
#define UI_RWAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rway
{
public:
    QAction *actionAgregar;
    QAction *actionBuscar_prefijo;
    QAction *actionListar_palabras;
    QAction *actionSalir;
    QAction *actionEliminar;
    QAction *actionBuscar;
    QAction *actionAbrir;
    QAction *actionGuardar;
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *entrada;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *salida;
    QMenuBar *menubar;
    QMenu *menuEdici_n;
    QMenu *menuVer;
    QMenu *menuSalir;
    QMenu *menuArchivo;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *rway)
    {
        if (rway->objectName().isEmpty())
            rway->setObjectName(QStringLiteral("rway"));
        rway->setWindowModality(Qt::NonModal);
        rway->resize(820, 629);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(20);
        sizePolicy.setHeightForWidth(rway->sizePolicy().hasHeightForWidth());
        rway->setSizePolicy(sizePolicy);
        rway->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        actionAgregar = new QAction(rway);
        actionAgregar->setObjectName(QStringLiteral("actionAgregar"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/imagenes/button-add-28966.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAgregar->setIcon(icon);
        actionBuscar_prefijo = new QAction(rway);
        actionBuscar_prefijo->setObjectName(QStringLiteral("actionBuscar_prefijo"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imagenes/buscar-empleo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionBuscar_prefijo->setIcon(icon1);
        actionListar_palabras = new QAction(rway);
        actionListar_palabras->setObjectName(QStringLiteral("actionListar_palabras"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/imagenes/list.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionListar_palabras->setIcon(icon2);
        actionSalir = new QAction(rway);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/imagenes/salir-de-gnome-icono-7637-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon3);
        actionEliminar = new QAction(rway);
        actionEliminar->setObjectName(QStringLiteral("actionEliminar"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/imagenes/descarga (2).jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEliminar->setIcon(icon4);
        actionBuscar = new QAction(rway);
        actionBuscar->setObjectName(QStringLiteral("actionBuscar"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/imagenes/search-148820_640.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBuscar->setIcon(icon5);
        actionAbrir = new QAction(rway);
        actionAbrir->setObjectName(QStringLiteral("actionAbrir"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/imagenes/images (1).jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon6);
        actionGuardar = new QAction(rway);
        actionGuardar->setObjectName(QStringLiteral("actionGuardar"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/imagenes/floppy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon7);
        centralwidget = new QWidget(rway);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 621, 391));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        entrada = new QLineEdit(widget);
        entrada->setObjectName(QStringLiteral("entrada"));

        verticalLayout_2->addWidget(entrada);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 617, 323));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        salida = new QPlainTextEdit(scrollAreaWidgetContents);
        salida->setObjectName(QStringLiteral("salida"));
        salida->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        salida->setReadOnly(true);
        salida->setCursorWidth(1);

        verticalLayout->addWidget(salida);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        rway->setCentralWidget(centralwidget);
        entrada->raise();
        label->raise();
        label_2->raise();
        scrollArea->raise();
        salida->raise();
        menubar = new QMenuBar(rway);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 820, 21));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(20);
        sizePolicy1.setHeightForWidth(menubar->sizePolicy().hasHeightForWidth());
        menubar->setSizePolicy(sizePolicy1);
        menuEdici_n = new QMenu(menubar);
        menuEdici_n->setObjectName(QStringLiteral("menuEdici_n"));
        menuVer = new QMenu(menubar);
        menuVer->setObjectName(QStringLiteral("menuVer"));
        menuSalir = new QMenu(menubar);
        menuSalir->setObjectName(QStringLiteral("menuSalir"));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        rway->setMenuBar(menubar);
        statusbar = new QStatusBar(rway);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        rway->setStatusBar(statusbar);
        toolBar = new QToolBar(rway);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        rway->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEdici_n->menuAction());
        menubar->addAction(menuVer->menuAction());
        menubar->addAction(menuSalir->menuAction());
        menuEdici_n->addAction(actionAgregar);
        menuEdici_n->addAction(actionEliminar);
        menuVer->addAction(actionBuscar);
        menuVer->addAction(actionBuscar_prefijo);
        menuVer->addAction(actionListar_palabras);
        menuSalir->addAction(actionSalir);
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        toolBar->addAction(actionAbrir);
        toolBar->addAction(actionGuardar);
        toolBar->addAction(actionAgregar);
        toolBar->addAction(actionEliminar);
        toolBar->addAction(actionBuscar);
        toolBar->addAction(actionBuscar_prefijo);
        toolBar->addAction(actionListar_palabras);
        toolBar->addAction(actionSalir);

        retranslateUi(rway);

        QMetaObject::connectSlotsByName(rway);
    } // setupUi

    void retranslateUi(QMainWindow *rway)
    {
        rway->setWindowTitle(QApplication::translate("rway", "MainWindow", 0));
        actionAgregar->setText(QApplication::translate("rway", "Agregar", 0));
        actionBuscar_prefijo->setText(QApplication::translate("rway", "Buscar prefijo", 0));
        actionListar_palabras->setText(QApplication::translate("rway", "Listar palabras", 0));
        actionSalir->setText(QApplication::translate("rway", "Salir", 0));
        actionEliminar->setText(QApplication::translate("rway", "Eliminar", 0));
        actionBuscar->setText(QApplication::translate("rway", "Buscar", 0));
        actionAbrir->setText(QApplication::translate("rway", "Abrir", 0));
        actionGuardar->setText(QApplication::translate("rway", "Guardar", 0));
        label->setText(QApplication::translate("rway", "Palabra", 0));
        entrada->setText(QString());
        label_2->setText(QApplication::translate("rway", "Resultado", 0));
        menuEdici_n->setTitle(QApplication::translate("rway", "Edici\303\263n", 0));
        menuVer->setTitle(QApplication::translate("rway", "Ver", 0));
        menuSalir->setTitle(QApplication::translate("rway", "Salir", 0));
        menuArchivo->setTitle(QApplication::translate("rway", "Archivo", 0));
        toolBar->setWindowTitle(QApplication::translate("rway", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class rway: public Ui_rway {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RWAY_H
