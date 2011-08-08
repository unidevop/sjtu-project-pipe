# Install script for directory: M:/thirdparties/VTK5.6/src/Rendering

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "C:/Program Files/VTK")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkRendering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkRendering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkRendering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkRendering.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkRendering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkRendering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkRendering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkRendering.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Rendering/vtkAbstractMapper3D.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkAbstractPicker.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkAbstractPropPicker.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkAbstractVolumeMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkActorCollection.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkActor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkAreaPicker.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkMapArrayValues.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkAssembly.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkAxisActor2D.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkCamera.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkCameraActor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkCameraInterpolator.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkCellCenterDepthSort.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkCellPicker.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkChooserPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkClipPlanesPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkCoincidentTopologyResolutionPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkColorMaterialHelper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkCompositePainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkCompositePolyDataMapper2.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkCompositePolyDataMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkCullerCollection.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkCuller.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkDataSetMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkDataTransferHelper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkDefaultPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkDisplayListPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkDistanceToCamera.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkDynamic2DLabelMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkDummyGPUInfoList.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkExporter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkFollower.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkFrameBufferObject.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkFrustumCoverageCuller.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkGenericRenderWindowInteractor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkGenericVertexAttributeMapping.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkGPUInfo.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkGPUInfoList.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkGraphicsFactory.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkGraphMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkGraphToGlyphs.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkHardwareSelector.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkHardwareSelectionPolyDataPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkHierarchicalPolyDataMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkImageActor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkImageMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkImageViewer2.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkImageViewer.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkImagingFactory.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkImporter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorEventRecorder.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorObserver.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyle.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleFlight.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleImage.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleJoystickActor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleJoystickCamera.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleRubberBand2D.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleRubberBand3D.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleRubberBandPick.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleRubberBandZoom.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleSwitch.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleTerrain.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleTrackballActor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleTrackballCamera.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleTrackball.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleUnicam.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkInteractorStyleUser.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkIVExporter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLabeledDataMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLabeledTreeMapDataMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLabelHierarchy.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLabelHierarchyAlgorithm.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLabelHierarchyIterator.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLabelHierarchyCompositeIterator.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLabelPlacer.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLabelPlacementMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLabelRenderStrategy.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLabelSizeCalculator.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLeaderActor2D.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLightActor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLightCollection.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLight.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLightingHelper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLightingPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLightKit.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLineIntegralConvolution2D.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLinesPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLODActor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLODProp3D.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkMapperCollection.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOBJExporter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkObserverMediator.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOOGLExporter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPainterDeviceAdapter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPainterPolyDataMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkParallelCoordinatesActor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkParallelCoordinatesInteractorStyle.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPicker.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPixelBufferObject.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPointPicker.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPointSetToLabelHierarchy.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPointsPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPOVExporter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPolyDataMapper2D.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPolyDataMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPolyDataPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPolygonsPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPrimitivePainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkProp3DCollection.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkProp3D.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkProperty.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkPropPicker.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkQuadricLODActor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkQuaternionInterpolator.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkRenderedAreaPicker.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkRendererCollection.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkRenderer.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkRendererDelegate.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkRendererSource.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkRenderPass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkRenderState.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkRenderWindowCollection.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkRenderWindow.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkRenderWindowInteractor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkRepresentationPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkScalarBarActor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkScalarsToColorsPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkScaledTextActor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkScenePicker.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkSelectVisiblePoints.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkShader.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkShaderDeviceAdapter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkShaderProgram.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkStandardPolyDataPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkSurfaceLICDefaultPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkSurfaceLICPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTDxInteractorStyle.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTDxInteractorStyleCamera.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTDxInteractorStyleSettings.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTesting.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTestingInteractor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTestingObjectFactory.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTextActor3D.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTextActor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTextMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTextProperty.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTexture.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTexturedActor2D.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTextureObject.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTransformInterpolator.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTStripsPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTupleInterpolator.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkViewTheme.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkVisibilitySort.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkVolumeCollection.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkVolume.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkVolumeProperty.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkVRMLExporter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkWindowToImageFilter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkWorldPointPicker.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkVisibleCellSelector.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkIdentColoredPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkFreeTypeUtilities.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkCameraPass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkClearZPass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkDefaultPass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkDepthPeelingPass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkGaussianBlurPass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkImageProcessingPass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkLightsPass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkGLSLShaderDeviceAdapter2.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpaquePass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLActor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLCamera.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLClipPlanesPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLCoincidentTopologyResolutionPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLDisplayListPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLExtensionManager.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLHardwareSupport.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLImageActor.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLImageMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLLight.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLLightingPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLPainterDeviceAdapter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLPolyDataMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLPolyDataMapper2D.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLProperty.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLRenderWindow.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLRenderer.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLRepresentationPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLScalarsToColorsPainter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLState.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLTexture.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOverlayPass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkRenderPassCollection.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkSequencePass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkShader2.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkShader2Collection.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkShaderProgram2.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkShadowMapPass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkSobelGradientMagnitudePass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTextureUnitManager.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTranslucentPass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkUniformVariables.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkVolumetricPass.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkGLSLShader.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkGLSLShaderDeviceAdapter.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkGLSLShaderProgram.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkFreeTypeLabelRenderStrategy.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGLFreeTypeTextMapper.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkWin32OpenGLRenderWindow.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkWin32RenderWindowInteractor.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/Utilities/InstallOnly/vtkRenderingKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Rendering/vtkOpenGL.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkgl.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Rendering/Testing/Cxx/vtkRegressionTestImage.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTDxConfigure.h"
    "M:/thirdparties/VTK5.6/src/Rendering/vtkTDxMotionEventInfo.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

