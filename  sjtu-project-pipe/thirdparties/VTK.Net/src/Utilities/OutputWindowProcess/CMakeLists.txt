# This project is designed to be used as a custom command or be built
# manually.  See README.txt for build instructions.
IF(NOT VTK_OWP_BUILD_INNER)
  PROJECT(VTK_OWP)
  IF(NOT VTK_OWP_OUTPUT)
    SET(VTK_OWP_OUTPUT
      ${VTK_OWP_BINARY_DIR}/vtkWin32OutputWindowProcessEncoded.c)
  ENDIF(NOT VTK_OWP_OUTPUT)
  IF(NOT VTK_OWP_NAME)
    SET(VTK_OWP_NAME Win32OutputWindowProcess)
  ENDIF(NOT VTK_OWP_NAME)
  SET(CMAKE_TRY_COMPILE_CONFIGURATION Release)
  TRY_COMPILE(COMPILED
    ${VTK_OWP_BINARY_DIR}/Inner
    ${VTK_OWP_SOURCE_DIR}
    VTK_OWP_INNER vtk_owp_encode
    CMAKE_FLAGS -DCMAKE_BUILD_TYPE:STRING=${CMAKE_TRY_COMPILE_CONFIGURATION}
                -DVTK_OWP_BUILD_INNER:BOOL=1
                -DVTK_OWP_OUTPUT:STRING=${VTK_OWP_OUTPUT}
                -DVTK_OWP_NAME:STRING=${VTK_OWP_NAME}
    OUTPUT_VARIABLE OUTPUT)
  IF(COMPILED)
    MESSAGE(STATUS "Creating \"${VTK_OWP_OUTPUT}\" succeeded.")
  ELSE(COMPILED)
    FILE(WRITE ${VTK_OWP_OUTPUT} "failed_to_generate\n")
    MESSAGE(FATAL_ERROR
      "Creating \"${VTK_OWP_OUTPUT}\" failed with output [${OUTPUT}].")
  ENDIF(COMPILED)
ELSE(NOT VTK_OWP_BUILD_INNER)
  PROJECT(VTK_OWP_INNER)

  ADD_EXECUTABLE(vtkWin32OutputWindowProcess WIN32 vtkWin32OutputWindowProcess.c)
  GET_TARGET_PROPERTY(VTK_OWP_EXE vtkWin32OutputWindowProcess LOCATION)
  IF(NOT BORLAND)
    TARGET_LINK_LIBRARIES(vtkWin32OutputWindowProcess gdi32)
  ENDIF(NOT BORLAND)

  ADD_EXECUTABLE(vtkEncodeExecutable vtkEncodeExecutable.c)
  GET_TARGET_PROPERTY(VTK_ENCODE_EXE vtkEncodeExecutable LOCATION)
  ADD_CUSTOM_COMMAND(
    OUTPUT ${VTK_OWP_OUTPUT}
    COMMAND ${VTK_ENCODE_EXE}
    ARGS ${VTK_OWP_EXE} ${VTK_OWP_OUTPUT} ${VTK_OWP_NAME}
    DEPENDS ${VTK_OWP_EXE} ${VTK_ENCODE_EXE}
    )

  ADD_CUSTOM_TARGET(vtk_owp_encode DEPENDS ${VTK_OWP_OUTPUT})
ENDIF(NOT VTK_OWP_BUILD_INNER)
