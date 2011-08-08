# Install script for directory: M:/thirdparties/VTK5.6/src/Utilities

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Utilities/metaIOConfig.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtk_expat.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtk_jpeg.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtk_png.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtk_zlib.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtk_gl2ps.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtk_tiff.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtk_freetype.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtk_libxml2.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtk_oggtheora.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/internal" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/Utilities/internal/stdio_core.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/kwsys/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/vtkzlib/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/vtkjpeg/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/vtkpng/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/vtktiff/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/vtkexpat/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/DICOMParser/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/MaterialLibrary/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/vtklibproj4/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/mrmpi/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/verdict/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/vtknetcdf/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/vtkmetaio/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/vtksqlite/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/vtkexodus2/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/vtkalglib/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/Doxygen/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/EncodeString/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/HashSource/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/VPIC/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/Cosmo/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/ftgl/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/ParseOGLExt/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

