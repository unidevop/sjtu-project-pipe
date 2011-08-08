# Install script for directory: M:/thirdparties/VTK5.6/src/Examples

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

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Build/vtkLocal/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Build/vtkMy/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/AMR/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Annotation/Cxx/LabeledMesh/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/MultiBlock/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/GUI/Motif/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/DataManipulation/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Hybrid/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/ImageProcessing/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/IO/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Medical/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Modelling/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Rendering/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Tutorial/Step1/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Tutorial/Step2/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Tutorial/Step3/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Tutorial/Step4/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Tutorial/Step5/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Tutorial/Step6/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/VisualizationAlgorithms/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/VolumeRendering/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Widgets/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/ParallelProcessing/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Charts/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Infovis/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/Array/Cxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/GUI/Win32/SimpleCxx/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/GUI/Win32/SampleMFC/cmake_install.cmake")
  INCLUDE("M:/thirdparties/VTK5.6/src/Examples/GUI/Win32/vtkMFC/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

