#include "bmc.h"
#include <QtWidgets/QMessageBox >
#include "IObmd.h"
using namespace std;

bmc::bmc(QMainWindow *parent)
	: QMainWindow(parent)
{

	/*QMessageBox Msgbox;
	Msgbox.setText("ola k ase");
	Msgbox.exec();*/

	//this->ui = new Ui_bmcClass;
	ui->setupUi(this);
	readerDCMSeries = vtkSmartPointer<vtkDICOMImageReader>::New();
	imageViewer = vtkSmartPointer<vtkImageViewer2>::New();

	

	//volume project
	//imageViewer = vtkSmartPointer<vtkImageViewer2>::New();

	// Update slice orientation

	//imageViewer->SetSliceOrientationToXY();

	/*vtkImageCast *imageCast = vtkImageCast::New();
	imageCast->SetInput(reader->GetOutput());
	imageCast->SetOutputScalarTypeToUnsignedChar();
	imageCast->Update();*/


	//interactorStyle = vtkSmartPointer<vtkInteractorStyleImage>::New();
	//Add renderer

	
	//read_vtk_file( this->ui->vtkRenderer );


	//renderer = vtkSmartPointer<vtkRenderer>::New();


	//vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New();
	//renderer->SetBackground(0, 0, 0);
	//this->ui->vtkRenderer->GetRenderWindow()->AddRenderer(renderer);
	//this->ui->verticalSlider->hide();

	////connect(this->ui->pushButton, SIGNAL(clicked()), this, SLOT(pushButtonClicked()));

	//connect(this->ui->actionOpen_Data_Set, SIGNAL(triggered()), this, SLOT(openDataSet()));
	//connect(this->ui->verticalSlider, SIGNAL(valueChanged(int)), this, SLOT(updateSlice()));

	//********** listwidget
	QVector<QString> archivosVtk;
	archivosVtk.push_back("1file.vtk");
	archivosVtk.push_back("crane.vtk");
	archivosVtk.push_back("tauro.vtk");

	vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New();

	for (int i = 0; i < 3; ++i) {

		QListWidgetItem *listWidgetItem = new QListWidgetItem(ui->listWidget);
		ui->listWidget->addItem(listWidgetItem);
		TheWidgetItem *theWidgetItem = new TheWidgetItem(archivosVtk[i],this->ui->vtkRenderer, renderer,i+1);
		//listWidgetItem->setSizeHint(theWidgetItem->sizeHint());
		listWidgetItem->setSizeHint(QSize(0, 23));
		ui->listWidget->setItemWidget(listWidgetItem, theWidgetItem);
		ui->listWidget->addItem(listWidgetItem);
		
		//ui->listWidget->addItem(file);
	}



}

void bmc::openDCMFolder(){
	//QString folderNameDCM = QFileDialog::getExistingDirectory(this, tr("Open DCM Folder"), QDir::currentPath(), QFileDialog::ShowDirsOnly);
	QString folderNameDCM = QFileDialog::getExistingDirectory(this, tr("Open DCM Folder"), QDir::currentPath() );
	std::string fileStd = folderNameDCM.toStdString();
	drawDCMSeries(fileStd);

}

void bmc::drawDCMSeries(std::string folderDCM){
	/*if (!readerDCMSeries->CanReadFile(folderDCM.c_str())) {
		QMessageBox Msgbox;
		Msgbox.setText("what");
		Msgbox.exec();
	}*/
	readerDCMSeries->SetDirectoryName(folderDCM.c_str());
	readerDCMSeries->Update();
	imageViewer->SetInputConnection(readerDCMSeries->GetOutputPort());
	mMinSliderX = imageViewer->GetSliceMin();
	mMaxSliderX = imageViewer->GetSliceMax();
	ui->hSliderDCM->setMinimum(mMinSliderX);
	ui->hSliderDCM->setMaximum(mMaxSliderX);
	imageViewer->SetRenderWindow(ui->vtkRenderer->GetRenderWindow());
}

void bmc::on_btnOpenDCMFolder_clicked(){
	openDCMFolder();
}

void bmc::on_hSliderDCM_sliderMoved(int position){
	imageViewer->SetSlice(position);
	imageViewer->Render();
}

// methods for volume rendering
void bmc::updateImageSlice(){
	int _MinSlice;
	int _MaxSlice;
	int _Slice;
	if (!(this->ui->verticalSlider->isHidden()))
	{
		_MinSlice = imageViewer->GetSliceMin();
		_MaxSlice = imageViewer->GetSliceMax();
		_Slice = this->ui->verticalSlider->value();
		cout << "Slicer: Min = " << _MinSlice << ", Max = " << _MaxSlice << ", Current pos = " << _Slice << std::endl;
	}
}

void bmc::updateSlice(){
	int _Slice;
	if (!(this->ui->verticalSlider->isHidden()))
	{
		_Slice = this->ui->verticalSlider->value();
		imageViewer->SetSlice(_Slice);
		imageViewer->Render();
	}
}

