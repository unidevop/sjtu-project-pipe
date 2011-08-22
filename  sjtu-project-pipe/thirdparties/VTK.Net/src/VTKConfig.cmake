#-----------------------------------------------------------------------------
#
# VTKConfig.cmake - VTK CMake configuration file for external projects.
#
# This file is configured by VTK and used by the UseVTK.cmake module
# to load VTK's settings for an external project.

# The VTK include file directories.
SET(VTK_INCLUDE_DIRS "M:/thirdparties/VTK.Net/src;M:/thirdparties/VTK.Net/src/Utilities;M:/thirdparties/VTK.Net/src/VolumeRendering;M:/thirdparties/VTK.Net/src/Rendering;M:/thirdparties/VTK.Net/src/VolumeRendering;M:/thirdparties/VTK.Net/src/Hybrid;M:/thirdparties/VTK.Net/src/Widgets;M:/thirdparties/VTK.Net/src/Rendering;M:/thirdparties/VTK.Net/src/Rendering/Testing/Cxx;M:/thirdparties/VTK.Net/src/IO;M:/thirdparties/VTK.Net/src/Imaging;M:/thirdparties/VTK.Net/src/Graphics;M:/thirdparties/VTK.Net/src/GenericFiltering;M:/thirdparties/VTK.Net/src/Filtering;M:/thirdparties/VTK.Net/src/Common;M:/thirdparties/VTK.Net/src/Utilities;M:/thirdparties/VTK.Net/src/Common/Testing/Cxx;M:/thirdparties/VTK.Net/src/Utilities/DICOMParser;M:/thirdparties/VTK.Net/src/Utilities/DICOMParser;M:/thirdparties/VTK.Net/src/Utilities/vtkfreetype/include;M:/thirdparties/VTK.Net/src/Utilities/vtkfreetype/include;M:/thirdparties/VTK.Net/src/Utilities/vtknetcdf;M:/thirdparties/VTK.Net/src/Utilities/vtknetcdf;M:/thirdparties/VTK.Net/src/Utilities/vtkexodus2/include;M:/thirdparties/VTK.Net/src/Utilities/vtkexodus2/include;M:/thirdparties/VTK.Net/src/Common")

# The VTK library directories.
SET(VTK_LIBRARY_DIRS "M:/thirdparties/VTK.Net/src/bin")

# The VTK runtime library directories.  Note that if
# VTK_CONFIGURATION_TYPES is set (see below) then these directories
# will be the parent directories under which there will be a directory
# of runtime binaries for each configuration type.
SET(VTK_RUNTIME_LIBRARY_DIRS "M:/thirdparties/VTK.Net/src/bin")

# The C and C++ flags added by VTK to the cmake-configured flags.
SET(VTK_REQUIRED_C_FLAGS "")
SET(VTK_REQUIRED_CXX_FLAGS "")
SET(VTK_REQUIRED_EXE_LINKER_FLAGS "")
SET(VTK_REQUIRED_SHARED_LINKER_FLAGS "")
SET(VTK_REQUIRED_MODULE_LINKER_FLAGS "")

# The VTK version number
SET(VTK_MAJOR_VERSION "5")
SET(VTK_MINOR_VERSION "0")
SET(VTK_BUILD_VERSION "1")

# The location of the UseVTK.cmake file.
SET(VTK_USE_FILE "M:/thirdparties/VTK.Net/src/UseVTK.cmake")

# The build settings file.
SET(VTK_BUILD_SETTINGS_FILE "M:/thirdparties/VTK.Net/src/VTKBuildSettings.cmake")

# The directory containing class list files for each kit.
SET(VTK_KITS_DIR "M:/thirdparties/VTK.Net/src/Utilities")

# The wrapping hints file.
SET(VTK_WRAP_HINTS "M:/thirdparties/VTK.Net/src/Wrapping/hints")

# CMake extension module directory and macro file.
SET(VTK_LOAD_CMAKE_EXTENSIONS_MACRO "M:/thirdparties/VTK.Net/src/CMake/vtkLoadCMakeExtensions.cmake")
SET(VTK_CMAKE_DIR "M:/thirdparties/VTK.Net/src/CMake")
SET(VTK_CMAKE_EXTENSIONS_DIR "M:/thirdparties/VTK.Net/src/CMake")

