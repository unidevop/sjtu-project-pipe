# Install script for directory: M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype

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
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkfreetype.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkfreetype.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkfreetype.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkfreetype.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtkfreetype.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtkfreetype.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtkfreetype.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtkfreetype.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkfreetype/include" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/ft2build.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/vtk_freetype_mangle.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/vtk_ftmodule.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/vtkFreeTypeConfig.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkfreetype/include/freetype" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/freetype.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftadvanc.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftbbox.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftbdf.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftbitmap.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftcache.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftchapters.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftcid.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/fterrdef.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/fterrors.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftgasp.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftglyph.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftgxval.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftgzip.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftimage.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftincrem.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftlcdfil.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftlist.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftlzw.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftmac.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftmm.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftmodapi.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftmoderr.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftotval.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftoutln.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftpfr.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftrender.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftsizes.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftsnames.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftstroke.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftsynth.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftsystem.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/fttrigon.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/fttypes.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftwinfnt.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ftxf86.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/t1tables.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ttnameid.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/tttables.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/tttags.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/ttunpat.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkfreetype/include/freetype/config" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/config/ftconfig.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/config/ftheader.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/config/ftmodule.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/config/ftoption.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/config/ftstdlib.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtkfreetype/include/freetype/internal" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/autohint.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/ftcalc.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/ftdebug.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/ftdriver.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/ftgloadr.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/ftmemory.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/ftobjs.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/ftpic.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/ftrfork.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/ftserv.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/ftstream.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/fttrace.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/ftvalid.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/internal.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/pcftypes.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/psaux.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/pshints.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/sfnt.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/t1types.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtkfreetype/include/freetype/internal/tttypes.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

