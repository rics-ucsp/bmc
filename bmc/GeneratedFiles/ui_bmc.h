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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
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
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *bmcClass)
    {
        if (bmcClass->objectName().isEmpty())
            bmcClass->setObjectName(QStringLiteral("bmcClass"));
        bmcClass->resize(1060, 579);
        actionOpen_Data_Set = new QAction(bmcClass);
        actionOpen_Data_Set->setObjectName(QStringLiteral("actionOpen_Data_Set"));
        centralWidget = new QWidget(bmcClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 10, 69, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 36, 101, 23));
        vtkRenderer = new QVTKWidget(centralWidget);
        vtkRenderer->setObjectName(QStringLiteral("vtkRenderer"));
        vtkRenderer->setGeometry(QRect(300, 20, 751, 421));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 65, 256, 192));
        btnOpenDCMFolder = new QPushButton(centralWidget);
        btnOpenDCMFolder->setObjectName(QStringLiteral("btnOpenDCMFolder"));
        btnOpenDCMFolder->setGeometry(QRect(290, 450, 75, 23));
        hSliderDCM = new QSlider(centralWidget);
        hSliderDCM->setObjectName(QStringLiteral("hSliderDCM"));
        hSliderDCM->setGeometry(QRect(380, 450, 84, 22));
        hSliderDCM->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(272, 10, 22, 84));
        verticalSlider->setOrientation(Qt::Vertical);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 270, 256, 192));
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

        QMetaObject::connectSlotsByName(bmcClass);
    } // setupUi

    void retranslateUi(QMainWindow *bmcClass)
    {
        bmcClass->setWindowTitle(QApplication::translate("bmcClass", "bmc", Q_NULLPTR));
        actionOpen_Data_Set->setText(QApplication::translate("bmcClass", "Cargar", Q_NULLPTR));
        pushButton->setText(QApplication::translate("bmcClass", "Render volum\303\251trico", Q_NULLPTR));
        btnOpenDCMFolder->setText(QApplication::translate("bmcClass", "Abrir", Q_NULLPTR));
        menuArchivo->setTitle(QApplication::translate("bmcClass", "Archivo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bmcClass: public Ui_bmcClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BMC_H
