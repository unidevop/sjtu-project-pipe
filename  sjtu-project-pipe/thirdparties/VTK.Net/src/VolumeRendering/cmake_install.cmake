# Install script for directory: M:/thirdparties/VTK.Net/src/VolumeRendering

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.0" TYPE FILE FILES "M:/thirdparties/VTK.Net/src/Utilities/InstallOnly/vtkVolumeRenderingKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkDirectionEncoder.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkEncodedGradientEstimator.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkEncodedGradientShader.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkFiniteDifferenceGradientEstimator.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkFixedPointRayCastImage.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkFixedPointVolumeRayCastCompositeGOHelper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkFixedPointVolumeRayCastCompositeGOShadeHelper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkFixedPointVolumeRayCastCompositeHelper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkFixedPointVolumeRayCastCompositeShadeHelper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkFixedPointVolumeRayCastHelper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkFixedPointVolumeRayCastMIPHelper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkFixedPointVolumeRayCastMapper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkProjectedTetrahedraMapper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkRayCastImageDisplayHelper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkRecursiveSphereDirectionEncoder.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkSphericalDirectionEncoder.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkVolumeMapper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkVolumeRayCastCompositeFunction.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkVolumeRayCastFunction.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkVolumeRayCastIsosurfaceFunction.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkVolumeRayCastMIPFunction.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkVolumeRayCastMapper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkVolumeRenderingFactory.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkVolumeTextureMapper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkVolumeTextureMapper2D.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkVolumeTextureMapper3D.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkUnstructuredGridBunykRayCastFunction.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkUnstructuredGridHomogeneousRayIntegrator.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkUnstructuredGridLinearRayIntegrator.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkUnstructuredGridPartialPreIntegration.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkUnstructuredGridPreIntegration.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkUnstructuredGridVolumeMapper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkUnstructuredGridVolumeRayCastFunction.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkUnstructuredGridVolumeRayCastIterator.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkUnstructuredGridVolumeRayIntegrator.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkUnstructuredGridVolumeRayCastMapper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkUnstructuredGridVolumeZSweepMapper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkOpenGLRayCastImageDisplayHelper.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkOpenGLVolumeTextureMapper2D.h"
    "M:/thirdparties/VTK.Net/src/VolumeRendering/vtkOpenGLVolumeTextureMapper3D.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkVolumeRendering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkVolumeRendering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkVolumeRendering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkVolumeRendering.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkVolumeRendering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkVolumeRendering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkVolumeRendering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkVolumeRendering.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkVolumeRenderingDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkVolumeRenderingDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkVolumeRenderingDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkVolumeRenderingDotNet.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkVolumeRenderingDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkVolumeRenderingDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkVolumeRenderingDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkVolumeRenderingDotNet.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

