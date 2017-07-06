#pragma once
//#include "vtk.h"

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


void create_sphere(QVTKWidget *widget){

	vtkSmartPointer<vtkSphereSource> sphereSource =	vtkSmartPointer<vtkSphereSource>::New();

	vtkSmartPointer<vtkPolyDataMapper> sphereMapper =	vtkSmartPointer<vtkPolyDataMapper>::New();
	sphereMapper->SetInputConnection(sphereSource->GetOutputPort());

	vtkSmartPointer<vtkActor> sphereActor =	vtkSmartPointer<vtkActor>::New();
	sphereActor->SetMapper(sphereMapper);

	vtkSmartPointer<vtkRenderer> renderer =	vtkSmartPointer<vtkRenderer>::New();
	renderer->AddActor(sphereActor);

	widget->GetRenderWindow()->AddRenderer(renderer);
	widget->show();
}

void read_vtk_file(QVTKWidget *widget) {
	std::string inputFilename = "D:/project/bmc/bmc/samples/crane.vtk";

	vtkSmartPointer<vtkUnstructuredGridReader> reader =		vtkSmartPointer<vtkUnstructuredGridReader>::New();
	reader->SetFileName(inputFilename.c_str());
	reader->Update();

	//Create a mapper and actor
	vtkSmartPointer<vtkDataSetMapper> mapper =	vtkSmartPointer<vtkDataSetMapper>::New();
	mapper->SetInputConnection(reader->GetOutputPort());

	vtkSmartPointer<vtkActor> actor =	vtkSmartPointer<vtkActor>::New();
	actor->SetMapper(mapper);

	//Create a renderer, render window, and interactor
	vtkSmartPointer<vtkRenderer> renderer =	vtkSmartPointer<vtkRenderer>::New();

	//Add the actor to the scene
	renderer->AddActor(actor);
	renderer->SetBackground(.3, .6, .3);

	widget->GetRenderWindow()->AddRenderer(renderer);
	widget->show();
}

