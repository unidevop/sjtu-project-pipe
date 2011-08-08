# Install script for directory: M:/thirdparties/VTK5.6/src/Imaging

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
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkImaging.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkImaging.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkImaging.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkImaging.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkImaging.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkImaging.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkImaging.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkImaging.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Imaging/vtkBooleanTexture.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkExtractVOI.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkFastSplatter.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkGaussianSplatter.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageAccumulate.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageAnisotropicDiffusion2D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageAnisotropicDiffusion3D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageAppend.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageAppendComponents.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageBlend.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageButterworthHighPass.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageButterworthLowPass.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageCacheFilter.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageCanvasSource2D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageCast.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageChangeInformation.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageCheckerboard.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageCityBlockDistance.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageClip.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageConnector.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageConstantPad.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageContinuousDilate3D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageContinuousErode3D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageConvolve.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageCorrelation.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageCursor3D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageDataStreamer.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageDecomposeFilter.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageDifference.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageDilateErode3D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageDivergence.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageDotProduct.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageEllipsoidSource.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageEuclideanDistance.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageEuclideanToPolar.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageExport.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageExtractComponents.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageFFT.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageFlip.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageFourierCenter.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageFourierFilter.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageGaussianSmooth.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageGaussianSource.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageGradient.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageGradientMagnitude.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageGridSource.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageHSIToRGB.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageHSVToRGB.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageHybridMedian2D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageIdealHighPass.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageIdealLowPass.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageImport.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageImportExecutive.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageIslandRemoval2D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageIterateFilter.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageLaplacian.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageLogarithmicScale.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageLogic.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageLuminance.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageMagnify.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageMagnitude.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageMandelbrotSource.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageMapToColors.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageMapToRGBA.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageMapToWindowLevelColors.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageMask.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageMaskBits.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageMathematics.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageMedian3D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageMirrorPad.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageNoiseSource.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageNonMaximumSuppression.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageNormalize.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageOpenClose3D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImagePadFilter.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImagePermute.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageQuantizeRGBToIndex.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageRFFT.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageRGBToHSI.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageRGBToHSV.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageRange3D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageRectilinearWipe.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageResample.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageReslice.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageSeedConnectivity.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageSeparableConvolution.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageShiftScale.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageShrink3D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageSinusoidSource.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageSkeleton2D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageSobel2D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageSobel3D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageSpatialAlgorithm.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageStencil.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageStencilData.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageStencilSource.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageThreshold.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageToImageStencil.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageTranslateExtent.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageVariance3D.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageWrapPad.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageWeightedSum.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImplicitFunctionToImageStencil.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkPointLoad.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkRTAnalyticSource.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkSampleFunction.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkShepardMethod.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkSimpleImageFilterExample.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkSurfaceReconstructionFilter.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkTriangularTexture.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkVoxelModeller.h"
    "M:/thirdparties/VTK5.6/src/Imaging/vtkImageSpatialFilter.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/Utilities/InstallOnly/vtkImagingKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

