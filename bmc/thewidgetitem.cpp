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

TheWidgetItem::TheWidgetItem(QString file, QVTKWidget *widgetvtk, vtkRenderer* renderer_, int color, QWidget *parent) :
	QWidget(parent),
	ui(new Ui::TheWidgetItem)
{
	ui->setupUi(this);
	vtkFile = "samples/" + file;
	visible = true;
	widgetVTK = widgetvtk;
	ui->label->setText(file);

	reader = vtkSmartPointer<vtkUnstructuredGridReader>::New();
	reader->SetFileName(vtkFile.toStdString().c_str());
	reader->Update();

	mapper = vtkSmartPointer<vtkDataSetMapper>::New();
	mapper->SetInputConnection(reader->GetOutputPort());

	actor = vtkSmartPointer<vtkActor>::New();
	actor->GetProperty()->SetColor(color%2, 1%color, 1);
	actor->GetProperty()->SetOpacity(0.5);
	actor->SetMapper(mapper);

	renderer = renderer_;
	renderer->AddActor(actor);
	renderer->SetBackground(0.3, 0.3, 0.3);

	widgetVTK->GetRenderWindow()->AddRenderer(renderer);
	widgetVTK->show();
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
