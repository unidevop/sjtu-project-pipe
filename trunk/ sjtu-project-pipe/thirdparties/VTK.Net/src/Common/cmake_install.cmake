# Install script for directory: M:/thirdparties/VTK.Net/src/Common

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.0" TYPE FILE FILES "M:/thirdparties/VTK.Net/src/Utilities/InstallOnly/vtkCommonKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.0/testing" TYPE FILE FILES
    "M:/thirdparties/VTK.Net/src/Common/Testing/HeaderTesting.py"
    "M:/thirdparties/VTK.Net/src/Common/Testing/WindowsMangleList.py"
    "M:/thirdparties/VTK.Net/src/Common/Testing/Tcl/FindString.tcl"
    "M:/thirdparties/VTK.Net/src/Common/Testing/Tcl/PrintSelfCheck.tcl"
    "M:/thirdparties/VTK.Net/src/Common/Testing/Tcl/rtImageTest.tcl"
    "M:/thirdparties/VTK.Net/src/Common/Testing/Tcl/TestSetGet.tcl"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES "M:/thirdparties/VTK.Net/src/Common/Testing/Cxx/vtkTestUtilities.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES
    "M:/thirdparties/VTK.Net/src/Common/vtkAbstractArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkAbstractTransform.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkAmoebaMinimizer.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkAnimationCue.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkAnimationScene.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkAssemblyNode.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkAssemblyPath.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkAssemblyPaths.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkBitArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkBox.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkByteSwap.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkCallbackCommand.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkCharArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkCollection.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkCollectionIterator.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkCommand.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkContourValues.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkCriticalSection.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkCylindricalTransform.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkDataArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkDataArrayCollection.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkDataArrayCollectionIterator.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkDataArraySelection.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkDebugLeaks.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkDebugLeaksManager.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkDirectory.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkDoubleArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkDynamicLoader.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkEdgeTable.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkErrorCode.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkEventForwarderCommand.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkExtentSplitter.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkExtentTranslator.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkFastNumericConversion.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkFileOutputWindow.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkFloatArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkFunctionParser.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkFunctionSet.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkGarbageCollector.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkGarbageCollectorManager.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkGeneralTransform.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkHeap.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkHomogeneousTransform.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkIOStream.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkIdList.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkIdListCollection.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkIdTypeArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkIdentityTransform.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkImplicitFunction.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkImplicitFunctionCollection.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkIndent.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkInitialValueProblemSolver.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkInstantiator.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkIntArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkLargeInteger.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkLinearTransform.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkLogLookupTable.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkLongArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkLookupTable.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkMath.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkMatrix4x4.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkMatrixToHomogeneousTransform.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkMatrixToLinearTransform.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkMultiPartExtentTranslator.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkMultiThreader.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkMutexLock.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkOStrStreamWrapper.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkOStreamWrapper.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkObject.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkObjectBase.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkObjectFactory.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkObjectFactoryCollection.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkOldStyleCallbackCommand.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkOutputWindow.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkOverrideInformation.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkOverrideInformationCollection.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricBoy.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricConicSpiral.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricCrossCap.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricDini.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricEllipsoid.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricEnneper.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricFigure8Klein.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricFunction.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricKlein.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricMobius.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricRandomHills.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricRoman.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricSuperEllipsoid.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricSuperToroid.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkParametricTorus.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkPerspectiveTransform.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkPlane.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkPlaneCollection.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkPlanes.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkPoints.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkPriorityQueue.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkProp.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkPropCollection.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkProperty2D.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkQuadric.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkReferenceCount.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkRungeKutta2.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkRungeKutta4.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkRungeKutta45.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkScalarsToColors.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkShortArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkSignedCharArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkSmartPointerBase.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkSphericalTransform.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkStdString.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkStringArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkStructuredData.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkStructuredVisibilityConstraint.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTableExtentTranslator.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTensor.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkThreadMessager.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTimeStamp.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTimerLog.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTransform.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTransformCollection.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkUnsignedCharArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkUnsignedIntArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkUnsignedLongArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkUnsignedShortArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkVersion.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkVoidArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkWarpTransform.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkWindow.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkWindowLevelLookupTable.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkXMLFileOutputWindow.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkLongLongArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkUnsignedLongLongArray.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTypeInt8Array.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTypeInt16Array.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTypeInt32Array.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTypeInt64Array.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTypeUInt8Array.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTypeUInt16Array.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTypeUInt32Array.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTypeUInt64Array.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTypeFloat32Array.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTypeFloat64Array.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkWin32OutputWindow.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkWin32ProcessOutputWindow.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES
    "M:/thirdparties/VTK.Net/src/Common/vtkDataArrayTemplate.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkIOStream.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkIOStreamFwd.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkSetGet.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkSmartPointer.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkSystemIncludes.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkType.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkTypeTraits.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkWin32Header.h"
    "M:/thirdparties/VTK.Net/src/Common/vtkWindows.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.0" TYPE FILE FILES
    "M:/thirdparties/VTK.Net/src/Common/vtkDataArrayTemplate.txx"
    "M:/thirdparties/VTK.Net/src/Common/vtkDataArrayTemplateImplicit.txx"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkCommon.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkCommon.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkCommon.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkCommon.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkCommon.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkCommon.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkCommon.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkCommon.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkCommonDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkCommonDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkCommonDotNet.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkCommonDotNet.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Debug/vtkCommonDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/Release/vtkCommonDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/MinSizeRel/vtkCommonDotNet.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK.Net/src/bin/RelWithDebInfo/vtkCommonDotNet.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

