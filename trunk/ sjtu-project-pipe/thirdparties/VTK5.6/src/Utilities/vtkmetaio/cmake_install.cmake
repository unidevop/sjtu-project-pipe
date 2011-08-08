# Install script for directory: M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio

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
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkmetaio.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkmetaio.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkmetaio.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkmetaio.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkmetaio.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkmetaio.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkmetaio.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkmetaio.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkmetaio" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/localMetaConfiguration.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaArray.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaArrow.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaBlob.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaCommand.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaContour.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaDTITube.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaEllipse.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaEvent.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaForm.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaGaussian.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaGroup.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaImage.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaImageTypes.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaImageUtils.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaITKUtils.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaLandmark.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaLine.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaMesh.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaObject.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaOutput.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaScene.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaSurface.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaTransform.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaTube.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaTubeGraph.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaTypes.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaUtils.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/metaVesselTube.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

