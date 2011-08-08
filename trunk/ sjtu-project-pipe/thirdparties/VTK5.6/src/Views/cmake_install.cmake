# Install script for directory: M:/thirdparties/VTK5.6/src/Views

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
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkViews.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkViews.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkViews.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkViews.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkViews.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkViews.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkViews.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkViews.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Views/vtkConvertSelectionDomain.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkDataRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkEmptyRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkGraphLayoutView.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkHierarchicalGraphPipeline.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkHierarchicalGraphView.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkIcicleView.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkInteractorStyleAreaSelectHover.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkInteractorStyleTreeMapHover.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkRenderedSurfaceRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkRenderedGraphRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkRenderedRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkRenderedTreeAreaRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkRenderedHierarchyRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkRenderView.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkTreeAreaView.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkTreeMapView.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkTreeRingView.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkView.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkViewUpdater.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkParallelCoordinatesHistogramRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkParallelCoordinatesRepresentation.h"
    "M:/thirdparties/VTK5.6/src/Views/vtkParallelCoordinatesView.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/Utilities/InstallOnly/vtkViewsKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

