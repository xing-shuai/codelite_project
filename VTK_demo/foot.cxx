#include "vtkAutoInit.h"
#include <vtkCallbackCommand.h>
#include <vtkCamera.h>
#include <vtkColorTransferFunction.h>
#include <vtkCommand.h>
#include <vtkDataArray.h>
#include <vtkImageData.h>
#include <vtkImageShiftScale.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkPiecewiseFunction.h>
#include <vtkPointData.h>
#include <vtkProperty.h>
#include <vtkProperty2D.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkSLCReader.h>
#include <vtkSampleFunction.h>
#include <vtkSliderRepresentation2D.h>
#include <vtkSliderWidget.h>
#include <vtkSmartPointer.h>
#include <vtkSmartVolumeMapper.h>
#include <vtkSphere.h>
#include <vtkTextProperty.h>
#include <vtkVersion.h>
#include <vtkVolumeProperty.h>
#include <vtkWidgetEvent.h>
#include <vtkWidgetEventTranslator.h>
#include <vtkXMLImageDataReader.h>

VTK_MODULE_INIT(vtkRenderingOpenGL2); // VTK was built with vtkRenderingOpenGL2
VTK_MODULE_INIT(vtkRenderingVolumeOpenGL2);
VTK_MODULE_INIT(vtkInteractionStyle);

int main(int argc, char* argv[])
{
    vtkSmartPointer<vtkImageData> imageData = vtkSmartPointer<vtkImageData>::New();

    vtkSmartPointer<vtkSLCReader> reader = vtkSmartPointer<vtkSLCReader>::New();
    reader->SetFileName("/home/shuai/Documents/vm_foot.slc");
    reader->Update();
    imageData->ShallowCopy(reader->GetOutput());

    vtkSmartPointer<vtkRenderWindow> renWin = vtkSmartPointer<vtkRenderWindow>::New();
    vtkSmartPointer<vtkRenderer> ren1 = vtkSmartPointer<vtkRenderer>::New();
    ren1->SetBackground(0.1, 0.4, 0.2);

    renWin->AddRenderer(ren1);

    renWin->SetSize(601, 600); // intentional odd and NPOT  width/height

    vtkSmartPointer<vtkRenderWindowInteractor> iren = vtkSmartPointer<vtkRenderWindowInteractor>::New();
    iren->SetRenderWindow(renWin);

    renWin->Render(); // make sure we have an OpenGL context.

    vtkSmartPointer<vtkSmartVolumeMapper> volumeMapper = vtkSmartPointer<vtkSmartVolumeMapper>::New();
    volumeMapper->SetBlendModeToComposite(); // composite first
#if VTK_MAJOR_VERSION <= 5
    volumeMapper->SetInputConnection(imageData->GetProducerPort());
#else
    volumeMapper->SetInputData(imageData);
#endif
    vtkSmartPointer<vtkVolumeProperty> volumeProperty = vtkSmartPointer<vtkVolumeProperty>::New();
    volumeProperty->ShadeOff();
    volumeProperty->SetInterpolationType(VTK_LINEAR_INTERPOLATION);

    vtkSmartPointer<vtkPiecewiseFunction> compositeOpacity = vtkSmartPointer<vtkPiecewiseFunction>::New();
    compositeOpacity->AddPoint(0.0, 0.0);
    compositeOpacity->AddPoint(100.0, 0.05);
    compositeOpacity->AddPoint(200.0, 1.0);
    volumeProperty->SetScalarOpacity(compositeOpacity); // composite first.

    vtkSmartPointer<vtkColorTransferFunction> color = vtkSmartPointer<vtkColorTransferFunction>::New();
    color->AddRGBPoint(0.0, 0.0, 0.0, 0.1);
    color->AddRGBPoint(100.0, 0.3, 0.3, 0.3);
    color->AddRGBPoint(200.0, 1.0, 1.0, 1.0);
    volumeProperty->SetColor(color);

    vtkSmartPointer<vtkVolume> volume = vtkSmartPointer<vtkVolume>::New();
    volume->SetMapper(volumeMapper);
    volume->SetProperty(volumeProperty);
    ren1->AddViewProp(volume);
    ren1->ResetCamera();

    volumeMapper->SetRequestedRenderModeToRayCast();
    renWin->Render();

    iren->Start();

    return EXIT_SUCCESS;
}