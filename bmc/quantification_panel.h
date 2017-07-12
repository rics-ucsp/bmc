#pragma once

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


#include <vtkCubeSource.h>


#include <vtkDataSetMapper.h>
#include <vtkProperty.h>
#include <QtWidgets/QMainWindow>
#include "ui_bmc.h"


class q_panel {
public:
	Ui_bmcClass *ui;

	q_panel(Ui_bmcClass *_m) {
		ui = _m;
	}
	~q_panel() {}	
	void on_btn_3D_selection_clicked();

	on_btn_3D_selection_clicked();

};