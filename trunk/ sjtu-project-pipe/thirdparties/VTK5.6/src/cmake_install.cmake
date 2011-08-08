# Install script for directory: M:/thirdparties/VTK5.6/src

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/VTKBuildSettings.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/algorithm")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/deque")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/exception")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/functional")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/iterator")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/limits")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/list")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/map")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/memory")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/new")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/numeric")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/queue")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/set")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/stack")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/stdexcept")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/string")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/utility")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkstd" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/vtkstd/vector")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/vtkCommonInstantiator.h"
    "M:/thirdparties/VTK5.6/src/vtkFilteringInstantiator.h"
    "M:/thirdparties/VTK5.6/src/vtkIOInstantiator.h"
    "M:/thirdparties/VTK5.6/src/vtkImagingInstantiator.h"
    "M:/thirdparties/VTK5.6/src/vtkGraphicsInstantiator.h"
    "M:/thirdparties/VTK5.6/src/vtkGenericFilteringInstantiator.h"
    "M:/thirdparties/VTK5.6/src/vtkRenderingInstantiator.h"
    "M:/thirdparties/VTK5.6/src/vtkVolumeRenderingInstantiator.h"
    "M:/thirdparties/VTK5.6/src/vtkHybridInstantiator.h"
    "M:/thirdparties/VTK5.6/src/vtkWidgetsInstantiator.h"
    "M:/thirdparties/VTK5.6/src/vtkParallelInstantiator.h"
    "M:/thirdparties/VTK5.6/src/vtkInfovisInstantiator.h"
    "M:/thirdparties/VTK5.6/src/vtkGeovisInstantiator.h"
    "M:/thirdparties/VTK5.6/src/vtkViewsInstantiator.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6/CMake" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/CMake/vtkMakeInstantiator.cmake"
    "M:/thirdparties/VTK5.6/src/CMake/vtkMakeInstantiator.h.in"
    "M:/thirdparties/VTK5.6/src/CMake/vtkMakeInstantiator.cxx.in"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6/CMake" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/CMake/FindMySQL.cmake"
    "M:/thirdparties/VTK5.6/src/CMake/FindTCL.cmake"
    "M:/thirdparties/VTK5.6/src/CMake/FindPythonLibs.cmake"
    "M:/thirdparties/VTK5.6/src/CMake/FindPackageHandleStandardArgs.cmake"
    "M:/thirdparties/VTK5.6/src/CMake/FindPackageHandleStandardArgs2.cmake"
    "M:/thirdparties/VTK5.6/src/CMake/vtkTclTkMacros.cmake"
    "M:/thirdparties/VTK5.6/src/CMake/vtkExportKit.cmake"
    "M:/thirdparties/VTK5.6/src/CMake/vtkKit.cmake.in"
    "M:/thirdparties/VTK5.6/src/CMake/vtkWrapTcl.cmake"
    "M:/thirdparties/VTK5.6/src/CMake/vtkWrapJava.cmake"
    "M:/thirdparties/VTK5.6/src/CMake/vtkWrapPython.cmake"
    "M:/thirdparties/VTK5.6/src/CMake/vtkWrapperInit.data.in"
    "M:/thirdparties/VTK5.6/src/CMake/VTKVersionMacros.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/vtkConfigure.h"
    "M:/thirdparties/VTK5.6/src/vtkToolkits.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/UseVTK.cmake"
    "M:/thirdparties/VTK5.6/src/VTKLibraryDepends.cmake"
    "M:/thirdparties/VTK5.6/src/Wrapping/hints"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("M:/thirdparties/VTK5.6/src/Wrapping/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Common/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Filtering/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Imaging/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Graphics/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/GenericFiltering/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/IO/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Rendering/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/VolumeRendering/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Hybrid/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Widgets/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Parallel/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Infovis/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Geovis/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Views/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/GUISupport/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Charts/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/vtkTclTest2Py/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Common/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Filtering/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Graphics/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/GenericFiltering/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Imaging/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/IO/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Rendering/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/VolumeRendering/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Hybrid/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Widgets/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Parallel/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Infovis/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Geovis/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Views/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Charts/Testing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Utilities/LastConfigureStep/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "M:/thirdparties/VTK5.6/src/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "M:/thirdparties/VTK5.6/src/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
