# Install script for directory: M:/thirdparties/VTK5.6/src/Widgets

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
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkWidgets.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkWidgets.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkWidgets.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkWidgets.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkWidgets.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkWidgets.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkWidgets.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkWidgets.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Widgets/vtk3DWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkAbstractWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkAffineRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkAffineRepresentation2D.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkAffineWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkAngleRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkAngleRepresentation2D.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkAngleRepresentation3D.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkAngleWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkBalloonRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkBalloonWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkBezierContourLineInterpolator.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkBiDimensionalRepresentation2D.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkBiDimensionalWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkBorderRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkBorderWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkBoundedPlanePointPlacer.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkBoxRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkBoxWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkBoxWidget2.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkCameraRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkCameraWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkCaptionRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkCaptionWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkCenteredSliderRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkCenteredSliderWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkContinuousValueWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkContinuousValueWidgetRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkContourLineInterpolator.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkContourRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkFocalPlaneContourRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkContourWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkCheckerboardRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkCheckerboardWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkConstrainedPointHandleRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkDijkstraImageContourLineInterpolator.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkDistanceWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkDistanceRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkDistanceRepresentation2D.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkEllipsoidTensorProbeRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkEvent.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkFocalPlanePointPlacer.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkHandleRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkHandleWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkHoverWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkImageActorPointPlacer.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkImageOrthoPlanes.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkImagePlaneWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkImageTracerWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkImplicitPlaneRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkImplicitPlaneWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkImplicitPlaneWidget2.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkLinearContourLineInterpolator.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkLineRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkLineWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkLineWidget2.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkLogoRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkLogoWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkOrientationMarkerWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkOrientedGlyphContourRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkOrientedGlyphFocalPlaneContourRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkParallelopipedRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkParallelopipedWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkClosedSurfacePointPlacer.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkPlaneWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkPlaybackRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkPlaybackWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkPointHandleRepresentation2D.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkPointHandleRepresentation3D.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkPointPlacer.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkPointWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkPolyDataSourceWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkPolyDataPointPlacer.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkAbstractPolygonalHandleRepresentation3D.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkPolygonalHandleRepresentation3D.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkOrientedPolygonalHandleRepresentation3D.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkPolygonalSurfacePointPlacer.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkPolyDataContourLineInterpolator.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkPolygonalSurfaceContourLineInterpolator.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkRectilinearWipeRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkRectilinearWipeWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkScalarBarRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkScalarBarWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkSeedRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkSeedWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkSliderRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkSliderRepresentation2D.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkSliderRepresentation3D.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkSliderWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkSphereHandleRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkSphereRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkSphereWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkSphereWidget2.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkSplineRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkSplineWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkSplineWidget2.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkTensorProbeWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkTensorProbeRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkTerrainDataPointPlacer.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkTerrainContourLineInterpolator.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkTextRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkTextWidget.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkWidgetCallbackMapper.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkWidgetEvent.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkWidgetEventTranslator.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkWidgetRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkWidgetSet.h"
    "M:/thirdparties/VTK5.6/src/Widgets/vtkXYPlotWidget.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/Utilities/InstallOnly/vtkWidgetsKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

