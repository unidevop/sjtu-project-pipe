#include "vtkRenderingInstantiator.h"
  
extern vtkObject* vtkInstantiatorvtkActorNew();
extern vtkObject* vtkInstantiatorvtkActorCollectionNew();
extern vtkObject* vtkInstantiatorvtkAssemblyNew();
extern vtkObject* vtkInstantiatorvtkAxisActor2DNew();
extern vtkObject* vtkInstantiatorvtkCameraNew();
extern vtkObject* vtkInstantiatorvtkCameraInterpolatorNew();
extern vtkObject* vtkInstantiatorvtkCellPickerNew();
extern vtkObject* vtkInstantiatorvtkCullerCollectionNew();
extern vtkObject* vtkInstantiatorvtkDataSetMapperNew();
extern vtkObject* vtkInstantiatorvtkFollowerNew();
extern vtkObject* vtkInstantiatorvtkFrustumCoverageCullerNew();
extern vtkObject* vtkInstantiatorvtkGenericRenderWindowInteractorNew();
extern vtkObject* vtkInstantiatorvtkGraphicsFactoryNew();
extern vtkObject* vtkInstantiatorvtkHierarchicalPolyDataMapperNew();
extern vtkObject* vtkInstantiatorvtkIVExporterNew();
extern vtkObject* vtkInstantiatorvtkImageActorNew();
extern vtkObject* vtkInstantiatorvtkImageMapperNew();
extern vtkObject* vtkInstantiatorvtkImageViewerNew();
extern vtkObject* vtkInstantiatorvtkImageViewer2New();
extern vtkObject* vtkInstantiatorvtkImagingFactoryNew();
extern vtkObject* vtkInstantiatorvtkInteractorEventRecorderNew();
extern vtkObject* vtkInstantiatorvtkInteractorStyleNew();
extern vtkObject* vtkInstantiatorvtkInteractorStyleFlightNew();
extern vtkObject* vtkInstantiatorvtkInteractorStyleImageNew();
extern vtkObject* vtkInstantiatorvtkInteractorStyleJoystickActorNew();
extern vtkObject* vtkInstantiatorvtkInteractorStyleJoystickCameraNew();
extern vtkObject* vtkInstantiatorvtkInteractorStyleRubberBandZoomNew();
extern vtkObject* vtkInstantiatorvtkInteractorStyleSwitchNew();
extern vtkObject* vtkInstantiatorvtkInteractorStyleTerrainNew();
extern vtkObject* vtkInstantiatorvtkInteractorStyleTrackballNew();
extern vtkObject* vtkInstantiatorvtkInteractorStyleTrackballActorNew();
extern vtkObject* vtkInstantiatorvtkInteractorStyleTrackballCameraNew();
extern vtkObject* vtkInstantiatorvtkInteractorStyleUnicamNew();
extern vtkObject* vtkInstantiatorvtkInteractorStyleUserNew();
extern vtkObject* vtkInstantiatorvtkLODActorNew();
extern vtkObject* vtkInstantiatorvtkLODProp3DNew();
extern vtkObject* vtkInstantiatorvtkLabeledDataMapperNew();
extern vtkObject* vtkInstantiatorvtkLightNew();
extern vtkObject* vtkInstantiatorvtkLightCollectionNew();
extern vtkObject* vtkInstantiatorvtkLightKitNew();
extern vtkObject* vtkInstantiatorvtkMapperCollectionNew();
extern vtkObject* vtkInstantiatorvtkOBJExporterNew();
extern vtkObject* vtkInstantiatorvtkOOGLExporterNew();
extern vtkObject* vtkInstantiatorvtkParallelCoordinatesActorNew();
extern vtkObject* vtkInstantiatorvtkPickerNew();
extern vtkObject* vtkInstantiatorvtkPointPickerNew();
extern vtkObject* vtkInstantiatorvtkPolyDataMapperNew();
extern vtkObject* vtkInstantiatorvtkPolyDataMapper2DNew();
extern vtkObject* vtkInstantiatorvtkProp3DCollectionNew();
extern vtkObject* vtkInstantiatorvtkPropPickerNew();
extern vtkObject* vtkInstantiatorvtkPropertyNew();
extern vtkObject* vtkInstantiatorvtkQuaternionInterpolatorNew();
extern vtkObject* vtkInstantiatorvtkRenderWindowNew();
extern vtkObject* vtkInstantiatorvtkRenderWindowCollectionNew();
extern vtkObject* vtkInstantiatorvtkRenderWindowInteractorNew();
extern vtkObject* vtkInstantiatorvtkRendererNew();
extern vtkObject* vtkInstantiatorvtkRendererCollectionNew();
extern vtkObject* vtkInstantiatorvtkRendererSourceNew();
extern vtkObject* vtkInstantiatorvtkScalarBarActorNew();
extern vtkObject* vtkInstantiatorvtkScaledTextActorNew();
extern vtkObject* vtkInstantiatorvtkSelectVisiblePointsNew();
extern vtkObject* vtkInstantiatorvtkTestingNew();
extern vtkObject* vtkInstantiatorvtkTextActorNew();
extern vtkObject* vtkInstantiatorvtkTextActor3DNew();
extern vtkObject* vtkInstantiatorvtkTextMapperNew();
extern vtkObject* vtkInstantiatorvtkTextPropertyNew();
extern vtkObject* vtkInstantiatorvtkTextureNew();
extern vtkObject* vtkInstantiatorvtkTransformInterpolatorNew();
extern vtkObject* vtkInstantiatorvtkTupleInterpolatorNew();
extern vtkObject* vtkInstantiatorvtkVRMLExporterNew();
extern vtkObject* vtkInstantiatorvtkVolumeNew();
extern vtkObject* vtkInstantiatorvtkVolumeCollectionNew();
extern vtkObject* vtkInstantiatorvtkVolumePropertyNew();
extern vtkObject* vtkInstantiatorvtkWindowToImageFilterNew();
extern vtkObject* vtkInstantiatorvtkWorldPointPickerNew();
extern vtkObject* vtkInstantiatorvtkOpenGLActorNew();
extern vtkObject* vtkInstantiatorvtkOpenGLCameraNew();
extern vtkObject* vtkInstantiatorvtkOpenGLExtensionManagerNew();
extern vtkObject* vtkInstantiatorvtkOpenGLImageActorNew();
extern vtkObject* vtkInstantiatorvtkOpenGLImageMapperNew();
extern vtkObject* vtkInstantiatorvtkOpenGLLightNew();
extern vtkObject* vtkInstantiatorvtkOpenGLPolyDataMapperNew();
extern vtkObject* vtkInstantiatorvtkOpenGLPolyDataMapper2DNew();
extern vtkObject* vtkInstantiatorvtkOpenGLPropertyNew();
extern vtkObject* vtkInstantiatorvtkOpenGLRendererNew();
extern vtkObject* vtkInstantiatorvtkOpenGLTextureNew();
extern vtkObject* vtkInstantiatorvtkOpenGLFreeTypeTextMapperNew();
extern vtkObject* vtkInstantiatorvtkWin32OpenGLRenderWindowNew();
extern vtkObject* vtkInstantiatorvtkWin32RenderWindowInteractorNew();


  
void vtkRenderingInstantiator::ClassInitialize()
{
  
  vtkInstantiator::RegisterInstantiator("vtkActor", vtkInstantiatorvtkActorNew);
  vtkInstantiator::RegisterInstantiator("vtkActorCollection", vtkInstantiatorvtkActorCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkAssembly", vtkInstantiatorvtkAssemblyNew);
  vtkInstantiator::RegisterInstantiator("vtkAxisActor2D", vtkInstantiatorvtkAxisActor2DNew);
  vtkInstantiator::RegisterInstantiator("vtkCamera", vtkInstantiatorvtkCameraNew);
  vtkInstantiator::RegisterInstantiator("vtkCameraInterpolator", vtkInstantiatorvtkCameraInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkCellPicker", vtkInstantiatorvtkCellPickerNew);
  vtkInstantiator::RegisterInstantiator("vtkCullerCollection", vtkInstantiatorvtkCullerCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkDataSetMapper", vtkInstantiatorvtkDataSetMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkFollower", vtkInstantiatorvtkFollowerNew);
  vtkInstantiator::RegisterInstantiator("vtkFrustumCoverageCuller", vtkInstantiatorvtkFrustumCoverageCullerNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericRenderWindowInteractor", vtkInstantiatorvtkGenericRenderWindowInteractorNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphicsFactory", vtkInstantiatorvtkGraphicsFactoryNew);
  vtkInstantiator::RegisterInstantiator("vtkHierarchicalPolyDataMapper", vtkInstantiatorvtkHierarchicalPolyDataMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkIVExporter", vtkInstantiatorvtkIVExporterNew);
  vtkInstantiator::RegisterInstantiator("vtkImageActor", vtkInstantiatorvtkImageActorNew);
  vtkInstantiator::RegisterInstantiator("vtkImageMapper", vtkInstantiatorvtkImageMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkImageViewer", vtkInstantiatorvtkImageViewerNew);
  vtkInstantiator::RegisterInstantiator("vtkImageViewer2", vtkInstantiatorvtkImageViewer2New);
  vtkInstantiator::RegisterInstantiator("vtkImagingFactory", vtkInstantiatorvtkImagingFactoryNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorEventRecorder", vtkInstantiatorvtkInteractorEventRecorderNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyle", vtkInstantiatorvtkInteractorStyleNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleFlight", vtkInstantiatorvtkInteractorStyleFlightNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleImage", vtkInstantiatorvtkInteractorStyleImageNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleJoystickActor", vtkInstantiatorvtkInteractorStyleJoystickActorNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleJoystickCamera", vtkInstantiatorvtkInteractorStyleJoystickCameraNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleRubberBandZoom", vtkInstantiatorvtkInteractorStyleRubberBandZoomNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleSwitch", vtkInstantiatorvtkInteractorStyleSwitchNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleTerrain", vtkInstantiatorvtkInteractorStyleTerrainNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleTrackball", vtkInstantiatorvtkInteractorStyleTrackballNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleTrackballActor", vtkInstantiatorvtkInteractorStyleTrackballActorNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleTrackballCamera", vtkInstantiatorvtkInteractorStyleTrackballCameraNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleUnicam", vtkInstantiatorvtkInteractorStyleUnicamNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleUser", vtkInstantiatorvtkInteractorStyleUserNew);
  vtkInstantiator::RegisterInstantiator("vtkLODActor", vtkInstantiatorvtkLODActorNew);
  vtkInstantiator::RegisterInstantiator("vtkLODProp3D", vtkInstantiatorvtkLODProp3DNew);
  vtkInstantiator::RegisterInstantiator("vtkLabeledDataMapper", vtkInstantiatorvtkLabeledDataMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkLight", vtkInstantiatorvtkLightNew);
  vtkInstantiator::RegisterInstantiator("vtkLightCollection", vtkInstantiatorvtkLightCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkLightKit", vtkInstantiatorvtkLightKitNew);
  vtkInstantiator::RegisterInstantiator("vtkMapperCollection", vtkInstantiatorvtkMapperCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkOBJExporter", vtkInstantiatorvtkOBJExporterNew);
  vtkInstantiator::RegisterInstantiator("vtkOOGLExporter", vtkInstantiatorvtkOOGLExporterNew);
  vtkInstantiator::RegisterInstantiator("vtkParallelCoordinatesActor", vtkInstantiatorvtkParallelCoordinatesActorNew);
  vtkInstantiator::RegisterInstantiator("vtkPicker", vtkInstantiatorvtkPickerNew);
  vtkInstantiator::RegisterInstantiator("vtkPointPicker", vtkInstantiatorvtkPointPickerNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataMapper", vtkInstantiatorvtkPolyDataMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataMapper2D", vtkInstantiatorvtkPolyDataMapper2DNew);
  vtkInstantiator::RegisterInstantiator("vtkProp3DCollection", vtkInstantiatorvtkProp3DCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkPropPicker", vtkInstantiatorvtkPropPickerNew);
  vtkInstantiator::RegisterInstantiator("vtkProperty", vtkInstantiatorvtkPropertyNew);
  vtkInstantiator::RegisterInstantiator("vtkQuaternionInterpolator", vtkInstantiatorvtkQuaternionInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderWindow", vtkInstantiatorvtkRenderWindowNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderWindowCollection", vtkInstantiatorvtkRenderWindowCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderWindowInteractor", vtkInstantiatorvtkRenderWindowInteractorNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderer", vtkInstantiatorvtkRendererNew);
  vtkInstantiator::RegisterInstantiator("vtkRendererCollection", vtkInstantiatorvtkRendererCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkRendererSource", vtkInstantiatorvtkRendererSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkScalarBarActor", vtkInstantiatorvtkScalarBarActorNew);
  vtkInstantiator::RegisterInstantiator("vtkScaledTextActor", vtkInstantiatorvtkScaledTextActorNew);
  vtkInstantiator::RegisterInstantiator("vtkSelectVisiblePoints", vtkInstantiatorvtkSelectVisiblePointsNew);
  vtkInstantiator::RegisterInstantiator("vtkTesting", vtkInstantiatorvtkTestingNew);
  vtkInstantiator::RegisterInstantiator("vtkTextActor", vtkInstantiatorvtkTextActorNew);
  vtkInstantiator::RegisterInstantiator("vtkTextActor3D", vtkInstantiatorvtkTextActor3DNew);
  vtkInstantiator::RegisterInstantiator("vtkTextMapper", vtkInstantiatorvtkTextMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkTextProperty", vtkInstantiatorvtkTextPropertyNew);
  vtkInstantiator::RegisterInstantiator("vtkTexture", vtkInstantiatorvtkTextureNew);
  vtkInstantiator::RegisterInstantiator("vtkTransformInterpolator", vtkInstantiatorvtkTransformInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkTupleInterpolator", vtkInstantiatorvtkTupleInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkVRMLExporter", vtkInstantiatorvtkVRMLExporterNew);
  vtkInstantiator::RegisterInstantiator("vtkVolume", vtkInstantiatorvtkVolumeNew);
  vtkInstantiator::RegisterInstantiator("vtkVolumeCollection", vtkInstantiatorvtkVolumeCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkVolumeProperty", vtkInstantiatorvtkVolumePropertyNew);
  vtkInstantiator::RegisterInstantiator("vtkWindowToImageFilter", vtkInstantiatorvtkWindowToImageFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkWorldPointPicker", vtkInstantiatorvtkWorldPointPickerNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLActor", vtkInstantiatorvtkOpenGLActorNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLCamera", vtkInstantiatorvtkOpenGLCameraNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLExtensionManager", vtkInstantiatorvtkOpenGLExtensionManagerNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLImageActor", vtkInstantiatorvtkOpenGLImageActorNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLImageMapper", vtkInstantiatorvtkOpenGLImageMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLLight", vtkInstantiatorvtkOpenGLLightNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLPolyDataMapper", vtkInstantiatorvtkOpenGLPolyDataMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLPolyDataMapper2D", vtkInstantiatorvtkOpenGLPolyDataMapper2DNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLProperty", vtkInstantiatorvtkOpenGLPropertyNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLRenderer", vtkInstantiatorvtkOpenGLRendererNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLTexture", vtkInstantiatorvtkOpenGLTextureNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLFreeTypeTextMapper", vtkInstantiatorvtkOpenGLFreeTypeTextMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkWin32OpenGLRenderWindow", vtkInstantiatorvtkWin32OpenGLRenderWindowNew);
  vtkInstantiator::RegisterInstantiator("vtkWin32RenderWindowInteractor", vtkInstantiatorvtkWin32RenderWindowInteractorNew);

  
}
          
void vtkRenderingInstantiator::ClassFinalize()
{ 

  vtkInstantiator::UnRegisterInstantiator("vtkActor", vtkInstantiatorvtkActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkActorCollection", vtkInstantiatorvtkActorCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAssembly", vtkInstantiatorvtkAssemblyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAxisActor2D", vtkInstantiatorvtkAxisActor2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCamera", vtkInstantiatorvtkCameraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCameraInterpolator", vtkInstantiatorvtkCameraInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellPicker", vtkInstantiatorvtkCellPickerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCullerCollection", vtkInstantiatorvtkCullerCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataSetMapper", vtkInstantiatorvtkDataSetMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFollower", vtkInstantiatorvtkFollowerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFrustumCoverageCuller", vtkInstantiatorvtkFrustumCoverageCullerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericRenderWindowInteractor", vtkInstantiatorvtkGenericRenderWindowInteractorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphicsFactory", vtkInstantiatorvtkGraphicsFactoryNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHierarchicalPolyDataMapper", vtkInstantiatorvtkHierarchicalPolyDataMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIVExporter", vtkInstantiatorvtkIVExporterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageActor", vtkInstantiatorvtkImageActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageMapper", vtkInstantiatorvtkImageMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageViewer", vtkInstantiatorvtkImageViewerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageViewer2", vtkInstantiatorvtkImageViewer2New);
  vtkInstantiator::UnRegisterInstantiator("vtkImagingFactory", vtkInstantiatorvtkImagingFactoryNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorEventRecorder", vtkInstantiatorvtkInteractorEventRecorderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyle", vtkInstantiatorvtkInteractorStyleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleFlight", vtkInstantiatorvtkInteractorStyleFlightNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleImage", vtkInstantiatorvtkInteractorStyleImageNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleJoystickActor", vtkInstantiatorvtkInteractorStyleJoystickActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleJoystickCamera", vtkInstantiatorvtkInteractorStyleJoystickCameraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleRubberBandZoom", vtkInstantiatorvtkInteractorStyleRubberBandZoomNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleSwitch", vtkInstantiatorvtkInteractorStyleSwitchNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleTerrain", vtkInstantiatorvtkInteractorStyleTerrainNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleTrackball", vtkInstantiatorvtkInteractorStyleTrackballNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleTrackballActor", vtkInstantiatorvtkInteractorStyleTrackballActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleTrackballCamera", vtkInstantiatorvtkInteractorStyleTrackballCameraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleUnicam", vtkInstantiatorvtkInteractorStyleUnicamNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleUser", vtkInstantiatorvtkInteractorStyleUserNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLODActor", vtkInstantiatorvtkLODActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLODProp3D", vtkInstantiatorvtkLODProp3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLabeledDataMapper", vtkInstantiatorvtkLabeledDataMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLight", vtkInstantiatorvtkLightNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLightCollection", vtkInstantiatorvtkLightCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLightKit", vtkInstantiatorvtkLightKitNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMapperCollection", vtkInstantiatorvtkMapperCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOBJExporter", vtkInstantiatorvtkOBJExporterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOOGLExporter", vtkInstantiatorvtkOOGLExporterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParallelCoordinatesActor", vtkInstantiatorvtkParallelCoordinatesActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPicker", vtkInstantiatorvtkPickerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointPicker", vtkInstantiatorvtkPointPickerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataMapper", vtkInstantiatorvtkPolyDataMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataMapper2D", vtkInstantiatorvtkPolyDataMapper2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProp3DCollection", vtkInstantiatorvtkProp3DCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPropPicker", vtkInstantiatorvtkPropPickerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProperty", vtkInstantiatorvtkPropertyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuaternionInterpolator", vtkInstantiatorvtkQuaternionInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderWindow", vtkInstantiatorvtkRenderWindowNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderWindowCollection", vtkInstantiatorvtkRenderWindowCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderWindowInteractor", vtkInstantiatorvtkRenderWindowInteractorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderer", vtkInstantiatorvtkRendererNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRendererCollection", vtkInstantiatorvtkRendererCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRendererSource", vtkInstantiatorvtkRendererSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkScalarBarActor", vtkInstantiatorvtkScalarBarActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkScaledTextActor", vtkInstantiatorvtkScaledTextActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSelectVisiblePoints", vtkInstantiatorvtkSelectVisiblePointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTesting", vtkInstantiatorvtkTestingNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextActor", vtkInstantiatorvtkTextActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextActor3D", vtkInstantiatorvtkTextActor3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextMapper", vtkInstantiatorvtkTextMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextProperty", vtkInstantiatorvtkTextPropertyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTexture", vtkInstantiatorvtkTextureNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransformInterpolator", vtkInstantiatorvtkTransformInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTupleInterpolator", vtkInstantiatorvtkTupleInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVRMLExporter", vtkInstantiatorvtkVRMLExporterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolume", vtkInstantiatorvtkVolumeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolumeCollection", vtkInstantiatorvtkVolumeCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolumeProperty", vtkInstantiatorvtkVolumePropertyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWindowToImageFilter", vtkInstantiatorvtkWindowToImageFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWorldPointPicker", vtkInstantiatorvtkWorldPointPickerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLActor", vtkInstantiatorvtkOpenGLActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLCamera", vtkInstantiatorvtkOpenGLCameraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLExtensionManager", vtkInstantiatorvtkOpenGLExtensionManagerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLImageActor", vtkInstantiatorvtkOpenGLImageActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLImageMapper", vtkInstantiatorvtkOpenGLImageMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLLight", vtkInstantiatorvtkOpenGLLightNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLPolyDataMapper", vtkInstantiatorvtkOpenGLPolyDataMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLPolyDataMapper2D", vtkInstantiatorvtkOpenGLPolyDataMapper2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLProperty", vtkInstantiatorvtkOpenGLPropertyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLRenderer", vtkInstantiatorvtkOpenGLRendererNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLTexture", vtkInstantiatorvtkOpenGLTextureNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLFreeTypeTextMapper", vtkInstantiatorvtkOpenGLFreeTypeTextMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWin32OpenGLRenderWindow", vtkInstantiatorvtkWin32OpenGLRenderWindowNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWin32RenderWindowInteractor", vtkInstantiatorvtkWin32RenderWindowInteractorNew);

  
}

vtkRenderingInstantiator::vtkRenderingInstantiator()
{
  if(++vtkRenderingInstantiator::Count == 1)
    { 
    vtkRenderingInstantiator::ClassInitialize(); 
    }
}

vtkRenderingInstantiator::~vtkRenderingInstantiator()
{
  if(--vtkRenderingInstantiator::Count == 0)
    { 
    vtkRenderingInstantiator::ClassFinalize(); 
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingInstantiator::Count;
