MACRO(KWSYS_PLATFORM_CXX_TEST var description invert)
  IF("${var}_COMPILED" MATCHES "^${var}_COMPILED$")
    MESSAGE(STATUS "${description}")
    TRY_COMPILE(${var}_COMPILED
      ${CMAKE_CURRENT_BINARY_DIR}
      ${CMAKE_CURRENT_SOURCE_DIR}/kwsysPlatformCxxTests.cxx
      COMPILE_DEFINITIONS -DTEST_${var} ${KWSYS_PLATFORM_CXX_TEST_DEFINES}
      OUTPUT_VARIABLE OUTPUT)
    IF(${var}_COMPILED)
      WRITE_FILE(${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/CMakeOutput.log
        "${description} compiled with the following output:\n${OUTPUT}\n\n" APPEND)
    ELSE(${var}_COMPILED)
      WRITE_FILE(${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/CMakeError.log
        "${description} failed to compile with the following output:\n${OUTPUT}\n\n" APPEND)
    ENDIF(${var}_COMPILED)
    IF(${invert} MATCHES INVERT)
      IF(${var}_COMPILED)
        MESSAGE(STATUS "${description} - no")
      ELSE(${var}_COMPILED)
        MESSAGE(STATUS "${description} - yes")
      ENDIF(${var}_COMPILED)
    ELSE(${invert} MATCHES INVERT)
      IF(${var}_COMPILED)
        MESSAGE(STATUS "${description} - yes")
      ELSE(${var}_COMPILED)
        MESSAGE(STATUS "${description} - no")
      ENDIF(${var}_COMPILED)
    ENDIF(${invert} MATCHES INVERT)
  ENDIF("${var}_COMPILED" MATCHES "^${var}_COMPILED$")
  IF(${invert} MATCHES INVERT)
    IF(${var}_COMPILED)
      SET(${var} 0)
    ELSE(${var}_COMPILED)
      SET(${var} 1)
    ENDIF(${var}_COMPILED)
  ELSE(${invert} MATCHES INVERT)
    IF(${var}_COMPILED)
      SET(${var} 1)
    ELSE(${var}_COMPILED)
      SET(${var} 0)
    ENDIF(${var}_COMPILED)
  ENDIF(${invert} MATCHES INVERT)
ENDMACRO(KWSYS_PLATFORM_CXX_TEST)
