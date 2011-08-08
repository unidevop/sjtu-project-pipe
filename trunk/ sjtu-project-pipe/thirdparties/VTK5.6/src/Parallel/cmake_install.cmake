# Install script for directory: M:/thirdparties/VTK5.6/src/Parallel

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
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkParallel.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkParallel.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkParallel.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkParallel.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkParallel.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkParallel.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkParallel.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkParallel.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Parallel/vtkBranchExtentTranslator.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkCachingInterpolatedVelocityField.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkCollectGraph.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkCollectPolyData.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkCollectTable.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkCommunicator.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkCompositer.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkCompressCompositer.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkCutMaterial.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkDistributedDataFilter.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkDistributedStreamTracer.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkDummyCommunicator.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkDummyController.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkDuplicatePolyData.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkEnSightWriter.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkExtractCTHPart.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkExtractPiece.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkExtractPolyDataPiece.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkExtractUnstructuredGridPiece.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkExtractUserDefinedPiece.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkMPIImageReader.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkMultiProcessController.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkMultiProcessStream.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkParallelFactory.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPassThroughFilter.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPCellDataToPointData.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPChacoReader.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPCosmoHaloFinder.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPCosmoReader.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPDataSetReader.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPDataSetWriter.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPExtractArraysOverTime.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPieceRequestFilter.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPieceScalars.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPKdTree.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPLinearExtrusionFilter.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPNrrdReader.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPOPReader.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPOpenFOAMReader.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPOutlineCornerFilter.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPOutlineFilter.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPPolyDataNormals.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPProbeFilter.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkProcess.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkProcessGroup.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkProcessIdScalars.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPReflectionFilter.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPSLACReader.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPSphereSource.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPStreamTracer.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPTableToStructuredGrid.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkRectilinearGridOutlineFilter.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkSocketCommunicator.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkSocketController.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkSubCommunicator.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkSubGroup.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkTemporalFractal.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkTemporalInterpolatedVelocityField.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkTemporalStreamTracer.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkTransmitImageDataPiece.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkTransmitPolyDataPiece.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkTransmitRectilinearGridPiece.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkTransmitStructuredGridPiece.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkTransmitUnstructuredGridPiece.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkVPICReader.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkWindBladeReader.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkXMLPHierarchicalBoxDataWriter.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkXMLPMultiBlockDataWriter.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkCompositeRenderManager.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkImageRenderManager.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkMemoryLimitImageDataStreamer.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPipelineSize.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkParallelRenderManager.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkPImageWriter.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkTreeCompositer.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkCompositeRGBAPass.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkCompositeZPass.h"
    "M:/thirdparties/VTK5.6/src/Parallel/vtkExodusIIWriter.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/Utilities/InstallOnly/vtkParallelKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

