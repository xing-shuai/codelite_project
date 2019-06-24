//#include "vtkAutoInit.h"
//#include <vtkCallbackCommand.h>
//#include <vtkCamera.h>
//#include <vtkColorTransferFunction.h>
//#include <vtkCommand.h>
//#include <vtkDataArray.h>
//#include <vtkImageData.h>
//#include <vtkImageShiftScale.h>
//#include <vtkInteractorStyleTrackballCamera.h>
//#include <vtkPiecewiseFunction.h>
//#include <vtkPointData.h>
//#include <vtkProperty.h>
//#include <vtkProperty2D.h>
//#include <vtkRenderWindow.h>
//#include <vtkRenderWindowInteractor.h>
//#include <vtkRenderer.h>
//#include <vtkSLCReader.h>
//#include <vtkSampleFunction.h>
//#include <vtkSliderRepresentation2D.h>
//#include <vtkSliderWidget.h>
//#include <vtkSmartPointer.h>
//#include <vtkSmartVolumeMapper.h>
//#include <vtkSphere.h>
//#include <vtkTextProperty.h>
//#include <vtkVersion.h>
//#include <vtkVolumeProperty.h>
//#include <vtkWidgetEvent.h>
//#include <vtkWidgetEventTranslator.h>
//#include <vtkXMLImageDataReader.h>
//
//VTK_MODULE_INIT(vtkRenderingOpenGL2); // VTK was built with vtkRenderingOpenGL2
//VTK_MODULE_INIT(vtkRenderingVolumeOpenGL2);
//VTK_MODULE_INIT(vtkInteractionStyle);
//
//double slider1_value = 0;
//double slider2_value = 0;
//double sliderR_value = 0;
//double sliderG_value = 0;
//double sliderB_value = 0;
//
//class vtkSliderCallback : public vtkCommand
//{
//public:
//    static vtkSliderCallback* New()
//    {
//	return new vtkSliderCallback;
//    }
//    virtual void Execute(vtkObject* caller, unsigned long, void*)
//    {
//	vtkSliderWidget* sliderWidget = reinterpret_cast<vtkSliderWidget*>(caller);
//	slider1_value = static_cast<vtkSliderRepresentation*>(sliderWidget->GetRepresentation())->GetValue();
//	double val[2] = { slider2_value, slider1_value };
//	this->PiecewiseFunction->SetNodeValue(1, val);
//    }
//    vtkSliderCallback()
//        : PiecewiseFunction(0)
//    {
//    }
//    vtkPiecewiseFunction* PiecewiseFunction;
//};
//
//class vtkSliderCallback1 : public vtkCommand
//{
//public:
//    static vtkSliderCallback1* New()
//    {
//	return new vtkSliderCallback1;
//    }
//
//    virtual void Execute(vtkObject* caller, unsigned long, void*)
//    {
//	vtkSliderWidget* sliderWidget = reinterpret_cast<vtkSliderWidget*>(caller);
//	slider2_value = static_cast<vtkSliderRepresentation*>(sliderWidget->GetRepresentation())->GetValue();
//	double val[2] = { slider2_value, slider1_value };
//	this->PiecewiseFunction->SetNodeValue(1, val);
//    }
//    vtkSliderCallback1()
//        : PiecewiseFunction(0)
//    {
//    }
//    vtkPiecewiseFunction* PiecewiseFunction;
//};
//
//class vtkSliderCallbackR : public vtkCommand
//{
//public:
//    static vtkSliderCallbackR* New()
//    {
//	return new vtkSliderCallbackR;
//    }
//
//    virtual void Execute(vtkObject* caller, unsigned long, void*)
//    {
//	vtkSliderWidget* sliderWidget = reinterpret_cast<vtkSliderWidget*>(caller);
//	sliderR_value = static_cast<vtkSliderRepresentation*>(sliderWidget->GetRepresentation())->GetValue();
//	double val[4] = { slider2_value, sliderR_value, sliderG_value, sliderB_value };
//	this->ColorTransferFunction->SetNodeValue(1, val);
//    }
//    vtkSliderCallbackR()
//        : ColorTransferFunction(0)
//    {
//    }
//    vtkColorTransferFunction* ColorTransferFunction;
//};
//
//class vtkSliderCallbackG : public vtkCommand
//{
//public:
//    static vtkSliderCallbackG* New()
//    {
//	return new vtkSliderCallbackG;
//    }
//
//    virtual void Execute(vtkObject* caller, unsigned long, void*)
//    {
//	vtkSliderWidget* sliderWidget = reinterpret_cast<vtkSliderWidget*>(caller);
//	sliderG_value = static_cast<vtkSliderRepresentation*>(sliderWidget->GetRepresentation())->GetValue();
//	double val[4] = { slider2_value, sliderR_value, sliderG_value, sliderB_value };
//	this->ColorTransferFunction->SetNodeValue(1, val);
//    }
//    vtkSliderCallbackG()
//        : ColorTransferFunction(0)
//    {
//    }
//    vtkColorTransferFunction* ColorTransferFunction;
//};
//
//class vtkSliderCallbackB : public vtkCommand
//{
//public:
//    static vtkSliderCallbackB* New()
//    {
//	return new vtkSliderCallbackB;
//    }
//
//    virtual void Execute(vtkObject* caller, unsigned long, void*)
//    {
//	vtkSliderWidget* sliderWidget = reinterpret_cast<vtkSliderWidget*>(caller);
//	sliderB_value = static_cast<vtkSliderRepresentation*>(sliderWidget->GetRepresentation())->GetValue();
//	double val[4] = { slider2_value, sliderR_value, sliderG_value, sliderB_value };
//	this->ColorTransferFunction->SetNodeValue(1, val);
//    }
//    vtkSliderCallbackB()
//        : ColorTransferFunction(0)
//    {
//    }
//    vtkColorTransferFunction* ColorTransferFunction;
//};
//
//int main(int argc, char* argv[])
//{
//    vtkSmartPointer<vtkImageData> imageData = vtkSmartPointer<vtkImageData>::New();
//
//    vtkSmartPointer<vtkSLCReader> reader = vtkSmartPointer<vtkSLCReader>::New();
//    reader->SetFileName("/home/shuai/Documents/vm_foot.slc");
//    reader->Update();
//    imageData->ShallowCopy(reader->GetOutput());
//
//    vtkSmartPointer<vtkRenderWindow> renWin = vtkSmartPointer<vtkRenderWindow>::New();
//    vtkSmartPointer<vtkRenderer> ren1 = vtkSmartPointer<vtkRenderer>::New();
//    ren1->SetBackground(0.1, 0.4, 0.2);
//
//    renWin->AddRenderer(ren1);
//
//    renWin->SetSize(601, 600); // intentional odd and NPOT  width/height
//
//    vtkSmartPointer<vtkRenderWindowInteractor> iren = vtkSmartPointer<vtkRenderWindowInteractor>::New();
//    iren->SetRenderWindow(renWin);
//
//    renWin->Render(); // make sure we have an OpenGL context.
//
//    vtkSmartPointer<vtkSmartVolumeMapper> volumeMapper = vtkSmartPointer<vtkSmartVolumeMapper>::New();
//    volumeMapper->SetBlendModeToComposite(); // composite first
//#if VTK_MAJOR_VERSION <= 5
//    volumeMapper->SetInputConnection(imageData->GetProducerPort());
//#else
//    volumeMapper->SetInputData(imageData);
//#endif
//    vtkSmartPointer<vtkVolumeProperty> volumeProperty = vtkSmartPointer<vtkVolumeProperty>::New();
//    volumeProperty->ShadeOff();
//    volumeProperty->SetInterpolationType(VTK_LINEAR_INTERPOLATION);
//
//    vtkSmartPointer<vtkPiecewiseFunction> compositeOpacity = vtkSmartPointer<vtkPiecewiseFunction>::New();
//    compositeOpacity->AddPoint(0.0, 0.0);
//    compositeOpacity->AddPoint(100.0, 0.05);
//    compositeOpacity->AddPoint(200.0, 1.0);
//    volumeProperty->SetScalarOpacity(compositeOpacity); // composite first.
//
//    vtkSmartPointer<vtkColorTransferFunction> color = vtkSmartPointer<vtkColorTransferFunction>::New();
//    color->AddRGBPoint(0.0, 0.0, 0.0, 0.1);
//    color->AddRGBPoint(100.0, 0.3, 0.3, 0.3);
//    color->AddRGBPoint(200.0, 1.0, 1.0, 1.0);
//    volumeProperty->SetColor(color);
//
//    vtkSmartPointer<vtkVolume> volume = vtkSmartPointer<vtkVolume>::New();
//    volume->SetMapper(volumeMapper);
//    volume->SetProperty(volumeProperty);
//    ren1->AddViewProp(volume);
//    ren1->ResetCamera();
//
//    vtkSmartPointer<vtkSliderRepresentation2D> sliderRep = vtkSmartPointer<vtkSliderRepresentation2D>::New();
//
//    sliderRep->SetMinimumValue(0.0);
//    sliderRep->SetMaximumValue(1.0);
//    sliderRep->SetValue(0.01);
//    sliderRep->SetTitleText("Sphere Resolution");
//    sliderRep->GetSliderProperty()->SetColor(1, 0, 0);
//    sliderRep->GetTitleProperty()->SetColor(1, 0, 0);
//    sliderRep->GetLabelProperty()->SetColor(1, 0, 0);
//    sliderRep->GetSelectedProperty()->SetColor(0, 1, 0);
//    sliderRep->GetTubeProperty()->SetColor(1, 1, 0);
//    sliderRep->GetCapProperty()->SetColor(1, 1, 0);
//    sliderRep->GetPoint1Coordinate()->SetCoordinateSystemToDisplay();
//    sliderRep->GetPoint1Coordinate()->SetValue(0, 105);
//    sliderRep->GetPoint2Coordinate()->SetCoordinateSystemToDisplay();
//    sliderRep->GetPoint2Coordinate()->SetValue(200, 105);
//
//    vtkSmartPointer<vtkSliderWidget> sliderWidget = vtkSmartPointer<vtkSliderWidget>::New();
//    sliderWidget->SetInteractor(iren);
//    sliderWidget->SetRepresentation(sliderRep);
//    sliderWidget->SetAnimationModeToAnimate();
//    sliderWidget->EnabledOn();
//
//    vtkSmartPointer<vtkSliderCallback> callback = vtkSmartPointer<vtkSliderCallback>::New();
//    callback->PiecewiseFunction = compositeOpacity;
//
//    sliderWidget->AddObserver(vtkCommand::InteractionEvent, callback);
//
//    vtkSmartPointer<vtkSliderRepresentation2D> sliderRep1 = vtkSmartPointer<vtkSliderRepresentation2D>::New();
//
//    sliderRep1->SetMinimumValue(10.0);
//    sliderRep1->SetMaximumValue(190.0);
//    sliderRep1->SetValue(5);
//    sliderRep1->SetTitleText("Sphere Resolution");
//    sliderRep1->GetSliderProperty()->SetColor(1, 0, 0);   // red
//    sliderRep1->GetTitleProperty()->SetColor(1, 0, 0);    // red
//    sliderRep1->GetLabelProperty()->SetColor(1, 0, 0);    // red
//    sliderRep1->GetSelectedProperty()->SetColor(0, 1, 0); // green
//    sliderRep1->GetTubeProperty()->SetColor(1, 1, 0);     // yellow
//    sliderRep1->GetCapProperty()->SetColor(1, 1, 0);      // yellow
//    sliderRep1->GetPoint1Coordinate()->SetCoordinateSystemToDisplay();
//    sliderRep1->GetPoint1Coordinate()->SetValue(0, 85);
//    sliderRep1->GetPoint2Coordinate()->SetCoordinateSystemToDisplay();
//    sliderRep1->GetPoint2Coordinate()->SetValue(200, 85);
//    vtkSmartPointer<vtkSliderWidget> sliderWidget1 = vtkSmartPointer<vtkSliderWidget>::New();
//    sliderWidget1->SetInteractor(iren);
//    sliderWidget1->SetRepresentation(sliderRep1);
//    sliderWidget1->SetAnimationModeToAnimate();
//    sliderWidget1->EnabledOn();
//    vtkSmartPointer<vtkSliderCallback1> callback1 = vtkSmartPointer<vtkSliderCallback1>::New();
//    callback1->PiecewiseFunction = compositeOpacity;
//    sliderWidget1->AddObserver(vtkCommand::InteractionEvent, callback1);
//
//    vtkSmartPointer<vtkSliderRepresentation2D> sliderRepR = vtkSmartPointer<vtkSliderRepresentation2D>::New();
//
//    sliderRepR->SetMinimumValue(0.0);
//    sliderRepR->SetMaximumValue(1.0);
//    sliderRepR->SetValue(0.01);
//    sliderRepR->SetTitleText("Sphere Resolution");
//    sliderRepR->GetSliderProperty()->SetColor(1, 0, 0); // red
//    sliderRepR->GetTitleProperty()->SetColor(1, 0, 0);  // red
//    sliderRepR->GetLabelProperty()->SetColor(1, 0, 0);  // red
//    sliderRepR->GetSelectedProperty()->SetColor(1, 0, 0);
//    sliderRepR->GetTubeProperty()->SetColor(1, 1, 0); // yellow
//    sliderRepR->GetCapProperty()->SetColor(1, 1, 0);  // yellow
//    sliderRepR->GetPoint1Coordinate()->SetCoordinateSystemToDisplay();
//    sliderRepR->GetPoint1Coordinate()->SetValue(0, 45);
//    sliderRepR->GetPoint2Coordinate()->SetCoordinateSystemToDisplay();
//    sliderRepR->GetPoint2Coordinate()->SetValue(200, 45);
//    vtkSmartPointer<vtkSliderWidget> sliderWidgetR = vtkSmartPointer<vtkSliderWidget>::New();
//    sliderWidgetR->SetInteractor(iren);
//    sliderWidgetR->SetRepresentation(sliderRepR);
//    sliderWidgetR->SetAnimationModeToAnimate();
//    sliderWidgetR->EnabledOn();
//    vtkSmartPointer<vtkSliderCallbackR> callbackR = vtkSmartPointer<vtkSliderCallbackR>::New();
//    callbackR->ColorTransferFunction = color;
//    sliderWidgetR->AddObserver(vtkCommand::InteractionEvent, callbackR);
//
//    vtkSmartPointer<vtkSliderRepresentation2D> sliderRepG = vtkSmartPointer<vtkSliderRepresentation2D>::New();
//
//    sliderRepG->SetMinimumValue(0.0);
//    sliderRepG->SetMaximumValue(1.0);
//    sliderRepG->SetValue(0.01);
//    sliderRepG->SetTitleText("Sphere Resolution");
//    sliderRepG->GetSliderProperty()->SetColor(0, 1, 0);
//    sliderRepG->GetTitleProperty()->SetColor(0, 1, 0);
//    sliderRepG->GetLabelProperty()->SetColor(0, 1, 0);
//    sliderRepR->GetSelectedProperty()->SetColor(0, 1, 0);
//    sliderRepG->GetTubeProperty()->SetColor(1, 1, 0); // yellow
//    sliderRepG->GetCapProperty()->SetColor(1, 1, 0);  // yellow
//    sliderRepG->GetPoint1Coordinate()->SetCoordinateSystemToDisplay();
//    sliderRepG->GetPoint1Coordinate()->SetValue(0, 25);
//    sliderRepG->GetPoint2Coordinate()->SetCoordinateSystemToDisplay();
//    sliderRepG->GetPoint2Coordinate()->SetValue(200, 25);
//    vtkSmartPointer<vtkSliderWidget> sliderWidgetG = vtkSmartPointer<vtkSliderWidget>::New();
//    sliderWidgetG->SetInteractor(iren);
//    sliderWidgetG->SetRepresentation(sliderRepG);
//    sliderWidgetG->SetAnimationModeToAnimate();
//    sliderWidgetG->EnabledOn();
//    vtkSmartPointer<vtkSliderCallbackG> callbackG = vtkSmartPointer<vtkSliderCallbackG>::New();
//    callbackG->ColorTransferFunction = color;
//    sliderWidgetG->AddObserver(vtkCommand::InteractionEvent, callbackG);
//
//    vtkSmartPointer<vtkSliderRepresentation2D> sliderRepB = vtkSmartPointer<vtkSliderRepresentation2D>::New();
//
//    sliderRepB->SetMinimumValue(0.0);
//    sliderRepB->SetMaximumValue(1.0);
//    sliderRepB->SetValue(0.01);
//    sliderRepB->SetTitleText("Sphere Resolution");
//    sliderRepB->GetSliderProperty()->SetColor(0, 0, 1);
//    sliderRepB->GetTitleProperty()->SetColor(0, 0, 1);
//    sliderRepB->GetLabelProperty()->SetColor(0, 0, 1);
//    sliderRepR->GetSelectedProperty()->SetColor(0, 0, 1);
//    sliderRepB->GetTubeProperty()->SetColor(1, 1, 0); // yellow
//    sliderRepB->GetCapProperty()->SetColor(1, 1, 0);  // yellow
//    sliderRepB->GetPoint1Coordinate()->SetCoordinateSystemToDisplay();
//    sliderRepB->GetPoint1Coordinate()->SetValue(0, 5);
//    sliderRepB->GetPoint2Coordinate()->SetCoordinateSystemToDisplay();
//    sliderRepB->GetPoint2Coordinate()->SetValue(200, 5);
//    vtkSmartPointer<vtkSliderWidget> sliderWidgetB = vtkSmartPointer<vtkSliderWidget>::New();
//    sliderWidgetB->SetInteractor(iren);
//    sliderWidgetB->SetRepresentation(sliderRepB);
//    sliderWidgetB->SetAnimationModeToAnimate();
//    sliderWidgetB->EnabledOn();
//    vtkSmartPointer<vtkSliderCallbackB> callbackB = vtkSmartPointer<vtkSliderCallbackB>::New();
//    callbackB->ColorTransferFunction = color;
//    sliderWidgetB->AddObserver(vtkCommand::InteractionEvent, callbackB);
//
//    volumeMapper->SetRequestedRenderModeToRayCast();
//    renWin->Render();
//
//    iren->Start();
//
//    return EXIT_SUCCESS;
//}