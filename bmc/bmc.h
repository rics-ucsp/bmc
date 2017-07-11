#pragma once
#include <iostream>
#include <sstream>

#include <QtWidgets/QMainWindow>
#include "vtk.h"
#include "ui_bmc.h"

#include <QFileDialog>
#include <QString>


#include <QPixmap>
#include <QIcon>
#include <QStringList>
#include  <QTableWidgetItem>


#include <QWidget>
#include <QListWidget>
#include <QListWidgetItem>
#include "thewidgetitem.h"
#include <QVector>
#include <QDebug>
#include <qcolordialog.h>

//separate by panels
#include "IO_panel.h"


//namespace Ui {
//	class bmc;
//}

class bmc : public QMainWindow
{
	Q_OBJECT

public:
	bmc(QMainWindow *parent = Q_NULLPTR);
	//~bmc();
	

private slots:
	void openDCMFolder();
	void drawDCMSeries(std::string folderDCM);
	void on_btnOpenDCMFolder_clicked();
	void on_hSliderDCM_sliderMoved(int position);

	virtual void slotExit();

	virtual void openDataSet();
	//virtual void updateImageSlice();
	//virtual void updateSlice();

private:
	Ui_bmcClass *ui;
	vtkSmartPointer<vtkDICOMImageReader> readerDCMSeries;
	vtkSmartPointer<vtkImageViewer2> imageViewerDCMSeriesX;
	int mMinSliderX;
	int mMaxSliderX;

	vtkSmartPointer<vtkImageViewer2> imageViewer;
	vtkSmartPointer<vtkInteractorStyleImage> interactorStyle;
};
