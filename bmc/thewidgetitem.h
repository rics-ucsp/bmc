#ifndef THEWIDGETITEM_H
#define THEWIDGETITEM_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QSlider>
#include <QProgressBar>
#include <QLabel>

#define vtkRenderingCore_AUTOINIT 4(vtkRenderingOpenGL2, vtkInteractionStyle,vtkRenderingVolumeOpenGL2,vtkRenderingFreeType)

#include <vtkPolyData.h>
#include <vtkSmartPointer.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkRenderWindowInteractor.h>

#include <vtkGenericDataObjectReader.h>


#include <vtkUnstructuredGridReader.h>
#include <vtkXMLUnstructuredGridReader.h>
#include <vtkDataSetMapper.h>
#include <vtkProperty.h>
#include <QVTKWidget.h>

namespace Ui {
	class TheWidgetItem;
}

class TheWidgetItem : public QWidget
{
	Q_OBJECT

public:
	TheWidgetItem(QString file, QVTKWidget *widgetvtk, vtkRenderer* renderer, QColor& color,QWidget *parent = 0);
	~TheWidgetItem();

private slots:
	void on_pressThisBtn_clicked();
	void on_btnColor_clicked();
	void on_sldrOpacity_sliderMoved(int position);

	
private:

	Ui::TheWidgetItem *ui;
	QString vtkFile;
	bool visible;
	float opacity;
	QVTKWidget *widgetVTK;
	vtkSmartPointer<vtkUnstructuredGridReader> reader;
	vtkSmartPointer<vtkDataSetMapper> mapper;
	vtkSmartPointer<vtkActor> actor;
	vtkSmartPointer<vtkRenderer> renderer;
};

#endif // THEWIDGETITEM_H