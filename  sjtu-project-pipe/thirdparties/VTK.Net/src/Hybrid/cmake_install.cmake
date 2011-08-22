# Install script for directory: M:/thirdparties/VTK.Net/src/Hybrid

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.0" TYPE FILE FILES "M:/thirdparties/VTK.Net/src/Utilities/InstallOnly/vtkHybridKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES
    "M:/thirdparties/VTK.Net/src/Hybrid/vtk3DSImporter.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkArcPlotter.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkAnnotatedCubeActor.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkAxesActor.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkCaptionActor2D.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkCornerAnnotation.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkCubeAxesActor2D.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkDepthSortPolyData.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkEarthSource.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkFacetReader.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkGreedyTerrainDecimation.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkGridTransform.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkImageToPolyDataFilter.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkImplicitModeller.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkIterativeClosestPointTransform.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkLandmarkTransform.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkLegendBoxActor.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkPCAAnalysisFilter.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkPolyDataToImageStencil.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkProcrustesAlignmentFilter.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkProjectedTerrainPath.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkRIBExporter.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkRIBLight.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkRIBProperty.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkRenderLargeImage.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkThinPlateSplineTransform.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkTransformToGrid.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkVRMLImporter.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkVectorText.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkVideoSource.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkWeightedTransformFilter.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkXYPlotActor.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkPExodusReader.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkExodusReader.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkDSPFilterDefinition.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkExodusModel.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkDSPFilterGroup.h"
    "M:/thirdparties/VTK.Net/src/Hybrid/vtkWin32VideoSource.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES "M:/thirdparties/VTK.Net/src/Hybrid/vtk3DS.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkHybrid.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkHybrid.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkHybrid.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkHybrid.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkHybrid.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkHybrid.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkHybrid.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkHybrid.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkHybridDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkHybridDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkHybridDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkHybridDotNet.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkHybridDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkHybridDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkHybridDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkHybridDotNet.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

