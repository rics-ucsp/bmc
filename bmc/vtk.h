//#define vtkRenderingCore_AUTOINIT 3(vtkRenderingOpenGL2, vtkInteractionStyle)

#define vtkRenderingCore_AUTOINIT 4(vtkRenderingOpenGL2, vtkInteractionStyle,vtkRenderingVolumeOpenGL2,vtkRenderingFreeType)
//#include <itkRandomImageSource.h>
#include <vtkSmartPointer.h>
#include <vtkObjectFactory.h>
#include <vtkSphereSource.h>

#include <vtkImageViewer2.h>
#include <vtkDICOMImageReader.h>
//#include <vtkGDCMImageReader.h>

#include <vtkRenderWindowInteractor.h>
#include <vtkInteractorStyleImage.h>

#include <vtkActor2D.h>
#include <vtkTextProperty.h>
#include <vtkTextMapper.h>

#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkDICOMImageReader.h>
#include <vtkImageViewer2.h>

//for volume rendering
#include <vtkImageData.h>
#include <vtkVolumeProperty.h>
#include <vtkMatrix4x4.h>
#include <vtkGPUVolumeRayCastMapper.h>
#include <vtkColorTransferFunction.h>
#include <vtkPiecewiseFunction.h>
#include <vtkAxesActor.h>

//for vtk reader
#include <vtkUnstructuredGridReader.h>