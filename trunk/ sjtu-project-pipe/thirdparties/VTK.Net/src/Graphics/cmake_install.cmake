# Install script for directory: M:/thirdparties/VTK.Net/src/Graphics

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.0" TYPE FILE FILES "M:/thirdparties/VTK.Net/src/Utilities/InstallOnly/vtkGraphicsKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES
    "M:/thirdparties/VTK.Net/src/Graphics/vtkAppendFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkAppendPolyData.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkApproximatingSubdivisionFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkArrayCalculator.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkArrowSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkArcSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkAssignAttribute.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkAttributeDataToFieldDataFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkAxes.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkBandedPolyDataContourFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkBlankStructuredGrid.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkBlankStructuredGridWithImage.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkBoxClipDataSet.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkBrownianPoints.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkButterflySubdivisionFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkButtonSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkBSPCuts.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkBSPIntersections.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkCellCenterDepthSort.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkCellCenters.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkCellDataToPointData.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkCellDerivatives.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkCleanPolyData.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkClipDataSet.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkClipPolyData.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkClipVolume.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkConeSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkConnectivityFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkContourFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkContourGrid.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkCubeSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkCursor3D.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkCutter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkCurvatures.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkCylinderSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkDashedStreamLine.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkDataObjectToDataSetFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkDataSetSurfaceFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkDataSetToDataObjectFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkDataSetTriangleFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkDecimatePro.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkDelaunay2D.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkDelaunay3D.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkDicer.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkDiscreteMarchingCubes.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkDiskSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkEdgePoints.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkElevationFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkEllipticalButtonSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkExtractCells.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkExtractDataOverTime.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkExtractEdges.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkExtractGeometry.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkExtractGrid.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkExtractPolyDataGeometry.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkExtractRectilinearGrid.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkExtractTensorComponents.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkExtractUnstructuredGrid.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkExtractVectorComponents.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkFeatureEdges.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkFieldDataToAttributeDataFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkGeometryFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkGlyph2D.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkGlyph3D.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkGlyphSource2D.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkGraphLayoutFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkGridSynchronizedTemplates3D.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkHierarchicalDataSetGeometryFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkHedgeHog.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkHierarchicalDataExtractDataSets.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkHierarchicalDataExtractLevel.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkHierarchicalDataLevelFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkHull.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkHyperStreamline.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkIdFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkImageDataGeometryFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkImageMarchingCubes.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkImplicitTextureCoords.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkInterpolateDataSetAttributes.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkInterpolatingSubdivisionFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkKdNode.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkKdTree.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkLineSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkLinearExtrusionFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkLinearSubdivisionFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkLinkEdgels.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkLoopSubdivisionFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkMarchingContourFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkMarchingCubes.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkMarchingSquares.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkMaskFields.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkMaskPoints.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkMaskPolyData.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkMassProperties.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkMergeDataObjectFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkMergeCells.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkMergeFields.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkMergeFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkMeshQuality.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkModelMetadata.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkOBBDicer.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkOBBTree.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkOutlineCornerFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkOutlineCornerSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkOutlineFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkOutlineSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkParametricFunctionSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkPlaneSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkPlanesIntersection.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkPlatonicSolidSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkPointDataToCellData.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkPointsProjectedHull.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkPointSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkPolyDataConnectivityFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkPolyDataNormals.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkPolyDataStreamer.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkProbeFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkProgrammableAttributeDataFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkProgrammableDataObjectSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkProgrammableFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkProgrammableGlyphFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkProgrammableSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkProjectedTexture.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkQuadricClustering.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkQuadricDecimation.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkQuantizePolyDataPoints.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkRearrangeFields.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkRectangularButtonSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkRectilinearGridClip.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkRectilinearGridGeometryFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkRectilinearGridToTetrahedra.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkRectilinearSynchronizedTemplates.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkRecursiveDividingCubes.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkReflectionFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkRegularPolygonSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkReverseSense.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkRibbonFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkRotationalExtrusionFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkRotationFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkRuledSurfaceFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSelectPolyData.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkShrinkFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkShrinkPolyData.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSimpleElevationFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSliceCubes.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSmoothPolyDataFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSortDataArray.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSpatialRepresentationFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSpherePuzzle.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSpherePuzzleArrows.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSphereSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSplineFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSplitField.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkStreamLine.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkStreamPoints.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkStreamTracer.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkStreamer.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkStripper.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkStructuredGridClip.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkStructuredGridGeometryFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkStructuredGridOutlineFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkStructuredPointsGeometryFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSubPixelPositionEdgels.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSubdivideTetra.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSuperquadricSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSynchronizedTemplates2D.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSynchronizedTemplates3D.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkSynchronizedTemplatesCutter3D.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkTensorGlyph.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkTextSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkTextureMapToCylinder.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkTextureMapToPlane.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkTextureMapToSphere.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkTexturedSphereSource.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkThreshold.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkThresholdPoints.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkThresholdTextureCoords.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkTransformFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkTransformPolyDataFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkTransformTextureCoords.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkTriangleFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkTriangularTCoords.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkTubeFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkVectorDot.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkVectorNorm.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkVisibilitySort.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkVoxelContoursToSurfaceFilter.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkWarpLens.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkWarpScalar.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkWarpTo.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkWarpVector.h"
    "M:/thirdparties/VTK.Net/src/Graphics/vtkWindowedSincPolyDataFilter.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkGraphics.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkGraphics.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkGraphics.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkGraphics.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkGraphics.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkGraphics.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkGraphics.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkGraphics.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkGraphicsDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkGraphicsDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkGraphicsDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkGraphicsDotNet.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkGraphicsDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkGraphicsDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkGraphicsDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkGraphicsDotNet.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

