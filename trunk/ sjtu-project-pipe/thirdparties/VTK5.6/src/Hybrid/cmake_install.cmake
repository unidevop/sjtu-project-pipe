# Install script for directory: M:/thirdparties/VTK5.6/src/Hybrid

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
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkHybrid.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkHybrid.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkHybrid.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkHybrid.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkHybrid.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkHybrid.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkHybrid.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkHybrid.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Hybrid/vtk3DSImporter.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkArcPlotter.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkAnnotatedCubeActor.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkAxisActor.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkAxesActor.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkBarChartActor.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkCaptionActor2D.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkCornerAnnotation.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkCubeAxesActor.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkCubeAxesActor2D.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkDepthSortPolyData.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkEarthSource.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkFacetReader.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkGreedyTerrainDecimation.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkGridTransform.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkImageDataLIC2D.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkImageDataLIC2DExtentTranslator.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkImageToPolyDataFilter.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkImplicitModeller.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkIterativeClosestPointTransform.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkLandmarkTransform.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkLegendBoxActor.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkLegendScaleActor.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkLSDynaReader.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkPCAAnalysisFilter.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkPieChartActor.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkPolyDataSilhouette.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkPolyDataToImageStencil.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkProcrustesAlignmentFilter.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkProjectedTerrainPath.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkRIBExporter.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkRIBLight.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkRIBProperty.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkRenderLargeImage.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkSpiderPlotActor.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkStructuredExtent.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkStructuredGridLIC2D.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkTemporalDataSetCache.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkTemporalInterpolator.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkTemporalShiftScale.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkTemporalSnapToTimeStep.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkThinPlateSplineTransform.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkTransformToGrid.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkVRMLImporter.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkVectorText.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkVideoSource.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkWeightedTransformFilter.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkXYPlotActor.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkX3D.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkX3DExporter.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkX3DExporterWriter.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkX3DExporterXMLWriter.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkX3DExporterFIWriter.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkExodusIICache.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkExodusIIReader.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkExodusIIReaderParser.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkExodusIIReaderVariableCheck.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkExodusReader.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkDSPFilterDefinition.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkExodusModel.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkDSPFilterGroup.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkPExodusIIReader.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkPExodusReader.h"
    "M:/thirdparties/VTK5.6/src/Hybrid/vtkWin32VideoSource.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/Utilities/InstallOnly/vtkHybridKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/Hybrid/vtk3DS.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

