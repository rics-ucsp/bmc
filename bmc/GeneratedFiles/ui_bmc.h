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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
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
    QVTKWidget *vtkRenderer;
    QTableWidget *tableWidget;
    QPushButton *btnOpenDCMFolder;
    QSlider *hSliderDCM;
    QToolBox *toolBox;
    QWidget *page;
    QPushButton *btn_import;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *btn_open;
    QWidget *page_2;
    QListWidget *listWidget;
    QGroupBox *groupBox;
    QComboBox *comboBox_2;
    QLabel *label;
    QSlider *horizontalSlider;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit_3;
    QWidget *page_3;
    QPushButton *pushButton_3;
    QPushButton *btn_3D_selection;
    QWidget *page_4;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
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
        vtkRenderer = new QVTKWidget(centralWidget);
        vtkRenderer->setObjectName(QStringLiteral("vtkRenderer"));
        vtkRenderer->setGeometry(QRect(280, 0, 771, 621));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(380, 630, 671, 91));
        btnOpenDCMFolder = new QPushButton(centralWidget);
        btnOpenDCMFolder->setObjectName(QStringLiteral("btnOpenDCMFolder"));
        btnOpenDCMFolder->setGeometry(QRect(290, 630, 75, 23));
        hSliderDCM = new QSlider(centralWidget);
        hSliderDCM->setObjectName(QStringLiteral("hSliderDCM"));
        hSliderDCM->setGeometry(QRect(290, 670, 84, 22));
        hSliderDCM->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 0, 261, 731));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 261, 623));
        btn_import = new QPushButton(page);
        btn_import->setObjectName(QStringLiteral("btn_import"));
        btn_import->setGeometry(QRect(150, 10, 101, 23));
        QIcon icon;
        QString iconThemeName = QStringLiteral("new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        btn_import->setIcon(icon);
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 10, 131, 20));
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 50, 131, 20));
        btn_open = new QPushButton(page);
        btn_open->setObjectName(QStringLiteral("btn_open"));
        btn_open->setGeometry(QRect(150, 50, 101, 23));
        toolBox->addItem(page, QStringLiteral("1. Cargar Imagen"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 261, 623));
        listWidget = new QListWidget(page_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 261, 192));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 200, 261, 91));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(110, 20, 131, 22));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 91, 20));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(70, 50, 121, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 50, 51, 31));
        textEdit_2 = new QTextEdit(groupBox);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(200, 50, 51, 31));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 300, 101, 16));
        plainTextEdit_3 = new QPlainTextEdit(page_2);
        plainTextEdit_3->setObjectName(QStringLiteral("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(120, 300, 51, 31));
        toolBox->addItem(page_2, QString::fromUtf8("2. Construcci\303\263n de la Malla Volum\303\251trica"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 261, 623));
        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 20, 201, 23));
        btn_3D_selection = new QPushButton(page_3);
        btn_3D_selection->setObjectName(QStringLiteral("btn_3D_selection"));
        btn_3D_selection->setGeometry(QRect(30, 50, 201, 23));
        toolBox->addItem(page_3, QString::fromUtf8("3. Cuantificaci\303\263n Osea"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 261, 623));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 91, 16));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 50, 91, 16));
        pushButton_5 = new QPushButton(page_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(130, 20, 75, 23));
        pushButton_6 = new QPushButton(page_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(130, 50, 75, 23));
        toolBox->addItem(page_4, QStringLiteral("4. Exportar Datos"));
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

        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(bmcClass);
    } // setupUi

    void retranslateUi(QMainWindow *bmcClass)
    {
        bmcClass->setWindowTitle(QApplication::translate("bmcClass", "bmc", Q_NULLPTR));
        actionOpen_Data_Set->setText(QApplication::translate("bmcClass", "Cargar", Q_NULLPTR));
        btnOpenDCMFolder->setText(QApplication::translate("bmcClass", "Abrir", Q_NULLPTR));
        btn_import->setText(QString());
        label_5->setText(QApplication::translate("bmcClass", "Importar Imagen M\303\251dica", Q_NULLPTR));
        label_6->setText(QApplication::translate("bmcClass", "Abrir proyecto existente", Q_NULLPTR));
        btn_open->setText(QApplication::translate("bmcClass", "(icon)", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("bmcClass", "1. Cargar Imagen", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("bmcClass", "M\303\241scaras", Q_NULLPTR));
        label->setText(QApplication::translate("bmcClass", "Lista de m\303\241scaras", Q_NULLPTR));
        label_2->setText(QApplication::translate("bmcClass", "Nro. de regiones:", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("bmcClass", "2. Construcci\303\263n de la Malla Volum\303\251trica", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("bmcClass", "Seleccionar regi\303\263n 2D", Q_NULLPTR));
        btn_3D_selection->setText(QApplication::translate("bmcClass", "Seleccionar regi\303\263n 3D", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("bmcClass", "3. Cuantificaci\303\263n Osea", Q_NULLPTR));
        label_3->setText(QApplication::translate("bmcClass", "Exportar Imagen", Q_NULLPTR));
        label_4->setText(QApplication::translate("bmcClass", "Exportar Modelo", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("bmcClass", "(icon)", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("bmcClass", "(icon)", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("bmcClass", "4. Exportar Datos", Q_NULLPTR));
        menuArchivo->setTitle(QApplication::translate("bmcClass", "Archivo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bmcClass: public Ui_bmcClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BMC_H
