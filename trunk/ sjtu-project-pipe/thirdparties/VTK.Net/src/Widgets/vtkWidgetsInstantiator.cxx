#include "vtkWidgetsInstantiator.h"
  
extern vtkObject* vtkInstantiatorvtkBoxWidgetNew();
extern vtkObject* vtkInstantiatorvtkImagePlaneWidgetNew();
extern vtkObject* vtkInstantiatorvtkImageTracerWidgetNew();
extern vtkObject* vtkInstantiatorvtkImplicitPlaneWidgetNew();
extern vtkObject* vtkInstantiatorvtkLineWidgetNew();
extern vtkObject* vtkInstantiatorvtkOrientationMarkerWidgetNew();
extern vtkObject* vtkInstantiatorvtkPlaneWidgetNew();
extern vtkObject* vtkInstantiatorvtkPointWidgetNew();
extern vtkObject* vtkInstantiatorvtkScalarBarWidgetNew();
extern vtkObject* vtkInstantiatorvtkSphereWidgetNew();
extern vtkObject* vtkInstantiatorvtkSplineWidgetNew();
extern vtkObject* vtkInstantiatorvtkXYPlotWidgetNew();


  
void vtkWidgetsInstantiator::ClassInitialize()
{
  
  vtkInstantiator::RegisterInstantiator("vtkBoxWidget", vtkInstantiatorvtkBoxWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkImagePlaneWidget", vtkInstantiatorvtkImagePlaneWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkImageTracerWidget", vtkInstantiatorvtkImageTracerWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitPlaneWidget", vtkInstantiatorvtkImplicitPlaneWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkLineWidget", vtkInstantiatorvtkLineWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkOrientationMarkerWidget", vtkInstantiatorvtkOrientationMarkerWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkPlaneWidget", vtkInstantiatorvtkPlaneWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkPointWidget", vtkInstantiatorvtkPointWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkScalarBarWidget", vtkInstantiatorvtkScalarBarWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkSphereWidget", vtkInstantiatorvtkSphereWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkSplineWidget", vtkInstantiatorvtkSplineWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkXYPlotWidget", vtkInstantiatorvtkXYPlotWidgetNew);

  
}
          
void vtkWidgetsInstantiator::ClassFinalize()
{ 

  vtkInstantiator::UnRegisterInstantiator("vtkBoxWidget", vtkInstantiatorvtkBoxWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImagePlaneWidget", vtkInstantiatorvtkImagePlaneWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageTracerWidget", vtkInstantiatorvtkImageTracerWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitPlaneWidget", vtkInstantiatorvtkImplicitPlaneWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLineWidget", vtkInstantiatorvtkLineWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOrientationMarkerWidget", vtkInstantiatorvtkOrientationMarkerWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlaneWidget", vtkInstantiatorvtkPlaneWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointWidget", vtkInstantiatorvtkPointWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkScalarBarWidget", vtkInstantiatorvtkScalarBarWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSphereWidget", vtkInstantiatorvtkSphereWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSplineWidget", vtkInstantiatorvtkSplineWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXYPlotWidget", vtkInstantiatorvtkXYPlotWidgetNew);

  
}

vtkWidgetsInstantiator::vtkWidgetsInstantiator()
{
  if(++vtkWidgetsInstantiator::Count == 1)
    { 
    vtkWidgetsInstantiator::ClassInitialize(); 
    }
}

vtkWidgetsInstantiator::~vtkWidgetsInstantiator()
{
  if(--vtkWidgetsInstantiator::Count == 0)
    { 
    vtkWidgetsInstantiator::ClassFinalize(); 
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkWidgetsInstantiator::Count;
