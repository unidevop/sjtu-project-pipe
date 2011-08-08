# Install script for directory: M:/thirdparties/VTK5.6/src/IO

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/IO/vtkMINC.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkIO.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkIO.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkIO.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkIO.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkIO.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkIO.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkIO.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkIO.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/IO/vtkAbstractParticleWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkAVSucdReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkBMPReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkBMPWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkBYUReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkBYUWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkBase64InputStream.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkBase64OutputStream.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkBase64Utilities.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkCGMWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkChacoReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkDEMReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkDICOMImageReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkDataCompressor.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkDataObjectReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkDataObjectWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkDataSetReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkDataSetWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkDelimitedTextWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkEnSight6BinaryReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkEnSight6Reader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkEnSightGoldBinaryReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkEnSightGoldReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkEnSightMasterServerReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkEnSightReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkFLUENTReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkFacetWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkGenericDataObjectReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkGenericDataObjectWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkGESignaReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkGAMBITReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkGaussianCubeReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkGenericEnSightReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkGenericMovieWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkGlobFileNames.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkGraphReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkGraphWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkIVWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkImageReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkImageReader2.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkImageReader2Collection.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkImageReader2Factory.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkImageWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkInputStream.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkJavaScriptDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkJPEGReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkJPEGWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkMFIXReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkMaterialLibrary.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkMCubesReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkMCubesWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkMedicalImageProperties.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkMedicalImageReader2.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkMetaImageReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkMetaImageWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkMINCImageAttributes.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkMINCImageReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkMINCImageWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkMPASReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkMultiBlockPLOT3DReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkMoleculeReaderBase.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkNetCDFCFReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkNetCDFPOPReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkNetCDFReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkOBJReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkOpenFOAMReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkOutputStream.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkPDBReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkPLOT3DReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkPLY.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkPLYReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkPLYWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkPNGReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkPNGWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkPNMReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkPNMWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkParticleReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkPolyDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkPolyDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkPostScriptWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkRectilinearGridReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkRectilinearGridWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkRTXMLPolyDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkRowQuery.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkSESAMEReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkShaderCodeLibrary.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkSLACParticleReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkSLACReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkSQLDatabase.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkSQLDatabaseSchema.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkSQLiteDatabase.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkSQLiteQuery.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkSQLQuery.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkSLCReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkSTLReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkSTLWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkSimplePointsReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkSortFileNames.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkStructuredGridReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkStructuredGridWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkStructuredPointsReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkStructuredPointsWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkTableReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkTableWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkTecplotReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkTIFFReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkTIFFWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkTreeReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkTreeWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkUGFacetReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkUnstructuredGridReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkUnstructuredGridWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkVolume16Reader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkVolumeReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLCompositeDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLDataParser.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLDataSetWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLFileReadTester.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLHierarchicalBoxDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLHierarchicalDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLImageDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLImageDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLHyperOctreeReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLHyperOctreeWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLMaterial.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLMaterialParser.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLMaterialReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLMultiBlockDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLMultiGroupDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLCompositeDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLMultiBlockDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLHierarchicalBoxDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPDataSetWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPImageDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPImageDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPPolyDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPPolyDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPRectilinearGridReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPRectilinearGridWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPStructuredDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPStructuredDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPStructuredGridReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPStructuredGridWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPUnstructuredDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPUnstructuredDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPUnstructuredGridReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPUnstructuredGridWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLParser.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPolyDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLPolyDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLRectilinearGridReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLRectilinearGridWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLShader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLStructuredDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLStructuredDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLStructuredGridReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLStructuredGridWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLUnstructuredDataReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLUnstructuredDataWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLUnstructuredGridReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLUnstructuredGridWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLUtilities.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXMLWriterC.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkXYZMolReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkZLibDataCompressor.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkAVIWriter.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkRowQueryToTable.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkArrayReader.h"
    "M:/thirdparties/VTK5.6/src/IO/vtkArrayWriter.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/Utilities/InstallOnly/vtkIOKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

