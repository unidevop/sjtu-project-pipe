# Install script for directory: M:/thirdparties/VTK5.6/src/Infovis

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
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkInfovis.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkInfovis.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkInfovis.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkInfovis.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkInfovis.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkInfovis.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkInfovis.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkInfovis.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Infovis/vtkAddMembershipArray.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkAppendPoints.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkApplyColors.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkApplyIcons.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkArcParallelEdgeStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkAreaLayout.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkAreaLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkAssignCoordinates.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkAssignCoordinatesLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkBivariateLinearTableThreshold.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkBivariateStatisticsAlgorithm.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkBoxLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkChacoGraphReader.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkCircularLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkClustering2DLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkCollapseGraph.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkCollapseVerticesByArray.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkCommunity2DLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkConeLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkConstrained2DLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkContingencyStatistics.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkCorrelativeStatistics.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkCosmicTreeLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkDataObjectToTable.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkDelimitedTextReader.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkDescriptiveStatistics.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkEdgeCenters.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkEdgeLayout.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkEdgeLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkExpandSelectedGraph.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkExtractSelectedGraph.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkFast2DLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkFixedWidthTextReader.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkForceDirectedLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkGenerateIndexArray.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkGeoEdgeStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkGeoMath.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkGraphHierarchicalBundle.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkGraphHierarchicalBundleEdges.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkGraphLayout.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkGraphLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkGroupLeafVertices.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkISIReader.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkKMeansDistanceFunctor.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkKMeansDistanceFunctorCalculator.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkKMeansStatistics.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkMergeColumns.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkMergeGraphs.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkMergeTables.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkMultiCorrelativeStatistics.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkMutableGraphHelper.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkNetworkHierarchy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkOrderStatistics.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPassArrays.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPassThrough.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPassThroughEdgeStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPassThroughLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPerturbCoincidentVertices.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPCAStatistics.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPruneTreeFilter.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkRISReader.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkRandomGraphSource.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkRandomLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkRemoveIsolatedVertices.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkRemoveHiddenData.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkSCurveSpline.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkSimple2DLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkSimple3DCirclesStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkSliceAndDiceLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkSplineGraphEdges.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkSplitColumnComponents.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkSquarifyLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkSpanTreeLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkStackedTreeLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkStatisticsAlgorithm.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkStrahlerMetric.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkStreamGraph.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkStringToCategory.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkStringToNumeric.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTableToGraph.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTableToTreeFilter.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkThresholdTable.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTransferAttributes.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTreeFieldAggregator.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTreeLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTreeOrbitLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTreeLevelsFilter.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTreeMapLayout.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTreeMapLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTreeMapToPolyData.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTreeRingToPolyData.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTulipReader.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkUnivariateStatisticsAlgorithm.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkAttributeClustering2DLayoutStrategy.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkVertexDegree.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkXGMLReader.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkXMLTreeReader.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkAdjacencyMatrixToEdgeTable.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkArrayNorm.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkArrayToTable.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkComputeHistogram2DOutliers.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkDiagonalMatrixSource.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkDotProductSimilarity.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkExtractArray.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkExtractHistogram2D.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkMatricizeArray.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkNormalizeMatrixVectors.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPairwiseExtractHistogram2D.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkSparseArrayToTable.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTableToArray.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTableToSparseArray.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTransposeMatrix.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPBivariateLinearTableThreshold.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPCorrelativeStatistics.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPContingencyStatistics.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPDescriptiveStatistics.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPKMeansStatistics.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPMultiCorrelativeStatistics.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPPCAStatistics.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPComputeHistogram2DOutliers.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPExtractHistogram2D.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkPPairwiseExtractHistogram2D.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkSQLDatabaseGraphSource.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkSQLDatabaseTableSource.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkSQLGraphReader.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkStringToTimePoint.h"
    "M:/thirdparties/VTK5.6/src/Infovis/vtkTimePointToString.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/Utilities/InstallOnly/vtkInfovisKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

