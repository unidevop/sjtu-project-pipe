# Install script for directory: M:/thirdparties/VTK.Net/src/Imaging

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.0" TYPE FILE FILES "M:/thirdparties/VTK.Net/src/Utilities/InstallOnly/vtkImagingKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES
    "M:/thirdparties/VTK.Net/src/Imaging/vtkBooleanTexture.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkExtractVOI.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkGaussianSplatter.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageAccumulate.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageAnisotropicDiffusion2D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageAnisotropicDiffusion3D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageAppend.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageAppendComponents.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageBlend.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageButterworthHighPass.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageButterworthLowPass.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageCacheFilter.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageCanvasSource2D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageCast.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageChangeInformation.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageCheckerboard.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageCityBlockDistance.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageClip.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageConnector.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageConstantPad.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageContinuousDilate3D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageContinuousErode3D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageConvolve.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageCorrelation.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageCursor3D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageDataStreamer.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageDecomposeFilter.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageDifference.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageDilateErode3D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageDivergence.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageDotProduct.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageEllipsoidSource.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageEuclideanDistance.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageEuclideanToPolar.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageExport.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageExtractComponents.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageFFT.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageFlip.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageFourierCenter.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageFourierFilter.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageGaussianSmooth.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageGaussianSource.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageGradient.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageGradientMagnitude.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageGridSource.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageHSIToRGB.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageHSVToRGB.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageHybridMedian2D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageIdealHighPass.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageIdealLowPass.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageImport.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageImportExecutive.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageIslandRemoval2D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageIterateFilter.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageLaplacian.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageLogarithmicScale.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageLogic.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageLuminance.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageMagnify.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageMagnitude.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageMandelbrotSource.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageMapToColors.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageMapToRGBA.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageMapToWindowLevelColors.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageMask.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageMaskBits.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageMathematics.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageMedian3D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageMirrorPad.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageNoiseSource.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageNonMaximumSuppression.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageNormalize.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageOpenClose3D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImagePadFilter.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImagePermute.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageQuantizeRGBToIndex.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageRFFT.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageRGBToHSI.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageRGBToHSV.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageRange3D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageRectilinearWipe.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageResample.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageReslice.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageSeedConnectivity.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageSeparableConvolution.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageShiftScale.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageShrink3D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageSinusoidSource.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageSkeleton2D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageSobel2D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageSobel3D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageSpatialAlgorithm.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageStencil.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageStencilData.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageStencilSource.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageThreshold.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageToImageStencil.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageTranslateExtent.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageVariance3D.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageWrapPad.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImplicitFunctionToImageStencil.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkPointLoad.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkSampleFunction.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkShepardMethod.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkSimpleImageFilterExample.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkSurfaceReconstructionFilter.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkTriangularTexture.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkVoxelModeller.h"
    "M:/thirdparties/VTK.Net/src/Imaging/vtkImageSpatialFilter.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkImaging.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkImaging.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkImaging.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkImaging.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkImaging.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkImaging.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkImaging.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkImaging.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkImagingDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkImagingDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkImagingDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkImagingDotNet.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkImagingDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkImagingDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkImagingDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkImagingDotNet.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

