# Install script for directory: M:/thirdparties/VTK5.6/src/Common

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
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkCommon.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkCommon.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkCommon.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkCommon.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkCommon.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkCommon.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkCommon.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkCommon.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Common/vtkAbstractArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkAbstractTransform.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkAmoebaMinimizer.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkAnimationCue.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkAnimationScene.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkArrayIterator.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkAssemblyNode.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkAssemblyPath.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkAssemblyPaths.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkBitArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkBitArrayIterator.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkBoundingBox.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkBox.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkBoxMuellerRandomSequence.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkByteSwap.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkCallbackCommand.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkCharArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkClientSocket.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkCollection.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkCollectionIterator.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkCommand.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkCommonInformationKeyManager.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkConditionVariable.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkContourValues.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkCriticalSection.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkCylindricalTransform.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkDataArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkDataArrayCollection.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkDataArrayCollectionIterator.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkDataArraySelection.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkDebugLeaks.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkDebugLeaksManager.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkDirectory.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkDoubleArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkDynamicLoader.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkEdgeTable.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkErrorCode.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkEventForwarderCommand.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkExtentSplitter.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkExtentTranslator.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkFastNumericConversion.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkFileOutputWindow.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkFloatArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkFloatingPointExceptions.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkFunctionParser.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkFunctionSet.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkGarbageCollector.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkGarbageCollectorManager.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkGaussianRandomSequence.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkGeneralTransform.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkHeap.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkHomogeneousTransform.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkIOStream.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkIdList.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkIdListCollection.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkIdTypeArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkIdentityTransform.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkImplicitFunction.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkImplicitFunctionCollection.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkIndent.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformation.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationDataObjectKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationDoubleKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationDoubleVectorKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationIdTypeKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationInformationKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationInformationVectorKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationIntegerKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationIntegerPointerKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationIntegerVectorKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationIterator.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationKeyVectorKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationObjectBaseKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationObjectBaseVectorKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationQuadratureSchemeDefinitionVectorKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationRequestKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationStringKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationStringVectorKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationUnsignedLongKey.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInformationVector.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInitialValueProblemSolver.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkInstantiator.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkIntArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkLargeInteger.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkLinearTransform.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkLogLookupTable.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkLongArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkLookupTable.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkLookupTableWithEnabling.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkMath.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkMatrix3x3.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkMatrix4x4.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkMatrixToHomogeneousTransform.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkMatrixToLinearTransform.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkMinimalStandardRandomSequence.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkMultiThreader.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkMutexLock.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkOStrStreamWrapper.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkOStreamWrapper.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkObject.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkObjectBase.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkObjectFactory.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkObjectFactoryCollection.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkOldStyleCallbackCommand.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkOnePieceExtentTranslator.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkOutputWindow.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkOverrideInformation.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkOverrideInformationCollection.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricBoy.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricConicSpiral.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricCrossCap.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricDini.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricEllipsoid.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricEnneper.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricFigure8Klein.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricFunction.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricKlein.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricMobius.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricRandomHills.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricRoman.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricSuperEllipsoid.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricSuperToroid.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkParametricTorus.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkPerspectiveTransform.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkPlane.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkPlaneCollection.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkPlanes.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkPoints.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkPoints2D.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkPolynomialSolversUnivariate.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkPriorityQueue.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkProp.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkPropCollection.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkProperty2D.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkQuadratureSchemeDefinition.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkQuadric.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkRandomSequence.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkReferenceCount.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkRungeKutta2.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkRungeKutta4.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkRungeKutta45.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkScalarsToColors.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkServerSocket.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkShortArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkSignedCharArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkSmartPointerBase.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkSocket.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkSocketCollection.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkSortDataArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkSphericalTransform.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkStdString.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkStringArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkStructuredData.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkStructuredVisibilityConstraint.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTableExtentTranslator.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTensor.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkThreadMessager.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTimePointUtility.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTimeStamp.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTimerLog.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTransform2D.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTransform.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTransformCollection.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkUnicodeString.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkUnicodeStringArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkUnsignedCharArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkUnsignedIntArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkUnsignedLongArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkUnsignedShortArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkVariant.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkVariantArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkVersion.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkVoidArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkWarpTransform.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkWeakPointerBase.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkWindow.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkWindowLevelLookupTable.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkXMLDataElement.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkXMLFileOutputWindow.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkLongLongArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkUnsignedLongLongArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTypeInt8Array.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTypeInt16Array.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTypeInt32Array.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTypeInt64Array.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTypeUInt8Array.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTypeUInt16Array.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTypeUInt32Array.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTypeUInt64Array.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTypeFloat32Array.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTypeFloat64Array.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkArrayCoordinates.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkArrayExtents.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkArrayExtentsList.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkArrayRange.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkArraySort.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkArrayWeights.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkWin32OutputWindow.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkWin32ProcessOutputWindow.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE FILE FILES "M:/thirdparties/VTK5.6/src/Utilities/InstallOnly/vtkCommonKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Common/vtkABI.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkArrayIteratorTemplate.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkDataArrayTemplate.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkDenseArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkIOStream.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkIOStreamFwd.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkSetGet.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkSmartPointer.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkSystemIncludes.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTemplateAliasMacro.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkType.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTypedArray.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTypeTemplate.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkTypeTraits.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkVariantCast.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkVariantInlineOperators.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkVariantCreate.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkWeakPointer.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkWin32Header.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkWindows.h"
    "M:/thirdparties/VTK5.6/src/Common/Testing/Cxx/vtkTestDriver.h"
    "M:/thirdparties/VTK5.6/src/Common/vtkArrayIteratorTemplate.txx"
    "M:/thirdparties/VTK5.6/src/Common/vtkArrayIteratorTemplateImplicit.txx"
    "M:/thirdparties/VTK5.6/src/Common/vtkDataArrayTemplate.txx"
    "M:/thirdparties/VTK5.6/src/Common/vtkDataArrayTemplateImplicit.txx"
    "M:/thirdparties/VTK5.6/src/Common/vtkDenseArray.txx"
    "M:/thirdparties/VTK5.6/src/Common/vtkTypedArray.txx"
    "M:/thirdparties/VTK5.6/src/Common/Testing/Cxx/vtkTestUtilities.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6/testing" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Common/Testing/HeaderTesting.py"
    "M:/thirdparties/VTK5.6/src/Common/Testing/WindowsMangleList.py"
    "M:/thirdparties/VTK5.6/src/Common/Testing/Tcl/FindString.tcl"
    "M:/thirdparties/VTK5.6/src/Common/Testing/Tcl/PrintSelfCheck.tcl"
    "M:/thirdparties/VTK5.6/src/Common/Testing/Tcl/rtImageTest.tcl"
    "M:/thirdparties/VTK5.6/src/Common/Testing/Tcl/TestSetGet.tcl"
    "M:/thirdparties/VTK5.6/src/Common/Testing/Tcl/prtImageTest.tcl"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

