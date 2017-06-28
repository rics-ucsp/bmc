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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
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
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QVTKWidget *vtkRenderer;
    QTableWidget *tableWidget;
    QPushButton *btnOpenDCMFolder;
    QSlider *hSliderDCM;
    QSlider *verticalSlider;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *bmcClass)
    {
        if (bmcClass->objectName().isEmpty())
            bmcClass->setObjectName(QStringLiteral("bmcClass"));
        bmcClass->resize(1060, 567);
        actionOpen_Data_Set = new QAction(bmcClass);
        actionOpen_Data_Set->setObjectName(QStringLiteral("actionOpen_Data_Set"));
        centralWidget = new QWidget(bmcClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        vtkRenderer = new QVTKWidget(centralWidget);
        vtkRenderer->setObjectName(QStringLiteral("vtkRenderer"));

        gridLayout->addWidget(vtkRenderer, 0, 2, 3, 2);

        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 1);

        btnOpenDCMFolder = new QPushButton(centralWidget);
        btnOpenDCMFolder->setObjectName(QStringLiteral("btnOpenDCMFolder"));

        gridLayout->addWidget(btnOpenDCMFolder, 3, 2, 1, 1);

        hSliderDCM = new QSlider(centralWidget);
        hSliderDCM->setObjectName(QStringLiteral("hSliderDCM"));
        hSliderDCM->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hSliderDCM, 3, 3, 1, 1);

        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider, 0, 1, 3, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

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