# The list of available kits.
SET(VTK_KITS "COMMON;FILTERING;IO;GRAPHICS;GENERIC_FILTERING;IMAGING;RENDERING;VOLUMERENDERING;HYBRID;WIDGETS")

# The list of available languages.
SET(VTK_LANGUAGES "")

# VTK Configuration options.
SET(VTK_BUILD_SHARED_LIBS "ON")
SET(VTK_DEBUG_LEAKS "OFF")
SET(VTK_USE_TK "OFF")
SET(VTK_HAVE_VP1000 "")
SET(VTK_USE_MANGLED_MESA "OFF")
SET(VTK_MPIRUN_EXE "")
SET(VTK_MPI_MAX_NUMPROCS "")
SET(VTK_MPI_POSTFLAGS "")
SET(VTK_MPI_PREFLAGS "")
SET(VTK_MPI_CLIENT_PREFLAGS "")
SET(VTK_MPI_SERVER_PREFLAGS "")
SET(VTK_MPI_CLIENT_POSTFLAGS "")
SET(VTK_MPI_SERVER_POSTFLAGS "")
SET(VTK_OPENGL_HAS_OSMESA "OFF")
SET(VTK_USE_64BIT_IDS "OFF")
SET(VTK_USE_ANSI_STDLIB "ON")
SET(VTK_USE_CARBON "OFF")
SET(VTK_USE_COCOA "OFF")
SET(VTK_USE_GUISUPPORT "OFF")
SET(VTK_USE_MATROX_IMAGING "OFF")
SET(VTK_USE_MFC "")
SET(VTK_USE_QVTK "")
SET(VTK_USE_MPI "OFF")
SET(VTK_USE_PARALLEL "OFF")
SET(VTK_USE_RENDERING "ON")
SET(VTK_USE_VIDEO_FOR_WINDOWS "ON")
SET(VTK_USE_GL2PS "OFF")
SET(VTK_USE_X "0")
SET(VTK_WRAP_JAVA "OFF")
SET(VTK_WRAP_PYTHON "OFF")
SET(VTK_WRAP_TCL "OFF")
SET(VTK_WRAP_DOTNET "ON")
SET(VTK_LEGACY_REMOVE "OFF")
SET(VTK_LEGACY_SILENT "OFF")

# The Hybrid and VolumeRendering kits are now switched with Rendering.
SET(VTK_USE_HYBRID "ON")
SET(VTK_USE_VOLUMERENDERING "ON")

# The Tcl/Tk configuration.
SET(VTK_TCL_TK_STATIC "")
SET(VTK_TCL_TK_COPY_SUPPORT_LIBRARY "")
SET(VTK_TCL_SUPPORT_LIBRARY_PATH "")
SET(VTK_TK_SUPPORT_LIBRARY_PATH "")
SET(VTK_TCL_TK_MACROS_MODULE "M:/thirdparties/VTK.Net/src/CMake/vtkTclTkMacros.cmake")
SET(VTK_TCL_HOME "")
SET(VTK_WRAP_TCL_EXE "")
SET(VTK_WRAP_TCL_INIT_EXE "")
SET(VTK_TK_INTERNAL_DIR "")
SET(VTK_TK_RESOURCES_DIR "")

# The Java configuration.
SET(VTK_JAVA_JAR "")
SET(VTK_PARSE_JAVA_EXE "")
SET(VTK_WRAP_JAVA_EXE "")

# The Python configuration.
SET(VTK_WRAP_PYTHON_EXE "")
SET(VTK_WRAP_PYTHON_INIT_EXE "")

# The DotNet configuration.
SET(VTK_WRAP_DOTNET_CLASSKITS "M:/thirdparties/VTK.Net/src/Wrapping/DotNet/class_kits.txt")
SET(VTK_WRAP_DOTNET_KITDEPENDENCIES "M:/thirdparties/VTK.Net/src/Wrapping/DotNet/kit_dependencies.txt")
SET(VTK_WRAP_DOTNET_EXE "M:/thirdparties/VTK.Net/src/bin/$(OutDir)/vtkWrapDotNet.exe")

