# Install script for directory: M:/thirdparties/VTK.Net/src/Filtering

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.0" TYPE FILE FILES "M:/thirdparties/VTK.Net/src/Utilities/InstallOnly/vtkFilteringKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES
    "M:/thirdparties/VTK.Net/src/Filtering/vtkAbstractMapper.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkActor2D.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkActor2DCollection.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkAlgorithm.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkAlgorithmOutput.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCachedStreamingDemandDrivenPipeline.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCardinalSpline.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCastToConcrete.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCell.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCell3D.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCellArray.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCellData.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCellLinks.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCellLocator.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCellTypes.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkColorTransferFunction.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCompositeDataIterator.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCompositeDataPipeline.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCompositeDataSet.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCone.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkConvexPointSet.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCoordinate.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCylinder.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataObject.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataObjectAlgorithm.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataObjectCollection.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataObjectSource.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataSet.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataSetAlgorithm.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataSetAttributes.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataSetCollection.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataSetSource.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataSetToDataSetFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataSetToImageFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataSetToPolyDataFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataSetToStructuredGridFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataSetToStructuredPointsFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDataSetToUnstructuredGridFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkDemandDrivenPipeline.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkEmptyCell.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkExecutive.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkExplicitCell.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkFieldData.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkFilteringInformationKeyManager.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkGenericAdaptorCell.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkGenericAttribute.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkGenericAttributeCollection.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkGenericCell.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkGenericCellIterator.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkGenericCellTessellator.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkSimpleCellTessellator.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkGenericDataSet.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkGenericDataSetAlgorithm.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkGenericEdgeTable.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkGenericPointIterator.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkGenericSubdivisionErrorMetric.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkGeometricErrorMetric.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkAttributesErrorMetric.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkHexagonalPrism.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkHexahedron.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkHierarchicalBoxDataSet.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkHierarchicalDataInformation.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkHierarchicalDataIterator.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkHierarchicalDataSet.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkHierarchicalDataSetAlgorithm.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImageAlgorithm.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImageData.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImageInPlaceFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImageIterator.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImageMultipleInputFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImageMultipleInputOutputFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImageProgressIterator.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImageSource.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImageToImageFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImageToStructuredPoints.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImageTwoInputFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImplicitBoolean.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImplicitDataSet.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImplicitSelectionLoop.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImplicitSum.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImplicitVolume.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImplicitWindowFunction.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformation.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationDataObjectKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationDoubleKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationDoubleVectorKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationExecutivePortKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationExecutivePortVectorKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationIdTypeKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationInformationKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationInformationVectorKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationIntegerKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationIntegerPointerKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationIntegerVectorKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationKeyVectorKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationObjectBaseKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationRequestKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationStringKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationUnsignedLongKey.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInformationVector.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkInterpolatedVelocityField.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkKochanekSpline.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkLine.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkLocator.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkMapper2D.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkMergePoints.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkNonLinearCell.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkOrderedTriangulator.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkParametricSpline.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPentagonalPrism.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPerlinNoise.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPiecewiseFunction.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPiecewiseFunctionAlgorithm.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPiecewiseFunctionShiftScale.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPixel.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPointData.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPointLocator.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPointSet.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPointSetAlgorithm.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPointSetSource.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPointSetToPointSetFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPolyData.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPolyDataAlgorithm.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPolyDataCollection.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPolyDataSource.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPolyDataToPolyDataFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPolyLine.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPolyVertex.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPolygon.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkProcessObject.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPropAssembly.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkPyramid.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkQuad.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkQuadraticEdge.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkQuadraticHexahedron.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkQuadraticPyramid.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkQuadraticQuad.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkQuadraticTetra.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkQuadraticTriangle.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkQuadraticWedge.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkRectilinearGrid.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkRectilinearGridAlgorithm.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkRectilinearGridSource.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkRectilinearGridToPolyDataFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkScalarTree.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkSimpleImageToImageFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkSimpleScalarTree.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkSmoothErrorMetric.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkSphere.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkSource.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkSpline.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkStreamingDemandDrivenPipeline.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkStructuredGrid.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkStructuredGridAlgorithm.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkStructuredGridSource.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkStructuredGridToPolyDataFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkStructuredGridToStructuredGridFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkStructuredPoints.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkStructuredPointsCollection.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkStructuredPointsSource.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkStructuredPointsToPolyDataFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkStructuredPointsToStructuredPointsFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkStructuredPointsToUnstructuredGridFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkSuperquadric.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkTetra.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkThreadedImageAlgorithm.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkTriangle.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkTriangleStrip.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkTrivialProducer.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkUniformGrid.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkUnstructuredGrid.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkUnstructuredGridAlgorithm.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkUnstructuredGridSource.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkUnstructuredGridToPolyDataFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkUnstructuredGridToUnstructuredGridFilter.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkVertex.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkViewDependentErrorMetric.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkVoxel.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkWedge.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkViewport.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkGenericInterpolatedVelocityField.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES
    "M:/thirdparties/VTK.Net/src/Filtering/vtkAMRBox.h"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkCellType.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImageIterator.txx"
    "M:/thirdparties/VTK.Net/src/Filtering/vtkImageProgressIterator.txx"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkFiltering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkFiltering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkFiltering.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkFiltering.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkFiltering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkFiltering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkFiltering.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkFiltering.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkFilteringDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkFilteringDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkFilteringDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkFilteringDotNet.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkFilteringDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkFilteringDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkFilteringDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkFilteringDotNet.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

