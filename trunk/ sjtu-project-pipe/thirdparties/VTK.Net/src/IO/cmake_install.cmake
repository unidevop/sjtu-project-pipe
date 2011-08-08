# Install script for directory: M:/thirdparties/VTK.Net/src/IO

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.0" TYPE FILE FILES "M:/thirdparties/VTK.Net/src/Utilities/InstallOnly/vtkIOKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES
    "M:/thirdparties/VTK.Net/src/IO/vtkAVSucdReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkBMPReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkBMPWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkBYUReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkBYUWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkBase64InputStream.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkBase64OutputStream.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkBase64Utilities.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkCGMWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkChacoReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkDEMReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkDICOMImageReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkDataCompressor.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkDataObjectReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkDataObjectWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkDataReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkDataSetReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkDataSetWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkDataWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkEnSight6BinaryReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkEnSight6Reader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkEnSightGoldBinaryReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkEnSightGoldReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkEnSightMasterServerReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkEnSightReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkFacetWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkGESignaReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkGAMBITReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkGaussianCubeReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkGenericEnSightReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkGenericMovieWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkIVWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkImageReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkImageReader2.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkImageReader2Collection.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkImageReader2Factory.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkImageWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkInputStream.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkJPEGReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkJPEGWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkMCubesReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkMCubesWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkMedicalImageProperties.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkMedicalImageReader2.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkMetaImageReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkMetaImageWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkMultiBlockPLOT3DReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkMoleculeReaderBase.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkOBJReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkOutputStream.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkPDBReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkPLOT3DReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkPLY.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkPLYReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkPLYWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkPNGReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkPNGWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkPNMReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkPNMWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkParticleReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkPolyDataReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkPolyDataWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkPostScriptWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkRectilinearGridReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkRectilinearGridWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkSLCReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkSTLReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkSTLWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkSimplePointsReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkStructuredGridReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkStructuredGridWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkStructuredPointsReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkStructuredPointsWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkTIFFReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkTIFFWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkUGFacetReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkUnstructuredGridReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkUnstructuredGridWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkVolume16Reader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkVolumeReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLDataElement.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLDataParser.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLDataReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLDataSetWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLFileReadTester.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLImageDataReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLImageDataWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPDataReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPDataSetWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPDataWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPImageDataReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPImageDataWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPPolyDataReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPPolyDataWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPRectilinearGridReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPRectilinearGridWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPStructuredDataReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPStructuredDataWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPStructuredGridReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPStructuredGridWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPUnstructuredDataReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPUnstructuredDataWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPUnstructuredGridReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPUnstructuredGridWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLParser.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPolyDataReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLPolyDataWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLRectilinearGridReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLRectilinearGridWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLStructuredDataReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLStructuredDataWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLStructuredGridReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLStructuredGridWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLUnstructuredDataReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLUnstructuredDataWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLUnstructuredGridReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLUnstructuredGridWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLUtilities.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXMLWriterC.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkXYZMolReader.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkZLibDataCompressor.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkAVIWriter.h"
    "M:/thirdparties/VTK.Net/src/IO/vtkMPEG2Writer.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkIO.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkIO.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkIO.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkIO.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkIO.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkIO.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkIO.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkIO.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkIODotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkIODotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkIODotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkIODotNet.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkIODotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkIODotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkIODotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkIODotNet.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