# The Doxygen configuration.
SET(VTK_DOXYGEN_HOME "M:/thirdparties/VTK.Net/src/Utilities/Doxygen")

# The VTK test script locations.
SET(VTK_HEADER_TESTING_PY "M:/thirdparties/VTK.Net/src/Common/Testing/HeaderTesting.py")
SET(VTK_FIND_STRING_TCL "M:/thirdparties/VTK.Net/src/Common/Testing/Tcl/FindString.tcl")
SET(VTK_PRINT_SELF_CHECK_TCL "M:/thirdparties/VTK.Net/src/Common/Testing/Tcl/PrintSelfCheck.tcl")
SET(VTK_RT_IMAGE_TEST_TCL "M:/thirdparties/VTK.Net/src/Common/Testing/Tcl/rtImageTest.tcl")
SET(VTK_PRT_IMAGE_TEST_TCL "")

# The names of utility libraries used by VTK.
SET(VTK_PNG_LIBRARIES      "vtkpng")
SET(VTK_ZLIB_LIBRARIES     "vtkzlib")
SET(VTK_JPEG_LIBRARIES     "vtkjpeg")
SET(VTK_TIFF_LIBRARIES     "vtktiff")
SET(VTK_EXPAT_LIBRARIES    "vtkexpat")
SET(VTK_FREETYPE_LIBRARIES "vtkfreetype")

# The VTK Qt configuration.
IF(VTK_USE_QVTK)
  INCLUDE(${VTK_DIR}/VTKConfigQt.cmake)
ENDIF(VTK_USE_QVTK)

# A VTK install tree always provides one build configuration.  A VTK
# build tree may provide either one or multiple build configurations
# depending on the CMake generator used.  Since VTK can be used either
# from a build tree or an install tree it is useful for outside
# projects to know the configurations available.  If this
# VTKConfig.cmake is in a VTK install tree VTK_CONFIGURATION_TYPES
# will be empty and VTK_BUILD_TYPE will be set to the value of
# CMAKE_BUILD_TYPE used to build VTK.  If VTKConfig.cmake is in a VTK
# build tree then VTK_CONFIGURATION_TYPES and VTK_BUILD_TYPE will have
# values matching CMAKE_CONFIGURATION_TYPES and CMAKE_BUILD_TYPE for
# that build tree (only one will ever be set).
SET(VTK_CONFIGURATION_TYPES Debug;Release;MinSizeRel;RelWithDebInfo)
SET(VTK_BUILD_TYPE )

# The VTK library dependencies.
IF(NOT VTK_NO_LIBRARY_DEPENDS AND EXISTS "M:/thirdparties/VTK.Net/src/VTKLibraryDepends.cmake")
  INCLUDE("M:/thirdparties/VTK.Net/src/VTKLibraryDepends.cmake")
ENDIF(NOT VTK_NO_LIBRARY_DEPENDS AND EXISTS "M:/thirdparties/VTK.Net/src/VTKLibraryDepends.cmake")

# The old, less clear name for VTK_RUNTIME_LIBRARY_DIRS.  Kept here
# for compatibility.
SET(VTK_RUNTIME_DIRS ${VTK_RUNTIME_LIBRARY_DIRS})


# For backward compatability.  DO NOT USE.
SET(VTK_SOURCE_DIR "M:/thirdparties/VTK.Net/src")
IF(NOT TCL_LIBRARY)
  SET(TCL_LIBRARY "" CACHE FILEPATH "Location of Tcl library imported from VTK.  This may mean your project is depending on VTK to get this setting.  Consider using FindTCL.cmake.")
ENDIF(NOT TCL_LIBRARY)
IF(NOT TK_LIBRARY)
  SET(TK_LIBRARY "" CACHE FILEPATH "Location of Tk library imported from VTK.  This may mean your project is depending on VTK to get this setting.  Consider using FindTCL.cmake.")
ENDIF(NOT TK_LIBRARY)
MARK_AS_ADVANCED(TCL_LIBRARY TK_LIBRARY)

