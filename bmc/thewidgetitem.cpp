#include "thewidgetitem.h"
#include "ui_thewidgetitem.h"

#define vtkRenderingCore_AUTOINIT 4(vtkRenderingOpenGL2, vtkInteractionStyle,vtkRenderingVolumeOpenGL2,vtkRenderingFreeType)
#include <vtkSphereSource.h>
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

#include <QString>
#include <string>
#include <QMessageBox>
#include <QColor>
#include <QColorDialog>



TheWidgetItem::TheWidgetItem(QString file, QVTKWidget *widgetvtk, vtkRenderer* renderer_, QColor &color, QWidget *parent) :
	QWidget(parent),
	ui(new Ui::TheWidgetItem) 
{
	ui->setupUi(this);
	vtkFile = "samples/" + file;
	visible = true;
	widgetVTK = widgetvtk;
	opacity = 0.75;
	ui->label->setText(file);


	reader = vtkSmartPointer<vtkUnstructuredGridReader>::New();
	reader->SetFileName(vtkFile.toStdString().c_str());
	reader->Update();

	mapper = vtkSmartPointer<vtkDataSetMapper>::New();
	mapper->SetInputConnection(reader->GetOutputPort());


	actor = vtkSmartPointer<vtkActor>::New();
	double r = color.red()/255;
	double g = color.green() / 255;
	double b = color.blue() / 255;


	QPalette pal;
	pal.setColor(QPalette::Button, color.rgb());
	ui->btnColor->setAutoFillBackground(true);
	ui->btnColor->setPalette(pal);
	ui->btnColor->update();

	

	actor->GetProperty()->SetColor(r, g, b);
	actor->GetProperty()->SetOpacity(0.5);
	actor->SetMapper(mapper);

	renderer = renderer_;
	renderer->AddActor(actor);
	renderer->SetBackground(39 / 255, 40 / 255, 34 / 255);

	widgetVTK->GetRenderWindow()->AddRenderer(renderer);
	widgetVTK->show();

	ui->sldrOpacity->setMinimum(1);
	ui->sldrOpacity->setMaximum(100);
	ui->sldrOpacity->setValue(50);
}

TheWidgetItem::~TheWidgetItem()
{
	delete ui;
}

void TheWidgetItem::on_pressThisBtn_clicked() {

	if (visible == true) {
		ui->pressThisBtn->setIcon(QIcon("eye_off.png"));
		visible = false;
		//renderer->SetBackground(0.2, 0.2, 0.2);
		
		mapper->Update();
		actor->VisibilityOff();
		renderer->AddActor(actor);
		
		widgetVTK->GetRenderWindow()->AddRenderer(renderer);
		widgetVTK->GetRenderWindow()->Render();
		widgetVTK->show();
	}
	else {
		ui->pressThisBtn->setIcon(QIcon("eye_on.png"));
		visible = true;
		//renderer->SetBackground(0, 0, 0);
		
		mapper->Update();
		actor->VisibilityOn();
		renderer->AddActor(actor);

		widgetVTK->GetRenderWindow()->AddRenderer(renderer);
		widgetVTK->GetRenderWindow()->Render();
		widgetVTK->show();
	}


}


void TheWidgetItem::on_btnColor_clicked() {

	QColor newColor = QColorDialog::getColor(Qt::white, this);

	QPalette pal;
	pal.setColor(QPalette::Button, newColor);
	ui->btnColor->setAutoFillBackground(true);
	ui->btnColor->setPalette(pal);
	ui->btnColor->update();


	double r = newColor.red() / 255;
	double g = newColor.green() / 255;
	double b = newColor.blue() / 255;
	
	mapper->Update();
	actor->GetProperty()->SetColor(r, g, b);
	renderer->AddActor(actor);

	widgetVTK->GetRenderWindow()->AddRenderer(renderer);
	widgetVTK->GetRenderWindow()->Render();
	widgetVTK->show();

}


void TheWidgetItem::on_sldrOpacity_sliderMoved(int position) {
	
	mapper->Update();
	actor->GetProperty()->SetOpacity(double(position)/100);
	renderer->AddActor(actor);

	widgetVTK->GetRenderWindow()->AddRenderer(renderer);
	widgetVTK->GetRenderWindow()->Render();
	widgetVTK->show();

}