void bmc::openDataSet(){
	QString fileName;
	fileName = QFileDialog::getExistingDirectory(this, tr("Open Local Data Set"), "C:/Users/tony/Downloads/samples/extremidad", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
	// Convert QString to std::string
	std::string fileStd = fileName.toStdString();
	cout << "Data set opened: " << fileStd << endl;

	const char * fileChar = fileStd.c_str();

	// Read data set
	vtkSmartPointer<vtkDICOMImageReader> reader =vtkSmartPointer<vtkDICOMImageReader>::New();
	reader->SetDirectoryName(fileChar);
	reader->Update();

	// Initialize table for displaying statistics
	QTableWidget *statsTable = this->ui->tableWidget;
	statsTable->setRowCount(6);
	statsTable->setColumnCount(1);

	// Create header labels
	QStringList verticalLabels;
	verticalLabels << "Study ID:" << "Directory:" << "Extension:" << "Width:" << "Height:" << "Pixel spacing:";
	statsTable->setVerticalHeaderLabels(verticalLabels);

	// Study ID
	QTableWidgetItem *studyID = new QTableWidgetItem(reader->GetStudyID());
	statsTable->setItem(0, 0, studyID);

	// Directory
	QTableWidgetItem *fullPath = new QTableWidgetItem(reader->GetDirectoryName());
	statsTable->setItem(0, 1, fullPath);

	// Extension
	QTableWidgetItem *fileExtensions = new QTableWidgetItem(reader->GetFileExtensions());
	statsTable->setItem(0, 2, fileExtensions);

	// Width
	stringstream wStream;
	wStream << (reader->GetWidth());
	std::string wString = wStream.str();
	const char *wChar = wString.c_str();
	QTableWidgetItem *width = new QTableWidgetItem(wChar);
	statsTable->setItem(0, 3, width);

	// Height
	stringstream hStream;
	hStream << (reader->GetHeight());
	std::string hString = hStream.str();
	const char *hChar = hString.c_str();
	QTableWidgetItem *height = new QTableWidgetItem(hChar);
	statsTable->setItem(0, 4, height);

	/*QMessageBox Msgbox;
	Msgbox.setText(height->text());
	Msgbox.exec();*/

	// Volume rendering section below

	// Create volume
	vtkSmartPointer<vtkImageData> volumeData = vtkSmartPointer<vtkImageData>::New();

	// Copy image data
	volumeData->DeepCopy(reader->GetOutput());

	// Ray cast data
	vtkSmartPointer<vtkGPUVolumeRayCastMapper> volumeMapper = vtkSmartPointer<vtkGPUVolumeRayCastMapper>::New();
	volumeMapper->SetInputData(volumeData);

	vtkSmartPointer<vtkVolumeProperty> volumeProperty =	vtkSmartPointer<vtkVolumeProperty>::New();

	vtkSmartPointer<vtkPiecewiseFunction> compositeOpacity = vtkSmartPointer<vtkPiecewiseFunction>::New();
	/*compositeOpacity->AddPoint(0.0, 0.1);
	compositeOpacity->AddPoint(80.0, 0.2);
	compositeOpacity->AddPoint(255.0, 0.1);*/

	compositeOpacity->AddPoint(0.0, 0.0);
	compositeOpacity->AddPoint(255, 1.0);
	volumeProperty->SetScalarOpacity(compositeOpacity);

	vtkSmartPointer<vtkColorTransferFunction> color = vtkSmartPointer<vtkColorTransferFunction>::New();
	color->AddRGBPoint(0.0, 0.0, 0.0, 1.0);
	color->AddRGBPoint(40.0, 1.0, 0.0, 0.0);
	color->AddRGBPoint(250, 1.0, 1.0, 1.0);
	volumeProperty->SetColor(color);

	vtkSmartPointer<vtkVolume> volume =	vtkSmartPointer<vtkVolume>::New();
	volume->SetMapper(volumeMapper);
	volume->SetProperty(volumeProperty);

	// VTK Renderer

	vtkSmartPointer<vtkRenderer> renderer =  vtkSmartPointer<vtkRenderer>::New();
	//renderer->SetBackground(0.5f, 0.5f, 1.0f);
	renderer->SetBackground(0.0f, 0.0f, 0.0f);
	vtkRenderWindow *renWin = this->ui->vtkRenderer->GetRenderWindow();

	renWin->AddRenderer(renderer);
	//renWin->SetSize(1280, 1024);

	// Add coordinate system axes, so we have a reference for position and orientation
	vtkSmartPointer<vtkAxesActor> axes = vtkSmartPointer<vtkAxesActor>::New();
	axes->SetTotalLength(250, 250, 250);
	axes->SetShaftTypeToCylinder();
	axes->SetCylinderRadius(0.01);
	renderer->AddActor(axes);

	renderer->AddVolume(volume);
	renWin->Render();
	//iren->Start();
}

void bmc::slotExit(){
	qApp->exit();
}
