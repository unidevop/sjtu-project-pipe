# Install script for directory: M:/thirdparties/VTK.Net/src/Rendering

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.0" TYPE FILE FILES "M:/thirdparties/VTK.Net/src/Utilities/InstallOnly/vtkRenderingKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES "M:/thirdparties/VTK.Net/src/Rendering/Testing/Cxx/vtkRegressionTestImage.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES
    "M:/thirdparties/VTK.Net/src/Rendering/vtkAbstractMapper3D.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkAbstractVolumeMapper.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkAbstractPicker.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkAbstractPropPicker.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkActor.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkActorCollection.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkAssembly.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkAxisActor2D.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkCamera.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkCameraInterpolator.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkCellPicker.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkCuller.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkCullerCollection.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkDataSetMapper.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkExporter.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkFollower.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkFrustumCoverageCuller.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkGenericRenderWindowInteractor.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkGraphicsFactory.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkHierarchicalPolyDataMapper.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkIVExporter.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkImageActor.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkImageMapper.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkImageViewer.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkImageViewer2.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkImagingFactory.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkImporter.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorEventRecorder.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorObserver.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorStyle.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorStyleFlight.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorStyleImage.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorStyleJoystickActor.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorStyleJoystickCamera.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorStyleRubberBandZoom.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorStyleSwitch.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorStyleTerrain.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorStyleTrackball.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorStyleTrackballActor.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorStyleTrackballCamera.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorStyleUnicam.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkInteractorStyleUser.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkLODActor.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkLODProp3D.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkLabeledDataMapper.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkLight.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkLightCollection.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkLightKit.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkMapper.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkMapperCollection.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOBJExporter.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOOGLExporter.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkParallelCoordinatesActor.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkPicker.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkPointPicker.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkPolyDataMapper.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkPolyDataMapper2D.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkProp3D.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkProp3DCollection.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkPropPicker.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkProperty.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkQuaternionInterpolator.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkRenderWindow.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkRenderWindowCollection.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkRenderWindowInteractor.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkRenderer.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkRendererCollection.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkRendererSource.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkScalarBarActor.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkScaledTextActor.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkSelectVisiblePoints.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkTesting.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkTextActor.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkTextActor3D.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkTextMapper.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkTextProperty.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkTexture.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkTransformInterpolator.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkTupleInterpolator.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkVRMLExporter.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkVolume.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkVolumeCollection.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkVolumeProperty.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkWindowToImageFilter.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkWorldPointPicker.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkFreeTypeUtilities.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOpenGLActor.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOpenGLCamera.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOpenGLExtensionManager.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOpenGLImageActor.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOpenGLImageMapper.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOpenGLLight.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOpenGLPolyDataMapper.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOpenGLPolyDataMapper2D.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOpenGLProperty.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOpenGLRenderWindow.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOpenGLRenderer.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOpenGLTexture.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkOpenGLFreeTypeTextMapper.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkgl.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkWin32OpenGLRenderWindow.h"
    "M:/thirdparties/VTK.Net/src/Rendering/vtkWin32RenderWindowInteractor.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES "M:/thirdparties/VTK.Net/src/Rendering/vtkOpenGL.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkRendering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkRendering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkRendering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkRendering.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkRendering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkRendering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkRendering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkRendering.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkRenderingDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkRenderingDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkRenderingDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkRenderingDotNet.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkRenderingDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkRenderingDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkRenderingDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkRenderingDotNet.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

