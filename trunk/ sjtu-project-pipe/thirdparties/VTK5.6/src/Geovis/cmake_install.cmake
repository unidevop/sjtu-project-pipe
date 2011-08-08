# Install script for directory: M:/thirdparties/VTK5.6/src/Geovis

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
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkGeovis.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkGeovis.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkGeovis.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkGeovis.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkGeovis.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkGeovis.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkGeovis.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkGeovis.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Geovis/vtkCompassRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkCompassWidget.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoAdaptiveArcs.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoAlignedImageRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoAlignedImageSource.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoArcs.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoAssignCoordinates.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoCamera.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoFileImageSource.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoFileTerrainSource.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoGlobeSource.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoGraticule.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoImageNode.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoInteractorStyle.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoProjectionSource.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoProjection.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoRandomGraphSource.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoSampleArcs.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoSource.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoSphereTransform.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoTerrain.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoTerrain2D.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoTerrainNode.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoTransform.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoTreeNode.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoTreeNodeCache.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoView.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGeoView2D.h"
    "M:/thirdparties/VTK5.6/src/Geovis/vtkGlobeSource.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/Utilities/InstallOnly/vtkGeovisKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

