#include "quantification_panel.h"
#include <QtWidgets/QMessageBox >

void q_panel::on_btn_3D_selection_clicked() {

	QMessageBox Msgbox;
	Msgbox.setText("ola k ase");
	Msgbox.exec();

	QVTKWidget *widget = ui->vtkRenderer;

	std::string inputFilename1 = "samples/1file.vtk";
	std::string inputFilename2 = "samples/2file.vtk";

	vtkSmartPointer<vtkUnstructuredGridReader> reader = vtkSmartPointer<vtkUnstructuredGridReader>::New();
	reader->SetFileName(inputFilename1.c_str());
	reader->Update();

	vtkSmartPointer<vtkUnstructuredGridReader> reader2 = vtkSmartPointer<vtkUnstructuredGridReader>::New();
	reader2->SetFileName(inputFilename2.c_str());
	reader2->Update();

	//Create a mapper and actor
	vtkSmartPointer<vtkDataSetMapper> mapper = vtkSmartPointer<vtkDataSetMapper>::New();
	mapper->SetInputConnection(reader->GetOutputPort());

	vtkSmartPointer<vtkDataSetMapper> mapper2 = vtkSmartPointer<vtkDataSetMapper>::New();
	mapper2->SetInputConnection(reader2->GetOutputPort());


	vtkSmartPointer<vtkActor> actor = vtkSmartPointer<vtkActor>::New();
	actor->GetProperty()->SetColor(0, 0, 1);
	actor->GetProperty()->SetOpacity(0.5);
	actor->SetMapper(mapper);

	vtkSmartPointer<vtkActor> actor2 = vtkSmartPointer<vtkActor>::New();
	actor2->GetProperty()->SetColor(0.5, 1, 0.5);
	actor2->GetProperty()->SetOpacity(0.5);
	actor2->SetMapper(mapper2);

	//Create a renderer, render window, and interactor
	vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New();

	//Add the actor to the scene
	renderer->AddActor(actor);
	renderer->AddActor(actor2);
	//renderer->RemoveActor(actor);

	renderer->SetBackground(0, 0, 0);

	widget->GetRenderWindow()->AddRenderer(renderer);
	widget->show();
}