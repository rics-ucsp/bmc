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
#include <QtWidgets/QFrame>
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
    QPushButton *btn_open_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *btn_open_3;
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
    QPushButton *btn2Dselection;
    QPushButton *btn3Dselection;
    QLabel *label_16;
    QLabel *label_17;
    QWidget *page_4;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QVTKWidget *vtkRenderer_dicom_1;
    QVTKWidget *vtkRenderer_dicom_2;
    QVTKWidget *vtkRenderer_dicom_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLabel *label_15;
    QFrame *line;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QMenu *menuHerramientas;
    QMenu *menuOpciones;
    QMenu *menuAyuda;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *bmcClass)
    {
        if (bmcClass->objectName().isEmpty())
            bmcClass->setObjectName(QStringLiteral("bmcClass"));
        bmcClass->resize(1299, 939);
        actionOpen_Data_Set = new QAction(bmcClass);
        actionOpen_Data_Set->setObjectName(QStringLiteral("actionOpen_Data_Set"));
        centralWidget = new QWidget(bmcClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        vtkRenderer = new QVTKWidget(centralWidget);
        vtkRenderer->setObjectName(QStringLiteral("vtkRenderer"));
        vtkRenderer->setGeometry(QRect(780, 430, 511, 351));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(410, 790, 871, 41));
        btnOpenDCMFolder = new QPushButton(centralWidget);
        btnOpenDCMFolder->setObjectName(QStringLiteral("btnOpenDCMFolder"));
        btnOpenDCMFolder->setGeometry(QRect(280, 790, 75, 23));
        hSliderDCM = new QSlider(centralWidget);
        hSliderDCM->setObjectName(QStringLiteral("hSliderDCM"));
        hSliderDCM->setGeometry(QRect(370, 790, 84, 22));
        hSliderDCM->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 50, 241, 731));
        toolBox->setAutoFillBackground(false);
        toolBox->setLineWidth(5);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 241, 623));
        btn_import = new QPushButton(page);
        btn_import->setObjectName(QStringLiteral("btn_import"));
        btn_import->setGeometry(QRect(170, 10, 31, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/bmc/icons/file_import_original.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_import->setIcon(icon);
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 131, 20));
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 50, 131, 20));
        btn_open = new QPushButton(page);
        btn_open->setObjectName(QStringLiteral("btn_open"));
        btn_open->setGeometry(QRect(170, 50, 31, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/bmc/icons/file_open_original.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_open->setIcon(icon1);
        btn_open_2 = new QPushButton(page);
        btn_open_2->setObjectName(QStringLiteral("btn_open_2"));
        btn_open_2->setGeometry(QRect(170, 90, 31, 31));
        btn_open_2->setIcon(icon);
        label_11 = new QLabel(page);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 90, 131, 16));
        label_12 = new QLabel(page);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 100, 71, 16));
        label_13 = new QLabel(page);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 150, 71, 16));
        label_14 = new QLabel(page);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 140, 151, 16));
        btn_open_3 = new QPushButton(page);
        btn_open_3->setObjectName(QStringLiteral("btn_open_3"));
        btn_open_3->setGeometry(QRect(170, 130, 31, 31));
        btn_open_3->setIcon(icon1);
        toolBox->addItem(page, QStringLiteral("1. Cargar Imagen"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 241, 623));
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
        horizontalSlider->setGeometry(QRect(70, 50, 91, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 50, 51, 31));
        textEdit_2 = new QTextEdit(groupBox);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(190, 50, 51, 31));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 300, 101, 16));
        plainTextEdit_3 = new QPlainTextEdit(page_2);
        plainTextEdit_3->setObjectName(QStringLiteral("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(120, 300, 51, 31));
        toolBox->addItem(page_2, QString::fromUtf8("2. Construcci\303\263n de la Malla Volum\303\251trica"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 241, 623));
        btn2Dselection = new QPushButton(page_3);
        btn2Dselection->setObjectName(QStringLiteral("btn2Dselection"));
        btn2Dselection->setGeometry(QRect(200, 20, 31, 23));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/bmc/icons/select2d.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn2Dselection->setIcon(icon2);
        btn3Dselection = new QPushButton(page_3);
        btn3Dselection->setObjectName(QStringLiteral("btn3Dselection"));
        btn3Dselection->setGeometry(QRect(200, 50, 31, 23));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/bmc/icons/select3d.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn3Dselection->setIcon(icon3);
        label_16 = new QLabel(page_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 20, 141, 16));
        label_17 = new QLabel(page_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 50, 131, 16));
        toolBox->addItem(page_3, QString::fromUtf8("3. Cuantificaci\303\263n Osea"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 241, 623));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 101, 16));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 50, 101, 16));
        pushButton_5 = new QPushButton(page_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(174, 20, 31, 31));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/bmc/icons/foto.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_6 = new QPushButton(page_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(174, 63, 31, 21));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/bmc/icons/3d.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);
        toolBox->addItem(page_4, QStringLiteral("4. Exportar Datos"));
        vtkRenderer_dicom_1 = new QVTKWidget(centralWidget);
        vtkRenderer_dicom_1->setObjectName(QStringLiteral("vtkRenderer_dicom_1"));
        vtkRenderer_dicom_1->setGeometry(QRect(260, 50, 511, 371));
        vtkRenderer_dicom_2 = new QVTKWidget(centralWidget);
        vtkRenderer_dicom_2->setObjectName(QStringLiteral("vtkRenderer_dicom_2"));
        vtkRenderer_dicom_2->setGeometry(QRect(780, 50, 511, 371));
        vtkRenderer_dicom_3 = new QVTKWidget(centralWidget);
        vtkRenderer_dicom_3->setObjectName(QStringLiteral("vtkRenderer_dicom_3"));
        vtkRenderer_dicom_3->setGeometry(QRect(260, 430, 511, 350));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(260, 50, 71, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(780, 50, 81, 16));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(780, 430, 47, 13));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(260, 430, 71, 16));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 0, 41, 31));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/bmc/icons/tool_zoom_original.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon6);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(160, 0, 41, 31));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/bmc/icons/tool_zoom_select_original.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon7);
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(200, 0, 41, 31));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/bmc/icons/tool_rotate_original.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon8);
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(240, 0, 41, 31));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/bmc/icons/tool_translate_original.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon9);
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(280, 0, 41, 31));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/bmc/icons/tool_contrast_original.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon10);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 860, 41, 16));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        label_15->setPalette(palette);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-150, 850, 1451, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 41, 31));
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 0, 41, 31));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/bmc/icons/file_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon11);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 0, 41, 31));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/bmc/icons/file_save_original.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon12);
        bmcClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(bmcClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1299, 21));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuHerramientas = new QMenu(menuBar);
        menuHerramientas->setObjectName(QStringLiteral("menuHerramientas"));
        menuOpciones = new QMenu(menuBar);
        menuOpciones->setObjectName(QStringLiteral("menuOpciones"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        bmcClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(bmcClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        bmcClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(bmcClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        bmcClass->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuBar->addAction(menuHerramientas->menuAction());
        menuBar->addAction(menuOpciones->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuArchivo->addAction(actionOpen_Data_Set);

        retranslateUi(bmcClass);

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(bmcClass);
    } // setupUi

    void retranslateUi(QMainWindow *bmcClass)
    {
        bmcClass->setWindowTitle(QApplication::translate("bmcClass", "bmc", Q_NULLPTR));
        actionOpen_Data_Set->setText(QApplication::translate("bmcClass", "Cargar", Q_NULLPTR));
        btnOpenDCMFolder->setText(QApplication::translate("bmcClass", "Abrir", Q_NULLPTR));
        btn_import->setText(QString());
        label_5->setText(QApplication::translate("bmcClass", "<html><head/><body><p><span style=\" font-weight:600;\">Importar Imagen M\303\251dica</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("bmcClass", "<html><head/><body><p><span style=\" font-weight:600;\">Abrir proyecto existente</span></p></body></html>", Q_NULLPTR));
        btn_open->setText(QString());
        btn_open_2->setText(QString());
        label_11->setText(QApplication::translate("bmcClass", "<html><head/><body><p><span style=\" font-weight:600;\">Cargar  Modelo Triangular</span></p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("bmcClass", "<html><head/><body><p><span style=\" font-size:7pt; color:#4f4f4f;\">formato VTK</span></p></body></html>", Q_NULLPTR));
        label_13->setText(QApplication::translate("bmcClass", "<html><head/><body><p><span style=\" font-size:7pt; color:#4f4f4f;\">formato VTK</span></p></body></html>", Q_NULLPTR));
        label_14->setText(QApplication::translate("bmcClass", "<html><head/><body><p><span style=\" font-weight:600;\">Cargar  Modelo Tetra\303\251drico</span></p></body></html>", Q_NULLPTR));
        btn_open_3->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("bmcClass", "1. Cargar Imagen", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("bmcClass", "M\303\241scaras", Q_NULLPTR));
        label->setText(QApplication::translate("bmcClass", "Lista de m\303\241scaras", Q_NULLPTR));
        label_2->setText(QApplication::translate("bmcClass", "Nro. de regiones:", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("bmcClass", "2. Construcci\303\263n de la Malla Volum\303\251trica", Q_NULLPTR));
        btn2Dselection->setText(QString());
        btn3Dselection->setText(QString());
        label_16->setText(QApplication::translate("bmcClass", "<html><head/><body><p><span style=\" font-weight:600;\">Seleccionar regi\303\263n 2D</span></p></body></html>", Q_NULLPTR));
        label_17->setText(QApplication::translate("bmcClass", "<html><head/><body><p><span style=\" font-weight:600;\">Seleccionar regi\303\263n 3D</span></p></body></html>", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("bmcClass", "3. Cuantificaci\303\263n Osea", Q_NULLPTR));
        label_3->setText(QApplication::translate("bmcClass", "<html><head/><body><p><span style=\" font-weight:600;\">Exportar Imagen</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("bmcClass", "<html><head/><body><p><span style=\" font-weight:600;\">Exportar Modelo 3D</span></p></body></html>", Q_NULLPTR));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("bmcClass", "4. Exportar Datos", Q_NULLPTR));
        label_7->setText(QApplication::translate("bmcClass", "<html><head/><body><p><span style=\" color:#5f5f5f;\">Corte Axial</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("bmcClass", "<html><head/><body><p><span style=\" color:#5f5f5f;\">Corte Sagital</span></p></body></html>", Q_NULLPTR));
        label_9->setText(QApplication::translate("bmcClass", "<html><head/><body><p><span style=\" color:#5f5f5f;\">Volumen</span></p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("bmcClass", "<html><head/><body><p><span style=\" color:#5f5f5f;\">Corte Coronal</span></p></body></html>", Q_NULLPTR));
        pushButton_4->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        label_15->setText(QApplication::translate("bmcClass", "Listo", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        menuArchivo->setTitle(QApplication::translate("bmcClass", "Archivo", Q_NULLPTR));
        menuHerramientas->setTitle(QApplication::translate("bmcClass", "Herramientas", Q_NULLPTR));
        menuOpciones->setTitle(QApplication::translate("bmcClass", "Opciones", Q_NULLPTR));
        menuAyuda->setTitle(QApplication::translate("bmcClass", "Ayuda", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bmcClass: public Ui_bmcClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BMC_H
