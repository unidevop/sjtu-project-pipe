# Install script for directory: M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2

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
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtklibxml2.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtklibxml2.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtklibxml2.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.6" TYPE STATIC_LIBRARY OPTIONAL FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtklibxml2.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Debug/vtklibxml2.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/Release/vtklibxml2.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/MinSizeRel/vtklibxml2.dll")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "M:/thirdparties/VTK5.6/src/bin/RelWithDebInfo/vtklibxml2.dll")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.6/vtklibxml2/libxml" TYPE FILE FILES
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlversion.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/c14n.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/catalog.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/chvalid.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/debugXML.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/dict.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/DOCBparser.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/encoding.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/entities.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/globals.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/hash.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/HTMLparser.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/HTMLtree.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/list.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/nanoftp.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/nanohttp.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/parser.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/parserInternals.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/pattern.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/relaxng.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/SAX.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/SAX2.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/schemasInternals.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/schematron.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/threads.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/tree.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/uri.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/valid.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/vtk_libxml2_mangle.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xinclude.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xlink.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlautomata.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlerror.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlexports.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlIO.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlmemory.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlmodule.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlreader.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlregexp.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlsave.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlschemas.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlschemastypes.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlstring.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlunicode.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xmlwriter.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xpath.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xpathInternals.h"
    "M:/thirdparties/VTK5.6/src/Utilities/vtklibxml2/libxml/xpointer.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

