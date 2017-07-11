/********************************************************************************
** Form generated from reading UI file 'bmc.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BMC_H
#define UI_BMC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_bmcClass
{
public:
    QAction *actionOpen_Data_Set;
    QWidget *centralWidget;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QVTKWidget *vtkRenderer;
    QTableWidget *tableWidget;
    QPushButton *btnOpenDCMFolder;
    QSlider *hSliderDCM;
    QSlider *verticalSlider;
    QToolBox *toolBox;
    QWidget *page;
    QPushButton *pushButton_2;
    QWidget *page_2;
    QListWidget *listWidget;
    QWidget *page_3;
    QWidget *page_4;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *bmcClass)
    {
        if (bmcClass->objectName().isEmpty())
            bmcClass->setObjectName(QStringLiteral("bmcClass"));
        bmcClass->resize(1060, 795);
        actionOpen_Data_Set = new QAction(bmcClass);
        actionOpen_Data_Set->setObjectName(QStringLiteral("actionOpen_Data_Set"));
        centralWidget = new QWidget(bmcClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(580, 510, 69, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(480, 480, 101, 23));
        vtkRenderer = new QVTKWidget(centralWidget);
        vtkRenderer->setObjectName(QStringLiteral("vtkRenderer"));
        vtkRenderer->setGeometry(QRect(280, 0, 771, 411));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(720, 420, 271, 131));
        btnOpenDCMFolder = new QPushButton(centralWidget);
        btnOpenDCMFolder->setObjectName(QStringLiteral("btnOpenDCMFolder"));
        btnOpenDCMFolder->setGeometry(QRect(400, 500, 75, 23));
        hSliderDCM = new QSlider(centralWidget);
        hSliderDCM->setObjectName(QStringLiteral("hSliderDCM"));
        hSliderDCM->setGeometry(QRect(300, 450, 84, 22));
        hSliderDCM->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(1010, 440, 22, 84));
        verticalSlider->setOrientation(Qt::Vertical);
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 0, 261, 511));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 261, 403));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 0, 101, 23));
        QIcon icon(QIcon::fromTheme(QStringLiteral("new")));
        pushButton_2->setIcon(icon);
        toolBox->addItem(page, QStringLiteral("1. Entrada de Imagen DICOM"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 261, 403));
        listWidget = new QListWidget(page_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 256, 192));
        toolBox->addItem(page_2, QStringLiteral("2. Visualizacion de Modelos 3D"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 261, 403));
        toolBox->addItem(page_3, QStringLiteral("3. Seleccion de Muestra de Analisis"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 261, 403));
        toolBox->addItem(page_4, QStringLiteral("4. Guardar y Salir"));
        bmcClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(bmcClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1060, 21));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        bmcClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(bmcClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        bmcClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(bmcClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        bmcClass->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionOpen_Data_Set);

        retranslateUi(bmcClass);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(bmcClass);
    } // setupUi

    void retranslateUi(QMainWindow *bmcClass)
    {
        bmcClass->setWindowTitle(QApplication::translate("bmcClass", "bmc", Q_NULLPTR));
        actionOpen_Data_Set->setText(QApplication::translate("bmcClass", "Cargar", Q_NULLPTR));
        pushButton->setText(QApplication::translate("bmcClass", "Render volum\303\251trico", Q_NULLPTR));
        btnOpenDCMFolder->setText(QApplication::translate("bmcClass", "Abrir", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("bmcClass", "Abrir Imagen", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("bmcClass", "1. Entrada de Imagen DICOM", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("bmcClass", "2. Visualizacion de Modelos 3D", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("bmcClass", "3. Seleccion de Muestra de Analisis", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("bmcClass", "4. Guardar y Salir", Q_NULLPTR));
        menuArchivo->setTitle(QApplication::translate("bmcClass", "Archivo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bmcClass: public Ui_bmcClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BMC_H
