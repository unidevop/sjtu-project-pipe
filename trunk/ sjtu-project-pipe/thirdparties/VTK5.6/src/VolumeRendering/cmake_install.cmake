# Install script for directory: M:/thirdparties/VTK5.6/src/VolumeRendering

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
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkHAVSVolumeMapper_kbufferVP.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkHAVSVolumeMapper_k2FP.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkHAVSVolumeMapper_k2BeginFP.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkHAVSVolumeMapper_k2EndFP.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkHAVSVolumeMapper_k6FP.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkHAVSVolumeMapper_k6BeginFP.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkHAVSVolumeMapper_k6EndFP.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeTextureMapper3D_FourDependentNoShadeFP.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeTextureMapper3D_FourDependentShadeFP.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeTextureMapper3D_OneComponentNoShadeFP.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeTextureMapper3D_OneComponentShadeFP.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeTextureMapper3D_TwoDependentNoShadeFP.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeTextureMapper3D_TwoDependentShadeFP.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeRenderingToolkit.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkVolumeRendering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkVolumeRendering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkVolumeRendering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkVolumeRendering.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkVolumeRendering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkVolumeRendering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkVolumeRendering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkVolumeRendering.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkDirectionEncoder.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkEncodedGradientEstimator.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkEncodedGradientShader.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkFiniteDifferenceGradientEstimator.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkFixedPointRayCastImage.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkFixedPointVolumeRayCastCompositeGOHelper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkFixedPointVolumeRayCastCompositeGOShadeHelper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkFixedPointVolumeRayCastCompositeHelper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkFixedPointVolumeRayCastCompositeShadeHelper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkFixedPointVolumeRayCastHelper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkFixedPointVolumeRayCastMIPHelper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkFixedPointVolumeRayCastMapper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkGPUVolumeRayCastMapper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkHAVSVolumeMapper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkProjectedTetrahedraMapper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkRayCastImageDisplayHelper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkRecursiveSphereDirectionEncoder.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkSphericalDirectionEncoder.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeMapper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeOutlineSource.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumePicker.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeProMapper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeRayCastCompositeFunction.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeRayCastFunction.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeRayCastIsosurfaceFunction.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeRayCastMIPFunction.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeRayCastMapper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeRenderingFactory.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeTextureMapper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeTextureMapper2D.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkVolumeTextureMapper3D.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkUnstructuredGridBunykRayCastFunction.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkUnstructuredGridHomogeneousRayIntegrator.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkUnstructuredGridLinearRayIntegrator.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkUnstructuredGridPartialPreIntegration.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkUnstructuredGridPreIntegration.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkUnstructuredGridVolumeMapper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkUnstructuredGridVolumeRayCastFunction.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkUnstructuredGridVolumeRayCastIterator.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkUnstructuredGridVolumeRayIntegrator.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkUnstructuredGridVolumeRayCastMapper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkUnstructuredGridVolumeZSweepMapper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkOpenGLGPUVolumeRayCastMapper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkOpenGLHAVSVolumeMapper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkOpenGLProjectedTetrahedraMapper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkOpenGLRayCastImageDisplayHelper.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkOpenGLVolumeTextureMapper2D.h"
    "M:/thirdparties/VTK5.6/src/VolumeRendering/vtkOpenGLVolumeTextureMapper3D.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/Utilities/InstallOnly/vtkVolumeRenderingKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

