# Install script for directory: M:/thirdparties/VTK.Net/src/Utilities

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0/internal" TYPE FILE FILES "M:/thirdparties/VTK.Net/src/Utilities/internal/stdio_core.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES
    "M:/thirdparties/VTK.Net/src/Utilities/vtk_expat.h"
    "M:/thirdparties/VTK.Net/src/Utilities/vtk_jpeg.h"
    "M:/thirdparties/VTK.Net/src/Utilities/vtk_png.h"
    "M:/thirdparties/VTK.Net/src/Utilities/vtk_zlib.h"
    "M:/thirdparties/VTK.Net/src/Utilities/vtk_tiff.h"
    "M:/thirdparties/VTK.Net/src/Utilities/vtk_freetype.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("M:/thirdparties/VTK.Net/src/Utilities/kwsys/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK.Net/src/Utilities/vtkzlib/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK.Net/src/Utilities/vtkjpeg/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK.Net/src/Utilities/vtkpng/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK.Net/src/Utilities/vtktiff/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK.Net/src/Utilities/vtkexpat/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK.Net/src/Utilities/vtkfreetype/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK.Net/src/Utilities/DICOMParser/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK.Net/src/Utilities/vtkmpeg2encode/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK.Net/src/Utilities/vtknetcdf/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK.Net/src/Utilities/vtkexodus2/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK.Net/src/Utilities/Doxygen/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK.Net/src/Utilities/ftgl/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK.Net/src/Utilities/ParseOGLExt/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

